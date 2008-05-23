
(define-structure types (export (define-field :syntax)
                                (define-object :syntax))
  (open prescheme
        ps-record-types
        scm-util)
  (for-syntax (open scheme tables scm-types scm-util))
  (files types))

(define-structure schemeray (export main)
  (open prescheme
        ps-record-types
        ps-receive
        ps-flonums
        types        
        scm-scheme)
  (files schemeray))
