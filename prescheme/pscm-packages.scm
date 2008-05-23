
(define-syntax define-structure-stub
  (syntax-rules ()
    ((_ name)
     (define-structure name (export)
       (open prescheme)))))

(define-structure-stub scm-util)
(define-structure-stub scm-scheme)
