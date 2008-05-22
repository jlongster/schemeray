
(define-structure types (export (define-field :syntax)
                                (define-object :syntax))
  (open prescheme
        ps-record-types)
  (for-syntax (open scheme tables types-syntax))
  (files types))

(define-structure schemeray (export main)
  (open prescheme
        ps-record-types
        ps-receive
        ps-flonums
        types)
  (files schemeray))
