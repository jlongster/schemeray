


(define-structure schemeray
  (export make-image)
  (open (modify scheme (alias (vector f64vector)
                      (vector-ref f64vector-ref)
                      (sqrt flsqrt)
                      (/ fl/)
                      (+ fl+)
                      (- fl-)
                      (* fl*)
                      (/ fx/)
                      (+ fx+)
                      (- fx-)
                      (* fx*)
                      (load include)
                      (min flmin)
                      (max flmax)
                      (remainder flremainder)
                      (remainder fxremainder)
                      (expt flexpt)
                      (zero? flzero?)
                      (quotient fxquotient)
                      (zero? fxzero?)
                      (positive? flpositive?)
                      (negative? flnegative?)
                      (< fx<)
                      (< fl<)
                      (> fl>)
                      (= fl=)
                      (<= fl<=)
                      (>= fl>=)))
        scheme-level-1
        extended-ports
        simple-signals
        fluids
        srfi-1
        define-record-types
        primitives)
  (files scheme48-compat schemeray obj-file-parser))
