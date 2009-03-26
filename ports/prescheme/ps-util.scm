
(define-syntax define-entry-point
  (syntax-rules (init:)
    ((_ (name) (init: init-expr) expr ...)
     (define (name argc argv)
       (let ((type1 (+ 0 argc))
             (type2 (string-length (vector-ref argv 0))))
         init-expr
         expr ...)))
    ((_ (name) expr ...)
     (define-entry-point (name)
       (init: (lambda () #t))
       expr ...))))
