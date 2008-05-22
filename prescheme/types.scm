
(define-syntax define-field
  (lambda (f r c)
    (let ((name (cadr f))
          (type (caddr f)))
      (table-set! *type-field-table* name type))
    '(begin)))

(define-syntax define-object
  (lambda (f r c)

    (define (construct-type-field type-name field-name type)
      `(,field-name
        ,type
        ,(symbol-append type-name "-" field-name)))

    (let* ((name (cadr f))
           (type-desc (caddr f))
           (fields (cdddr f))
           (bare-fields (map (lambda (f)
                               (if (pair? f) (car f) f))
                             fields))
           (id *last-record-type-id*)
           (constructor (symbol-append "really-make-" name))
           (maker (symbol-append "make-" name))
           (predicator (symbol-append name "?"))
           (typifier (symbol-append "object->" name))
           (untypifier (symbol-append name "->object")))
      (set! *last-record-type-id* (+ *last-record-type-id* 1))
      `(begin
         (define-record-type ,name ,type-desc
           (,constructor ,@(cons 'type bare-fields))
           ,(construct-type-field name 'type 'integer)
           ,@(map (lambda (field)
                    (let ((field-name (if (pair? field)
                                          (car field)
                                          field))
                          (field-type (if (pair? field)
                                          (cadr field)
                                          (get-field-type field))))
                      (construct-type-field name field-name field-type)))
                  fields))

         (define (,maker ,@bare-fields)
           ;; Cast it to the generic type before releasing
           ;; it to the wild
           (,untypifier (,constructor ,@(cons id bare-fields))))

         (define (,predicator o)
           ;; Note that we can only test generic objects,
           ;; but if it's already typed we would know it
           (= (object-type o) ,id))

         (define ,untypifier
           (external "(struct object*)" (=> (,name) object)))

         (define ,typifier
           (external "(struct light*)" (=> (object) ,name)))))))

