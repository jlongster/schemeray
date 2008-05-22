
(define-syntax declare
  (syntax-rules ()
    ((_ expr ...)
     (begin))))

(define fixnum->flonum exact->inexact)

(define (real->percentage n)
  (inexact->exact (round (* n 100))))

(define (real->uint8 n)
  (inexact->exact (round (* (saturate n) 255.0))))


(define-record-type window :window
  (make-window x y)
  window?
  (x window-x)
  (y window-y))


(define (read-all port)
  (let loop ((char (read-char port))
             (acc '()))
    (if (eq? char (eof-object))
        (list->string (reverse acc))
        (loop (read-char port) (cons char acc)))))

(define (read-line port . del)
  (let ((del (if (pair? del) (car del) #\newline)))
    (let loop ((char (read-char port))
               (acc '()))
      (if (or (char=? char del)
              (eq? char (eof-object)))
          (list->string (reverse acc))
          (loop (read-char port) (cons char acc))))))

(define-syntax with-input-from-string
  (syntax-rules ()
    ((_ str thunk)
     (let-fluid current-input-port
         (make-string-input-port str)
       thunk))))

(define (write-color . parts)
  (for-each (lambda (part)
              (write-byte (real->uint8 part)))
            parts))
