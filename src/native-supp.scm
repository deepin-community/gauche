;; libnative.scm supplemental code.
;; Generated automatically by gen-native.scm.  DO NOT EDIT.

;; Register-only calling;; label    offset
;; func:         0
;; farg0:        8
;; farg1:       16
;; farg2:       24
;; farg3:       32
;; farg4:       40
;; farg5:       48
;; farg6:       56
;; farg7:       64
;; entry6f7:    72
;; entry6f6:    80
;; entry6f5:    88
;; entry6f4:    96
;; entry6f3:   104
;; entry6f2:   112
;; entry6f1:   120
;; entry6f0:   128
;; entry6:     136
;; entry5:     146
;; entry4:     156
;; entry3:     166
;; entry2:     176
;; entry1:     186
;; entry0:     196
;; end:        204
(define
 *amd64-call-reg-code*
 '#u8(#x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #xf2 #xf #x10 #x3d #xf0 #xff #xff #xff #xf2 #xf #x10
      #x35 #xe0 #xff #xff #xff #xf2 #xf #x10 #x2d #xd0 #xff #xff #xff #xf2
      #xf #x10 #x25 #xc0 #xff #xff #xff #xf2 #xf #x10 #x1d #xb0 #xff #xff
      #xff #xf2 #xf #x10 #x15 #xa0 #xff #xff #xff #xf2 #xf #x10 #xd #x90
      #xff #xff #xff #xf2 #xf #x10 #x5 #x80 #xff #xff #xff #x49 #xb9 #x89
      #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x49 #xb8 #x89 #x67 #x45 #x23 #x1 #x0
      #x0 #x0 #x48 #xb9 #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x48 #xba #x89
      #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x48 #xbe #x89 #x67 #x45 #x23 #x1 #x0
      #x0 #x0 #x48 #xbf #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0 #xb0 #x0 #xff
      #x25 #x34 #xff #xff #xff))
;; Spill-to-stack case;; label    offset
;; func:         0
;; farg0:        8
;; farg1:       16
;; farg2:       24
;; farg3:       32
;; farg4:       40
;; farg5:       48
;; farg6:       56
;; farg7:       64
;; entry6f7:    72
;; entry6f6:    80
;; entry6f5:    88
;; entry6f4:    96
;; entry6f3:   104
;; entry6f2:   112
;; entry6f1:   120
;; entry6f0:   128
;; entry6:     136
;; entry5:     146
;; entry4:     156
;; entry3:     166
;; init:       176
;; loop:       190
;; entry2:     204
;; entry1:     214
;; entry0:     224
;; epilogue:   232
;; spill:      240
(define
 *amd64-call-spill-code*
 '#u8(#x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #xf2 #xf #x10 #x3d #xf0 #xff #xff #xff #xf2 #xf #x10
      #x35 #xe0 #xff #xff #xff #xf2 #xf #x10 #x2d #xd0 #xff #xff #xff #xf2
      #xf #x10 #x25 #xc0 #xff #xff #xff #xf2 #xf #x10 #x1d #xb0 #xff #xff
      #xff #xf2 #xf #x10 #x15 #xa0 #xff #xff #xff #xf2 #xf #x10 #xd #x90
      #xff #xff #xff #xf2 #xf #x10 #x5 #x80 #xff #xff #xff #x49 #xb9 #x89
      #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x49 #xb8 #x89 #x67 #x45 #x23 #x1 #x0
      #x0 #x0 #x48 #xb9 #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x48 #xba #x89
      #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x48 #xc7 #xc0 #x67 #x45 #x23 #x1
      #x48 #x8d #x35 #x32 #x0 #x0 #x0 #x48 #x8b #x3e #x57 #x48 #x83 #xc6
      #x8 #x48 #x83 #xe8 #x8 #x75 #xf2 #x48 #xbe #x89 #x67 #x45 #x23 #x1
      #x0 #x0 #x0 #x48 #xbf #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0 #xb0 #x0
      #xff #x15 #x18 #xff #xff #xff #x48 #x81 #xc4 #x67 #x45 #x23 #x1 #xc3))
(define
 call-amd64
 (^
  (ptr args rettype)
  (let*
   ((num-iargs (count (^p (memq (car p) '(o p i s))) args))
    (num-fargs (count (^p (memq (car p) '(f d))) args))
    (num-spills (+ (max 0 (- num-iargs 6)) (max 0 (- num-fargs 8)))))
   (if
    (zero? num-spills)
    (call-amd64-regs ptr args num-iargs num-fargs rettype)
    (call-amd64-spill ptr args (min num-iargs 6) (min num-fargs 8) num-spills
     rettype)))))
(define
 call-amd64-regs
 (let
  ((%%call-native (module-binding-ref 'gauche.bootstrap '%%call-native))
   (entry-offsets '(196 186 176 166 156 146 136 128 120 112 104 96 88 80 72))
   (farg-offsets '(8 16 24 32 40 48 56 64)))
  (^
   (ptr args num-iargs num-fargs rettype)
   (let*
    ((effective-nargs (if (zero? num-fargs) num-iargs (+ 6 num-fargs)))
     (entry (~ entry-offsets effective-nargs))
     (patcher
      (let
       loop
       ((args args) (icount 0) (fcount 0) (r '()))
       (cond
        ((null? args) r)
        ((memq (caar args) '(o p i s))
         (loop (cdr args) (+ icount 1) fcount
          (cons `(,(+ (~ entry-offsets (+ 1 icount)) 2) ,@(car args)) r)))
        ((memq (caar args) '(f d))
         (loop (cdr args) icount (+ fcount 1)
          (cons `(,(~ farg-offsets fcount) ,@(car args)) r)))
        (else (error "bad arg entry:" (car args)))))))
    (%%call-native entry 0 *amd64-call-reg-code* entry 204 entry
     (list* `(0 p ,ptr) `(,(+ (~ entry-offsets 0) 1) b ,num-fargs) patcher)
     rettype)))))
(define
 call-amd64-spill
 (let
  ((%%call-native (module-binding-ref 'gauche.bootstrap '%%call-native))
   (entry-offsets '(224 214 204 166 156 146 136 128 120 112 104 96 88 80 72))
   (farg-offsets '(8 16 24 32 40 48 56 64))
   (spill-offset (^n (+ 240 (* n 8)))))
  (^
   (ptr args num-iargs num-fargs num-spills rettype)
   (let*
    ((effective-nargs (if (zero? num-fargs) num-iargs (+ 6 num-fargs)))
     (entry (~ entry-offsets effective-nargs))
     (patcher
      (let
       loop
       ((args args) (icount 0) (fcount 0) (scount 0) (r '()))
       (cond
        ((null? args) r)
        ((memq (caar args) '(o p i s))
         (if
          (< icount 6)
          (loop (cdr args) (+ icount 1) fcount scount
           (cons `(,(+ (~ entry-offsets (+ icount 1)) 2) ,@(car args)) r))
          (loop (cdr args) (+ icount 1) fcount (+ scount 1)
           (cons `(,(spill-offset (- num-spills scount 1)) ,@(car args)) r))))
        ((memq (caar args) '(d))
         (if
          (< fcount 8)
          (loop (cdr args) icount (+ fcount 1) scount
           (cons `(,(~ farg-offsets fcount) ,@(car args)) r))
          (loop (cdr args) icount (+ fcount 1) (+ scount 1)
           (cons `(,(spill-offset (- num-spills scount 1)) ,@(car args)) r))))
        (else (error "bad arg entry:" (car args)))))))
    (%%call-native
     entry
     (+ 240 (* num-spills 8))
     *amd64-call-spill-code*
     entry
     240
     entry
     (list* `(0 p ,ptr) `(,(+ (~ entry-offsets 0) 1) b ,num-fargs)
      `(,'179 i32 ,(* 8 num-spills)) `(,'235 i32 ,(* 8 num-spills)) patcher)
     rettype)))))
;; Register-only calling;; label    offset
;; func:         0
;; farg0:        8
;; farg1:       16
;; farg2:       24
;; farg3:       32
;; entry4f3:    40
;; entry4f2:    48
;; entry4f1:    56
;; entry4f0:    64
;; entry4:      72
;; entry3:      82
;; entry2:      92
;; entry1:     102
;; entry0:     112
;; end:        127
(define
 *winx64-call-reg-code*
 '#u8(#x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0 #x0
      #x0 #x0 #x0 #x0 #x0 #x0 #xf2 #xf #x10 #x1d #xf0 #xff #xff #xff #xf2
      #xf #x10 #x15 #xe0 #xff #xff #xff #xf2 #xf #x10 #xd #xd0 #xff #xff
      #xff #xf2 #xf #x10 #x5 #xc0 #xff #xff #xff #x49 #xb9 #x89 #x67 #x45
      #x23 #x1 #x0 #x0 #x0 #x49 #xb8 #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0
      #x48 #xba #x89 #x67 #x45 #x23 #x1 #x0 #x0 #x0 #x48 #xb9 #x89 #x67
      #x45 #x23 #x1 #x0 #x0 #x0 #x48 #x83 #xc4 #x20 #xff #x15 #x86 #xff
      #xff #xff #x48 #x83 #xc4 #xe0 #xc3))
(define
 call-winx64
 (^
  (ptr args rettype)
  (let*
   ((num-iargs (count (^p (memq (car p) '(o p i s))) args))
    (num-fargs (count (^p (memq (car p) '(f d))) args))
    (num-spills (+ (max 0 (- num-iargs 4)) (max 0 (- num-fargs 4)))))
   (if (zero? num-spills)
    (call-amd64-regs ptr args num-iargs num-fargs rettype)
    (error "too many arguments (for now)")))))
(define
 call-winx64-regs
 (let
  ((%%call-native (module-binding-ref 'gauche.bootstrap '%%call-native))
   (entry-offsets '(112 102 92 82 72 64 56 48 40)) (farg-offsets '(8 16 24 32)))
  (^
   (ptr args num-iargs num-fargs rettype)
   (let*
    ((effective-nargs (if (zero? num-fargs) num-iargs (+ 4 num-fargs)))
     (entry (~ entry-offsets effective-nargs))
     (patcher
      (let
       loop
       ((args args) (icount 0) (fcount 0) (r '()))
       (cond
        ((null? args) r)
        ((memq (caar args) '(o p i s))
         (loop (cdr args) (+ icount 1) fcount
          (cons `(,(+ (~ entry-offsets (+ 1 icount)) 2) ,@(car args)) r)))
        ((memq (caar args) '(f d))
         (loop (cdr args) icount (+ fcount 1)
          (cons `(,(~ farg-offsets fcount) ,@(car args)) r)))
        (else (error "bad arg entry:" (car args)))))))
    (%%call-native entry 0 *winx64-call-reg-code* entry 127 entry
     (list* `(0 p ,ptr) `(,(+ (~ entry-offsets 0) 1) b ,num-fargs) patcher)
     rettype)))))
