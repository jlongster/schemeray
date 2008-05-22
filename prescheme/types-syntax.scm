
(define *type-field-table* (make-table))

(define (get-field-type name)
  (table-ref *type-field-table* name))

(define (maybe->string thing)
  (if (symbol? thing)
      (symbol->string thing)
      thing))

(define (symbol-append . things)
  (string->symbol
   (apply string-append (map maybe->string
                             things))))

(define *last-record-type-id* 0)


