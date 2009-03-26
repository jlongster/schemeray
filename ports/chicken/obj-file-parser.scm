;;; .obj file parser
;;;
;;; Parses a .obj file and produces a list of triangles
;;; representing the mesh.  Right now this assumes that
;;; there's also a material file, which is of the same
;;; name but with the .mtl extension.
;;;
;;; Example usage:
;;; (load-obj "mesh")

;; JJS
(require-extension utils)

;;; Helpful functions
(define (while thunk nil? cont)
  (let ((v (thunk)))
    (when (not (nil? v))
          (cont v)
          (while thunk nil? cont))))

(define (file-foreach f cont)
  (call-with-input-file f
    (lambda (p)
      (while (lambda () (read-line p))
             (lambda (c) (eq? #!eof c))
             (lambda (line)
               (if (not (string=? line ""))
                   (with-input-from-string line
                     (lambda () (cont)))))))))


(define (read-tok)
  (let ((foo (read-token (lambda (c) (not (char=? c #\space))) (current-input-port)))
        (spc (read-char (current-input-port))))    
    foo))

;; Chicken's (read) doesn't parse for you like Gambit's
(define (read-number-list)
  (map string->number (string-split (read-all))))

;; Original read-token for Gambit
;;(define (read-token)
;;  (read-line (current-input-port) #\ ))  

;;; State based
(define verts '())
(define prims '())
(define materials '())
(define cur-material #f)

(define (make-vertex n)
  ;; (print-log "[make-vertex] " n " " (vector-ref verts (- n 1)) " ")
  (apply make-vec3d (vector-ref verts (- n 1))))

(define (token-map map)
  (let* ((c (read-tok))
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
      (let ((x (* (read) 15))
            (y (* (read) 15))
            (z (* (read) 15)))
        ;; (print-log "[obj-vertex] X: " x " Y: " y " Z: " z)
        (set! verts (cons `(,x ,z ,y) verts)))))


(define (obj-face)
    (when (pair? verts)
      (set! verts (list->vector (reverse verts))))
    (let* ((verts (list->vector (read-number-list))) ;; JJS
           (count (vector-length verts))
           (mat (get-current-material)))
      ;; (print-log "[obj-face] : " verts)
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

;(define (x-obj-face)
;  (when (pair? verts)
;        (set! verts (list->vector (reverse verts))))
;  (let* ((verts (list->vector (read-number-list)) ;; 
;         (count (vector-length verts))
;         (mat (get-current-material))))
;;         (mat-vals (string-split (material-prop mat "Kd"))))
;    ;; (print-log "[obj-face] : " verts)
;    (if (>= count 3) (set! prims (cons `(triangle
;                                          ,(apply make-vec3d (list (string->number (car mat-vals))
;                                                                   (string->number (cadr mat-vals))
;                                                                   (string->number (caddr mat-vals))))
;                                          ;;;;(string-split (material-prop mat "Kd")))
;                                          ,(make-vertex (string->number (vector-ref verts 0)))
;                                          ,(make-vertex (string->number (vector-ref verts 1)))
;                                          ,(make-vertex (string->number (vector-ref verts 2))))
;                                       prims)))
;    (if (>= count 4) (set! prims (cons `(triangle
;                                          ,(apply make-vec3d (list (string->number (car mat-vals))
;                                                                   (string->number (cadr mat-vals))
;                                                                   (string->number (caddr mat-vals))))
;;;;                                          ,(apply make-vec3d (string-split (material-prop mat "Kd")))
;                                          ,(make-vertex (string->number (vector-ref verts 0)))
;                                          ,(make-vertex (string->number (vector-ref verts 2)))
;                                          ,(make-vertex (vector-ref verts 3))))
;                                       prims)))))
;    (if (>= count 3) (set! prims (cons `(triangle
;                                          ,(apply make-vec3d (list (string->number (car mat-vals))
;                                                                   (string->number (cadr mat-vals))
;                                                                   (string->number (caddr mat-vals))))
;                                          ;;;;(string-split (material-prop mat "Kd")))
;                                          ,(make-vertex (string->number (vector-ref verts 0)))
;                                          ,(make-vertex (string->number (vector-ref verts 1)))
;                                          ,(make-vertex (string->number (vector-ref verts 2))))
;                                       prims)))
;    (if (>= count 4) (set! prims (cons `(triangle
;                                          ,(apply make-vec3d (list (string->number (car mat-vals))
;                                                                   (string->number (cadr mat-vals))
;                                                                   (string->number (caddr mat-vals))))
;;;;                                          ,(apply make-vec3d (string-split (material-prop mat "Kd")))
;                                          ,(make-vertex (string->number (vector-ref verts 0)))
;                                          ,(make-vertex (string->number (vector-ref verts 2)))
;                                          ,(make-vertex (string->number (vector-ref verts 3))))
;                                       prims)))))

(define (obj-material-switch)
  (set! cur-material (string->symbol (read-tok)))
  ;; (print-log "[obj-material-switch] Current Material: " cur-material)
)

(define (obj-attr)
  (let ((type (obj-declaration)))
    ;; (print-log "[obj-attr] Type: " type)
    (case type
      ((vertex) (obj-vertex))
      ((face) (obj-face))
      ((mtlswitch) (obj-material-switch)))))

(define (mat-create)
  (let ((name (read)))
    ;; (print-log "[mat-create] Name: " name)
    (set! materials (cons (cons name '())
                          materials))
    (set! cur-material name)))


;; JJS: Added comment token to clean up mat-attr
(define (mat-declaration)
  (token-map '(("newmtl" . new) ("#" . comment))))

(define (mat-property name)
;  (let ((prop (read-all))
  (let ((prop (read-number-list))
        (mat (assq cur-material materials)))
    ;; (print-log "[mat-property] Type: " name " [" prop "]")
    (set-cdr! mat (cons (cons name prop)
                        (cdr mat)))))

(define (mat-attr)
  (let ((type (mat-declaration)))
    ;; (print-log "[mat-attr] Type: " type)
    (case type
      ((new) (mat-create))
      ((comment) (read-all)) ;; (print-log "Comment: " (read-all)))
      (else (mat-property type))))) 

(define (load-obj f)
  (set! verts '())
  (set! prims '())
  (print-log "Loading mesh " f "...")
  (file-foreach (string-append f ".mtl") mat-attr)
  (file-foreach (string-append f ".obj") obj-attr)
  (print-log "Primitive count: " (length prims))
  (reverse prims))

