
(define write-float
  (external "write_real"
            (=> (float) unit)
            display))

(define flsqrt
  (external "sqrt"
            (=> (float) float)))

(define (main)
  (write-float (fl/ 1.0 5.0))
  (write-float (fl* 1.0 5.0))
  (write-float (fl/ 1.0 (flsqrt 5.0)))
  (write-float (fl/ (flsqrt 1.0) (flsqrt 5.0))))
