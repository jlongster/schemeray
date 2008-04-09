;;; Scheme Raytracer v0.1
;;;
;;; Performs sphere/plane/triangle intersection tests, loads
;;; .obj files as a list of triangles, applies Phong
;;; illumination and reflections.
;;;
;;; The math here hasn't been optimized at all, and there's
;;; a good deal that could be done.  However, I simply wanted
;;; to build a prototype.  Optimization will come in the
;;; next version.
;;;
;;; This outputs to a file 'image.ppm' which is of the format
;;; Portable Pixmap.  Netpbm provides nice tools to convert
;;; ppm's to other file formats if you need it.
;;;
;;; 10/04/2007
;;; James Long
;;;
;;; Roughly ported for Chicken
;;; 10/08/2007
;;; Jeremy Sydik

;; JJS (For Chicken)
(require-extension syntax-case)

(declare (standard-bindings)
         (extended-bindings)
         (block)
         (mostly-flonum)
         (not safe))

;;; Utility
(define-syntax when
  (syntax-rules ()
    ((when cond do ...)
     (if cond
         (begin do ...)))))

(define-syntax unless
  (syntax-rules ()
    ((when cond do ...)
     (if (not cond)
         (begin do ...)))))

(define current-log-port
  (make-parameter (current-error-port)))

; Prints all of its args like 'print', but without the serious bug of named parameters
(define (display-args . rest)
  (for-each (lambda (s) (display s)) rest))

