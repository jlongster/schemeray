
(define-syntax configure
  (syntax-rules ()
    ((_ (name data))
     (define name data))
    ((_ expr next-expr ...)
     (begin
       (configure expr)
       (configure next-expr ...)))))
