
;; Interfaces

(define-interface output-interface
  (export real->percentage
          real->uint8
          message
          write-color
          display-strings
          *message-port*))

(define-interface vectors-interface
  (export make-vec2d
          vec2d-x
          vec2d-y
          make-vec3d
          vec3d-x
          vec3d-y
          vec3d-z

          (fields :syntax)
          vec3d-add
          vec3d-sub
          vec3d-component-mul
          vec3d-scalar-mul
          vec3d-length
          vec3d-unit
          vec3d-dot
          vec3d-cross
          vec3d-inverse))

(define-interface parsing-interface
  (export load-obj))

(define-interface schemeray-interface
  (export saturate
          make-image))


;; Packages

(define-structure parsing parsing-interface
  (open scheme
        channel-ports
        extended-ports
        fluids
        vectors
        simple-signals
        output
        primitives)
  (files obj-file-parser))

(define-structure output output-interface
  (open scheme
        fluids
        primitives)
  (files output))

(define-structure vectors vectors-interface
  (open srfi-71
        scheme
        define-record-types)
  (files vectors))

(define-structure schemeray schemeray-interface
  (open scheme
        scheme-level-1
        fluids
        srfi-1
        ascii
        define-record-types
        output
        vectors
        parsing)
  (files schemeray))
