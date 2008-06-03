
(define-structure runtime-types (export (define-field :syntax)
                                        (define-object :syntax))
  (open prescheme
        ps-record-types
        scm-util)
  (for-syntax (open scheme
                    tables
                    runtime-types-support
                    scm-util))
  (files runtime-types))

(define-structure schemeray (export main)
  (open prescheme
        maybe-scheme
        ps-record-types
        ps-receive
        ps-flonums
        util
        runtime-types
        debug)
  (files schemeray))
