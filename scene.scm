
(define (grid-of-spheres bottom-left-coord normal count-x count-y radius)
  (let ((dX (vec3d-cross normal
                         (make-vec3d 0.0 1.0 0.0)))
        (dY (vec3d-cross dX
                         normal))
        (count (* count-x count-y)))
    (unfold (lambda (i) (= i count))
            (lambda (i)
              (let* ((pos (vec3d-add bottom-left-coord (* dX (remainder i count-x))))
                     (pos (vec3d-add pos (* dY (quotient i count-y))))
                     (color (make-vec3d .8 (+ .2 (/ i (* count 2))) .8)))
                `(sphere (@ (color ,color))
                         (@ (position ,pos))
                         (@ (radius ,radius)))))
            (lambda (i) (+ i 1))
            0)))
