
(define-syntax declare
  (syntax-rules ()
    ((_ expr ...)
     (begin))))

(define fixnum->flonum exact->inexact)

(define (real->percentage n)
  (inexact->exact (round (* n 100))))

(define (real->uint8 n)
  (inexact->exact (round (* n 255.0))))


(define-record-type window :window
  (make-window x y)
  window?
  (x window-x)
  (y window-y))
