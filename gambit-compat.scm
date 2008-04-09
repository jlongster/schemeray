
(define flonum->fixnum ##flonum.->fixnum)

(define (real->u8 n)
  (flonum->fixnum (flmax 0. (flmin 255. (flfloor n)))))

(define (real->percentage n)
  (flonum->fixnum (flfloor (fl* 100.0 n))))

(define (write-color . parts)
  (let ((w (lambda (c)
             (write-u8 (real->u8 (fl* c 255.0))))))
    (for-each w parts)))

(define-structure window x y)

(define (eof-object) #!eof)
