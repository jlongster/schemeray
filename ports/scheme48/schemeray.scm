;;; Scheme Raytracer v0.3 (Scheme48)
;;;
;;; Performs sphere/plane/triangle intersection tests, loads
;;; .obj files as a list of triangles, applies Phong
;;; illumination and reflections.
;;;
;;; This outputs to a file 'image.ppm' which is of the format
;;; Portable Pixmap.  Netpbm provides nice tools to convert
;;; ppm's to other file formats if you need it.


(define (saturate n)
  (min 1.0 (max 0.0 n)))

(define-record-type window :window
  (make-window x y)
  window?
  (x window-x)
  (y window-y))

(define screenDimen (make-vec2d 8.0 6.0))
(define res (make-window 800 600))
(define eye (make-vec3d 0.0 0.0 -5.0))
(define depth 10000.0)
(define backColor (make-vec3d 0.0 0.0 0.0))
(define ambient (make-vec3d .1 .1 .1))
(define maxsteps 3)

(define coptix (delay (load-obj "../meshes/coptix_slim")))
(define box (delay (load-obj "../meshes/box")))

(define fixnum->flonum exact->inexact)

(define (generate-spheres)
  (let ((start (make-vec3d 0.0 0.0 65.0))
        (dX (make-vec3d -1.0 -.25 .5))
        (dY (make-vec3d 0.0 -1.0 0.0)))
    (let loop ((num 0)
               (acc '()))
      (if (< num 25)
          (loop (+ num 1) (cons `(sphere ,(make-vec3d .8 (+ .2 (/ (fixnum->flonum num) 50.0)) .2)
                                         ,(vec3d-add
                                            (vec3d-add start
                                                       (vec3d-scalar-mul
                                                         (vec3d-scalar-mul dX 10.0)
                                                         (fixnum->flonum (remainder num 5))))
                                            (vec3d-scalar-mul
                                              (vec3d-scalar-mul dY 10.0)
                                              (fixnum->flonum (quotient num 5))))
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
  (let* ((eo (vec3d-sub origVec (sphere-pos obj)))
         (b (vec3d-dot eo dirVec))
         (c (- (vec3d-dot eo eo) (expt (sphere-radius obj) 2.0)))
         (d (- (* b b) c)))
    (if (<= d 0.0)
        depth
        (let ((r (- (- b) (sqrt d))))
          (if (> r 0.0)
              r
              depth)))))

(define (sphere-normal obj point)
  (vec3d-unit (vec3d-sub point (sphere-pos obj))))

;;; Plane
(define (plane-normal obj)
  (cadddr obj))

(define (plane-distance obj)
  (caddr obj))

(define (plane-intersection obj origVec dirVec)
  (let ((d (vec3d-dot (plane-normal obj) dirVec)))
    (if (not (zero? d))
        (let ((dist (/ (- (+ (vec3d-dot (plane-normal obj) origVec)
                             (plane-distance obj)))
                       d)))
          (if (positive? dist)
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
  (vec3d-unit
    (vec3d-cross
      (vec3d-sub (triangle-v2 obj)
                 (triangle-v1 obj))
      (vec3d-sub (triangle-v3 obj)
                 (triangle-v1 obj)))))

(define (triangle-intersection obj origVec dirVec)
  (let* ((n (triangle-normal obj))
         (v.n (vec3d-dot dirVec n)))
    (if (>= v.n 0.0)
        depth
        (let* ((a (triangle-v1 obj))
	       (b (triangle-v2 obj))
	       (c (triangle-v3 obj))
	       (o-a.n (vec3d-dot (vec3d-sub origVec a) n))
	       (d (- (/ o-a.n v.n)))
	       (p (vec3d-add origVec (vec3d-scalar-mul dirVec d))))
	  (let ((val (vec3d-dot (vec3d-cross (vec3d-sub b a) (vec3d-sub p a)) n)))

	    (define (same-sign? x y)
	      (eq? (negative? x)
		   (negative? y)))
	    
	    (if (and (>= d 0.0)
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

(define (mesh-primitives obj)
  (let ((a (cadddr obj)))
    (if (pair? a)
        a
        (force a))))

;;; Intersections and casting
(define (test-intersection obj origVec dirVec)
  (obj-dispatch obj
   (sphere (sphere-intersection obj origVec dirVec))
   (light (sphere-intersection obj origVec dirVec))
   (plane (plane-intersection obj origVec dirVec))
   (triangle (triangle-intersection obj origVec dirVec))))

(define (apply-lighting hitObj point v)
  (if (eq? (obj-type hitObj) 'light)
      (obj-color hitObj)
      (let ((acc (make-vec3d 0.0 0.0 0.0)))
        (for-each (lambda (obj)
                    (if (eq? (obj-type obj) 'light)
                          (let* ((pointToLight (vec3d-sub (light-pos obj) point))
                                 (l (vec3d-unit pointToLight))
                                 (n (obj-normal hitObj point))
                                 (n.l (saturate (vec3d-dot n l)))
                                 (r (vec3d-sub l (vec3d-scalar-mul n (* 2.0 (vec3d-dot n l)))))
                                 (r.v (saturate (vec3d-dot r v)))
                                 (diff n.l)
                                 (spec (expt r.v 30.))
                                 (shadow (saturate (* 4.0 diff))))
                            (if (> diff 0.0) 
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
  (let ((closestObj #f)
        (closestDepth depth))
    (for-each (lambda (obj)
                (if (eq? (obj-type obj) 'mesh)
                    (find-closest-prim (vec3d-sub orig (mesh-pos obj)) dir (mesh-primitives obj)
                                       (lambda (o d)
                                         (if (< d closestDepth)
                                             (begin
                                               (set! closestDepth d)
                                               (set! closestObj o)))))
                    (let ((d (test-intersection obj orig dir)))
                      (if (< d closestDepth)
                          (begin
                            (set! closestDepth d)
                            (set! closestObj obj))))))
              prims)
    (if closestObj
        (cont closestObj closestDepth)
        backColor)))

(define (shoot-ray orig dir step)
  (if (< step maxsteps)
      (find-closest-prim
        orig
        dir
        scene
        (lambda (closestObj closestDepth)
          (if closestObj
              (let* ((d closestDepth)
                     (point (vec3d-add orig (vec3d-scalar-mul dir d)))
                     (n (obj-normal closestObj point))
                     (r (vec3d-unit (vec3d-sub dir (vec3d-scalar-mul n (* 2.0 (vec3d-dot dir n))))))
                     (view (vec3d-unit (vec3d-sub point eye))))
                (vec3d-add
                  (apply-lighting closestObj point view)
                  (vec3d-scalar-mul (shoot-ray (vec3d-add point (vec3d-scalar-mul r .0001)) r (+ step 1))
				    (/ (* (fixnum->flonum (+ step 1)) 2.0)))))
              backColor)))
      (make-vec3d 0.0 0.0 0.0)))
  
(define (shoot-screen-rays proc)
  (let ((dX (/ (vec2d-x screenDimen) (fixnum->flonum (window-x res))))
        (dY (/ (vec2d-y screenDimen) (fixnum->flonum (window-y res))))
        (screenCorner (make-vec3d (- (/ (vec2d-x screenDimen) 2.0))
                                  (- (/ (vec2d-y screenDimen) 2.0))
                                  0.0))
        (count (* (window-x res) (window-y res))))
    (let loop ((n 0))
      (if (< n count)
          (let* ((curPoint (make-vec3d (* (fixnum->flonum (remainder n (window-x res))) dX)
				       (* (fixnum->flonum (quotient n (window-y res))) dY)
				       0.0))
                 (view (vec3d-unit
			(vec3d-sub (vec3d-add screenCorner curPoint)
				   eye)))
                 (curColor (shoot-ray eye
                                      view
                                      0)))
            (if (zero? (remainder n (* (window-y res) 5)))
		(message (real->percentage (/ (fixnum->flonum n) (fixnum->flonum count))) "%"))
	    (proc (vec3d-x curColor) (vec3d-y curColor) (vec3d-z curColor))
            (loop (+ n 1)))))))


(define (make-image)
  (message "Starting...")
  (with-output-to-file "image.ppm"
    (lambda ()
      (message "Writing...")
      (display "P6\n")
      (display-strings (number->string (window-x res)) " " (number->string (window-y res)) "\n")
      (display "255\n")
      (shoot-screen-rays write-color))))


;(make-image)


