
(define *type-field-table* (make-table))

(define (get-field-type name)
  (table-ref *type-field-table* name))

(define *last-record-type-id* 0)


