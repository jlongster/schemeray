
(define (breakpoint . rest)
  (command-loop (make-condition 'Breakpoint rest)))
