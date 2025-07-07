;; -*- coding:utf-8 -*-
;;
;; Test for SRFIs
;;

(use gauche.test)
(use compat.chibi-test)

(test-start "SRFIs")

;; NB: For this test, we 'use' and run test-module for the srfis that
;; are supported as built-in.  Portable programs would explicitly use them so
;; we need to make sure they're available as use form, and their exports
;; are consistent.

;; Also, some srfis shadows built-in bindings.  To avoid unwanted
;; side-effects, tests of each srfi is enclosed in a dedicated module.

;;-----------------------------------------------------------------------
;; Feature-based conditional expansion
(test-section "SRFI-0")

(define-module srfi-0-tests
  (use gauche.test)
  (use srfi.0)
  (test-module 'srfi.0)

  (test* "cond-expand" 0
         (cond-expand [(library srfi.0) 0] [else 1]))
  (test* "cond-expand" 1
         (cond-expand [hogehoge 0] [else 1]))
  (test* "cond-expand" 0
         (cond-expand [(and (library srfi.0) (library srfi.1)) 0] [else 1]))
  (test* "cond-expand" #t
         (cond-expand [(and (library srfi.2) (library srfi.1))
                       (use srfi.1) (procedure? xcons)]
                      [else #f]))
  (test* "cond-expand" 0
         (cond-expand [(or hogehoge (library srfi.1)) 0] [else 1]))
  (test* "cond-expand" 0
         (cond-expand [(or (library srfi.1) hogehoge) 0] [else 1]))
  (test* "cond-expand" 1
         (cond-expand [(or (not (library srfi.1)) hogehoge) 0] [else 1]))
  (test* "cond-expand" 0
         (cond-expand [gauche 0] [else 1]))
  (test* "cond-expand" 0
         (cond-expand [scm -1] [gauche 0] [else 1]))
  (test* "cond-expand (library)" 0
         (cond-expand [(library (gauche time)) 0] [else 1]))
  )

;;-----------------------------------------------------------------------
;; SRFI-1 is scheme.list

;;-----------------------------------------------------------------------
;; And-let*
(test-section "SRFI-2")

(define-module srfi-2-tests
  (use gauche.test)
  (use srfi.2)
  (test-module 'srfi.2)
  (define (srfi-2-look-up key alist)
    (and-let* ([x (assq key alist)]) (cdr x)))
  (test* "and-let*" 3
         (srfi-2-look-up 'c '((a . 1) (b . 2) (c . 3))))
  (test* "and-let*" #f
         (srfi-2-look-up 'd '((a . 1) (b . 2) (c . 3))))
  (test* "and-let*" 3
         (let ([x 3])
           (and-let* ([(positive? x)]
                      [y x])
             y)))
  (test* "and-let*" #f
         (let ([x -3])
           (and-let* ([(positive? x)]
                      [y x])
             y)))

  (test* "empty and-let*" #t (and-let* ()))
  (test* "empty body and-let* var" 1 (let ((x 1)) (and-let* (x))))
  (test* "empty body and-let* expr" 2 (let ((x 1)) (and-let* ([ (+ x x) ]))))
  (test* "empty body and-let* (var expr)" 2
         (let ((x 1)) (and-let* ([y (+ x x)]))))
  )

;;-----------------------------------------------------------------------
;; A compatible let form with signatures and rest arguments

(test-section "SRFI-5")

(define-module srfi-5-test
  (use gauche.test)
  (use srfi.5)
  (test-module 'srfi.5)

  (test* "let - standard" 3
         (let ([x 1] [y 2])
           (let ()
             (+ x y))))

  (test* "let - standard" 1
         (let ([x 1] [y 2])
           (let ([y x] [x y])
             (- x y))))

  (test* "let - standard" 1
         (let ()
           (define x 1)
           (* x x)))

  (test* "let - standard, named" 55
         (let loop ([x 1] [sum 0])
           (if (> x 10) sum (loop (+ x 1) (+ sum x)))))

  (test* "let - signature style" 55
         (let (loop [x 1] [sum 0])
           (if (> x 10) sum (loop (+ x 1) (+ sum x)))))

  (test* "let - signature style" #t
         (let (loop)
           (procedure? loop)))

  (test* "let - rest binding" '(0 1 (2 3 4))
         (let ([x 0] [y 1] . [z 2 3 4]) (list x y z)))

  (test* "let - rest binding, named" '((2 3 4) 0 (1))
         (let loop ([x 0] [y 1] . [z 2 3 4])
           (if (list? x) (list x y z) (loop z x y))))
  )

;;-----------------------------------------------------------------------
;; Feature-based program configuration language
(test-section "SRFI-7")

;; NB: SRFI-7 is a "meta-language".   The 'program' form doesn't need
;; to be evaluated within Scheme---an implementation can use a preprocessor
;; to produce an evaluatable form from the 'program' form.
;; Gauche directly expands it within the macro processor and evaluates it.
;;
;; These tests also relies on how Gauche compiles the empty begin form.
;; See the notes in lib/srfi-7.scm for the details.

(define-module srfi-7-tests
  (use gauche.test)

  (sys-system "rm -rf test.o")
  (sys-system "mkdir test.o")
  (with-output-to-file "test.o/a.scm"
    (^[] (write '(define x 3))))
  (with-output-to-file "test.o/b.scm"
    (^[] (write '(define (y) (+ x x)))))

  (test* "program (empty)" 'ok
         (begin (eval '(program) (make-module #f))
                'ok))

  (test* "program (requires, code)" #t
         (eval '(program
                 (requires srfi-1)
                 (code (procedure? list-tabulate)))
               (make-module #f)))
  (test* "program (requires, multiple code)" '(1 2 1)
         (eval '(program
                 (requires srfi-1)
                 (code (define foo (circular-list 1 2)))
                 (requires srfi-2)
                 (code (and-let* ([x (circular-list? foo)])
                         (take foo 3))))
               (make-module #f)))
  (test* "program (requires, no such feature)" (test-error)
         (eval '(program
                 (requires no-such-feature))
               (make-module #f)))
  (test* "program (files (empty))" '(1 . 2)
         (eval '(program
                 (files)
                 (code (cons 1 2)))
               (make-module #f)))
  (test* "program (files)" 6
         (eval '(program
                 (files "./test.o/a")
                 (files "./test.o/b")
                 (code (y)))
               (make-module #f)))
  (test* "program (files (multi))" 6
         (eval '(program
                 (files "./test.o/a" "./test.o/b")
                 (code (y)))
               (make-module #f)))
  (test* "program (feature-cond)" 2
         (eval '(program
                 (feature-cond
                  [(and srfi-1 srfi-2) (code (define x 1))]
                  [else (code (define x 2))])
                 (code (+ x x)))
               (make-module #f)))
  (test* "program (feature-cond)" 4
         (eval '(program
                 (feature-cond
                  [(and srfi-1 no-such-feature) (code (define x 1))]
                  [else (code (define x 2))])
                 (code (+ x x)))
               (make-module #f)))
  (test* "program (feature-cond)" 6
         (eval '(program
                 (feature-cond
                  [(or srfi-1 no-such-feature) (code (define x 3))]
                  [else (code (define x 2))])
                 (code (+ x x)))
               (make-module #f)))
  (test* "program (feature-cond w/o else)" (test-error)
         (eval '(program
                 (feature-cond
                  [(not srfi-1) (code (define x 5))]))
               (make-module #f)))

  (sys-system "rm -rf test.o")
  )

;;-----------------------------------------------------------------------
;; SRFI-14 charset : moved to ext/scheme

;;-----------------------------------------------------------------------
;; SRFI-16 case-lambda : moved to procedure.scm (builtin)

;;-----------------------------------------------------------------------
;; Generalized set!
(test-section "SRFI-17")

(define-module srfi-17-tests
  (use gauche.test)
  (use srfi.17)
  (test-module 'srfi.17)

  (define x (cons 1 2))
  (test "(setter car)" '((3 3) . 2)
        (^[] (set! (car x) (list 3 3)) x))
  (test "(setter cdr)" '((3 3) 4 5)
        (^[] (set! (cdr x) (list 4 5)) x))
  (test "(setter caar)" '(((8 9) 3) 4 5)
        (^[] (set! (caar x) (list 8 9)) x))
  (test "(setter cadr)" '(((8 9) 3) (7 6) 5)
        (^[] (set! (cadr x) (list 7 6)) x))
  (test "(setter cdar)" '(((8 9) 4 5) (7 6) 5)
        (^[] (set! (cdar x) (list 4 5)) x))
  (test "(setter cddr)" '(((8 9) 4 5) (7 6) 11 12)
        (^[] (set! (cddr x) (list 11 12)) x))
  (test "(setter caaar)" '((((13 14) 9) 4 5) (7 6) 11 12)
        (^[] (set! (caaar x) (list 13 14)) x))
  (test "(setter caadr)" '((((13 14) 9) 4 5) ((0 1) 6) 11 12)
        (^[] (set! (caadr x) (list 0 1)) x))
  (test "(setter cadar)" '((((13 14) 9) (2 3) 5) ((0 1) 6) 11 12)
        (^[] (set! (cadar x) (list 2 3)) x))
  (test "(setter caddr)" '((((13 14) 9) (2 3) 5) ((0 1) 6) (4 5) 12)
        (^[] (set! (caddr x) (list 4 5)) x))
  (test "(setter cdaar)" '((((13 14) 5 6) (2 3) 5) ((0 1) 6) (4 5) 12)
        (^[] (set! (cdaar x) (list 5 6)) x))
  (test "(setter cdadr)" '((((13 14) 5 6) (2 3) 5) ((0 1) 7 8) (4 5) 12)
        (^[] (set! (cdadr x) (list 7 8)) x))
  (test "(setter cddar)" '((((13 14) 5 6) (2 3) 9 10) ((0 1) 7 8) (4 5) 12)
        (^[] (set! (cddar x) (list 9 10)) x))
  (test "(setter cdddr)" '((((13 14) 5 6) (2 3) 9 10) ((0 1) 7 8) (4 5) -1 -2)
        (^[] (set! (cdddr x) (list -1 -2)) x))
  (test "(setter caaaar)" '(((((1 3) 14) 5 6) (2 3) 9 10) ((0 1) 7 8) (4 5) -1 -2)
        (^[] (set! (caaaar x) (list 1 3)) x))
  (test "(setter caaadr)" '(((((1 3) 14) 5 6) (2 3) 9 10) (((2 3) 1) 7 8) (4 5) -1 -2)
        (^[] (set! (caaadr x) (list 2 3)) x))
  (test "(setter caadar)" '(((((1 3) 14) 5 6) ((0 1) 3) 9 10) (((2 3) 1) 7 8) (4 5) -1 -2)
        (^[] (set! (caadar x) (list 0 1)) x))
  (test "(setter caaddr)" '(((((1 3) 14) 5 6) ((0 1) 3) 9 10) (((2 3) 1) 7 8) ((0 1) 5) -1 -2)
        (^[] (set! (caaddr x) (list 0 1)) x))
  (test "(setter cadaar)" '(((((1 3) 14) (0 1) 6) ((0 1) 3) 9 10) (((2 3) 1) 7 8) ((0 1) 5) -1 -2)
        (^[] (set! (cadaar x) (list 0 1)) x))
  (test "(setter cadadr)" '(((((1 3) 14) (0 1) 6) ((0 1) 3) 9 10) (((2 3) 1) (0 1) 8) ((0 1) 5) -1 -2)
        (^[] (set! (cadadr x) (list 0 1)) x))
  (test "(setter caddar)" '(((((1 3) 14) (0 1) 6) ((0 1) 3) (0 1) 10) (((2 3) 1) (0 1) 8) ((0 1) 5) -1 -2)
        (^[] (set! (caddar x) (list 0 1)) x))
  (test "(setter cadddr)" '(((((1 3) 14) (0 1) 6) ((0 1) 3) (0 1) 10) (((2 3) 1) (0 1) 8) ((0 1) 5) (0 1) -2)
        (^[] (set! (cadddr x) (list 0 1)) x))
  (test "(setter cdaaar)" '(((((1 3) 0 1) (0 1) 6) ((0 1) 3) (0 1) 10) (((2 3) 1) (0 1) 8) ((0 1) 5) (0 1) -2)
        (^[] (set! (cdaaar x) (list 0 1)) x))
  (test "(setter cdaadr)" '(((((1 3) 0 1) (0 1) 6) ((0 1) 3) (0 1) 10) (((2 3) 0 1) (0 1) 8) ((0 1) 5) (0 1) -2)
        (^[] (set! (cdaadr x) (list 0 1)) x))
  (test "(setter cdadar)" '(((((1 3) 0 1) (0 1) 6) ((0 1) 0 1) (0 1) 10) (((2 3) 0 1) (0 1) 8) ((0 1) 5) (0 1) -2)
        (^[] (set! (cdadar x) (list 0 1)) x))
  (test "(setter cdaddr)" '(((((1 3) 0 1) (0 1) 6) ((0 1) 0 1) (0 1) 10) (((2 3) 0 1) (0 1) 8) ((0 1) 0 1) (0 1) -2)
        (^[] (set! (cdaddr x) (list 0 1)) x))
  (test "(setter cddaar)" '(((((1 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) 10) (((2 3) 0 1) (0 1) 8) ((0 1) 0 1) (0 1) -2)
        (^[] (set! (cddaar x) (list 0 1)) x))
  (test "(setter cddadr)" '(((((1 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) 10) (((2 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) -2)
        (^[] (set! (cddadr x) (list 0 1)) x))
  (test "(setter cdddar)" '(((((1 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) 0 1) (((2 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) -2)
        (^[] (set! (cdddar x) (list 0 1)) x))
  (test "(setter cddddr)" '(((((1 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) 0 1) (((2 3) 0 1) (0 1) 0 1) ((0 1) 0 1) (0 1) 0 1)
        (^[] (set! (cddddr x) (list 0 1)) x))

  (define x (vector 1 2 3 4 5))
  (test "(setter vector-ref)" '#(1 2 3 #f 5)
        (^[] (set! (vector-ref x 3) #f) x))

  (define x (string-copy "abcde"))
  (test "(setter string-ref)" "abcQe"
        (^[] (set! (string-ref x 3) #\Q) x))

  (define (set-kar! p v) (set-car! p v))
  (define kar (getter-with-setter (^p (car p)) set-kar!))

  (define x (cons 1 2))
  (test "(setter kar)" '(3 . 2) (^[] (set! (kar x) 3) x))

  ;; see if it works as the normal set!
  (test "set!" '#f (^[] (set! x #f) x))
  )

;;-----------------------------------------------------------------------
;; Notation for specializing parameters without currying

(test-section "SRFI-26")

(define-module srfi-26-tests
  (use gauche.test)
  (use srfi.26)
  (test-module 'srfi.26)

  ;; The test cases are taken from the SRFI-26 test program by Sebastian Egner.
  (test* "cut list" '() ((cut list)))
  (test* "cut list <...>" '() ((cut list <...>)))
  (test* "cut list 1" '(1) ((cut list 1)))
  (test* "cut list <>" '(1) ((cut list <>) 1))
  (test* "cut list <...>" '(1) ((cut list <...>) 1))
  (test* "cut list 1 2" '(1 2) ((cut list 1 2)))
  (test* "cut list 1 <>" '(1 2) ((cut list 1 <>) 2))
  (test* "cut list 1 <...>" '(1 2) ((cut list 1 <...>) 2))
  (test* "cut list 1 <...>" '(1 2 3 4) ((cut list 1 <...>) 2 3 4))
  (test* "cut list 1 <> 3 <>" '(1 2 3 4) ((cut list 1 <> 3 <>) 2 4))
  (test* "cut list 1 <> 3 <...>" '(1 2 3 4 5 6) ((cut list 1 <> 3 <...>) 2 4 5 6))
  (test* "cut (eval order)" '(ok)
         (let* ([x 'wrong] [y (cut list x)]) (set! x 'ok) (y)))
  (test* "cut (eval order)" 2
         (let ([a 0])
           (map (cut + (begin (set! a (+ a 1)) a) <>)
                '(1 2))
           a))

  (test* "cute list" '() ((cute list)))
  (test* "cute list <...>" '() ((cute list <...>)))
  (test* "cute list 1" '(1) ((cute list 1)))
  (test* "cute list <>" '(1) ((cute list <>) 1))
  (test* "cute list <...>" '(1) ((cute list <...>) 1))
  (test* "cute list 1 2" '(1 2) ((cute list 1 2)))
  (test* "cute list 1 <>" '(1 2) ((cute list 1 <>) 2))
  (test* "cute list 1 <...>" '(1 2) ((cute list 1 <...>) 2))
  (test* "cute list 1 <...>" '(1 2 3 4) ((cute list 1 <...>) 2 3 4))
  (test* "cute list 1 <> 3 <>" '(1 2 3 4) ((cute list 1 <> 3 <>) 2 4))
  (test* "cute list 1 <> 3 <...>" '(1 2 3 4 5 6) ((cute list 1 <> 3 <...>) 2 4 5 6))
  (test* "cute (eval order)" '(ok)
         (let* ([x 'ok] [y (cute list x)]) (set! x 'wrong) (y)))
  (test* "cute (eval order)" 1
         (let ([a 0])
           (map (cute + (begin (set! a (+ a 1)) a) <>)
                '(1 2))
           a))
  )

;;-----------------------------------------------------------------------
;; SRFI-27 depends on mt-random, and will be tested in ext/srfi.

;;-----------------------------------------------------------------------
;; Localization

(test-section "SRFI-29")

(define-module srfi-29-tests
  (use gauche.test)
  (use srfi.29)
  (test-module 'srfi.29)

  ;; test taken from the example of SRFI-29 document.
  (let ((translations
         '(((en) . ((time . "Its ~a, ~a.")
                    (goodbye . "Goodbye, ~a.")))
           ((fr) . ((time . "~1@*~a, c'est ~a.")
                    (goodbye . "Au revoir, ~a."))))))
    (for-each (^[translation]
                (let ([bundle-name (cons 'hello-program (car translation))])
                  (if (not (load-bundle! bundle-name))
                    (begin
                      (declare-bundle! bundle-name (cdr translation))
                      (store-bundle! bundle-name)))))
              translations))

  (define localized-message
    (^[message-name . args]
      (apply format (cons (localized-template 'hello-program
                                              message-name)
                          args))))

  (let ([myname "Fred"])
    (test* "localized-message (en)"
           '("Its 12:00, Fred."  "Goodbye, Fred.")
           (begin
             (current-language 'en)
             (current-country 'us)
             (list (localized-message 'time "12:00" myname)
                   (localized-message 'goodbye myname))))

    (test* "localized-message (fr)"
           '("Fred, c'est 12:00."  "Au revoir, Fred.")
           (begin
             (current-language 'fr)
             (current-country 'fr)
             (list (localized-message 'time "12:00" myname)
                   (localized-message 'goodbye myname))))
    ))

;;-----------------------------------------------------------------------
;; Nested multi-line comments

(test-section "SRFI-30")

(define-module srfi-30-tests
  (use gauche.test)

  (test "SRFI-30" 1
        (^[] #|hohoho|# 1))

  (test "SRFI-30" '(1)
        (^[] '(#|hohoho|# 1)))

  (test "SRFI-30, multiline" '(1)
        (^[]
          '(
            #|
            hohoho
            |#
            1)))

  (test "SRFI-30, multiline" '(1)
        (^[]
          '(1
            #|
            hohoho
            |#
            )))

  (test "SRFI-30, multiline" '()
        (^[]
          '(
            #|
            hohoho
            |#
            )))

  (test "SRFI-30, nesting" '(1)
        (^[]
          '(#| nested #| nested |# nested |# 1)))

  (test "SRFI-30, nesting" '(1)
        (^[]
          '(#| nested #| nested; |# nested |# 1)))

  (test "SRFI-30, nesting" '(1)
        (^[]
          '(#|##|###|#|||#### ||#|||||#|#1)))

  (test "SRFI-30, intertwined" '(1)
        (^[]
          '(;; #| this is a single-line comment
            1 #|
            ;; this is a multi-line comment #|
            we're still in multi-line comment ;;
            #|#|multi-line comment can be nested many times|#|#
            ;; yes, this is still in multi-line comment |#
            finally, this closes the comment |#
                                        ;and this is in single-line comment
            )))

  (test "SRFI-30, dot syntax" '(1 . 1)
        (^[]
          '(1 . #|foo bar|#1)))

  (test "SRFI-30, quasiquote" '(1 #(2 3))
        (^[]
          (let ([x 1] [y 2])
            `(#|foo|# ,x #|foo|# #(#|,|# ,y ,(+ #|x|# x y #|y|#) #|foo|#)))))
)

;;-----------------------------------------------------------------------
;; A special form 'rec'

(test-section "SRFI-31")

(define-module srfi-31-tests
  (use gauche.test)
  (use srfi.31)
  (test-module 'srfi.31)

  ;; taken from SRFI-31 document

  (define f (rec (f n)
              ((rec (g k l)
                 (if (zero? k)
                   l
                   (g (- k 1) (* k l)))) n 1)))

  (test "SRFI-31" 1 (^[] (f 0)))
  (test "SRFI-31" 3628800 (^[] (f 10)))

  (test "SRFI-31" "11111"
        (^[] (with-output-to-string
               (^[] (let loop ([i 0]
                               [stream (rec s (cons 1 (delay s)))])
                      (when (< i 5)
                        (display (car stream))
                        (loop (+ i 1) (force (cdr stream)))))))))
  )

;;-----------------------------------------------------------------------
;; args-fold

(test-section "SRFI-37")

(define-module srfi-37-tests
  (use gauche.test)
  (use srfi.37)
  (test-module 'srfi.37)

  (define options
    (list (option '(#\l "long-display") #f #f
                  (^[option name arg seed1 seed2]
                    (values (cons 'l seed1) seed2)))
          (option '(#\o "output-file") #t #f
                  (^[option name arg seed1 seed2]
                    (values (acons 'o arg seed1) seed2)))
          (option '(#\d "debug") #f #t
                  (^[option name arg seed1 seed2]
                    (values (acons 'd arg seed1) seed2)))
          (option '(#\b "batch") #f #f
                  (^[option name arg seed1 seed2]
                    (values (cons 'b seed1) seed2)))
          (option '(#\i "interactive") #f #f
                  (^[option name arg seed1 seed2]
                    (values (cons 'i seed1) seed2)))
          ))

  (define (test-options . args)
    (receive (opts operands)
        (args-fold args options
                   (^[option name arg seed1 seed2] ;; unrecognized-proc
                     (values (acons '? name seed1) seed2))
                   (^[arg seed1 seed2]      ;; operand-proc
                     (values seed1 (cons arg seed2)))
                   '() '())
      (list (reverse opts) (reverse operands))))

  (test* "SRFI-37 (short)" '((i l b) ())
         (test-options "-ilb"))

  (test* "SRFI-37 (short, arg)" '((i (o . "foo") l (d . "8")) ())
         (test-options "-iofoo" "-l" "-d8"))

  (test* "SRFI-37 (short, arg)" '(((o . "foo") (d . #f)) ("bar"))
         (test-options "-o" "foo" "-d" "bar"))

  (test* "SRFI-37 (short, missing arg)" '(((o . "-d")) ("bar"))
         (test-options "-o" "-d" "bar"))

  (test* "SRFI-37 (short, missing arg)" '(((o . #f)) ())
         (test-options "-o"))

  (test* "SRFI-37 (long, arg)" '((l i (d . "v") b (d . #f)) ())
         (test-options "--long-display" "--interactive" "--debug=v" "-bd"))

  (test* "SRFI-37 (long, arg)" '((l i (d . "v") b (d . #f)) ())
         (test-options "--long-display" "--interactive" "--debug=v" "-bd"))

  (test* "SRFI-37 (operand)" '((i b) ("foo" "bar"))
         (test-options "-i" "foo" "-b" "bar"))

  (test* "SRFI-37 (operand)" '((i) ("foo" "-b" "bar"))
         (test-options "-i" "--" "foo" "-b" "bar"))

  (test* "SRFI-37 (operand)" '((i b) ("-" "foo" "bar"))
         (test-options "-i" "-" "foo" "-b" "bar"))
  )

;;-----------------------------------------------------------------------
;;  streams

(test-section "SRFI-41")

(define-module srfi-41-tests
  (use gauche.test)
  (use srfi.41)
  (test-module 'srfi.41))

;;-----------------------------------------------------------------------
;; Eager comprehension

(test-section "SRFI-42")

(define-module srfi-42-tests
  (use gauche.test)
  (use srfi.42)
  (test-module 'srfi.42)

  ;; tests took from examples of SRFI-42 reference implementation.

  (test* "do-ec" 1
         (let ([x 0]) (do-ec (set! x (+ x 1))) x))
  (test* "do-ec" 10
         (let ([x 0]) (do-ec (:range i 10) (set! x (+ x 1))) x))
  (test* "do-ec" 45
         (let ([x 0]) (do-ec (:range n 10) (:range k n) (set! x (+ x 1))) x))


  (test* "list-ec" '(1)
         (list-ec 1))
  (test* "list-ec" '(0 1 2 3)
         (list-ec (:range i 4) i))
  (test* "list-ec" '((0 0) (1 0) (1 1) (2 0) (2 1) (2 2))
         (list-ec (:range n 3) (:range k (+ n 1)) (list n k)))
  (test* "list-ec" '((0 0) (2 0) (2 1) (2 2) (4 0) (4 1) (4 2) (4 3) (4 4))
         (list-ec (:range n 5) (if (even? n)) (:range k (+ n 1)) (list n k)))
  (test* "list-ec" '((1 0) (1 1) (3 0) (3 1) (3 2) (3 3))
         (list-ec (:range n 5) (not (even? n)) (:range k (+ n 1)) (list n k)))
  (test* "list-ec" '((4 0) (4 1) (4 2) (4 3) (4 4))
         (list-ec (:range n 5)
                  (and (even? n) (> n 2))
                  (:range k (+ n 1))
                  (list n k)))
  (test* "list-ec" '((0 0) (2 0) (2 1) (2 2) (4 0) (4 1) (4 2) (4 3) (4 4))
         (list-ec (:range n 5)
                  (or (even? n) (> n 3))
                  (:range k (+ n 1))
                  (list n k)))
  (test* "list-ec" 10
         (let ((x 0)) (list-ec (:range n 10) (begin (set! x (+ x 1))) n) x))
  (test* "list-ec" '(0 0 1)
         (list-ec (nested (:range n 3) (:range k n)) k))

  (test* "append-ec" '(a b)     (append-ec '(a b)))
  (test* "append-ec" '()        (append-ec (:range i 0) '(a b)))
  (test* "append-ec" '(a b)     (append-ec (:range i 1) '(a b)))
  (test* "append-ec" '(a b a b) (append-ec (:range i 2) '(a b)))

  (test* "string-ec" "a"  (string-ec #\a))
  (test* "string-ec" ""   (string-ec (:range i 0) #\a))
  (test* "string-ec" "a"  (string-ec (:range i 1) #\a))
  (test* "string-ec" "aa" (string-ec (:range i 2) #\a))

  (test* "string-append-ec" "ab"   (string-append-ec "ab"))
  (test* "string-append-ec" ""     (string-append-ec (:range i 0) "ab"))
  (test* "string-append-ec" "ab"   (string-append-ec (:range i 1) "ab"))
  (test* "string-append-ec" "abab" (string-append-ec (:range i 2) "ab"))

  (test* "vector-ec" '#(1)   (vector-ec 1))
  (test* "vector-ec" '#()    (vector-ec (:range i 0) i))
  (test* "vector-ec" '#(0)   (vector-ec (:range i 1) i))
  (test* "vector-ec" '#(0 1) (vector-ec (:range i 2) i))

  (test* "vector-of-length-ec" '#(1)   (vector-of-length-ec 1 1))
  (test* "vector-of-length-ec" '#()    (vector-of-length-ec 0 (:range i 0) i))
  (test* "vector-of-length-ec" '#(0)   (vector-of-length-ec 1 (:range i 1) i))
  (test* "vector-of-length-ec" '#(0 1) (vector-of-length-ec 2 (:range i 2) i))

  (test* "sum-ec" 1 (sum-ec 1))
  (test* "sum-ec" 0 (sum-ec (:range i 0) i))
  (test* "sum-ec" 0 (sum-ec (:range i 1) i))
  (test* "sum-ec" 1 (sum-ec (:range i 2) i))
  (test* "sum-ec" 3 (sum-ec (:range i 3) i))

  (test* "product-ec" 1 (product-ec 1))
  (test* "product-ec" 1 (product-ec (:range i 1 0) i))
  (test* "product-ec" 1 (product-ec (:range i 1 1) i))
  (test* "product-ec" 1 (product-ec (:range i 1 2) i))
  (test* "product-ec" 2 (product-ec (:range i 1 3) i))
  (test* "product-ec" 6 (product-ec (:range i 1 4) i))

  (test* "min-ec" 1 (min-ec 1))
  (test* "min-ec" 0 (min-ec (:range i 1) i))
  (test* "min-ec" 0 (min-ec (:range i 2) i))

  (test* "max-ec" 1 (max-ec 1))
  (test* "max-ec" 0 (max-ec (:range i 1) i))
  (test* "max-ec" 1 (max-ec (:range i 2) i))

  (test* "first-ec" 1  (first-ec #f 1))
  (test* "first-ec" #f (first-ec #f (:range i 0) i))
  (test* "first-ec" 0  (first-ec #f (:range i 1) i))
  (test* "first-ec" 0  (first-ec #f (:range i 2) i))
  (test* "first-ec" 0
         (let ((last-i -1))
           (first-ec #f (:range i 10) (begin (set! last-i i)) i)
           last-i))

  (test* "last-ec" 1  (last-ec #f 1))
  (test* "last-ec" #f (last-ec #f (:range i 0) i))
  (test* "last-ec" 0  (last-ec #f (:range i 1) i))
  (test* "last-ec" 1  (last-ec #f (:range i 2) i))

  (test* "any-ec" #f (any?-ec #f))
  (test* "any-ec" #t (any?-ec #t))
  (test* "any-ec" #f (any?-ec (:range i 2 2) (even? i)))
  (test* "any-ec" #t (any?-ec (:range i 2 3) (even? i)))

  (test* "every-ec" #f (every?-ec #f))
  (test* "every-ec" #t (every?-ec #t))
  (test* "every-ec" #t (every?-ec (:range i 2 2) (even? i)))
  (test* "every-ec" #t (every?-ec (:range i 2 3) (even? i)))
  (test* "every-ec" #f (every?-ec (:range i 2 4) (even? i)))

  (test* "fold-ec" 285
         (let ([sum-sqr (^[x result] (+ result (* x x)))])
           (fold-ec 0 (:range i 10) i sum-sqr)))
  (test* "fold3-ec" 284
         (let ([minus-1 (^[x] (- x 1))]
               [sum-sqr (^[x result] (+ result (* x x)))])
           (fold3-ec (error "wrong") (:range i 10) i minus-1 sum-sqr)))
  (test* "fold3-ec" 'infinity
         (fold3-ec 'infinity (:range i 0) i min min))

  (test* ":list" '()
         (list-ec (:list x '()) x))
  (test* ":list" '(1)
         (list-ec (:list x '(1)) x))
  (test* ":list" '(1 2 3)
         (list-ec (:list x '(1 2 3)) x))
  (test* ":list" '(1 2)
         (list-ec (:list x '(1) '(2)) x))
  (test* ":list" '(1 2 3)
         (list-ec (:list x '(1) '(2) '(3)) x))

  (test* ":string" '()
         (list-ec (:string c "") c))
  (test* ":string" '(#\1)
         (list-ec (:string c "1") c))
  (test* ":string" '(#\1 #\2 #\3)
         (list-ec (:string c "123") c))
  (test* ":string" '(#\1 #\2)
         (list-ec (:string c "1" "2") c))
  (test* ":string" '(#\1 #\2 #\3)
         (list-ec (:string c "1" "2" "3") c))

  (test* ":vector" '()
         (list-ec (:vector x (vector)) x))
  (test* ":vector" '(1)
         (list-ec (:vector x (vector 1)) x))
  (test* ":vector" '(1 2 3)
         (list-ec (:vector x (vector 1 2 3)) x))
  (test* ":vector" '(1 2)
         (list-ec (:vector x (vector 1) (vector 2)) x))
  (test* ":vector" '(1 2 3)
         (list-ec (:vector x (vector 1) (vector 2) (vector 3)) x))

  (test* ":uvector" '()
         (list-ec (:uvector x '#u8()) x))
  (test* ":uvector" '(1)
         (list-ec (:uvector x '#s8(1)) x))
  (test* ":uvector" '(1 2 3)
         (list-ec (:uvector x '#u16(1 2 3)) x))
  (test* ":uvector" '(1 2)
         (list-ec (:uvector x '#s16(1) '#s16(2)) x))
  (test* ":uvector" '(1.0 2.0 3.0)
         (list-ec (:uvector x '#f16(1) '#f16(2) '#f16(3)) x))

  (test* ":range" '()
         (list-ec (:range x -2) x))
  (test* ":range" '()
         (list-ec (:range x -1) x))
  (test* ":range" '()
         (list-ec (:range x  0) x))
  (test* ":range" '(0)
         (list-ec (:range x  1) x))
  (test* ":range" '(0 1)
         (list-ec (:range x  2) x))
  (test* ":range" '(0 1 2)
         (list-ec (:range x  0  3) x))
  (test* ":range" '(1 2)
         (list-ec (:range x  1  3) x))
  (test* ":range" '(-2)
         (list-ec (:range x -2 -1) x))
  (test* ":range" '()
         (list-ec (:range x -2 -2) x))
  (test* ":range" '(1 3)
         (list-ec (:range x 1 5  2) x))
  (test* ":range" '(1 3 5)
         (list-ec (:range x 1 6  2) x))
  (test* ":range" '(5 3)
         (list-ec (:range x 5 1 -2) x))
  (test* ":range" '(6 4 2)
         (list-ec (:range x 6 1 -2) x))

  (test* ":real-range" '(0. 1. 2.)
         (list-ec (:real-range x 0.0 3.0)     x))
  (test* ":real-range" '(0. 1. 2.)
         (list-ec (:real-range x 0   3.0)     x))
  (test* ":real-range" '(0. 1. 2.)
         (list-ec (:real-range x 0   3   1.0) x))

  (test* ":char-range" "abcdefghijklmnopqrstuvwxyz"
         (string-ec (:char-range c #\a #\z) c) )

  (sys-system "rm -f tmp1.o")

  (test* ":port" (list-ec (:range n 10) n)
         (begin
           (with-output-to-file "tmp1.o"
             (^[] (do-ec (:range n 10) (begin (write n) (newline)))))
           (call-with-input-file "tmp1.o"
             (^[port] (list-ec (:port x port read) x)))))

  (test* ":generator" (list-ec (:range n 10) (cons (- 9 n) n))
         ;; we can't load gauche.generator yet
         (letrec ([k 10]
                  [g (^[] (if (zero? k) (eof-object) (begin (dec! k) k)))])
           (list-ec (:generator v (index i) g) (cons v i))))

  (test* ":generator" (list-ec (:range n 10) (cons (- 9 n) n))
         ;; we can't load gauche.generator yet
         (letrec ([k 10]
                  [g (^[] (if (zero? k) (eof-object) (begin (dec! k) k)))])
           (list-ec (: v (index i) g) (cons v i))))

  (sys-system "rm -f tmp1.o")

  (test* ":do" '(0 1 2 3) (list-ec (:do ((i 0)) (< i 4) ((+ i 1))) i))
  (test* ":do" '(10 9 8 7)
         (list-ec
          (:do (let ((x 'x)))
               ((i 0))
               (< i 4)
               (let ((j (- 10 i))))
               #t
               ((+ i 1)))
          j))

  (test* ":let" '(1) (list-ec (:let x 1) x))
  (test* ":let" '(2) (list-ec (:let x 1) (:let y (+ x 1)) y))
  (test* ":let" '(2) (list-ec (:let x 1) (:let x (+ x 1)) x))

  (test* ":parallel" '((1 a) (2 b) (3 c))
         (list-ec (:parallel (:range i 1 10) (:list x '(a b c))) (list i x)))
  (test* ":until" '(1 2 3 4 5)
         (list-ec (:until (:range i 1 10) (>= i 5)) i))
  (test* ":while" '(1 2 3 4)
         (list-ec (:while (:list i '(1 2 3 4 5 6 7 8 9)) (< i 5)) i))
  (test* ":until" '(1 2 3 4 5)
         (list-ec (:until (:list i '(1 2 3 4 5 6 7 8 9)) (>= i 5)) i))

  (test* ":while and :parallel" '((1 1) (2 2) (3 3) (4 4))
         (list-ec (:while (:parallel (:range i 1 10)
                                     (:list j '(1 2 3 4 5 6 7 8 9)))
                          (< i 5))
                  (list i j)))
  (test* ":until and :parallel" '((1 1) (2 2) (3 3) (4 4) (5 5))
         (list-ec (:until (:parallel (:range i 1 10)
                                     (:list j '(1 2 3 4 5 6 7 8 9)))
                          (>= i 5))
                  (list i j)))
  (test* ":while stopping loop" 5
         (rlet1 n 0
           (do-ec (:while (:range i 1 10) (begin (set! n (+ n 1)) (< i 5)))
                  (if #f #f))))
  (test* ":until stopping loop" 5
         (rlet1 n 0
           (do-ec (:until (:range i 1 10) (begin (set! n (+ n 1)) (>= i 5)))
                  (if #f #f))))
  (test* ":while stopping loop" 5
         (rlet1 n 0
           (do-ec (:while (:parallel (:range i 1 10)
                                     (:do () (begin (set! n (+ n 1)) #t) ()))
                          (< i 5))
                  (if #f #f))))
  (test* ":until stopping loop" 5
         (rlet1 n 0
           (do-ec (:until (:parallel (:range i 1 10)
                                     (:do () (begin (set! n (+ n 1)) #t) ()))
                          (>= i 5))
                  (if #f #f))))

  ;; Those tests manifest the bug in the original reference implementation
  (test* ":while loop boundary condition" '(1)
         (list-ec (:while (:list x '(1 2)) (= x 1)) x))
  (test* ":while loop off-by-one error" '(1)
         (list-ec (:while (:list x '(1)) #t) x))
  (test* ":while loop off-by-one error on vector" '(1 2 3 4 5)
         (list-ec (:while (:vector x (index i) '#(1 2 3 4 5)) (< x 10)) x))


  (test* ": list" '(a b)     (list-ec (: c '(a b)) c))
  (test* ": list" '(a b c d) (list-ec (: c '(a b) '(c d)) c))

  (test* ": string" '(#\a #\b)         (list-ec (: c "ab") c))
  (test* ": string" '(#\a #\b #\c #\d) (list-ec (: c "ab" "cd") c))

  (test* ": vector" '(a b)   (list-ec (: c (vector 'a 'b)) c))
  (test* ": vector" '(a b c) (list-ec (: c (vector 'a 'b) (vector 'c)) c))

  (test* ": uvector" '(1 2 3) (list-ec (: c '#u8(1 2) '#u8(3)) c))
  (test* ": uvector" '(1 -1 2 -2)
         (list-ec (: c '#s8(1) '#s8(-1) '#s8() '#s8(2) '#s8(-2)) c))

  (test* ": range" '()  (list-ec (: i 0) i))
  (test* ": range" '(0) (list-ec (: i 1) i))
  (test* ": range" '(0 1 2 3 4 5 6 7 8 9) (list-ec (: i 10) i))
  (test* ": range" '(1) (list-ec (: i 1 2) i))
  (test* ": range" '(1) (list-ec (: i 1 2 3) i))
  (test* ": range" '(1 4 7) (list-ec (: i 1 9 3) i))

  (test* ": real-range" '(0. 0.2 0.4 0.6 0.8) (list-ec (: i 0.0 1.0 0.2) i)
         (^[x y]
           (every (^[p q] (< (abs (- p q)) 1.0e-5)) x y)))
  (test* ": char" '(#\a #\b #\c) (list-ec (: c #\a #\c) c))

  (sys-system "rm -f tmp1.o")
  (test* ": port" (list-ec (:range n 10) n)
         (begin
           (with-output-to-file "tmp1.o"
             (^[]
               (do-ec (:range n 10) (begin (write n) (newline)))))
           (call-with-input-file "tmp1.o"
             (^[port] (list-ec (: x port read) x)))))

  (sys-system "rm -f tmp1.o")
  (test* ": port" (list-ec (:range n 10) n)
         (begin
           (with-output-to-file "tmp1.o"
             (^[]
               (do-ec (:range n 10) (begin (write n) (newline)))))
           (call-with-input-file "tmp1.o"
             (^[port] (list-ec (: x port) x)))))

  (sys-system "rm -f tmp1.o")

  (test* ":list index" '((a 0) (b 1))
         (list-ec (:list c (index i) '(a b)) (list c i)))
  (test* ":string index" '((#\a 0))
         (list-ec (:string c (index i) "a") (list c i)))
  (test* ":vector index" '((a 0))
         (list-ec (:vector c (index i) (vector 'a)) (list c i)))
  (test* ":range index" '((0 0) (-1 1) (-2 2))
         (list-ec (:range i (index j) 0 -3 -1) (list i j)) )
  (test* ":real-range index" '((0. 0) (0.2 1) (0.4 2) (0.6 3) (0.8 4))
         (list-ec (:real-range i (index j) 0 1 0.2) (list i j))
         (^[x y]
           (every (^[p q] (and (< (abs (- (car p) (car q))) 1e-5)
                               (= (cadr p) (cadr q))))
                  x y)))
  (test* ":char-range index" '((#\a 0) (#\b 1) (#\c 2))
         (list-ec (:char-range c (index i) #\a #\c) (list c i)) )
  (test* ": index" '((a 0) (b 1) (c 2) (d 3))
         (list-ec (: x (index i) '(a b c d)) (list x i)) )
  (sys-system "rm -f tmp1.o")
  (test* ": index port"
         '((0 0) (1 1) (2 2) (3 3) (4 4) (5 5) (6 6) (7 7) (8 8) (9 9))
         (begin
           (with-output-to-file "tmp1.o"
             (^[]
               (do-ec (:range n 10) (begin (write n) (newline)))))
           (call-with-input-file "tmp1.o"
             (^[port] (list-ec (: x (index i) port) (list x i))))))
  (sys-system "rm -f tmp1.o")

  (test* "example 1" '(0 1 4 9 16)
         (list-ec (: i 5) (* i i)))
  (test* "example 2" '((1 0) (2 0) (2 1) (3 0) (3 1) (3 2))
         (list-ec (: n 1 4) (: i n) (list n i)))
  (test* "example 3" '((#\a 0) (#\b 1) (#\c 2))
         (list-ec (: x (index i) "abc") (list x i)) )
  (test* "example 4" '((#\a . 0) (#\b . 1))
         (list-ec (:string c (index i) "a" "b") (cons c i)) )

  (test* ":range :range" '(0 0 1 0 1 2 0 1 2 3)
         (list-ec (:range x 5) (:range x x) x))
  (test* ":list :" '(0 1 #\2 #\3 4)
         (list-ec (:list x '(2 "23" (4))) (: y x) y))
  (test* ":parallel :integers :do" '((0 10) (1 9) (2 8) (3 7) (4 6))
         (list-ec (:parallel (:integers x)
                             (:do ((i 10)) (< x i) ((- i 1))))
                  (list x i)))

  (let ()
    (define (factorial n) ; n * (n-1) * .. * 1 for n >= 0
      (product-ec (:range k 2 (+ n 1)) k) )

    (test* "factorial" 1   (factorial 0))
    (test* "factorial" 1   (factorial 1))
    (test* "factorial" 6   (factorial 3))
    (test* "factorial" 120 (factorial 5))
    )

  (use srfi.4)
  (let ()
    (define (eratosthenes n) ; primes in {2..n-1} for n >= 1
      (let ([p? (make-u8vector n 1)])
        (do-ec (:range k 2 n)
               (if (= (u8vector-ref p? k) 1))
               (:range i (* 2 k) n k)
               (u8vector-set! p? i 0))
        (list-ec (:range k 2 n) (if (= (u8vector-ref p? k) 1)) k) ))
    (test* "eratosthenes" '(2 3 5 7 11 13 17 19 23 29 31 37 41 43 47)
           (eratosthenes 50))
    (test* "eratosthenes" 9592 (length (eratosthenes 100000)))
    )

  (let ()
    (define (pythagoras n) ; a, b, c s.t. 1 <= a <= b <= c <= n, a^2 + b^2 = c^2
      (list-ec
       (:let sqr-n (* n n))
       (:range a 1 (+ n 1))
       (:let sqr-a (* a a))
       (:range b a (+ n 1))
       (:let sqr-c (+ sqr-a (* b b)))
       (if (<= sqr-c sqr-n))
       (:range c b (+ n 1))
       (if (= (* c c) sqr-c))
       (list a b c) ))
    (test* "pythagoras" '((3 4 5) (5 12 13) (6 8 10) (9 12 15))
           (pythagoras 15))
    (test* "pythagoras" 127 (length (pythagoras 200)))
    )

  (let ()
    (define (qsort xs) ; stable
      (if (null? xs)
        '()
        (let ((pivot (car xs)) (xrest (cdr xs)))
          (append
           (qsort (list-ec (:list x xrest) (if (<  x pivot)) x))
           (list pivot)
           (qsort (list-ec (:list x xrest) (if (>= x pivot)) x)) ))))
    (test* "qsort" '(1 1 2 2 3 3 4 4 5 5) (qsort '(1 5 4 2 4 5 3 2 1 3)))
    )

  (let ()
    (define (pi-BBP m) ; approx. of pi within 16^-m (Bailey-Borwein-Plouffe)
      (sum-ec
       (:range n 0 (+ m 1))
       (:let n8 (* 8 n))
       (* (- (/ 4 (+ n8 1))
             (+ (/ 2 (+ n8 4))
                (/ 1 (+ n8 5))
                (/ 1 (+ n8 6))))
          (/ 1 (expt 16 n)) )))
    (test* "pi-BBP" (/ 40413742330349316707 12864093722915635200)
           (pi-BBP 5))
    )

  (let ()
    (define (read-line port) ; next line (incl. #\newline) of port
      (let ([line
             (string-ec
              (:until (:port c port read-char)
                      (char=? c #\newline) )
              c )])
        (if (string=? line "")
          (read-char port) ; eof-object
          line )))

    (define (read-lines filename) ; list of all lines
      (call-with-input-file filename
        (^[port]
          (list-ec (:port line port read-line) line) )))

    (sys-system "rm -f tmp1.o")
    (test* "read-lines" (list-ec (:char-range c #\0 #\9) (string c #\newline))
           (begin
             (with-output-to-file "tmp1.o"
               (^[]
                 (do-ec (:range n 10) (begin (write n) (newline)))))
             (read-lines "tmp1.o")))
    )
  )

;;-----------------------------------------------------------------------
;; Integers as bits

(test-section "SRFI-60")

(define-module srfi-60-tests
  (use gauche.test)
  (use srfi.60)
  (test-module 'srfi.60)

  ;; Most procedures are builtin and tested in test/numbers.scm.

  (test* "bitwise-if" #b01100110
         (bitwise-if #b10101100 #b00110101 #b11001010))

  (for-each (^(n r) (test* (format "log2-binary-factors(~a)" n) r
                           (log2-binary-factors n)))
            '(0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16
                 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15 -16)
            '(-1 0  1  0  2  0  1  0  3  0   1   0   2   0   1   0   4
                 0  1  0  2  0  1  0  3  0   1   0   2   0   1   0   4))

  (define (test-rotate-bit-field n c s e r)
    (test* (format "rotate-bit-field(~s,~a,~a,~a)" (number->string n 2) c s e) r
           (number->string (rotate-bit-field n c s e) 2)))
  (test-rotate-bit-field #b0100 3 4 0 "100") ; trivial path
  (test-rotate-bit-field #b0100 3 0 4 "10")
  (test-rotate-bit-field #b0100 -1 0 4 "10")
  (test-rotate-bit-field #b0100 10 0 4 "1")
  (test-rotate-bit-field #b110100100010000 -1 5 9 "110100010010000")
  (test-rotate-bit-field #b110100100010000 1 5 9 "110100000110000")

  (define (test-reverse-bit-field n s e r)
    (test* (format "reverse-bit-field(~s,~a,~a)" (number->string n 2) s e) r
           (number->string (reverse-bit-field n s e) 2)))
  (test-reverse-bit-field #xa7 8 0 "10100111")
  (test-reverse-bit-field #xa7 0 8 "11100101")
  (test-reverse-bit-field #xa7 1 5 "10111001")

  (test* "integer->list" '(#t #f #f #t) (integer->list 9))
  (test* "integer->list" '(#f #f #t #f #f #t) (integer->list 9 6))
  (test* "list->integer" 9 (list->integer '(#t #f #f #t)))
  (test* "list->integer" 9 (list->integer '(#f #f #t #f #f #t)))
  ;; tests bignum path
  (test* "list->integer" (+ (expt 2 63) (expt 2 62) (expt 2 31) (expt 2 30) 1)
         (list->integer '(#t #t #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #f
                             #t #t #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #f
                             #f #f #f #f #f #f #f #t)))

  (test* "booleans->integer" 9 (booleans->integer #f #f #t #f #f #t))
  )

;;-----------------------------------------------------------------------
;; A Scheme API for test suites

(test-section "SRFI-64")

(define-module srfi-64-tests
  (use gauche.test)
  (use srfi.64)
  (test-module 'srfi.64)
  (include "include/srfi-64-test"))

;;-----------------------------------------------------------------------
;; Octet vectors

(test-section "SRFI-66")

(define-module srfi-66-tests
  (use gauche.test)
  (use gauche.uvector)

  ;; SRFI-66 provides u8vector-copy! with different argument order,
  ;; so import it with prefix to avoid conflict.
  (use srfi.66 :prefix srfi-66:)
  (test-module 'srfi.66)

  (test* "SRFI-66 uvector-copy!" '#u8(0 0 1 2 3 0 0)
         (rlet1 v (u8vector 0 0 0 0 0 0 0)
           (srfi-66:u8vector-copy! '#u8(0 1 2 3 4) 1 v 2 3)))
  )

;;-----------------------------------------------------------------------
;; Basic hash tables

(test-section "SRFI-69")

(define-module srfi-69-tests
  (use gauche.test)
  (use srfi.69)
  (test-module 'srfi.69)

  ;; These test is contributed by Takashi Kato @tk_riple
  (letrec-syntax
      ([test-error
        (syntax-rules ()
          ((_ expr)
           (test* 'expr #t (guard (e (else #t)) expr #f))))]
       [test-equal
        (syntax-rules ()
          ((_ expect expr)
           (test* 'expr expect expr)))]
       [test-assert
        (syntax-rules ()
          ((_ expr)
           (test-assert 'expr expr))
          ((_ name expr)
           (test* name #t expr (lambda (a r) (and a r)))))]
       [test-not
        (syntax-rules ()
          ((_ expr)
           (test-not 'expr expr))
          ((_ name expr)
           (test-assert name (not expr))))]
       [test-lset-eq?
        (syntax-rules ()
          ((test-lset= a b)
           (test-assert 'a (lset= eq? a b))))]
       [test-lset-equal?
        (syntax-rules ()
          ((test-lset-equal? a b)
           (test-assert 'a (lset= equal? a b))))])

    (let ((ht (make-hash-table eq?)))
      ;; 3 initial elements

      (test-equal 0 (hash-table-size ht))
      (hash-table-set! ht 'cat 'black)
      (hash-table-set! ht 'dog 'white)
      (hash-table-set! ht 'elephant 'pink)

      (test-equal 3 (hash-table-size ht))
      (test-assert (hash-table-exists? ht 'dog))
      (test-assert (hash-table-exists? ht 'cat))
      (test-assert (hash-table-exists? ht 'elephant))
      (test-not (hash-table-exists? ht 'goose))
      (test-equal 'white (hash-table-ref ht 'dog))
      (test-equal 'black (hash-table-ref ht 'cat))
      (test-equal 'pink (hash-table-ref ht 'elephant))
      (test-error (hash-table-ref ht 'goose))
      (test-equal 'grey (hash-table-ref ht 'goose (lambda () 'grey)))
      (test-equal 'grey (hash-table-ref/default ht 'goose 'grey))
      (test-lset-eq? '(cat dog elephant) (hash-table-keys ht))
      (test-lset-eq? '(black white pink) (hash-table-values ht))
      (test-lset-equal? '((cat . black) (dog . white) (elephant . pink))
                        (hash-table->alist ht))

      ;; remove an element
      (hash-table-delete! ht 'dog)
      (test-equal 2 (hash-table-size ht))
      (test-not (hash-table-exists? ht 'dog))
      (test-assert (hash-table-exists? ht 'cat))
      (test-assert (hash-table-exists? ht 'elephant))
      (test-error (hash-table-ref ht 'dog))
      (test-equal 'black (hash-table-ref ht 'cat))
      (test-equal 'pink (hash-table-ref ht 'elephant))
      (test-lset-eq? '(cat elephant) (hash-table-keys ht))
      (test-lset-eq? '(black pink) (hash-table-values ht))
      (test-lset-equal? '((cat . black) (elephant . pink)) (hash-table->alist ht))

      ;; remove a non-existing element
      (hash-table-delete! ht 'dog)
      (test-equal 2 (hash-table-size ht))
      (test-not (hash-table-exists? ht 'dog))

      ;; overwrite an existing element
      (hash-table-set! ht 'cat 'calico)
      (test-equal 2 (hash-table-size ht))
      (test-not (hash-table-exists? ht 'dog))
      (test-assert (hash-table-exists? ht 'cat))
      (test-assert (hash-table-exists? ht 'elephant))
      (test-error (hash-table-ref ht 'dog))
      (test-equal 'calico (hash-table-ref ht 'cat))
      (test-equal 'pink (hash-table-ref ht 'elephant))
      (test-lset-eq? '(cat elephant) (hash-table-keys ht))
      (test-lset-eq? '(calico pink) (hash-table-values ht))
      (test-lset-equal? '((cat . calico) (elephant . pink)) (hash-table->alist ht))

      ;; walk and fold
      (test-lset-equal?
       '((cat . calico) (elephant . pink))
       (let ((a '()))
         (hash-table-walk ht (lambda (k v) (set! a (cons (cons k v) a))))
         a))
      (test-lset-equal? '((cat . calico) (elephant . pink))
                        (hash-table-fold ht (lambda (k v a) (cons (cons k v) a)) '()))

      ;; copy
      (let ((ht2 (hash-table-copy ht)))
        (test-equal 2 (hash-table-size ht2))
        (test-not (hash-table-exists? ht2 'dog))
        (test-assert (hash-table-exists? ht2 'cat))
        (test-assert (hash-table-exists? ht2 'elephant))
        (test-error (hash-table-ref ht2 'dog))
        (test-equal 'calico (hash-table-ref ht2 'cat))
        (test-equal 'pink (hash-table-ref ht2 'elephant))
        (test-lset-eq? '(cat elephant) (hash-table-keys ht2))
        (test-lset-eq? '(calico pink) (hash-table-values ht2))
        (test-lset-equal? '((cat . calico) (elephant . pink))
                          (hash-table->alist ht2)))

      ;; merge
      (let ((ht2 (make-hash-table eq?)))
        (hash-table-set! ht2 'bear 'brown)
        (test-equal 1 (hash-table-size ht2))
        (test-not (hash-table-exists? ht2 'dog))
        (test-assert (hash-table-exists? ht2 'bear))
        (hash-table-merge! ht2 ht)
        (test-equal 3 (hash-table-size ht2))
        (test-assert (hash-table-exists? ht2 'bear))
        (test-assert (hash-table-exists? ht2 'cat))
        (test-assert (hash-table-exists? ht2 'elephant))
        (test-not (hash-table-exists? ht2 'goose))
        (test-equal 'brown (hash-table-ref ht2 'bear))
        (test-equal 'calico (hash-table-ref ht2 'cat))
        (test-equal 'pink (hash-table-ref ht2 'elephant))
        (test-error (hash-table-ref ht2 'goose))
        (test-equal 'grey (hash-table-ref/default ht2 'goose 'grey))
        (test-lset-eq? '(bear cat elephant) (hash-table-keys ht2))
        (test-lset-eq? '(brown calico pink) (hash-table-values ht2))
        (test-lset-equal? '((cat . calico) (bear . brown) (elephant . pink))
                          (hash-table->alist ht2)))

      ;; alist->hash-table
      (test-lset-equal? (hash-table->alist ht)
                        (hash-table->alist
                         (alist->hash-table
                          '((cat . calico) (elephant . pink)))))
      )

    ;; update
    (let ((ht (make-hash-table eq?))
          (add1 (lambda (x) (+ x 1))))
      (hash-table-set! ht 'sheep 0)
      (hash-table-update! ht 'sheep add1)
      (hash-table-update! ht 'sheep add1)
      (test-equal 2 (hash-table-ref ht 'sheep))
      (hash-table-update! ht 'fish add1 (^[] 100))
      (hash-table-update! ht 'fish add1 (^[] 100))
      (hash-table-update! ht 'fish add1 (^[] 100))
      (test-equal 103  (hash-table-ref ht 'fish))
      (hash-table-update!/default ht 'crows add1 0)
      (hash-table-update!/default ht 'crows add1 0)
      (hash-table-update!/default ht 'crows add1 0)
      (test-equal 3 (hash-table-ref ht 'crows)))

    ;; string keys
    (let ((ht (make-hash-table equal?)))
      (hash-table-set! ht "cat" 'black)
      (hash-table-set! ht "dog" 'white)
      (hash-table-set! ht "elephant" 'pink)
      (hash-table-ref/default ht "dog" #f)
      (test-equal 'white (hash-table-ref ht "dog"))
      (test-equal 'black (hash-table-ref ht "cat"))
      (test-equal 'pink (hash-table-ref ht "elephant"))
      (test-error (hash-table-ref ht "goose"))
      (test-equal 'grey (hash-table-ref/default ht "goose" 'grey))
      (test-lset-equal? '("cat" "dog" "elephant") (hash-table-keys ht))
      (test-lset-equal? '(black white pink) (hash-table-values ht))
      (test-lset-equal?
       '(("cat" . black) ("dog" . white) ("elephant" . pink))
       (hash-table->alist ht)))

    ;; string-ci keys
    (let ((ht (make-hash-table string-ci=? string-ci-hash)))
      (hash-table-set! ht "cat" 'black)
      (hash-table-set! ht "dog" 'white)
      (hash-table-set! ht "elephant" 'pink)
      (hash-table-ref/default ht "DOG" #f)
      (test-equal 'white (hash-table-ref ht "DOG"))
      (test-equal 'black (hash-table-ref ht "Cat"))
      (test-equal 'pink (hash-table-ref ht "eLePhAnT"))
      (test-error (hash-table-ref ht "goose"))
      (test-lset-equal? '("cat" "dog" "elephant") (hash-table-keys ht))
      (test-lset-equal? '(black white pink) (hash-table-values ht))
      (test-lset-equal?
       '(("cat" . black) ("dog" . white) ("elephant" . pink))
       (hash-table->alist ht)))

    ;; stress test
    (test-equal 625
                (let ((ht (make-hash-table)))
                  (do ((i 0 (+ i 1))) ((= i 1000))
                    (hash-table-set! ht i (* i i)))
                  (hash-table-ref/default ht 25 #f)))
    )
  )

;;-----------------------------------------------------------------------
;; Octed-addressed binary blocks

(test-section "SRFI-74")

(define-module srfi-74-tests
  (use gauche.test)

  (use srfi.74)
  (test-module 'srfi.74)

  ;; most procedures are just an alias of binary.io so we don't do
  ;; exhausitive tests.

  (let ((b1 (make-blob 10)))
    (test* "blob?" #t (blob? b1))
    (test* "blob?" #f (blob? '#(1 2 3)))
    (test* "endianness" 'big-endian (endianness big))
    (test* "endianness" 'little-endian (endianness little))
    (test* "endianness" (native-endian) (endianness native))

    (test* "blob-length" 10 (blob-length b1))
    (test* "blob-[su]8-set!" #u8(#xff #xfe 0 0 0 0 0 0 0 0)
           (begin
             (blob-u8-set! b1 0 255)
             (blob-s8-set! b1 1 -2)
             b1))
    (test* "blob-[su]8-ref" '(-1 254)
           (list (blob-s8-ref b1 0)
                 (blob-u8-ref b1 1)))
    (test* "blob-uint-ref"
           '(#xff #xff #xfffe #xfeff #xfffe00 #x00feff #xfe0000 #x0000fe)
           (list (blob-uint-ref 1 (endianness big) b1 0)
                 (blob-uint-ref 1 (endianness little) b1 0)
                 (blob-uint-ref 2 (endianness big) b1 0)
                 (blob-uint-ref 2 (endianness little) b1 0)
                 (blob-uint-ref 3 (endianness big) b1 0)
                 (blob-uint-ref 3 (endianness little) b1 0)
                 (blob-uint-ref 3 (endianness big) b1 1)
                 (blob-uint-ref 3 (endianness little) b1 1)))
    (test* "blob-sint-ref"
           '(-1 -1 -2 -257 -512 #x00feff -131072 #x0000fe)
           (list (blob-sint-ref 1 (endianness big) b1 0)
                 (blob-sint-ref 1 (endianness little) b1 0)
                 (blob-sint-ref 2 (endianness big) b1 0)
                 (blob-sint-ref 2 (endianness little) b1 0)
                 (blob-sint-ref 3 (endianness big) b1 0)
                 (blob-sint-ref 3 (endianness little) b1 0)
                 (blob-sint-ref 3 (endianness big) b1 1)
                 (blob-sint-ref 3 (endianness little) b1 1)))

    (test* "blob-uint-set!"
           '#u8(0 #xff #xff 0 0 #xff #xfe #xfe #xff 0)
           (rlet1 b1 (make-blob 10)
             (blob-uint-set! 2 (endianness big) b1 0 #xff)
             (blob-uint-set! 2 (endianness little) b1 2 #xff)
             (blob-uint-set! 3 (endianness big) b1 4 #xfffe)
             (blob-uint-set! 3 (endianness little) b1 7 #xfffe)))
    (test* "blob-sint-set!"
           '#u8(#xff #xfe #xfe #xff #xff #xfe 00 00 #xfe #xff)
           (rlet1 b1 (make-blob 10)
             (blob-sint-set! 2 (endianness big) b1 0 -2)
             (blob-sint-set! 2 (endianness little) b1 2 -2)
             (blob-sint-set! 3 (endianness big) b1 4 -512)
             (blob-sint-set! 3 (endianness little) b1 7 -512)))

    (let1 b1 '#u8(0 1 2 3 4 5 6 7 #xff)
          (test* "blob->uint-list"
                 '((#x000102 #x030405 #x0607ff)
                   (#x020100 #x050403 #xff0706))
                 (list (blob->uint-list 3 (endianness big) b1)
                       (blob->uint-list 3 (endianness little) b1)))
          (test* "blob->uint-list"
                 '((#x000102 #x030405 #x0607ff)
                   (#x020100 #x050403 #x-00f8fa))
                 (list (blob->sint-list 3 (endianness big) b1)
                       (blob->sint-list 3 (endianness little) b1)))

          (test* "uint-list->blob" (list b1 b1)
                 (list (uint-list->blob 3 (endianness big)
                                        (blob->uint-list 3 (endianness big) b1))
                       (uint-list->blob 3 (endianness little)
                                        (blob->uint-list 3 (endianness little) b1))))
          (test* "sint-list->blob" (list b1 b1)
                 (list (sint-list->blob 3 (endianness big)
                                        (blob->sint-list 3 (endianness big) b1))
                       (sint-list->blob 3 (endianness little)
                                        (blob->sint-list 3 (endianness little) b1))))
          )
    )
  )

;;-----------------------------------------------------------------------
;; Lightweight testing.  SRFI-78 is used in other srfi's testing, so
;; we only check module bindings.

(test-section "SRFI-78")

(define-module srfi-78-tests
  (use gauche.test)
  (use srfi.78)
  (test-module 'srfi.78)
  )

;;-----------------------------------------------------------------------
;; An interface to access environment variables.  Just aliases of built-ins.

(test-section "SRFI-98")

(define-module srfi-98-tests
  (use gauche.test)
  (use srfi.98)
  (test-module 'srfi.98)
  )

;;-----------------------------------------------------------------------
;; (scheme.rlist) Purely functional random-access pairs and lists

(test-section "SRFI-101")

(define-module srfi-101-tests
  (use gauche.test)
  (use util.match)
  (use srfi.101 :prefix ra:)
  (test-module 'srfi.101)

  (test* "ra-quote" (ra:quote (1 2 3)) (ra:list 1 2 3))
  (test* "ra-quote" (ra:quote (1 . 2)) (ra:cons 1 2))
  (test* "ra-quote" (ra:quote 1) 1)
  (test* "ra-quote" (ra:quote ()) '())
  (test* "ra-pairs" #t (ra:pair? (ra:cons 'a 'b)))
  (test* "ra-pairs" #t (ra:pair? (ra:list 'a 'b 'c)))
  (test* "ra-pairs" #f (ra:pair? (ra:quote ())))
  (test* "ra-pairs" #f (ra:pair? (ra:quote #(a b))))

  ;; NB: spec says those conversion procedures only accept proper lists
  (test* "conversions" '(a b c d e)
         (ra:random-access-list->linear-access-list
          (ra:list 'a 'b 'c 'd 'e)))
  (test* "conversions" '()
         (ra:random-access-list->linear-access-list (ra:list)))
  ;; (test* "conversions" '(a b . c)
  ;;        (ra:random-access-list->linear-access-list
  ;;         (ra:cons 'a (ra:cons 'b 'c))))
  (test* "conversions" (ra:list 'a 'b 'c 'd 'e)
         (ra:linear-access-list->random-access-list
          '(a b c d e)))
  (test* "conversions" (ra:list)
         (ra:linear-access-list->random-access-list '()))
  ;; (test* "conversions" (ra:cons 'a (ra:cons 'b 'c))
  ;;        (ra:linear-access-list->random-access-list
  ;;         '(a b . c)))
  ;; (test* "conversions" 'a
  ;;        (ra:linear-access-list->random-access-list 'a))

  (let ()
    (define-syntax t-pair
      (syntax-rules ()
        [(_ ca cd)
         (begin (test* #"(ra-cons ~ca ~cd)" ca (ra:car (ra:cons ca cd)))
                (test* #"(ra-cons ~ca ~cd)" cd (ra:cdr (ra:cons ca cd))))]))
    (t-pair 1 2)
    (t-pair 1 (ra:list 2))
    (t-pair 1 '()))
  (test* "ra-car" (test-error) (ra:car '()))
  (test* "ra-cdr" (test-error) (ra:cdr '()))

  (let ()
    (define (make-tree kons depth seed)
      (if (zero? depth)
        (values seed (+ seed 1))
        (receive (x sx) (make-tree kons (- depth 1) seed)
          (receive (y sy) (make-tree kons (- depth 1) sx)
            (values (kons x y) sy)))))
    (define tree    (make-tree cons 4 0))
    (define ra-tree (make-tree ra:cons 4 0))
    (define (x->ra x)
      (if (pair? x)
        (ra:cons (x->ra (car x)) (x->ra (cdr x)))
        x))
    (define-syntax t
      (er-macro-transformer
       (^[f r c]
         (match f
           [(_ name)
            (let ([ra-name (symbol-append 'ra: name)])
              (quasirename r
                `(test* ,ra-name (x->ra (,name tree))
                        (,ra-name ra-tree))))]))))
    (t car) (t cdr)
    (t caar) (t cadr) (t cdar) (t cddr)
    (t caaar) (t caadr) (t cadar) (t caddr)
    (t cdaar) (t cdadr) (t cddar) (t cdddr)
    (t caaaar) (t caaadr) (t caadar) (t caaddr)
    (t cadaar) (t cadadr) (t caddar) (t cadddr)
    (t cdaaar) (t cdaadr) (t cdadar) (t cdaddr)
    (t cddaar) (t cddadr) (t cdddar) (t cddddr)
    )

  (test* "ra-null?" #t (ra:null? '()))
  (test* "ra-null?" #t (ra:null? (ra:list)))
  (test* "ra-null?" #f (ra:null? 'x))
  (test* "ra-list?" #t (ra:list? '()))
  (test* "ra-list?" #t (ra:list? (ra:list)))
  (test* "ra-list?" #t (ra:list? (ra:list 1 2 3)))
  (test* "ra-list?" #f (ra:list? (ra:cons 1 2)))
  (test* "ra-make-list" '(1 1 1 1 1)
         (ra:random-access-list->linear-access-list (ra:make-list 5 1)))

  (dotimes [n 10]
    (test* "ra-length" n (ra:length (ra:make-list n))))
  (test* "ra-append" (ra:quote (a b c))
         (ra:append (ra:quote (a b c))))
  (test* "ra-append" (ra:quote x)
         (ra:append (ra:quote x)))
  (test* "ra-append" (ra:quote (a b c d e f . g))
         (ra:append (ra:quote (a b c)) (ra:quote (d e f . g))))
  (test* "ra-append" (ra:quote (a b c d e f . g))
         (ra:append (ra:quote (a b c)) (ra:quote (d e f)) (ra:quote g)))
  (test* "ra-append" (ra:quote (a b c d e f . g))
         (ra:append (ra:quote (a b c)) (ra:quote (d e)) (ra:quote (f . g))))
  (test* "ra-append" (ra:quote (a b . c))
         (ra:append (ra:quote (a b)) (ra:quote ()) (ra:quote c)))
  (test* "ra-append" (test-error) (ra:append (ra:quote x) (ra:quote y)))
  (test* "ra-reverse" (ra:quote ())
         (ra:reverse '()))
  (test* "ra-reverse" (ra:quote (e d c b a))
         (ra:reverse (ra:quote (a b c d e))))
  (test* "ra-reverse" (test-error) (ra:reverse (ra:quote a)))

  (test* "ra-list-tail" '() (ra:list-tail (ra:list) 0))
  (test* "ra-list-tail" (test-error) (ra:list-tail (ra:list) 1))
  (test* "ra-list-tail" (ra:list 1 2 3) (ra:list-tail (ra:list 0 1 2 3) 1))
  (test* "ra-list-tail" (ra:cons 2 3) (ra:list-tail (ra:quote (0 1 2 . 3)) 2))
  (test* "ra-list-tail" 3 (ra:list-tail (ra:quote (0 1 2 . 3)) 3))
  (test* "ra-list-tail" (test-error) (ra:list-tail (ra:quote (0 1 2 . 3)) 4))
  (test* "ra-list-ref" (test-error) (ra:list-ref (ra:list) 0))
  (test* "ra-list-ref" 'a (ra:list-ref (ra:list 'a 'b 'c) 0))
  (test* "ra-list-ref" 'b (ra:list-ref (ra:list 'a 'b 'c) 1))
  (test* "ra-list-ref" 'c (ra:list-ref (ra:list 'a 'b 'c) 2))
  (test* "ra-list-ref" 'a (ra:list-ref (ra:cons 'a 'b) 0))
  (test* "ra-list-set" (test-error) (ra:list-set (ra:list) 0 'a))
  (test* "ra-list-set" (ra:quote (z b c))
         (ra:list-set (ra:list 'a 'b 'c) 0 'z))
  (test* "ra-list-set" (ra:quote (a z c))
         (ra:list-set (ra:list 'a 'b 'c) 1 'z))
  (test* "ra-list-set" (ra:quote (a b z))
         (ra:list-set (ra:list 'a 'b 'c) 2 'z))
  (test* "ra-list-ref/update" (list 1 (ra:quote (0 10 2)))
         (values->list
          (ra:list-ref/update (ra:list  0 1 2) 1 (cut * <> 10))))

  (test* "ra-map" (ra:quote (2 4 6))
         (ra:map (cut * 2 <>) (ra:list 1 2 3)))
  (test* "ra-map" (ra:quote ((1 . 4) (2 . 5) (3 . 6)))
         (ra:map ra:cons (ra:list 1 2 3) (ra:list 4 5 6)))
  (test* "ra-map" (test-error)
         (ra:map ra:cons (ra:list 1 2 3) (ra:list 4 5 6 7)))
  (test* "ra-for-each" '(4 3 2 1)
         (rlet1 xs '()
           (ra:for-each (^x (push! xs x)) (ra:list 1 2 3 4))))
  (test* "ra-for-each" '((3 . 6) (2 . 5) (1 . 4))
         (rlet1 xs '()
           (ra:for-each (^[x y] (push! xs (cons x y)))
                        (ra:list 1 2 3) (ra:list 4 5 6))))
  (test* "ra-for-each" (test-error)
         (rlet1 xs '()
           (ra:for-each (^[x y] (push! xs (cons x y)))
                        (ra:list 1 2 3 4) (ra:list 4 5 6))))
  )

;;-----------------------------------------------------------------------
;; SRFI-106 will be tested in test/net.scm

;;-----------------------------------------------------------------------
;; Boxes & Multiple-vlaue boxes

(test-section "SRFI-111 & SRFI-195")

(define-module srfi-111-195-tests
  (use gauche.test)
  (use srfi.111)
  (test-module 'srfi.111)
  (use srfi.195)
  (test-module 'srfi.195)

  (test* "box primitives"
         '(#t 1 #f 2)
         (let1 b (box 2)
           (list (box? b) (box-arity b) (box? 2) (unbox b))))

  (test* "box setter" 3
         (let1 b (box 2)
           (set-box! b 3)
           (unbox b)))

  (test* "box compare"
         '(#t #f #f #t #f)
         (let ([b1 (box 2)]
               [b2 (box 2)]
               [b3 (box 3)])
           (list (equal? b1 b2)
                 (equal? b2 b3)
                 (equal? b1 2)
                 (eqv?   b1 b1)
                 (eqv?   b1 b2))))

  (test* "mv box" '(#t 3 (a b c))
         (let1 b (box 'a 'b 'c)
           (list (box? b)
                 (box-arity b)
                 (values->list (unbox b)))))

  (test* "mv box set" '(d e f)
         (let1 b (box 'a 'b 'c)
           (set-box! b 'd 'e 'f)
           (values->list (unbox b))))

  (test* "mv box (zero value)" '(#t 0 ())
         (let1 b (box)
           (list (box? b) (box-arity b) (values->list (unbox b)))))

  (test* "mv box index ref" 'b
         (let1 b (box 'a 'b 'c)
           (unbox-value b 1)))

  (test* "mv box index set" '(a e c)
         (let1 b (box 'a 'b 'c)
           (set-box-value! b 1 'e)
           (values->list (unbox b))))

  (test* "box error handling" (test-error <error> #/out of range/)
         (unbox-value (box) 0))

  (test* "box error handling" (test-error <error> #/out of range/)
         (unbox-value (box 1) 1))

  (test* "box error handling" (test-error <error> #/Wrong number/)
         (set-box! (box 1) 2 3))

  (test* "box error handling" (test-error <error> #/Wrong number/)
         (set-box! (box 1 2) 3))


  ;; https://github.com/shirok/Gauche/issues/787
  (test* "box circular printing" "#0=#<box #0#>"
         (let1 b (box 1)
           (set-box! b b)
           (write-to-string b)))
  (test* "mvbox circular printing" "#0=#<mv-box[2] 0 #0#>"
         (let1 b (box 1 2)
           (set-box! b 0 b)
           (write-to-string b)))

  ;; Gauche specific - generic referencer
  (let ([b0 (box 1)]
        [b1 (box 1 2 3)])
    (test* "box generic referencer" '(1 1 2 3)
           (let ([a (~ b0 '*)]          ;srfi-122
                 [b (~ b0 0)])
             (set! (~ b0 0) 2)
             (let ([c (~ b0 '*)])
               (set! (~ b0 '*) 3)
               (let ([d (~ b0 0)])
                 (list a b c d)))))
    (test* "mvbox generic referencer" '(1 2 3 10 20 30)
           (let ([a (~ b1 0)]
                 [b (~ b1 1)]
                 [c (~ b1 2)])
             (set! (~ b1 0) 10)
             (set! (~ b1 1) 20)
             (set! (~ b1 2) 30)
             (list* a b c (values->list (unbox b1)))))
    )
  )

;;-----------------------------------------------------------------------
;; Comparators
;;
;; SRFI-113 depends on SRFI-114, so we test this first.

(test-section "SRFI-114")

(define-module srfi-114-tests
  (use gauche.test)
  (use srfi.114)
  (test-module 'srfi.114)

  ;; builtin comparators are tested in test/compare.scm
  (define (test-cmp msg cmpr data) ; data = ((a b result) ...)
    (test* msg data
           (map (^x (list (car x) (cadr x)
                          (comparator-compare cmpr (car x) (cadr x))))
                data)))

  (test-cmp "inexact1"
            (make-inexact-real-comparator 0.25 'round 'min)
            '((1.0 1.1 0)
              (1.1 1.2 -1)
              (1.2 1.1 1)
              (1.1 1.0 0)
              (1.2 1.3 0)
              (+nan.0 1.1 -1)
              (1.1 +nan.0 1)
              (+nan.0 +nan.0 0)))

  (test-cmp "inexact2"
            (make-inexact-real-comparator 0.25 'round 'max)
            '((+nan.0 1.1 1)
              (1.1 +nan.0 -1)
              (+nan.0 +nan.0 0)))

  (test-cmp "inexact3 - nan handling"
            ($ make-inexact-real-comparator 0.25 'round
               (^x (comparator-compare default-comparator 0 x)))
            '((+nan.0 1.1 -1)
              (+nan.0 0 0)
              (+nan.0 -1.1 1)
              (+nan.0 +nan.0 0)))

  (test-cmp "list" (make-list-comparator
                    (make-inexact-real-comparator 0.25 'round 'error))
            '(((1 2 3) (1 2 3) 0)
              ((1 2 3) (1.1 2 3) 0)
              ((1 2 3) (1.1 2) 1)
              ((1 2 3) (1.2 2) -1)
              ((1 2 3) (1.2 2 3) -1)
              (() () 0)
              (() (1) -1)
              ((1 2 3) (1 2 2.9) 0)
              ((1 2 3) (1 2.2 2.9) -1)
              ((1 2.2 2.9) (1 2 3) 1)
              ))

  (test-cmp "vector" (make-vector-comparator
                      (make-inexact-real-comparator 0.25 'round 'error))
            '((#(1 2 3) #(1 2 3) 0)
              (#(1 2 3) #(1.1 2 3) 0)
              (#(1 2 3) #(1.1 2) 1)
              (#(1 2 3) #(1.2 2) 1)
              (#(1 2 3) #(1.2 2 3) -1)
              (#() #() 0)
              (#() #(1) -1)
              (#(1 2 3) #(1 2 2.9) 0)
              (#(1 2 3) #(1 2.2 2.9) -1)
              (#(1 2.2 2.9) #(1 2 3) 1)
              ))

  (define ca (make-car-comparator string-comparator))
  (define cd (make-cdr-comparator integer-comparator))
  (define ta ((with-module gauche make-hash-table) ca))
  (define td ((with-module gauche make-hash-table) cd))
  (define sa '("orange" "apple" "mango" "papaya"))
  (define sd '(29 34 98 1001))
  (define data (append-map (^a (map (^d (cons a d)) sd)) sa))

  (test* "make-car-comparator" (sort sa)
         (begin (dolist [x data]
                  (hash-table-put! ta x #t))
                (sort (map car (hash-table-keys ta)))))

  (test* "make-cdr-comparator" (sort sd)
         (begin (dolist [x data]
                  (hash-table-put! td x #t))
                (sort (map cdr (hash-table-keys td)))))

  (let ([lw ($ make-listwise-comparator vector?
               (make-reverse-comparator number-comparator)
               (^x (= (vector-length x) 0))
               (^x (vector-ref x 0))
               (^x (vector-copy x 1)))])
    (define (test-lw a b expect)
      (test* (format "listwise ~s ~s" a b)
             (list (zero? expect) expect (- expect) #t)
             (list (comparator-equal? lw a b)
                   (comparator-compare lw a b)
                   (comparator-compare lw b a)
                   (integer? (comparator-hash lw a)))))
    (test-lw '#(1) '#(2) 1)
    (test-lw '#(1 4) '#(1 3 5) -1)
    (test-lw '#(1 2) '#(1 3 5) 1)
    (test-lw '#(1 3 5) '#(1 3 5) 0)
    (test-lw '#(1 3 6) '#(1 3 5) -1)
    (test-lw '#() '#() 0)
    (test-lw '#() '#(1) -1))

  (let ([vw ($ make-vectorwise-comparator list?
               (make-reverse-comparator number-comparator)
               length
               list-ref)])
    (define (test-vw a b expect)
      (test* (format "vectorwise ~s ~s" a b)
             (list (zero? expect) expect (- expect) #t)
             (list (comparator-equal? vw a b)
                   (comparator-compare vw a b)
                   (comparator-compare vw b a)
                   (integer? (comparator-hash vw a)))))
    (test-vw '(1) '(2) 1)
    (test-vw '(1 4) '(1 3 5) -1)
    (test-vw '(1 2) '(1 3 5) -1)
    (test-vw '(1 3 5) '(1 3 5) 0)
    (test-vw '(1 3 6) '(1 3 5) -1)
    (test-vw '() '() 0)
    (test-vw '() '(1) -1))

  (define (test-minmax msg cmp min-item max-item args)
    (test* (format "test-minmax ~a" msg)
           (list min-item max-item max-item min-item)
           (list (apply comparator-min cmp args)
                 (apply comparator-max cmp args)
                 (apply comparator-min (make-reverse-comparator cmp) args)
                 (apply comparator-max (make-reverse-comparator cmp) args))))

  (test-minmax "default" default-comparator 1 9
               '(3 1 4 5 9 2 6 8 7))
  )

;;-----------------------------------------------------------------------
;; Sets and bags

(test-section "SRFI-113")

(define-module srfi-113-tests
  (use gauche.test)
  (use srfi.113)
  (test-module 'srfi.113)

  (use compat.chibi-test)
  (chibi-test
   (include "include/sets-test"))

  ;; collection framework test
  ;; (we use SRFI-1 with prefix not to mess gauche.collection#fold etc.)
  (use srfi.1 :prefix srfi-1:)
  (use gauche.collection :prefix col:)
  (test* "coerce-to" '(a b)
         (col:coerce-to <list> (set eq-comparator 'a 'b 'a 'b))
         (cut srfi-1:lset= eq? <> <>))
  (test* "coerce-to" '(a a b b)
         (col:coerce-to <list> (bag eq-comparator 'a 'b 'a 'b))
         (cut srfi-1:lset= eq? <> <>))
  )

;;-----------------------------------------------------------------------
;; Scheme regular expressions

(test-section "SRFI-115")

(define-module srfi-115-tests
  (use gauche.test)
  (use srfi.115)
  (test-module 'srfi.115)

  (test* "rx" "abc" (((rx "ab" #\c) "abc") 0))
  (test* "regexp" "abc" (((regexp '(:"ab" #\c)) "abc") 0))
  (test* "regexp->sre"
         '(seq #\a #\b #\c)
         (regexp->sre (regexp '(:"ab" #\c))))
  (test* "char-set->sre" '("cba") (char-set->sre #[abc]))
  (test* "valid-sre? returns true" #t (valid-sre? '(seq #\a #\b)))
  (test* "valid-sre? returns false" #f (valid-sre? '(seq or)))

  (test* "regexp-matches?" #t (regexp-matches? "abc" "abc"))
  (test* "regexp-matches?" #f (regexp-matches? "abc" "abcd"))
  (test* "regexp-matches?" #f (regexp-matches? "abc" "zabc"))
  (test* "regexp-matches?" #t (regexp-matches? "abc" "zabc" 1))
  (test* "regexp-matches?" #t (regexp-matches? "abc" "zabcd" 1 4))

  (test* "regexp-fold"
         '((9 "abc" 12 15)
           (3 "abc" 6 9)
           (0 "abc" 0 3))
         (regexp-fold "abc"
                      (lambda (i match str acc)
                        (cons (if match
                                (list i
                                      (match 0)
                                      (rxmatch-start match)
                                      (rxmatch-end match))
                                #f)
                              acc))
                      '()
                      "abc x abc z abc"))

  (test* "regexp-fold"
         '((0 "abc" 0 3)
           (3 "abc" 6 9)
           (9 "abc" 12 15))
         (regexp-fold "abc"
                      (lambda (i match str acc)
                        (cons (if match
                                (list i
                                      (match 0)
                                      (rxmatch-start match)
                                      (rxmatch-end match))
                                #f)
                              acc))
                      '()
                      "abc x abc z abc"
                      (lambda (i match str acc)
                        (reverse acc))))

  (test* "regexp-extract"
         '("192" "168" "0" "1")
         (regexp-extract '(+ numeric) "192.168.0.1"))
  (test* "regexp-extract"
         '("123" "456" "789")
         (regexp-extract '(+ numeric) "abc123def456ghi789"))
  (test* "regexp-extract"
         '("123" "456" "789")
         (regexp-extract '(* numeric) "abc123def456ghi789"))
  (cond-expand
   (full-unicode
    (test* "regexp-extract"
           '("a" "b" "c") (regexp-extract 'grapheme "abc"))
    (test* "regexp-extract"
           '("a" " " "b" " " "c") (regexp-extract 'grapheme "a b c"))
    (test* "regexp-extract"
           '("a" "\n" "b" "\r\n" "c") (regexp-extract 'grapheme "a\nb\r\nc"))
    (test* "regexp-extract"
           '("a\x0300;" "b\x0301;\x0302;" "c\x0303;\x0304;\x0305;")
           (regexp-extract 'grapheme "a\x0300;b\x0301;\x0302;c\x0303;\x0304;\x0305;"))
    (test* "regexp-extract"
           '("한" "글") (regexp-extract 'grapheme "한글"))
    (test* "regexp-extract"
           '("한" "글")
           (regexp-extract
            'grapheme
            ((with-module gauche.unicode utf8->string)
             '#u8(#xe1 #x84 #x92 #xe1 #x85 #xa1 #xe1 #x86 #xab
                       #xe1 #x84 #x80 #xe1 #x85 #xb3 #xe1 #x86 #xaf)))))
   (else))

  (test* "regexp-split"
         '("abc" "def" "ghi" "")
         (regexp-split '(+ numeric) "abc123def456ghi789"))
  (test* "regexp-split"
         '("abc" "def" "ghi" "")
         (regexp-split '(* numeric) "abc123def456ghi789"))
  (test* "regexp-split"
         '("a" "b") (regexp-split '(+ whitespace) "a b"))
  (test* "regexp-split"
         '("a" "" "b")
         (regexp-split '(",;") "a,,b"))
  (test* "regexp-split"
         '("a" "" "b" "")
         (regexp-split '(",;") "a,,b,"))

  (test* "regexp-partition"
         '("")
         (regexp-partition '(* numeric) ""))
  (test* "regexp-partition"
         '("abc" "123" "def" "456" "ghi")
         (regexp-partition '(* numeric) "abc123def456ghi"))
  (test* "regexp-partition"
         '("abc" "123" "def" "456" "ghi" "789")
         (regexp-partition '(* numeric) "abc123def456ghi789"))

  (test* "regexp-replace"
         "abc def"
         (regexp-replace '(+ space) "abc \t\n def" " "))
  (test* "regexp-replace"
         "  abc-abc"
         (regexp-replace '(: ($ (+ alpha)) ":" (* space)) "  abc: " '(1 "-" 1)))
  (test* "regexp-replace"
         "  abc-  abc"
         (regexp-replace '(: ($ (+ alpha)) ":" (* space)) "  abc: " '(1 "-" pre 1)))
  (test* "regexp-replace"
         "abcghighi"
         (regexp-replace "def" "abcdefghi" 'post))
  (test* "regexp-replace"
         "abcabcghi"
         (regexp-replace "def" "abcdefghi" 'pre))

  (test* "regexp-replace"
         "-abc \t\n d ef  "
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0))
  (test* "regexp-replace"
         "-abc \t\n d ef  "
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0 #f 0))
  (test* "regexp-replace"
         "  abc-d ef  "
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0 #f 1))
  (test* "regexp-replace"
         "  abc \t\n d-ef  "
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0 #f 2))
  (test* "regexp-replace"
         "  abc \t\n d ef-"
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0 #f 3))
  (test* "regexp-replace"
         "  abc \t\n d ef  "
         (regexp-replace '(+ space) "  abc \t\n d ef  " "-" 0 #f 4))
  (test* "regexp-replace"
         " abc d ef "
         (regexp-replace-all '(+ space) "  abc \t\n d ef  " " "))

  (test* "regexp-replace"
         "bc pre: <<<bc >>> match1: <<<def>>> post: <<<gh>>>gh"
         (regexp-replace '(: ($ (+ alpha)) ":" (* space))
                         "abc def: ghi"
                         '("pre: <<<" pre ">>> match1: <<<" 1 ">>> post: <<<" post ">>>")
                         1 11))
  )

;;-----------------------------------------------------------------------
;; Immutable list library

(test-section "SRFI-116")

(define-module srfi-116-tests
  (use gauche.test)
  (use srfi.116)
  (test-module 'srfi.116)
  (test-include-r7 "include/srfi-116-tests.scm"
                   (exclude (ilists ilists))))

;;-----------------------------------------------------------------------
;; Queues based on lists

(test-section "SRFI-117")

(define-module srfi-117-tests
  (use gauche.test)
  (use srfi.117)
  (test-module 'srfi.117)

  (use compat.chibi-test)
  (chibi-test
   (include "include/list-queues-test")))

;;-----------------------------------------------------------------------
;; Simple adjustable-size strings

(test-section "SRFI-118")

(define-module srfi-118-tests
  (use gauche.test)
  (use srfi.118)
  (test-module 'srfi.118)

  (test* "string-append!" "abcdef"
         (rlet1 s (string-copy "ab")
           (string-append! s "cd" #\e "f")))

  (test* "string-replace!" "abcXYZfgh"
         (rlet1 s (string-copy "abcdefgh")
           (string-replace! s 3 5 "XYZ")))

  (test* "string-replace!" "abcXYZfgh"
         (rlet1 s (string-copy "abcdefgh")
           (string-replace! s 3 5 "WXYZw" 1 4)))
  )

;;-----------------------------------------------------------------------
;; SRFI-120 depends on control.scheduler, so tested in control.scm

;;-----------------------------------------------------------------------
;; Generators

(test-section "SRFI-121")

(define-module srfi-121-tests
  (use gauche.test)
  (use compat.chibi-test)
  (use scheme.list)
  (use scheme.base :prefix r7rs:)
  (use srfi.11)
  (use srfi.121) ; this is in fact gauche.generator
  (test-module 'srfi.121)

  (let ([string-for-each r7rs:string-for-each])
    (chibi-test
     (include "include/generators-test")))

  (test* "generator->vector!" '(3 #(1 2 3) 4 0)
         (let ((g (list->generator '(1 2 3 4 5)))
               (v (make-vector 3)))
           (list (generator->vector! v 0 g)
                 v
                 (g)
                 (generator->vector! v 3 g))))
  )

;;-----------------------------------------------------------------------
;; Ephemerons

(test-section "SRFI-124")

(define-module srfi-124-tests
  (use gauche.test)
  (use srfi.124)
  (test-module 'srfi.124)

  (define k0 (list 'key0))
  (define k1 (list 'key1))
  (define d0 (list 'datum0))
  (define d1 (list 'datum2))
  (define ds (make-weak-vector 2))
  (weak-vector-set! ds 0 d0)
  (weak-vector-set! ds 1 d1)
  (define e0 (make-ephemeron k0 d0))
  (define e1 (make-ephemeron k1 d1))

  (test* "ephemeron?" #t (ephemeron? e0))
  (test* "ephemeron-key" #t
         (and (eq? (ephemeron-key e0) k0)
              (eq? (ephemeron-key e1) k1)))
  (test* "ephemeron-datum" #t
         (and (eq? (ephemeron-datum e0) d0)
              (eq? (ephemeron-datum e1) d1)))

  (set! d0 #f)
  (set! d1 #f)

  (gc)
  (gc)

  (test* "ephemeron-broken?" #f
         (or (ephemeron-broken? e0) (ephemeron-broken? e1)))

  (set! k0 #f)

  (gc)
  (gc)

  (test* "ephemeron-broken? e0" #t (ephemeron-broken? e0))
  (test* "ephemeron-broken? e1" #f (ephemeron-broken? e1))

  (gc)
  (gc)

  (test* "d0 collected" #f (weak-vector-ref ds 0 #f))
  (test* "d1 not collected" #f (not (weak-vector-ref ds 1 #f)))
  )

;;-----------------------------------------------------------------------
;; Intermediate hash tables

(test-section "SRFI-125")

(define-module srfi-125-tests
  (use gauche.test :only (test* test-module))
  (use srfi.125)
  (test-module 'srfi.125)
  (use scheme.sort :only (list-sort))
  (define (exit x) #f)                  ;ignore
  (define-syntax import                 ;ignore
    (syntax-rules ()
      [(_ . xs) (begin)]))
  (define-syntax test
    (syntax-rules ()
      [(_ expr expected) (test* 'expr expected expr)]))
  (define-syntax test-assert
    (syntax-rules ()
      [(_ expr) (test* 'expr #t expr)]))
  (define-syntax test-deny
    (syntax-rules ()
      [(_ expr) (test* 'expr #f expr)]))
  ;; srfi-125-tests includes deprecated SRFI-69 procedures tests.
  ;; some of them emits warnings in Gauche, so we use dummies here.
  (define (hash x . _) (default-hash x))
  (define (hash-by-identity x . _) (eq-hash x))
  (define deprecated:string-hash string-hash)
  (define deprecated:string-ci-hash string-ci-hash)
  (include "include/srfi-125-tests.scm"))

;;-----------------------------------------------------------------------
;; Lazy sequences

(test-section "SRFI-127")

(define-module srfi-127-tests
  (use gauche.test)
  (use srfi.127)
  (test-module 'srfi.127)

  (use compat.chibi-test)
  (chibi-test
   (include "include/lseqs-test.scm"))
  )

;;-----------------------------------------------------------------------
;; Comparators (reduced)

(test-section "SRFI-128")

(define-module srfi-128-tests
  ;; everything is built-in, so we just test bindings.
  (use gauche.test)
  (use srfi.128)
  (test-module 'srfi.128)
  )

;;-----------------------------------------------------------------------
;; Cursor-based string library

(test-section "SRFI-130")

(define-module srfi-130-tests
  (use gauche.test)
  (use srfi.130)
  (test-module 'srfi.130)

  (include "include/srfi-130-tests.scm"))

;;-----------------------------------------------------------------------
;; Sort libraries

(test-section "SRFI-132")

(define-module srfi-132-tests
  (use gauche.test)
  (use srfi.132)
  (use scheme.list)
  (test-module 'srfi.132)

  ;; partition-in-place! is not external, but it is such a fundamental
  ;; part of the algorithm that we test it independently.

  (let ([partition-in-place! (with-module srfi.132 partition-in-place!)]
        [data '((a #(a))
                (a #(b))
                (b #(a))
                (q #(q z))
                (z #(q z))
                (r #(q z))
                (q #(q q))
                (z #(j z e))
                (e #(j e j))
                (m #(m m m))
                (p #(z p e a))
                (m #(m z m m m))
                (m #(m z z m m))
                (m #(m z m z m))
                (m #(p q m r s))
                (m #(a z m z m))
                (m #(m z a z m))
                (m #(m a m m m))
                (m #(a m a m m))
                (m #(m a m a a))
                (p #(t w o h o u s e h o l d s b o t h a l i k e i n d i g n
                       i t y i n f a i r v e l o n a w h e r e w e l a y o u
                       r s c e n e)))])
    (define (t vec pivot)
      (let* ([smaller (filter (^e (<? default-comparator e pivot))
                              (vector->list vec))]
             [greater (filter (^e (<? default-comparator pivot e))
                              (vector->list vec))]
             [same    (filter (^e (=? default-comparator pivot e))
                              (vector->list vec))])
        (let1 v (vector-copy vec)
          (test* (format "partition-in-place! ~s @~s" vec pivot)
                 (list smaller greater)
                 (receive (i j) (partition-in-place!
                                 (^[a b] (<? default-comparator a b)) pivot
                                 v 0 (vector-length vec))
                   (list (vector->list v 0 i)
                         (vector->list v i j)))
                 (^[a b]
                   (and (lset= eq? (car a) (car b))
                        (lset= eq? (cadr a) (cadr b))))))
        (unless (null? same)
          (let1 k (+ (length smaller)
                     (modulo (sys-random) (length same)))
            (test* (format "vector-separate! ~s ~s" vec k)
                   (list (append smaller (make-list (- k (length smaller)) pivot))
                         (append greater (make-list (- (length same)
                                                       (- k (length smaller)))
                                                    pivot)))
                   (let1 v (vector-copy vec)
                     (vector-separate! (^[a b] (<? default-comparator a b)) v k)
                     (list (vector->list v 0 k)
                           (vector->list v k (vector-length vec))))
                   (^[a b]
                     (and (lset= eq? (car a) (car b))
                          (lset= eq? (cadr a) (cadr b)))))))))
    (dolist [d data] [t (vector-copy (cadr d)) (car d)]))

  (let ([data '(#()
                #(15)
                #(2 5)
                #(18 61 30)
                #(61 39 13 4)
                #(78 61 19 38 51)
                #(60 68 17 45 6 1)
                #(80 38 30 1 9 23 68)
                #(12 60 49 83 3 17 90 39)
                #(66 75 31 42 52 20 54 56 18)
                #(96 84 77 44 93 39 89 92 59 72)
                #(92 32 8 57 19 52 4 96 32 84 38 74 27 53)
                #(54 27 14 29 80 16 7 1 98 42 77 39 19 29 0 1 81)
                #(72 79 77 60 7 92 35 65 11 91 86 85 62 44 33 9 6 37 31 66)
                #(32 21 51 55 70 40 36 6 97 25 96 24 25 69 49 71 30 14 28 99
                     3 26 60 97 50 41 5 3 27 34 90 63 23 68 14 53 48 44 98 55))])
    (define (my-median elt< vec fallback)
      (let* ([svec (vector-sort elt< vec)]
             [len (vector-length vec)])
        (if (zero? len)
          fallback
          (if (odd? len)
            (vector-ref svec (quotient len 2))
            (/ (+ (vector-ref svec (quotient len 2))
                  (vector-ref svec (- (quotient len 2) 1)))
               2)))))
    (define (t vec)
      (test* (format "vector-select! ~s <" vec)
             (vector->list (vector-sort < vec))
             (map (^k (vector-select! < (vector-copy vec) k))
                  (iota (vector-length vec))))
      (test* (format "vector-select! ~s >" vec)
             (vector->list (vector-sort > vec))
             (map (^k (vector-select! > (vector-copy vec) k))
                  (iota (vector-length vec))))
      (let1 expect (list (my-median < vec 'none)
                         (my-median > vec 'none))
        (test* (format "vector-find-median ~s" vec)
               expect
               (list (vector-find-median < vec 'none)
                     (vector-find-median > vec 'none)))
        (test* (format "vector-find-median! ~s" vec)
               expect
               (list (vector-find-median! < (vector-copy vec) 'none)
                     (vector-find-median! > (vector-copy vec) 'none)))))

    (for-each t data))
  )

;;-----------------------------------------------------------------------
;; Immutable texts

(test-section "SRFI-135")

(define-module srfi-135-tests
  (use gauche.test)
  (use srfi.135)
  (test-module 'srfi.135)
  ;; srfi-135-tests.scm rolls its own test framework; this hack adapts them
  ;; to Gauche's.
  (define-syntax orig-or (with-module gauche or))
  (define-syntax or
    (syntax-rules (fail)
      [(_ x (fail 'what))
       (test* (format "~a: ~s" 'what 'x) #t x)]
      [(_ . xs) (orig-or . xs)]))
  (test-include-r7 "include/srfi-135-tests.scm"))

;;-----------------------------------------------------------------------
;; Syntax parameters

(test-section "SRFI-139")

(define-module srfi-139-tests
  (use gauche.test)
  ;; srfi-139 is built-in
  (define-syntax-parameter foo (syntax-rules () [(_ a) '(a a)]))

  (test* "syntax parameter 1" '((oof oof) (foof foof foof))
         (list (foo oof)
               (syntax-parameterize ([foo (syntax-rules () [(_ a) '(a a a)])])
                  (foo foof))))

  (test* "syntax-parameter 2" '((oof oof) (foof))
         (list (foo oof)
               (syntax-parameterize ([foo (make-id-transformer
                                           (syntax-rules ()
                                             [_ 'foof]))])
                  (list foo))))
  )

;;-----------------------------------------------------------------------
;; Integer division

(test-section "SRFI-141")

(define-module srfi-141-tests
  (use gauche.test)
  (use srfi.141)
  (test-module 'srfi.141)

  (let1 data
      ;;numer denom floor     truncate ceiling   round    euclidean balanced
      '[(23   5     (4   3)   (4  3)   (5  -2)   (5  -2)  (4   3)   (5 -2))
        (22   5     (4   2)   (4  2)   (5  -3)   (4   2)  (4   2)   (4  2))
        (23   -5    (-5 -2)   (-4  3)  (-4  3)   (-5 -2)  (-4  3)   (-5 -2))
        (22   -5    (-5 -3)   (-4  2)  (-4  2)   (-4  2)  (-4  2)   (-4  2))
        (-23  5     (-5  2)   (-4 -3)  (-4 -3)   (-5  2)  (-5  2)   (-5  2))
        (-22  5     (-5  3)   (-4 -2)  (-4 -2)   (-4 -2)  (-5  3)   (-4 -2))
        (-23  -5    (4  -3)   (4  -3)  (5  2)    (5   2)  (5   2)   (5   2))
        (-22  -5    (4  -2)   (4  -2)  (5  3)    (4  -2)  (5   3)   (4  -2))
        (25   5     (5   0)   (5   0)  (5   0)   (5   0)  (5   0)   (5   0))
        (-25  5     (-5  0)   (-5  0)  (-5  0)   (-5  0)  (-5  0)   (-5  0))
        (25  -5     (-5  0)   (-5  0)  (-5  0)   (-5  0)  (-5  0)   (-5  0))
        (-25 -5     (5   0)   (5   0)  (5   0)   (5   0)  (5   0)   (5   0))
        (1    2     (0   1)   (0   1)  (1  -1)   (0   1)  (0   1)   (1  -1))
        (-1   2     (-1  1)   (0  -1)  (0  -1)   (0  -1)  (-1  1)   (0  -1))
        (1   -2     (-1 -1)   (0   1)  (0   1)   (0   1)  (0   1)   (-1 -1))
        (-1  -2     (0  -1)   (0  -1)  (1   1)   (0  -1)  (1   1)   (0  -1))
        (3    2     (1   1)   (1   1)  (2  -1)   (2  -1)  (1   1)   (2  -1))
        (-3   2     (-2  1)   (-1 -1)  (-1 -1)   (-2  1)  (-2  1)   (-1 -1))
        (3   -2     (-2 -1)   (-1  1)  (-1  1)   (-2 -1)  (-1  1)   (-2 -1))
        (-3  -2     (1  -1)   (1  -1)  (2   1)   (2   1)  (2   1)   (1  -1))
        (39   6     (6   3)   (6   3)  (7  -3)   (6   3)  (6   3)   (7  -3))
        (39  -6     (-7 -3)   (-6  3)  (-6  3)   (-6  3)  (-6  3)   (-7 -3))
        (-39  6     (-7  3)   (-6 -3)  (-6 -3)   (-6 -3)  (-7  3)   (-6 -3))
        (-39 -6     (6  -3)   (6  -3)  (7   3)   (6  -3)  (7   3)   (6  -3))
        ]
    (define (t-1 numer denom floor truncate ceiling round euclidean balanced)
      (define (t name x-/ x-quotient x-remainder answers)
        (test* #"SRFI-141 ~name ~|numer|/~|denom|"
               (list answers answers
                     (map inexact answers) (map inexact answers)
                     (map inexact answers) (map inexact answers))
               (list (values->list (x-/ numer denom))
                     (list (x-quotient numer denom)
                           (x-remainder numer denom))
                     (values->list (x-/ (inexact numer) denom))
                     (list (x-quotient (inexact numer) denom)
                           (x-remainder (inexact numer) denom))
                     (values->list (x-/ numer (inexact denom)))
                     (list (x-quotient numer (inexact denom))
                           (x-remainder numer (inexact denom))))))
      (t 'floor   floor/ floor-quotient floor-remainder floor)
      (t 'truncate truncate/ truncate-quotient truncate-remainder truncate)
      (t 'ceiling ceiling/ ceiling-quotient ceiling-remainder ceiling)
      (t 'round   round/ round-quotient round-remainder round)
      (t 'euclidean euclidean/ euclidean-quotient euclidean-remainder euclidean)
      (t 'balanced balanced/ balanced-quotient balanced-remainder balanced))

    (for-each (cut apply t-1 <>) data))
  )

;;-----------------------------------------------------------------------
;; Fixnums

(test-section "SRFI-143")

(define-module srfi-143-tests
  (use gauche.test)
  (use srfi.143)
  (test-module 'srfi.143)

  (use compat.chibi-test)
  (chibi-test
   (include "include/fixnum-tests.scm")))

;;----------------------------------------------------------------------
;; Mappings

(test-section "SRFI-146")

(define-module srfi-146-tests
  (use gauche.test)
  (use srfi.146)
  (test-module 'srfi.146)
  (use srfi.146.hash)
  (test-module 'srfi.146.hash)

  (use scheme.list)
  (use srfi.64)
  (use compat.r7rs-srfi-tests)

  (let ()
    (include "include/srfi-146-tests.scm")
    (run-tests))

  (let ()
    (include "include/srfi-146-hash-tests.scm")
    (run-tests))
  )

;;-----------------------------------------------------------------------
;; Custom macro transformers

(test-section "SRFI-147")

(define-module srfi-147-tests
  (use gauche.test)
  (use srfi.147)
  (test-module 'srfi.147)

  (use srfi.64)
  (use compat.r7rs-srfi-tests)
  (include "include/srfi-147-tests.scm")
  (run-tests)
  )

;;-----------------------------------------------------------------------
;; NB: SRFI-150 is tested in ext/gauche

;;-----------------------------------------------------------------------
;; Bitwise operations

(test-section "SRFI-151")

(define-module srfi-151-tests
  (use gauche.test)
  (use srfi.151)
  (test-module 'srfi.151)

  (use compat.chibi-test)
  (chibi-test
   (include "include/srfi-151-tests.scm"))
  )

;;-----------------------------------------------------------------------
;; String library (reduced)

(test-section "SRFI-152")

(define-module srfi-152-tests
  (use gauche.test)
  (use srfi.152)
  (test-module 'srfi.152)

  (use compat.chibi-test)
  (chibi-test
   (include "include/srfi-152-tests.scm")))

;;-----------------------------------------------------------------------
;; First-class dynamic extents

(test-section "SRFI-154")

(define-module srfi-154-tests
  (use gauche.test)
  (use srfi.64)
  (use srfi.154)
  (test-module 'srfi.154)

  (use compat.r7rs-srfi-tests)
  (include "include/srfi-154-tests.scm")
  (run-tests))

;;-----------------------------------------------------------------------
;; Promises

(test-section "SRFI-155")

(define-module srfi-155-tests
  (use gauche.test)
  (use srfi.155)
  (test-module 'srfi.155)

  (use srfi.64)
  (use srfi.154)
  (use compat.r7rs-srfi-tests)
  (include "include/srfi-155-tests.scm")
  (run-tests)

  (test-section "srfi-155 additional")
  (test* "extent" 1
         (let ()
           (define x (make-parameter 1))
           (define p (delay (x)))
           (define (g p) (parameterize ((x 2)) (force p)))
           (g p)))
  )

;;-----------------------------------------------------------------------
;; Generators and accumulators

(test-section "SRFI-158")

(define-module srfi-158-tests
  (use gauche.test)
  (use srfi.158)
  (test-module 'srfi.158)

  (use compat.chibi-test)
  (use gauche.uvector)
  (define bytevector u8vector)
  (use scheme.list)
  (use srfi.13)
  (chibi-test
   (include "include/srfi-158-tests.scm")))

;;-----------------------------------------------------------------------
;; Combinator formatting

(test-section "SRFI-159")

(define-module srfi-159-tests
  (use gauche.test)
  (use srfi.159)
  (test-module 'srfi.159)

  (use compat.chibi-test)
  (use scheme.list)
  (use scheme.file)
  (chibi-test
   (include "include/srfi-159-tests.scm"))
  )

;;-----------------------------------------------------------------------
;; Homogeneous numeric vector libraries

(test-section "SRFI-160")

(define-module srfi-160-tests
  (use gauche.test)
  (use srfi.160)
  (test-module 'srfi.160)

  (use compat.chibi-test)
  (chibi-test
   (include "include/srfi-160-base-tests.scm")
   (include "include/srfi-160-tests.scm")
   ))

;;-----------------------------------------------------------------------
;; Comparators sublibrary

(test-section "SRFI-162")

(define-module srfi-160-tests
  (use gauche.test)
  (use srfi.162)
  (test-module 'srfi.162)
  ;; if we pass srfi-114 tests, it should be ok.
  )

;;-----------------------------------------------------------------------
;; POSIX API

(test-section "SRFI-170")

;; SRFI-170 is a thin wrapper of Gauche's builtins.  We only test
;; procedures that are doing something more.

(define-module srfi-170-tests
  (use gauche.test)
  (use srfi.170)
  (test-module 'srfi.170)

  (use scheme.list)
  (use file.util)
  (use gauche.test)
  (use gauche.generator)

  (when (file-exists? "test.o")
    (if (file-is-directory? "test.o")
      (remove-directory* "test.o")
      (sys-unlink "test.o")))
  (make-directory* "test.o")
  (touch-files '("test.o/a" "test.o/b" "test.o/c" "test.o/.a"))

  (unwind-protect
      (begin
        (test* "directory-files" '("a" "b" "c")
               (directory-files "test.o")
               (cut lset= equal? <> <>))
        (test* "directory-files w/dot" '("a" "b" "c" ".a")
               (directory-files "test.o" #t)
               (cut lset= equal? <> <>))

        (test* "make-directory-files-generator"
               '("a" "b" "c")
               (generator->list (make-directory-files-generator "test.o"))
               (cut lset= equal? <> <>))
        (test* "make-directory-files-generator w/dot"
               '("a" "b" "c" ".a")
               (generator->list (make-directory-files-generator "test.o" #t))
               (cut lset= equal? <> <>))

        (test* "open/read/close-directory"
               '("a" "b" "c")
               (let1 d (open-directory "test.o")
                 (unwind-protect
                     (generator->list (cut read-directory d))
                   (close-directory d))))

        (test* "call-with-temporary-filename"
               #t
               (let1 ff (call-with-temporary-filename
                         (^f (let1 z (open-file f 'binary-output
                                                (logior open/create
                                                        open/exclusive)
                                                #o600)
                               (close-port z)
                               f))
                         "test.o/")
                 (boolean (#/^test.o\/\w+/ ff))))
        )
    (remove-directory* "test.o"))
  )

;;-----------------------------------------------------------------------
;; Two safer subsets of R7RS

(test-section "SRFI-172")

(define-module srfi-172-tests
  (use gauche.test)
  (use srfi.172)
  (test-module 'srfi.172))

(define-module srfi-172-functional-tests
  (use gauche.test)
  (use srfi.172.functional)
  (test-module 'srfi.172.functional))

;;-----------------------------------------------------------------------
;; Hooks

(test-section "SRFI-173")

(define-module srfi-173-tests
  (use gauche.test)
  (use srfi.173)
  (test-module 'srfi.173)

  (use compat.chibi-test)
  (chibi-test
   (include "include/srfi-173-tests.scm")))

;;-----------------------------------------------------------------------
;; POSIX timespecs

(test-section "SRFI-174")

(define-module srfi-174-tests
  (use gauche.test)
  (use srfi.174)
  (test-module 'srfi.174)

  (let ([t1 (timespec 123456789 987654321)]
        [t2 (timespec 123456789 987654322)]
        [t3 (timespec -123456789 987654321)])
    (define (ts-approx=? a b)
      (and (= (timespec-seconds a) (timespec-seconds b))
           (< (abs (- (timespec-nanoseconds a) (timespec-nanoseconds b)))
              10)))
    (test* "timespec?" '(#t #t #t)
           (map timespec? (list t1 t2 t3)))
    (test* "timespec-seconds" 123456789 (timespec-seconds t1))
    (test* "timespec-seconds" -123456789 (timespec-seconds t3))
    (test* "timespec-nanoseconds" 987654322 (timespec-nanoseconds t2))
    (test* "timespec-nanoseconds" 987654321 (timespec-nanoseconds t3))
    (test* "inexact <-> timespec" t1
           (inexact->timespec (timespec->inexact t1))
           ts-approx=?)
    (test* "inexact <-> timespec" t3
           (inexact->timespec (timespec->inexact t3))
           ts-approx=?)
    (test* "inexact conversion" (- (timespec->inexact t1))
           (timespec->inexact t3))
    (test* "timespec=?" #t (timespec=? t1 t1))
    (test* "timespec=?" #f (timespec=? t1 t2))
    (test* "timespec=?" #f (timespec=? t1 t3))
    (test* "timespec<?" #t (timespec<? t1 t2))
    (test* "timespec<?" #f (timespec<? t2 t1))
    (test* "timespec<?" #t (timespec<? t3 t1))
    (test* "timespec<?" #t (timespec<? t3 t2))
    )
  )

;;-----------------------------------------------------------------------
;; ASCII character library

(test-section "SRFI-175")

(define-module srfi-175-tests
  (use gauche.test)
  (use srfi.175)
  (test-module 'srfi.175)

  (use gauche.unicode) ;string->utf8
  (define-syntax want
    (syntax-rules ()
      [(_ expected expr) (test* (write-to-string 'expr) expected expr)]))
  (include "include/srfi-175-tests"))

;;-----------------------------------------------------------------------
;; NB: SRFI-180 depends on ext/peg, so it is tested in it.

;;-----------------------------------------------------------------------
;; NB: SRFI-181 is tested in gauche.vport

;;-----------------------------------------------------------------------
;; Linear adjustable-length strings
(test-section "SRFI-185")

(define-module srfi-185-tests
  (use gauche.test)
  (use srfi.185)
  (test-module 'srfi.185)

  (test* "string-append-linear!" "abcdefghij"
         (string-append-linear! "abc" "def" #\g "" "hij"))
  (test* "string-append-linear!" "xyz"
         (string-append-linear! "xyz"))
  (test* "string-replace-linear!" "abqqqi"
         (string-replace-linear! "abcdefghi" 2 8 "qqq"))
  (test* "string-replace-linear!" "yzghi"
         (string-replace-linear! "abcdefghi" 0 6 "xyz" 1))
  (test* "string-replace-linear!" "yghi"
         (string-replace-linear! "abcdefghi" 0 6 "xyz" 1 2))

  (test* "string-append!" "abcdef"
         (rlet1 s "ab"
           (string-append! s "cd" #\e "f")))

  (test* "string-replace!" "abcXYZfgh"
         (rlet1 s "abcdefgh"
           (string-replace! s 3 5 "XYZ")))

  (test* "string-replace!" "abcXYZfgh"
         (rlet1 s "abcdefgh"
           (string-replace! s 3 5 "WXYZw" 1 4)))
  )

;;-----------------------------------------------------------------------
;; Maybe and either

(test-section "SRFI-189")

(define-module srfi-189-tests
  (use gauche.test)
  (use srfi.189)
  (test-module 'srfi.189)
  (test-include-r7 "include/srfi-189-tests"))

;;-----------------------------------------------------------------------
;; Coroutine generators

(test-section "SRFI-190")

(define-module srfi-190-tests
  (use gauche.test)
  (use srfi.190)
  (test-module 'srfi.190)
  (test-include-r7 "include/srfi-190-tests"))

;;-----------------------------------------------------------------------
;; NB: SRFI-192 is tested in gauche.vport

;;-----------------------------------------------------------------------
;; NB: SRFI-194 is tested in ext/srfi

;;-----------------------------------------------------------------------
;; NB: SRFI-196 is tested with data.range

;;-----------------------------------------------------------------------
;; Pipeline operators

(test-section "SRFI-197")

(define-module srfi-197-tests
  (use gauche.test)
  (use srfi.197)
  (test-module 'srfi.197)

  (use scheme.base)
  (use scheme.process-context)
  (use scheme.write)
  (use srfi.64)
  (include "include/srfi-197-test"))

;;-----------------------------------------------------------------------
;; NB: SRFI-207 is tested with gauche.uvector

;;-----------------------------------------------------------------------
;; NB: SRFI-209 is tested with gauche.bitvector

;;-----------------------------------------------------------------------
;; Procedures and syntax for multiple values

(test-section "SRFI-210")

(define-module srfi-210-tests
  (use gauche.test)
  (use srfi.210)
  (test-module 'srfi.210)
  (test-include-r7 "include/srfi-210-tests")
  (with-module srfi.210.test (run-tests)))

;;-----------------------------------------------------------------------
;; Central log exchange

(test-section "SRFI-215")

(define-module srfi-215-tests
  (use gauche.test)
  (use srfi.215)
  (test-module 'srfi.215)

  (use gauche.logger)
  (parameterize ((log-default-drain log-default-drain))
    (define (t what expected . args)
      (test* #"send-log (~what)" expected
             (with-output-to-string (cut apply send-log args))))
    (log-open 'current-output :prefix ">>>")
    (t "basic" ">>>INFO: test ()\n" INFO "test")
    (t "params" ">>>DEBUG: params ((METHOD . \"get\") (PATH . \"/login\") (SEQ . 255))\n"
       DEBUG "params" 'METHOD 'get 'PATH "/login" 'SEQ 255)

    (parameterize ((current-log-fields
                    '(USER "guest" TOKEN #u8(1 2 3) OP :delete)))
      (t "additional log fields"
         ">>>WARNING: oops ((CODE . 500) (USER . \"guest\") (TOKEN . #u8(1 2 3)) (OP . \":delete\"))\n"
         WARNING "oops" 'CODE 500))
    (let ((z '()))
      (parameterize ((current-log-callback (^[alist] (push! z alist))))
        (test* "changing current-log-callback"
               '(((SEVERITY . 0) (MESSAGE . "good bye.") (TYPE . "catastrophy"))
                 ((SEVERITY . 2) (MESSAGE . "everything's wrong!"))
                 ((SEVERITY . 5) (MESSAGE . "something's wrong")))
               (begin
                 (send-log NOTICE "something's wrong")
                 (send-log CRITICAL "everything's wrong!")
                 (send-log EMERGENCY "good bye." 'TYPE "catastrophy")
                 z))))

    (test* "error check (severity)" (test-error <error> #/a severity from/)
           (send-log 'INFO "foo"))
    (test* "error check (message)" (test-error <error> #/message to be a string/)
           (send-log INFO 'baz))
    (test* "error check (plist)"
           (test-error <error> #/Incomplete field plist: \(foo bar baz\)/)
           (send-log INFO "yay" 'foo 'bar 'baz))
    ))

;;-----------------------------------------------------------------------
;; SCIP prerequisites

(test-section "SRFI-216")

(define-module srfi-216-test
  (use gauche.test)
  (use srfi.216)
  (test-module 'srfi.216)
  )

;;-----------------------------------------------------------------------
;; Integer sets

(test-section "SRFI-217")

(define-module srfi-217-tests
  (use gauche.test)
  (use srfi.217)
  (test-module 'srfi.217)
  (test-include-r7 "include/srfi-217-test")

  ;; Here are some tests specifically tailored to check
  ;; the corner case of Gauche's implementation
  (let ()
    (define (t a b uni int dif xor)
      (test* "iset set operation (union, intersection, differnce, xor"
             (list uni int dif xor)
             (let ([a. (list->iset a)]
                   [b. (list->iset b)])
               (list (iset->list (iset-union a. b.))
                     (iset->list (iset-intersection a. b.))
                     (iset->list (iset-difference a. b.))
                     (iset->list (iset-xor a. b.)))))
      (test* "iset set operation (union!, intersection!, differnce!, xor!"
             (list uni int dif xor)
             (let ([a. (list->iset a)]
                   [b. (list->iset b)])
               (list (iset->list (iset-union! (iset-copy a.) b.))
                     (iset->list (iset-intersection! (iset-copy a.) b.))
                     (iset->list (iset-difference! (iset-copy a.) b.))
                     (iset->list (iset-xor! (iset-copy a.) b.)))))
      )
    (t '(-1 0) '() '(-1 0) '() '(-1 0) '(-1 0))
    (t '() '(-1 0) '(-1 0) '() '() '(-1 0))
    (t '(0 1 2 3 5 6 7 8) '(3 4 5)
       '(0 1 2 3 4 5 6 7 8)
       '(3 5)
       '(0 1 2 6 7 8)
       '(0 1 2 4 6 7 8))
    (t '(0 1 2 5 6 7) '(-1 3 4 8)
       '(-1 0 1 2 3 4 5 6 7 8)
       '()
       '(0 1 2 5 6 7)
       '(-1 0 1 2 3 4 5 6 7 8))
    )
  )

;;-----------------------------------------------------------------------
;; Generator/accumulator sublibrary

(test-section "SRFI-221")

(define-module srfi-221-tests
  (use gauche.test)
  (use srfi.221)
  (test-module 'srfi.221)
  (test-include-r7 "include/srfi-221-test"))

;;-----------------------------------------------------------------------
;; Compound objects

(test-section "SRFI-222")

(define-module srfi-222-tests
  (use gauche.test)
  (use srfi.222)
  (test-module 'srfi.222)
  (test-include-r7 "include/srfi-222-tests"
                   (exclude (compounds)))

  ;; Gauche object protocol
  (test* "hash function of compound" #t
         (integer? (default-hash (make-compound 1 2 3))))
  (test* "compare function of compound" '(-1 0 1)
         (list (compare (make-compound 1 2) (make-compound 1 2 3))
               (compare (make-compound 1 2) (make-compound 1 2))
               (compare (make-compound 1 2 3) (make-compound 1 2))))
  )

;;-----------------------------------------------------------------------
;; Dictionaries

(test-section "SRFI-225")

(define-module srfi-225-tests
  (use gauche.test)
  (use srfi.225)
  (test-module 'srfi.225)
  )

;;-----------------------------------------------------------------------
;; Control Features

(test-section "SRFI-226")

(define-module srfi-226-tests
  (use gauche.test)
  (use srfi.226)
  (test-module 'srfi.226)
  )

;;-----------------------------------------------------------------------
;; Optional arguments
(test-section "SRFI-227")

(define-module srfi-227-tests
  (use gauche.test)
  (use srfi.227)
  (test-module 'srfi.227)

  (define f
    (opt*-lambda (x y (z (+ x 1)) (w (* y z)))
      (list x y z w)))

  (test* "opt*-lambda 0" (test-error)    (f))
  (test* "opt*-lambda 1" (test-error)    (f 10))
  (test* "opt*-lambda 2" '(10 20 11 220) (f 10 20))
  (test* "opt*-lambda 3" '(10 20 30 600) (f 10 20 30))
  (test* "opt*-lambda 4" '(10 20 30 40)  (f 10 20 30 40))
  (test* "opt*-lambda 5" (test-error)    (f 10 20 30 40 50))

  (define f+
    (opt*-lambda (x (y (+ x 1)) . r)
      (list x y r)))

  (test* "opt*-lambda rest 0" (test-error)    (f+))
  (test* "opt*-lambda rest 1" '(10 11 ())     (f+ 10))
  (test* "opt*-lambda rest 2" '(10 20 ())     (f+ 10 20))
  (test* "opt*-lambda rest 3" '(10 20 (30))   (f+ 10 20 30))
  (test* "opt*-lambda rest 3" '(10 20 (30 40))(f+ 10 20 30 40))

  (define g
    (let ((x -1) (y -2) (z -3))
      (opt-lambda (x y (z (+ x 1)) (w (* y z)))
        (list x y z w))))

  (test* "opt-lambda 0" (test-error)    (g))
  (test* "opt-lambda 1" (test-error)    (g 10))
  (test* "opt-lambda 2" '(10 20 0 6)    (g 10 20))
  (test* "opt-lambda 3" '(10 20 30 6)   (g 10 20 30))
  (test* "opt-lambda 4" '(10 20 30 40)  (g 10 20 30 40))
  (test* "opt-lambda 5" (test-error)    (g 10 20 30 40 50))

  (define g+
    (let ((x -1))
      (opt-lambda (x (y (+ x 1)) . r)
        (list x y r))))

  (test* "opt-lambda rest 0" (test-error)    (g+))
  (test* "opt-lambda rest 1" '(10 0 ())      (g+ 10))
  (test* "opt-lambda rest 2" '(10 20 ())     (g+ 10 20))
  (test* "opt-lambda rest 3" '(10 20 (30))   (g+ 10 20 30))
  (test* "opt-lambda rest 3" '(10 20 (30 40))(g+ 10 20 30 40))

  ;; https://github.com/shirok/Gauche/issues/881
  (test* "opt-lambda corner case 1" 1 ((opt-lambda (a) a) 1))
  (test* "opt*-lambda corner case 2" 2 ((opt*-lambda (a) a) 2))

  (test* "let-optionals*" '(1 2 4)
         (let ((y -2) (z -3))
           (let-optionals* '(1 2)
             (x (y (+ x 1)) (z (+ y 2)))
             (list x y z))))

  (test* "let-optionals" '(1 2 0)
         (let ((y -2) (z -3))
           (let-optionals '(1 2)
             (x (y (+ x 1)) (z (+ y 2)))
             (list x y z))))
  )

(define-module srfi-227-definitions-tests
  (use gauche.test)
  (use srfi.227.definitions)
  (test-module 'srfi.227.definitions)

  (define x 1)
  (define y 2)
  (define z 3)
  (define-optionals* (f x y (z (+ x 1)) (w (* y z)))
    (list x y z w))
  (define-optionals (g x y (z (+ x 1)) (w (* y z)))
    (list x y z w))

  (test* "define-optionals 0" (test-error)    (f))
  (test* "define-optionals 2" '(10 20 11 220) (f 10 20))
  (test* "define-optionals 3" '(10 20 30 600) (f 10 20 30))
  (test* "define-optionals 4" '(10 20 30 40)  (f 10 20 30 40))
  (test* "define-optionals* 0" (test-error)   (g))
  (test* "define-optionals* 2" '(10 20 2 6)   (g 10 20))
  (test* "define-optionals* 3" '(10 20 30 6)  (g 10 20 30))
  (test* "define-optionals* 4" '(10 20 30 40) (g 10 20 30 40))
  )

;;-----------------------------------------------------------------------
;; Composing comparators

(test-section "SRFI-228")

(define-module srfi-228-tests
  (use gauche.test)
  (use srfi.228)
  (test-module 'srfi.228)

  (use compat.chibi-test)
  (use scheme.base)
  (use srfi.132 :only (list-sort))
  (chibi-test
   (include "include/srfi-228-test.scm")))

;;-----------------------------------------------------------------------
;; Tagged procedures

(test-section "SRFI-229")

(define-module srfi-229-tests
  (use gauche.test)
  (use srfi.229)
  (test-module 'srfi.229)
  (test-include-r7 "include/srfi-229-tests"))

;;-----------------------------------------------------------------------
;; Flexible curried procedures

(test-section "SRFI-232")

(define-module srfi-232-tests
  (use gauche.test)
  (use srfi.232)
  (test-module 'srfi.232)

  (use srfi.64)
  (include "include/srfi-232-tests"))

;;-----------------------------------------------------------------------
;; Topological sort

(test-section "SRFI-234")

(define-module srfi-234-tests
  (use gauche.test)
  (use srfi.234)
  (test-module 'srfi.234)
  (test-include-r7 "include/srfi-234-test"))

;;-----------------------------------------------------------------------
;; Combinators

(test-section "SRFI-235")

(define-module srfi-235-tests
  (use gauche.test)
  (use srfi.235)
  (test-module 'srfi.235)
  (test-include-r7 "include/srfi-235-test"))

;;-----------------------------------------------------------------------
;; Evaluating expressiosn in an unspecified order

(test-section "SRFI-236")

(define-module srfi-236-tests
  (use gauche.test)
  (use srfi.236)                          ;NB: SRFI-236 is built-in
  (test-module 'srfi.236)
  (test-include-r7 "include/srfi-236-tests"))


;;-----------------------------------------------------------------------
;; Codesets

(test-section "SRFI-238")

(define-module srfi-238-tests
  (use gauche.test)
  (use srfi.238)
  (test-module 'srfi.238)

  (test* "codeset?" '(#t #t #f)
         (map codeset? '(errno signal foobar)))
  (test* "codeset-symbols (errno)" #t
         (boolean (memq 'ENOENT (codeset-symbols 'errno))))
  (test* "codeset-symbols (signal)" #t
         (boolean (memq 'SIGINT (codeset-symbols 'signal))))
  )

;;-----------------------------------------------------------------------
;; Destructuring lists

(test-section "SRFI-239")

(define-module srfi-239-tests
  (use gauche.test)
  (use srfi.239)
  (test-module 'srfi.239)

  (test* "list-case pair" 1
         (list-case '(1 2 3) [(h . _) h]))
  (test* "list-case pair" '(2 3)
         (list-case '(1 2 3) [(_ . t) t]))
  (test* "list-case pair vs null" (test-error)
         (list-case '(1 2 3) [() 'a]))
  (test* "list-case pair vs atom" (test-error)
         (list-case '(1 2 3) [v v]))
  (test* "list-case atom" 1
         (list-case 1 [(h . t) 'a] [() 'b] [v v]))

  (define type-of
    (^x (list-case x
          [(_ . _) 'pair]
          [() 'null]
          [_ 'atom])))
  (test* "list-case type-of" '(atom null pair)
         (list (type-of 'a)
               (type-of ())
               (type-of '(1 2 3))))
  )

;;-----------------------------------------------------------------------
;; Syntactic monads

(test-section "SRFI-247")

(define-module srfi-247-tests
  (use gauche.test)
  (use scheme.list :rename ((partition r7rs:partition)))
  (use srfi.247)
  (test-module 'srfi.247)

  (define-syntax import (syntax-rules () ((_ . _) #f)))
  (define-syntax assert (syntax-rules (equal?)
                          [(_ (equal? expected expr))
                           (test* 'expr expected expr)]))
  (include "include/srfi-247-tests")
  )

;;-----------------------------------------------------------------------
;; SRFI-252 depends on mt-random, and will be tested in ext/srfi.


(test-end)
