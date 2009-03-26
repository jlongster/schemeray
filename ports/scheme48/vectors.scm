
(define-record-type vec2d :vec2d
  (make-vec2d x y)
  vec2d?
  (x vec2d-x vec2d-x-set!)
  (y vec2d-y vec2d-y-set!))

(define-record-type vec3d :vec3d
  (make-vec3d x y z)
  vec3d?
  (x vec3d-x vec3d-x-set!)
  (y vec3d-y vec3d-y-set!)
  (z vec3d-z vec3d-z-set!))

(define-syntax fields
  (syntax-rules ()
    ((_ v)
     (values (vec3d-x v) (vec3d-y v) (vec3d-z v)))))

(define-syntax define-vec3d-op
  (syntax-rules ()
    ((_ name op)
     (define (name v1 v2)
       (let ((v1-x v1-y v1-z (fields v1))
             (v2-x v2-y v2-z (fields v2)))
         (make-vec3d (op v1-x v2-x)
                     (op v1-y v2-y)
                     (op v1-z v2-z)))))))

(define-vec3d-op vec3d-add +)
(define-vec3d-op vec3d-sub -)
(define-vec3d-op vec3d-component-mul *)

(define (vec3d-scalar-mul v n)
  (let ((x y z (fields v)))
    (make-vec3d (* x n) (* y n) (* z n))))

(define (vec3d-length v)
  (sqrt (vec3d-dot v v)))

(define (vec3d-unit v)
  (vec3d-scalar-mul v (/ (vec3d-length v))))

(define (vec3d-dot v1 v2)
  (let ((x y z (fields (vec3d-component-mul v1 v2))))
    (+ x y z)))

(define (vec3d-cross v1 v2)
  (let ((v1-x v1-y v1-z (fields v1))
        (v2-x v2-y v2-z (fields v2)))
    (make-vec3d (- (* v1-y v2-z)
                   (* v1-z v2-y))
                (- (* v1-z v2-x)
                   (* v1-x v2-z))
                (- (* v1-x v2-y)
                   (* v1-y v2-x)))))

(define (vec3d-inverse v)
  (let ((x y z (fields v)))
    (make-vec3d (- x) (- y) (- z))))





