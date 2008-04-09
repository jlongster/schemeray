;;; Scheme Raytracer v0.3
;;;
;;; Performs sphere/plane/triangle intersection tests, loads
;;; .obj files as a list of triangles, applies Phong
;;; illumination and reflections.
;;;
;;; This outputs to a file 'image.ppm' which is of the format
;;; Portable Pixmap.  Netpbm provides nice tools to convert
;;; ppm's to other file formats if you need it.

(declare (standard-bindings)
         (extended-bindings)
         (block)
         (mostly-flonum-fixnum)
         (not safe))

(define *message-port* (current-output-port))

(define (message . rest)
  (for-each (lambda (s) (display s *message-port*)) rest)
  (newline *message-port*))

(define (display-strings . rest)
  (display (apply string-append rest)))

;;; Utility stuff to help with math

(define (make-vec2d x y) (f64vector x y))
(define (vec2d-x v) (f64vector-ref v 0))
(define (vec2d-y v) (f64vector-ref v 1))

(define (make-vec3d x y z) (f64vector x y z))
(define (vec3d-x v) (f64vector-ref v 0))
(define (vec3d-y v) (f64vector-ref v 1))
(define (vec3d-z v) (f64vector-ref v 2))

(define (vec3d-op v1 v2 op)
  (declare (inlining-limit 10000))
  (make-vec3d (op (vec3d-x v1) (vec3d-x v2))
              (op (vec3d-y v1) (vec3d-y v2))
              (op (vec3d-z v1) (vec3d-z v2))))

(define (vec3d-add v1 v2)
  (declare (inlining-limit 10000))
  (vec3d-op v1 v2 fl+))

(define (vec3d-sub v1 v2)
  (declare (inlining-limit 10000))
  (vec3d-op v1 v2 fl-))

(define (vec3d-component-mul v1 v2)
  (declare (inlining-limit 10000))
  (vec3d-op v1 v2 fl*))

(define (vec3d-scalar-mul v1 f)
  (make-vec3d (fl* (vec3d-x v1) f)
              (fl* (vec3d-y v1) f)
              (fl* (vec3d-z v1) f)))

(define (vec3d-length v1)
  (declare (inlining-limit 10000))
  (flsqrt (vec3d-dot v1 v1)))

(define (vec3d-unit v1)
  (declare (inlining-limit 10000))
  (vec3d-scalar-mul v1 (fl/ (vec3d-length v1))))

(define (vec3d-dot v1 v2)
  (fl+ (fl* (vec3d-x v1) (vec3d-x v2))
       (fl* (vec3d-y v1) (vec3d-y v2))
       (fl* (vec3d-z v1) (vec3d-z v2))))

(define (vec3d-cross v1 v2)
  (let ((v1-x (vec3d-x v1)) (v2-x (vec3d-x v2))
	(v1-y (vec3d-y v1)) (v2-y (vec3d-y v2))
	(v1-z (vec3d-z v1)) (v2-z (vec3d-z v2)))
    (make-vec3d (fl- (fl* v1-y v2-z(vec3d-z v2))
		     (fl* v1-z v2-y))
		(fl- (fl* v1-z v2-x)
		     (fl* v1-x v2-z))
		(fl- (fl* v1-x v2-y)
		     (fl* v1-y v2-x)))))

(define (vec3d-inverse v1)
  (make-vec3d (- (vec3d-x v1)) (- (vec3d-y v1)) (- (vec3d-z v1))))

(define (saturate n)
  (flmin 1.0 (flmax 0.0 n)))

(include "obj-file-parser.scm")

;;; Config constants
(define screenDimen (make-vec2d 8.0 6.0))
(define res (make-window 800 600))
(define eye (make-vec3d 0.0 0.0 -5.0))
(define depth 10000.0)
(define backColor (make-vec3d 0.0 0.0 0.0))
(define ambient (make-vec3d .1 .1 .1))
(define maxsteps 3)

(define coptix (delay (load-obj "meshes/coptix_slim")))
(define box (delay (load-obj "meshes/box")))

