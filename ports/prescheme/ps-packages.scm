;; I may not need this
(define-syntax define-structure-stub
  (syntax-rules ()
    ((_ name)
     (define-structure name (export)
       (open prescheme)))))
;; ---

(define-structures ((util (export (define-entry-point :syntax))))
  (open prescheme)
  (files ps-util))

(define-structure debug (export breakpoint)
  (open prescheme)
  (begin
    (define-syntax breakpoint
      (syntax-rules ()
        ((_ expr ...)
         (begin))))))

(define-structure-stub maybe-scheme)
(define-structure-stub scm-util)