;; JJS: Renamed to print-log to prevent collisions in Chicken
;;      All references to log have been updated.
(define (print-log . rest)
  (with-output-to-port (current-log-port)
    (lambda ()
      (apply display-args (append rest '("\n"))))))

(define (real->u8 n)
  (inexact->exact
   (max 0
        (min 255
             (if (integer? n)
                 n
                 (floor n))))))

(define (real->percentage n)
  (inexact->exact (floor (* 100 n))))

;; JJS: Definition for Chicken
(define write-u8 write-byte)

(define (write-color v1)
  (write-u8 (real->u8 (* (vec3d-x v1) 255)))
  (write-u8 (real->u8 (* (vec3d-y v1) 255)))
  (write-u8 (real->u8 (* (vec3d-z v1) 255))))

;;; Utility stuff to help with math

;; JL: For Gambit
;; (define-structure vec2d x y)
;; (define-structure vec3d x y z)
;; JJS: For Chicken
(define-record vec2d x y)
(define-record vec3d x y z)

(define (vec3d-op v1 v2 op)
  (make-vec3d (op (vec3d-x v1) (vec3d-x v2))
              (op (vec3d-y v1) (vec3d-y v2))
              (op (vec3d-z v1) (vec3d-z v2))))
(define (vec3d-add v1 v2)
  (vec3d-op v1 v2 +))
(define (vec3d-sub v1 v2)
  (vec3d-op v1 v2 -))
(define (vec3d-component-mul v1 v2)
  (make-vec3d (* (vec3d-x v1) (vec3d-x v2))
              (* (vec3d-y v1) (vec3d-y v2))
              (* (vec3d-z v1) (vec3d-z v2))))
(define (vec3d-scalar-mul v1 f)
  (make-vec3d (* (vec3d-x v1) f)
              (* (vec3d-y v1) f)
              (* (vec3d-z v1) f)))
(define (vec3d-inverse v1)
  (vec3d-scalar-mul v1 -1))
(define (vec3d-length v1)
  (sqrt (vec3d-dot v1 v1)))
(define (vec3d-unit v1)
  (let ((l (vec3d-length v1)))
    (make-vec3d (/ (vec3d-x v1) l)
                (/ (vec3d-y v1) l)
                (/ (vec3d-z v1) l))))
(define (vec3d-dot v1 v2)
  (+ (* (vec3d-x v1) (vec3d-x v2))
     (* (vec3d-y v1) (vec3d-y v2))
     (* (vec3d-z v1) (vec3d-z v2))))
(define (vec3d-cross v1 v2)
  (make-vec3d (- (* (vec3d-y v1) (vec3d-z v2))
                 (* (vec3d-z v1) (vec3d-y v2)))
              (- (* (vec3d-z v1) (vec3d-x v2))
                 (* (vec3d-x v1) (vec3d-z v2)))
              (- (* (vec3d-x v1) (vec3d-y v2))
                 (* (vec3d-y v1) (vec3d-x v2)))))

(define (saturate n)
  (min 1.0 (max 0.0 n)))

(include "obj-file-parser.scm")

;;; Config constants
(define screenDimen (make-vec2d 8 6))
(define res (make-vec2d 600 450))
(define eye (make-vec3d 0 0 -5))
(define depth 10000)
(define backColor (make-vec3d 0 0 0))
(define ambient (make-vec3d .1 .1 .1))
(define maxsteps 3)

(define coptix (delay (load-obj "coptix_slim")))
(define box (delay (load-obj "box")))

(define (generate-spheres)
  (let ((start (make-vec3d 0 0 65))
        (dX (make-vec3d -1 -.25 .5))
        (dY (make-vec3d 0 -1 0)))
    (let loop ((num 0)
               (acc '()))
      (if (< num 25)
          (loop (+ num 1) (cons `(sphere ,(make-vec3d .8 (+ .2 (/ num 50)) .2)
                                         ,(vec3d-add
                                            (vec3d-add start
                                                       (vec3d-scalar-mul
                                                         (vec3d-scalar-mul dX 10)
                                                         (remainder num 5)))
                                            (vec3d-scalar-mul
                                              (vec3d-scalar-mul dY 10)
                                              (quotient num 5)))
                                         5)
                                acc))
          acc))))

(define scene `(,@(generate-spheres)
                ;(sphere ,(make-vec3d .4 .6 .5) ,(make-vec3d -15 0 90) 20)
                ;(sphere ,(make-vec3d .75 .95 .92) ,(make-vec3d 20 -20 65) 5)
                (plane ,(make-vec3d .7 .7 1.0) 10 ,(make-vec3d .25 -1 0))
                (mesh  #f ,(make-vec3d 23 0 50) ,coptix)
                (light ,(make-vec3d .7 .9 .9) ,(make-vec3d -40 -15 60) 1)))

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
         (c (- (vec3d-dot eo eo) (expt (sphere-radius obj) 2)))
         (d (- (* b b) c)))
    (if (<= d 0)
        depth
        (let ((r (- (- b) (sqrt d))))
          (if (> r 0)
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
    (if (>= v.n 0)
        depth
        (begin
          (let* ((a (triangle-v1 obj))
                 (b (triangle-v2 obj))
                 (c (triangle-v3 obj))
                 (o-a.n (vec3d-dot (vec3d-sub origVec a) n))
                 (d (- (/ o-a.n v.n)))
                 (p (vec3d-add origVec (vec3d-scalar-mul dirVec d))))
            (let ((signf #f))
              (if (negative? (vec3d-dot (vec3d-cross (vec3d-sub b a) (vec3d-sub p a)) n))
                  (set! signf negative?)
                  (set! signf (lambda (n) (or (zero? n) (positive? n)))))
              (if (and (>= d 0)
                       (signf (vec3d-dot (vec3d-cross (vec3d-sub c b) (vec3d-sub p b)) n))
                       (signf (vec3d-dot (vec3d-cross (vec3d-sub a c) (vec3d-sub p c)) n)))
                  d
                  depth))
            ; Barycentric projection - has some bugs
            #;(let ((u (/ (- (* (vec3d-y p) (vec3d-x c))
                           (* (vec3d-x p) (vec3d-y c)))
                        (- (* (vec3d-y b) (vec3d-x c))
                           (* (vec3d-x b) (vec3d-y c)))))
                  (v (/ (- (* (vec3d-y p) (vec3d-x b))
                           (* (vec3d-x p) (vec3d-y b)))
                        (- (* (vec3d-y c) (vec3d-x b))
                           (* (vec3d-x c) (vec3d-y b))))))
              (if (and (>= u 0) (>= v 0) (<= (+ u v) 1))
                  d
                  depth)))))))

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
      (let ((acc (make-vec3d 0 0 0)))
        (for-each (lambda (obj)
                    (when (eq? (obj-type obj) 'light)
                          (let* ((pointToLight (vec3d-sub (light-pos obj) point))
                                 (l (vec3d-unit pointToLight))
                                 (n (obj-normal hitObj point))
                                 (n.l (saturate (vec3d-dot n l)))
                                 (r (vec3d-sub l (vec3d-scalar-mul n (* 2 (vec3d-dot n l)))))
                                 (r.v (saturate (vec3d-dot r v)))
                                 (diff n.l)
                                 (spec (expt r.v 30))
                                 (shadow (saturate (* 4 diff))))
                            (if (> diff 0) 
                                (set! acc (vec3d-add acc (vec3d-component-mul
                                                           (vec3d-scalar-mul
                                                             (vec3d-add
                                                               (vec3d-scalar-mul (obj-color hitObj)
                                                                                 diff)
                                                               (obj-dispatch hitObj
                                                                (plane (make-vec3d 0 0 0))
                                                                (else (vec3d-scalar-mul (make-vec3d 1 1 1)
                                                                                        spec))))
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
                    (find-closest-prim (vec3d-add orig (vec3d-inverse (mesh-pos obj))) dir (mesh-primitives obj)
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
                     (r (vec3d-unit (vec3d-sub dir (vec3d-scalar-mul n (* 2 (vec3d-dot dir n))))))
                     (view (vec3d-unit (vec3d-sub point eye))))
                (vec3d-add
                  (apply-lighting closestObj point view)
                  (vec3d-scalar-mul (shoot-ray (vec3d-add point (vec3d-scalar-mul r .0001)) r (+ step 1)) (/ 1 (* (+ step 1) 2)))))
              backColor)))
      (make-vec3d 0 0 0)))
  
(define (shoot-screen-rays)
  (let ((dX (/ (vec2d-x screenDimen) (vec2d-x res)))
        (dY (/ (vec2d-y screenDimen) (vec2d-y res)))
        (screenCorner (make-vec3d (- (/ (vec2d-x screenDimen) 2))
                                  (- (/ (vec2d-y screenDimen) 2))
                                  0))
        (count (* (vec2d-x res) (vec2d-y res))))
    (let loop ((n 0)
               (acc '()))
      (if (< n count)
          (let* ((curPoint (make-vec3d (* (remainder n (vec2d-x res)) dX) (* (quotient n (vec2d-y res)) dY) 0))
                 (view (vec3d-unit
                        (vec3d-sub (vec3d-add screenCorner curPoint)
                                   eye)))
                 (curColor (shoot-ray eye
                                      view
                                      0)))
            (when (zero? (remainder n (* (vec2d-y res) 5)))
                  (print-log (real->percentage (/ n count)) "%"))
            (loop (+ n 1) (cons curColor acc)))
          (reverse acc)))))


(define (make-image)
  (print-log "Starting...")
  (with-output-to-file "image.ppm"
    (lambda ()
      (let ((pixels (shoot-screen-rays)))
        (print-log "Writing...")
        (display-args "P6\n")
        (display-args (vec2d-x res) " " (vec2d-y res) "\n")
        (display-args "255\n")
        (for-each (lambda (c) (write-color c))
                  pixels)))))



(make-image)
