
(define (identity x) x)

(define flsqrt
  (external "sqrt"
            (=> (float) float)
            sqrt))

(define flpow
  (external "pow"
            (=> (float float) float)
            expt))

(define integer->float
  (external "(float)"
            (=> (integer) float)
            identity))

(define float->integer
  (external "(int)"
            (=> (float) integer)
            round))

(define float->byte
  (external "(unsigned char)"
            (=> (float) integer)
            (lambda (n)
              (min (max 0 n) 255))))

(define (scaled-float->byte f n)
  (float->byte (fl* f n)))

(define (print-integer n)
  (write-integer n (current-output-port)))

(define (print-string str)
  (write-string str (current-output-port)))

(define unspecific-value
  (external ""
            unit
            (if #f #f)))

(define (unspecific)
  unspecific-value)

(define write-float
  (external "write_real"
            (=> (float) unit)
            display))

(define (print-float f)
  (write-float f))

(define (write-boolean v port)
  (write-string (if v "#t" "#f") port))

(define (print-boolean v)
  (write-boolean v (current-output-port)))

(define (write-vector v port)
  (let ((w (lambda (c)
             (write-float c))))
    (w (vector3d-x v))
    (print-string " ")
    (w (vector3d-y v))
    (print-string " ")
    (w (vector3d-z v))))

(define (print-vector v)
  (write-vector v (current-output-port)))

(define (print-newline)
  (newline (current-output-port)))

(define write-byte
  (external "write_byte"
            (=> (integer output-port) unit)
            display))

(define (write-color color port)
  (let ((w (lambda (c)
             (write-byte (scaled-float->byte (saturate c) 255.0) port))))
    (w (vector3d-x color))
    (w (vector3d-y color))
    (w (vector3d-z color))))

(define-syntax write-strings
  (syntax-rules ()
    ((_ port string)
     (begin (write-string string port)))
    ((_ port string next ...)
     (begin (write-string string port)
            (write-strings port next ...)))))

;; unused - buggy
(define-syntax vector-iterate
  (lambda (f r c)
    (let ((vector (cadr f))
          (size (caddr f))
          (ident (cadddr f))
          (body (cddddr f))
          (i (r 'i)))
      `(let loop ((,i 0))
         (if (< ,i ,size)
             (let ((,ident (vector-ref ,vector ,i)))
               ,body
               (loop (+ ,i 1))))))))


;; Vectors
(define-record-type vector2d :vector2d
  (make-vector2d x y)
  (x float vector2d-x)
  (y float vector2d-y))

(define-record-type vector3d :vector3d
  (make-vector3d x y z)
  (x float vector3d-x)
  (y float vector3d-y)
  (z float vector3d-z))

(define null-vector3d
  (external "NULL"
            vector3d
            #f))

(define (vector3d-op v1 v2 op)
  (make-vector3d (op (vector3d-x v1) (vector3d-x v2))
                 (op (vector3d-y v1) (vector3d-y v2))
                 (op (vector3d-z v1) (vector3d-z v2))))

(define (vector3d-add v1 v2)
  (vector3d-op v1 v2 fl+))

(define (vector3d-sub v1 v2)
  (vector3d-op v1 v2 fl-))

(define (vector3d-component-mul v1 v2)
  (vector3d-op v1 v2 fl*))

(define (vector3d-scalar-mul v1 f)
  (make-vector3d (fl* (vector3d-x v1) f)
                 (fl* (vector3d-y v1) f)
                 (fl* (vector3d-z v1) f)))

(define (vector3d-length v1)
  (flsqrt (vector3d-dot v1 v1)))

(define (vector3d-unit v1)
  (vector3d-scalar-mul v1 (fl/ 0.99999999 (vector3d-length v1))))

(define (vector3d-dot v1 v2)
  (fl+ (fl* (vector3d-x v1) (vector3d-x v2))
       (fl* (vector3d-y v1) (vector3d-y v2))
       (fl* (vector3d-z v1) (vector3d-z v2))))

(define (vector3d-cross v1 v2)
  (let ((v1-x (vector3d-x v1)) (v2-x (vector3d-x v2))
	(v1-y (vector3d-y v1)) (v2-y (vector3d-y v2))
	(v1-z (vector3d-z v1)) (v2-z (vector3d-z v2)))
    (make-vector3d (fl- (fl* v1-y v2-z (vector3d-z v2))
                        (fl* v1-z v2-y))
                   (fl- (fl* v1-z v2-x)
                        (fl* v1-x v2-z))
                   (fl- (fl* v1-x v2-y)
                        (fl* v1-y v2-x)))))

(define (vector3d-inverse v1)
  (make-vector3d (- (vector3d-x v1))
                 (- (vector3d-y v1))
                 (- (vector3d-z v1))))

(define (saturate n)
  (if (fl< n 0.0) 0.0
      (if (fl> n 1.0) 1.0
          n)))


;; Objects
;;
;; There's a slight inheritance going on
;; here - basically a subtype is a type
;; which can be correctly represented
;; as another type.
;;
;; For example, a light can be seen as
;; an object.
;;
;; Nothing is enforced, however, so this
;; is kind of dangerous.  Be careful.
(define-field color vector3d)
(define-field position vector3d)

;; Bootstrapped base object
(define-record-type object :object
  (really-make-object type)
  (type integer object-type)
  (color vector3d object-color))

(define (make-object)
  (really-make-object -1))

(define null-object?
  (external "ISNULL"
            (=> (object) boolean)
            (lambda (v)
              (not v))))

(define null-object
  (external "NULL"
            object
            #f))

(define null-scene
  (external "NULL"
            (^ object)
            #f))

(define-object light :light
  color
  position
  (radius float))

(define-object sphere :sphere
  color
  position
  (radius float))

(define-object plane :plane
  color
  (normal vector3d)
  (distance float))

(define-object triangle :triangle
  color
  (vertex1 vector3d)
  (vertex2 vector3d)
  (vertex3 vector3d))

(define-object mesh :mesh
  (triangles (^ triangle)))

;; Normals
(define (object-normal object point)
  (cond
   ((or (light? object)
        (sphere? object)) (sphere-normal (object->sphere object) point))
   ((plane? object) (plane-normal (object->plane object)))
   ((triangle? object) (triangle-normal (object->triangle object)))
   (else (make-vector3d 0.0 1.0 0.0))))

(define (sphere-normal sphere point)
  (vector3d-unit (vector3d-sub point (sphere-position sphere))))

(define (triangle-normal triangle)
  (vector3d-unit
   (vector3d-cross
    (vector3d-sub (triangle-vertex2 triangle)
                  (triangle-vertex1 triangle))
    (vector3d-sub (triangle-vertex3 triangle)
                  (triangle-vertex1 triangle)))))

;; Intersections
(define (object-intersection obj origin dir)
  (cond
   ((or (light? obj)
        (sphere? obj))
    (sphere-intersection (object->sphere obj)
                         origin dir))
   ((plane? obj)
    (plane-intersection (object->plane obj)
                        origin dir))
   ((triangle? obj)
    (triangle-intersection (object->triangle obj)
                           origin dir))
   (else
    DEPTH)))

(define (sphere-intersection obj origin dir)
  (let* ((eo (vector3d-sub origin (sphere-position obj)))
         (b (vector3d-dot eo dir))
         (c (fl- (vector3d-dot eo eo) (flpow (sphere-radius obj) 2.0)))
         (d (fl- (fl* b b) c)))
    (if (fl<= d 0.0)
        DEPTH
        (let ((r (fl- (fl- 0.0 b) (flsqrt d))))
          (if (fl> r 0.0)
              r
              DEPTH)))))

(define (plane-intersection obj origin dir)
  (let ((d (vector3d-dot (plane-normal obj) dir)))
    (if (not (fl= d 0.0))
        (let ((dist (fl/ (fl- (fl+ (vector3d-dot (plane-normal obj) origin)
                                   (plane-distance obj)))
                         d)))
          (if (fl> dist 0.0)
              dist
              DEPTH))
        DEPTH)))

(define (triangle-intersection obj origin dir)
  (let* ((n (triangle-normal obj))
         (v.n (vector3d-dot dir n)))
    (if (fl>= v.n 0.0)
        DEPTH
        (let* ((a (triangle-vertex1 obj))
	       (b (triangle-vertex2 obj))
	       (c (triangle-vertex3 obj))
	       (o-a.n (vector3d-dot (vector3d-sub origin a) n))
	       (d (fl- (fl/ o-a.n v.n)))
	       (p (vector3d-add origin (vector3d-scalar-mul dir d))))
	  (let ((val (vector3d-dot (vector3d-cross (vector3d-sub b a)
                                                   (vector3d-sub p a))
                                   n)))
            
	    (define (same-sign? x y)
	      (eq? (fl< x 0.0)
		   (fl< y 0.0)))
	    
	    (if (and (fl>= d 0.0)
		     (same-sign? val (vector3d-dot (vector3d-cross (vector3d-sub c b)
                                                             (vector3d-sub p b))
                                                n))
		     (same-sign? val (vector3d-dot (vector3d-cross (vector3d-sub a c)
                                                             (vector3d-sub p c))
                                                n)))
		d
		DEPTH))
          
	  ;; Barycentric projection - has some bugs
          ;; 	  (let ((u (/ (- (* (vector3d-y p) (vector3d-x c))
          ;; 	  (* (vector3d-x p) (vector3d-y c)))
          ;; 	  (- (* (vector3d-y b) (vector3d-x c))
          ;; 	  (* (vector3d-x b) (vector3d-y c)))))
          ;; 	  (v (/ (- (* (vector3d-y p) (vector3d-x b))
          ;; 	  (* (vector3d-x p) (vector3d-y b)))
          ;; 	  (- (* (vector3d-y c) (vector3d-x b))
          ;; 	  (* (vector3d-x c) (vector3d-y b))))))
          ;; 	  (if (and (>= u 0.0) (>= v 0.0) (< (+ u v) 1.0))
          ;; 	  d
          ;; 	  depth))
          
          ))))

;; The chunky meat of the algorithm
(define (apply-lighting hit point view)
  (if (light? hit)
      (object-color hit)
      (let ((color
             (let loop ((i 0)
                        (acc (make-vector3d 0.0 0.0 0.0)))
               (if (< i SCENE-SIZE)
                   (let ((obj (vector-ref SCENE i)))
                     (if (light? obj)
                         (let* ((light (object->light obj))
                                (point-to-light (vector3d-sub (light-position light) point))
                                (l (vector3d-unit point-to-light))
                                (n (object-normal hit point))
                                (n.l (saturate (vector3d-dot n l)))
                                (r (vector3d-sub l (vector3d-scalar-mul
                                                    n
                                                    (fl* 2.0 (vector3d-dot n l)))))
                                (r.v (saturate (vector3d-dot r view)))
                                (diff n.l)
                                (spec (flpow r.v 30.0))
                                (shadow (saturate (fl* 4.0 diff))))
                           (if (fl> diff 0.0)
                               (loop (+ i 1)
                                     (vector3d-add
                                      acc
                                      (vector3d-component-mul
                                       (object-color obj)
                                       (vector3d-scalar-mul
                                        (vector3d-add (vector3d-scalar-mul (object-color hit) diff)
                                                      (cond
                                                       ((plane? hit) (make-vector3d 0.0 0.0 0.0))
                                                       (else (make-vector3d spec spec spec))))
                                        shadow))))
                               (loop (+ i 1) acc)))
                         (loop (+ i 1) acc)))
                   acc))))
        (cond
         ((plane? hit) color)
         (else (vector3d-add AMBIENT color))))))

(define (find-closest-prim orig dir prims num-prims)
  (let loop ((i 0)
             (closest-object null-object)
             (closest-depth DEPTH))
    (if (< i num-prims)
        (let ((obj (vector-ref prims i)))
          (let ((d (object-intersection obj orig dir)))
            (if (fl< d closest-depth)
                (loop (+ i 1) obj d)
                (loop (+ i 1) closest-object closest-depth))))
        (values closest-object closest-depth))))

(define (shoot-ray orig dir step)
  (if (< step NUM-STEPS)
      (receive (obj obj-depth) (find-closest-prim orig dir SCENE SCENE-SIZE)
        (if (null-object? obj)
            (make-vector3d 0.0 0.0 0.0)
            (let* ((point (vector3d-add orig (vector3d-scalar-mul dir obj-depth)))
                   (n (object-normal obj point))
                   (r (vector3d-unit
                       (vector3d-sub
                        dir
                        (vector3d-scalar-mul n (fl* 2.0
                                                    (vector3d-dot dir n))))))
                   (view (vector3d-unit (vector3d-sub point EYE))))
              (vector3d-add
               (apply-lighting obj point view)
               (vector3d-scalar-mul
                (shoot-ray (vector3d-add point (vector3d-scalar-mul r .0001))
                           r
                           (+ step 1))
                (fl/ 0.99999999 (fl* (integer->float (+ step 1)) 2.0)))))
            ))
      (make-vector3d 0.0 0.0 0.0)))

(define (trace-scene port)
  (let ((dX (fl/ VIEWPORT-X (integer->float WINDOW-X)))
        (dY (fl/ VIEWPORT-Y (integer->float WINDOW-Y)))
        (corner (make-vector3d (fl- 0.0 (fl/ VIEWPORT-X 2.0))
                               (fl- 0.0 (fl/ VIEWPORT-Y 2.0))
                               0.0))
        (count (* WINDOW-X WINDOW-Y)))
    (let loop ((n 0))
      (if (< n count)
          (let* ((x (remainder n WINDOW-X))
                 (y (quotient n WINDOW-X))
                 (point (make-vector3d (fl* (integer->float x) dX)
                                       (fl* (integer->float y) dY)
                                       0.0))
                 (view (vector3d-unit
                        (vector3d-sub (vector3d-add corner point) EYE)))
                 (color (shoot-ray EYE view 0)))
            (write-color color port)
            (loop (+ n 1))))))
  (unspecific))

(define (debug-trace-scene)
  (let ((dir (vector3d-unit (make-vector3d 0.0 0.0 1.0))))
    (receive (obj obj-depth) (find-closest-prim EYE dir SCENE SCENE-SIZE)
      (print-boolean (null-object? obj))))
  (print-newline)
  (unspecific))

;; Config
(define VIEWPORT-X 8.0)
(define VIEWPORT-Y 6.0)
(define WINDOW-X 800)
(define WINDOW-Y 600)
(define DEPTH 10000.0)
(define AMBIENT null-vector3d)
(define EYE null-vector3d)
(define DEFAULT-COLOR null-vector3d)
(define NUM-STEPS 3)

(define SCENE null-scene)
(define SCENE-SIZE 0)

(define DEBUG #f)

(define (generate-spheres scene start)
  (let ((start-point (make-vector3d 0.0 0.0 65.0))
        (dX (make-vector3d -1.0 -.25 .5))
        (dY (make-vector3d 0.0 -1.0 0.0)))
    (let loop ((num 0))
      (if (< num 25)
          (begin
            (vector-set! scene (+ num start)
                         (make-sphere (make-vector3d .8 (fl+ .2 (fl/ (integer->float num) 50.0)) .2)
                                      (vector3d-add
                                       (vector3d-add start-point
                                                     (vector3d-scalar-mul (vector3d-scalar-mul dX 10.0)
                                                                          (integer->float (remainder num 5))))
                                       (vector3d-scalar-mul (vector3d-scalar-mul dY 10.0)
                                                            (integer->float (quotient num 5))))
                                      5.0))
            (loop (+ num 1)))))))

(define (configure)
  (set! EYE (make-vector3d 0.0 0.0 -5.0))
  (set! DEFAULT-COLOR (make-vector3d 0.0 0.0 0.0))
  (set! AMBIENT (make-vector3d 0.1 0.1 0.1))

  (let* ((count 27)
         (objects (make-vector count (make-object))))
;;     (vector-set! objects 0 (make-sphere (make-vector3d .7 .7 1.0)
;;                                         (make-vector3d 0.0 0.0 30.0)
;;                                         10.0))
    (vector-set! objects 0 (make-light (make-vector3d .7 .9 .9)
                                       (make-vector3d -40.0 -15.0 60.0)
                                       1.0))
    (vector-set! objects 1 (make-plane (make-vector3d .7 .7 1.0)
                                       (make-vector3d .25 -1.0 0.0)
                                       10.0))
    (generate-spheres objects 2)
    (set! SCENE objects)
    (set! SCENE-SIZE count)))

(define-entry-point (main) (init: (configure))
  (if DEBUG
      (debug-trace-scene)
      (receive (port status) (open-output-file "image.ppm")
        (write-string "P6\n" port)
        (write-integer WINDOW-X port)
        (write-string " " port)
        (write-integer WINDOW-Y port)
        (write-strings port "\n" "255\n")
        (trace-scene port)))  
  0)
