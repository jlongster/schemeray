
(define (real->percentage n)
  (inexact->exact (round (* n 100))))

(define (real->uint8 n)
  (inexact->exact (round (* n 255.0))))

(define *message-port* (current-output-port))

(define (message . rest)
  (for-each (lambda (s) (display s *message-port*)) rest)
  (newline *message-port*))

(define (write-color . parts)
  (for-each (lambda (part)
              (write-byte (real->uint8 part)))
            parts))

(define (display-strings . rest)
  (display (apply string-append rest)))
