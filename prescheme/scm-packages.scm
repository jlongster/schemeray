
(define-structure scm-types (export *type-field-table*
                                    *last-record-type-id*
                                    get-field-type)
  (open scheme tables)
  (files scm-types))


(define-structure scm-util (export maybe->string
                                   symbol-append
                                   copy-record
                                   change-record-type)
  (open scheme records)
  (files scm-util))

(define scm-scheme scheme)
