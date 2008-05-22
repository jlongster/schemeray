;;; .obj file parser
;;;
;;; Parses a .obj file and produces a list of triangles
;;; representing the mesh.  Right now this assumes that
;;; there's also a material file, which is of the same
;;; name but with the .mtl extension.
;;;
;;; Example usage:
;;; (load-obj "mesh")

;;; Helpful functions
(define (while thunk nil? cont)
  (let ((v (thunk)))
    (if (not (nil? v))
          (begin
            (cont v)
            (while thunk nil? cont)))))

(define (file-foreach f cont)
  (call-with-input-file f
    (lambda (p)
      (while (lambda () (read-line p))
             (lambda (c) (eq? (eof-object) c))
             (lambda (line)
               (if (not (string=? line ""))
                   (with-input-from-string line
                     (lambda () (cont)))))))))

(define (read-token)
  (read-line (current-input-port) #\ ))

;;; State based
(define verts '())
(define prims '())
(define materials '())
(define cur-material #f)

(define (make-vertex n)
  (apply make-vec3d (vector-ref verts (- n 1))))

(define (token-map map)
  (let* ((c (read-token))
         (v (assoc c map)))
    (if v
        (cdr v)
        c)))

(define (get-current-material)
  (if cur-material
      (cdr (assq cur-material materials))))

(define (material-prop mat name)
  (let ((v (assoc name mat)))
    (if v (cdr v) #f)))

(define (obj-declaration)
  (token-map '(("v" . vertex) ("f" . face) ("usemtl" . mtlswitch))))
  
(define (obj-vertex)
  (if (vector? verts)
      (error "Invalid obj file format, vertex came after face")
      (let ((x (* (exact->inexact (read)) 15.0))
            (y (* (exact->inexact (read)) 15.0))
            (z (* (exact->inexact (read)) 15.0)))
        (set! verts (cons `(,x ,z ,y) verts)))))

(define (obj-face)
  (if (pair? verts)
        (set! verts (list->vector (reverse verts))))
  (let* ((verts (list->vector (read-all)))
         (count (vector-length verts))
         (mat (get-current-material)))
    (if (>= count 3) (set! prims (cons `(triangle
                                          ,(apply make-vec3d (material-prop mat "Kd"))
                                          ,(make-vertex (vector-ref verts 0))
                                          ,(make-vertex (vector-ref verts 1))
                                          ,(make-vertex (vector-ref verts 2)))
                                       prims)))
    (if (>= count 4) (set! prims (cons `(triangle
                                          ,(apply make-vec3d (material-prop mat "Kd"))
                                          ,(make-vertex (vector-ref verts 0))
                                          ,(make-vertex (vector-ref verts 2))
                                          ,(make-vertex (vector-ref verts 3)))
                                       prims)))))

(define (obj-material-switch)
  (set! cur-material (string->symbol (read-token))))

(define (obj-attr)
  (let ((type (obj-declaration)))
    (case type
      ((vertex) (obj-vertex))
      ((face) (obj-face))
      ((mtlswitch) (obj-material-switch)))))

(define (mat-create)
  (let ((name (read)))
    (set! materials (cons (cons name '())
                          materials))
    (set! cur-material name)))

(define (mat-declaration)
  (token-map '(("newmtl" . new))))

(define (mat-property name)
  (let ((prop (read-all))
        (mat (assq cur-material materials)))
    (set-cdr! mat (cons (cons name prop)
                        (cdr mat)))))

(define (mat-attr)
  (let ((type (mat-declaration)))
    (case type
      ((new) (mat-create))
      (else (if (not (string=? type "#"))
                (mat-property type))))))

(define (load-obj f)
  (set! verts '())
  (set! prims '())
  (message "Loading mesh " f "...")
  (file-foreach (string-append f ".mtl") mat-attr)
  (file-foreach (string-append f ".obj") obj-attr)
  (message "Primitive count: " (length prims))
  (reverse prims))

