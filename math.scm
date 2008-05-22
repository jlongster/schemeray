

(include "vectors.scm")

(define (saturate n)
  (flmin 1.0 (flmax 0.0 n)))
