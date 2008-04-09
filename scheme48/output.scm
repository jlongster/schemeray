
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
