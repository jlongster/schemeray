
(define-structure runtime-types-support (export *type-field-table*
                                                *last-record-type-id*)
  (open scheme tables)
  (files runtime-types-support))

(define-structures ((scm-util (export maybe->string
                                      symbol-append
                                      copy-record
                                      change-record-type))
                    (util (export (define-entry-point :syntax))))
  (open scheme records)
  (files scm-util))

(define-structure debug (export breakpoint)
  (open scheme
        signals
        simple-conditions
        command-processor)
  (files scm-debug))

(define maybe-scheme scheme)