(define (generate-spheres)
  (let ((start (make-vec3d 0.0 0.0 65.0))
        (dX (make-vec3d -1.0 -.25 .5))
        (dY (make-vec3d 0.0 -1.0 0.0)))
    (let loop ((num 0)
               (acc '()))
      (if (fx< num 25)
          (loop (fx+ num 1) (cons `(sphere ,(make-vec3d .8 (fl+ .2 (fl/ (fixnum->flonum num) 50.0)) .2)
                                         ,(vec3d-add
                                            (vec3d-add start
                                                       (vec3d-scalar-mul
                                                         (vec3d-scalar-mul dX 10.0)
                                                         (fixnum->flonum (fxremainder num 5))))
                                            (vec3d-scalar-mul
                                              (vec3d-scalar-mul dY 10.0)
                                              (fixnum->flonum (fxquotient num 5))))
                                         5.0)
                                acc))
          acc))))

(define scene `(,@(generate-spheres)
                ;(sphere ,(make-vec3d .4 .6 .5) ,(make-vec3d -15.0 0.0 90.0) 20.0)
                ;(sphere ,(make-vec3d .75 .95 .92) ,(make-vec3d 20.0 -20.0 65.0) 5.0)
                (plane ,(make-vec3d .7 .7 1.0) 10.0 ,(make-vec3d .25 -1.0 0.0))
                ;(mesh #f ,(make-vec3d 23.0 0.0 50.0) ,coptix)
                (light ,(make-vec3d .7 .9 .9) ,(make-vec3d -40.0 -15.0 60.0) 1.0)))

;;; Types
(define-syntax obj-dispatch
  (syntax-rules (else)
    ((obj-dispatch obj (else body ...))
     (begin body ...))
    ((obj-dispatch obj (type body ...) almost last ...)
     (if (eq? 'type (obj-type obj))
         (begin body ...)
         (obj-dispatch obj almost last ...)))
    ((obj-dispatch obj (type body ...) last ...)
     (if (eq? 'type (obj-type obj))
         (begin body ...)))))

(define (obj-type obj)
  (car obj))

(define (obj-color obj)
  (cadr obj))

(define (obj-normal obj point)
  (declare (inlining-limit 0))
  (obj-dispatch obj
   (sphere (sphere-normal obj point))
   (light (sphere-normal obj point))
   (plane (plane-normal obj))
   (triangle (triangle-normal obj))))

;;; Light
(define (light-pos obj)
  (sphere-pos obj))

(define (light-intersection obj origVec dirVec)
  (sphere-intersection obj origVec dirVec))

;;; Sphere
(define (sphere-pos obj)
  (caddr obj))

(define (sphere-radius obj)
  (cadddr obj))

(define (sphere-intersection obj origVec dirVec)
  (declare (inlining-limit 10000))
  (let* ((eo (vec3d-sub origVec (sphere-pos obj)))
         (b (vec3d-dot eo dirVec))
         (c (fl- (vec3d-dot eo eo) (flexpt (sphere-radius obj) 2.0)))
         (d (fl- (fl* b b) c)))
    (if (fl<= d 0.0)
        depth
        (let ((r (fl- (fl- b) (flsqrt d))))
          (if (fl> r 0.0)
              r
              depth)))))

(define (sphere-normal obj point)
  (declare (inlining-limit 10000))
  (vec3d-unit (vec3d-sub point (sphere-pos obj))))

;;; Plane
(define (plane-normal obj)
  (cadddr obj))

(define (plane-distance obj)
  (caddr obj))

(define (plane-intersection obj origVec dirVec)
  (declare (inlining-limit 10000))
  (let ((d (vec3d-dot (plane-normal obj) dirVec)))
    (if (not (flzero? d))
        (let ((dist (fl/ (fl- (fl+ (vec3d-dot (plane-normal obj) origVec)
                             (plane-distance obj)))
                       d)))
          (if (flpositive? dist)
              dist
              depth))
        depth)))

;;; Triangles

(define (triangle-v1 obj)
  (caddr obj))

(define (triangle-v2 obj)
  (cadddr obj))

(define (triangle-v3 obj)
  (car (cddddr obj)))


(define (triangle-normal obj)
  (declare (inlining-limit 10000))
  (vec3d-unit
    (vec3d-cross
      (vec3d-sub (triangle-v2 obj)
                 (triangle-v1 obj))
      (vec3d-sub (triangle-v3 obj)
                 (triangle-v1 obj)))))

(define (triangle-intersection obj origVec dirVec)

  (declare (inlining-limit 10000))

  (let* ((n (triangle-normal obj))
         (v.n (vec3d-dot dirVec n)))
    (if (fl>= v.n 0.0)
        depth
        (let* ((a (triangle-v1 obj))
	       (b (triangle-v2 obj))
	       (c (triangle-v3 obj))
	       (o-a.n (vec3d-dot (vec3d-sub origVec a) n))
	       (d (fl- (fl/ o-a.n v.n)))
	       (p (vec3d-add origVec (vec3d-scalar-mul dirVec d))))
	  (let ((val (vec3d-dot (vec3d-cross (vec3d-sub b a) (vec3d-sub p a)) n)))

	    (define (same-sign? x y)
	      (eq? (flnegative? x)
		   (flnegative? y)))
	    
	    (if (and (fl>= d 0.0)
		     (same-sign? val (vec3d-dot (vec3d-cross (vec3d-sub c b) (vec3d-sub p b)) n))
		     (same-sign? val (vec3d-dot (vec3d-cross (vec3d-sub a c) (vec3d-sub p c)) n)))
		d
		depth))
	  ;; Barycentric projection - has some bugs
;; 	  (let ((u (/ (- (* (vec3d-y p) (vec3d-x c))
;; 	  (* (vec3d-x p) (vec3d-y c)))
;; 	  (- (* (vec3d-y b) (vec3d-x c))
;; 	  (* (vec3d-x b) (vec3d-y c)))))
;; 	  (v (/ (- (* (vec3d-y p) (vec3d-x b))
;; 	  (* (vec3d-x p) (vec3d-y b)))
;; 	  (- (* (vec3d-y c) (vec3d-x b))
;; 	  (* (vec3d-x c) (vec3d-y b))))))
;; 	  (if (and (>= u 0.0) (>= v 0.0) (< (+ u v) 1.0))
;; 	  d
;; 	  depth))
          ))))

;; Simplistic meshes
(define (mesh-pos obj)
  (caddr obj))

(declare (not inline))

(define (mesh-primitives obj)
  (declare (inlining-limit 0))
  (let ((a (cadddr obj)))
    (if (pair? a)
        a
        (force a))))

(declare (inline))

;;; Intersections and casting
(define (test-intersection obj origVec dirVec)
  (declare (inlining-limit 0))
  (obj-dispatch obj
   (sphere (sphere-intersection obj origVec dirVec))
   (light (sphere-intersection obj origVec dirVec))
   (plane (plane-intersection obj origVec dirVec))
   (triangle (triangle-intersection obj origVec dirVec))))

(declare (not inline))

(define (apply-lighting hitObj point v)
  (if (eq? (obj-type hitObj) 'light)
      (obj-color hitObj)
      (let ((acc (make-vec3d 0.0 0.0 0.0)))
        (for-each (lambda (obj)
		    (declare (inlining-limit 100000))
                    (if (eq? (obj-type obj) 'light)
                          (let* ((pointToLight (vec3d-sub (light-pos obj) point))
                                 (l (vec3d-unit pointToLight))
                                 (n (obj-normal hitObj point))
                                 (n.l (saturate (vec3d-dot n l)))
                                 (r (vec3d-sub l (vec3d-scalar-mul n (fl* 2.0 (vec3d-dot n l)))))
                                 (r.v (saturate (vec3d-dot r v)))
                                 (diff n.l)
                                 (spec (flexpt r.v 30.))
                                 (shadow (saturate (fl* 4.0 diff))))
                            (if (fl> diff 0.0) 
                                (set! acc (vec3d-add acc (vec3d-component-mul
                                                           (vec3d-scalar-mul
                                                             (vec3d-add
                                                               (vec3d-scalar-mul (obj-color hitObj)
                                                                                 diff)
                                                               (obj-dispatch hitObj
                                                                (plane (make-vec3d 0.0 0.0 0.0))
                                                                (else (make-vec3d spec spec spec))))
                                                             shadow)
                                                           (obj-color obj))))))))
                  scene)
        (obj-dispatch hitObj
         (plane acc)
         (else (vec3d-add ambient acc))))))



(define (find-closest-prim orig dir prims cont)
  (declare (inlining-limit 100000))
  (let ((closestObj #f)
        (closestDepth depth))
    (for-each (lambda (obj)
                (if (eq? (obj-type obj) 'mesh)
                    (find-closest-prim (vec3d-sub orig (mesh-pos obj)) dir (mesh-primitives obj)
                                       (lambda (o d)
                                         (if (fl< d closestDepth)
                                             (begin
                                               (set! closestDepth d)
                                               (set! closestObj o)))))
                    (let ((d (test-intersection obj orig dir)))
                      (if (fl< d closestDepth)
                          (begin
                            (set! closestDepth d)
                            (set! closestObj obj))))))
              prims)
    (if closestObj
        (cont closestObj closestDepth)
        backColor)))

(define (shoot-ray orig dir step)
  (declare (inlining-limit 100000))
  (if (fx< step maxsteps)
      (find-closest-prim
        orig
        dir
        scene
        (lambda (closestObj closestDepth)
          (if closestObj
              (let* ((d closestDepth)
                     (point (vec3d-add orig (vec3d-scalar-mul dir d)))
                     (n (obj-normal closestObj point))
                     (r (vec3d-unit (vec3d-sub dir (vec3d-scalar-mul n (fl* 2.0 (vec3d-dot dir n))))))
                     (view (vec3d-unit (vec3d-sub point eye))))
                (vec3d-add
                  (apply-lighting closestObj point view)
                  (vec3d-scalar-mul (shoot-ray (vec3d-add point (vec3d-scalar-mul r .0001)) r (fx+ step 1))
				    (fl/ (fl* (fixnum->flonum (fx+ step 1)) 2.0)))))
              backColor)))
      (make-vec3d 0.0 0.0 0.0)))
  
(define (shoot-screen-rays proc)
  (declare (inlining-limit 10000))
  (let ((dX (fl/ (vec2d-x screenDimen) (fixnum->flonum (window-x res))))
        (dY (fl/ (vec2d-y screenDimen) (fixnum->flonum (window-y res))))
        (screenCorner (make-vec3d (fl- (fl/ (vec2d-x screenDimen) 2.0))
                                  (fl- (fl/ (vec2d-y screenDimen) 2.0))
                                  0.0))
        (count (fx* (window-x res) (window-y res))))
    (let loop ((n 0))
      (if (fx< n count)
          (let* ((curPoint (make-vec3d (fl* (fixnum->flonum (fxremainder n (window-x res))) dX)
				       (fl* (fixnum->flonum (fxquotient n (window-y res))) dY)
				       0.0))
                 (view (vec3d-unit
			(vec3d-sub (vec3d-add screenCorner curPoint)
				   eye)))
                 (curColor (shoot-ray eye
                                      view
                                      0)))
            (if (fxzero? (fxremainder n (fx* (window-y res) 5)))
		(message (real->percentage (fl/ (fixnum->flonum n) (fixnum->flonum count))) "%"))
	    (proc (vec3d-x curColor) (vec3d-y curColor) (vec3d-z curColor))
            (loop (fx+ n 1)))))))


(define (make-image)
  (message "Starting...")
  (with-output-to-file "image.ppm"
    (lambda ()
      (message "Writing...")
      (display "P6\n")
      (display-strings (number->string (window-x res)) " " (number->string (window-y res)) "\n")
      (display "255\n")
      (shoot-screen-rays write-color))))


(make-image)
