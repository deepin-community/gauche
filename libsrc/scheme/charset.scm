;;;
;;; scheme.charset
;;;
;;;   Copyright (c) 2000-2024  Shiro Kawai  <shiro@acm.org>
;;;
;;;   Redistribution and use in source and binary forms, with or without
;;;   modification, are permitted provided that the following conditions
;;;   are met:
;;;
;;;   1. Redistributions of source code must retain the above copyright
;;;      notice, this list of conditions and the following disclaimer.
;;;
;;;   2. Redistributions in binary form must reproduce the above copyright
;;;      notice, this list of conditions and the following disclaimer in the
;;;      documentation and/or other materials provided with the distribution.
;;;
;;;   3. Neither the name of the authors nor the names of its contributors
;;;      may be used to endorse or promote products derived from this
;;;      software without specific prior written permission.
;;;
;;;   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
;;;   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
;;;   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
;;;   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
;;;   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
;;;   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
;;;   TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
;;;   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
;;;   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
;;;   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
;;;   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;;;

;; Originally SRFI-14
;; Basic operators are built in the Gauche kernel.  This module
;; defines auxiliary procedures.
;;
;; Some of the procedures are implemented with no optimization
;; effort.   I included them just for completeness.
;; If you think you need faster operation, please optimize it and
;; send me a patch.
;;
;; ucs-range->char-set performs poorly if the given charcter code
;; is outside ASCII and the native character encoding is not utf-8.

;; Functions supported by the core interpreter:
;;    char-set char-set? char-set-contains? char-set-copy
;;    char-set-complement char-set-complement!
;;    %char-set-equal? %char-set-add-chars! %char-set-add-range!
;;    %char-set-add! %char-set-ranges
;; Functions not in SRFI but defined here
;;    integer-range->char-set integer-range->char-set!

(define-module scheme.charset
  (export char-set= char-set<=
          char-set-cursor char-set-ref char-set-cursor-next end-of-char-set?
          char-set-fold char-set-unfold char-set-unfold!
          char-set-for-each char-set-map
          list->char-set list->char-set! string->char-set string->char-set!
          char-set-filter char-set-filter!
          ucs-range->char-set ucs-range->char-set!
          integer-range->char-set integer-range->char-set!
          ->char-set
          char-set-count char-set->list char-set->string
          char-set-every char-set-any
          char-set-adjoin char-set-adjoin! char-set-delete char-set-delete!
          char-set-complement char-set-complement!
          char-set-union char-set-union!
          char-set-intersection char-set-intersection!
          char-set-difference char-set-difference!
          char-set-xor char-set-xor!
          char-set-diff+intersection char-set-diff+intersection!
          char-set:lower-case char-set:upper-case char-set:title-case
          char-set:letter char-set:digit char-set:letter+digit
          char-set:graphic char-set:printing char-set:whitespace
          char-set:iso-control char-set:punctuation char-set:symbol
          char-set:hex-digit char-set:blank char-set:ascii
          char-set:empty char-set:full

          ;; The followings are defined in core
          char-set char-set? char-set-contains? char-set-copy
          char-set-hash char-set-size
          char-set-complement char-set-complement!
          ))
(select-module scheme.charset)

;; used in ->char-set
(autoload gauche.lazy x->lseq)

;; some built-in support
(define %char-set-equal? (with-module gauche.internal %char-set-equal?))
(define %char-set<=? (with-module gauche.internal %char-set<=?))
(define %char-set-add-chars! (with-module gauche.internal %char-set-add-chars!))
(define %char-set-add-range! (with-module gauche.internal %char-set-add-range!))
(define %char-set-add! (with-module gauche.internal %char-set-add!))
(define %char-set-ranges (with-module gauche.internal %char-set-ranges))
(define %char-set-predefined (with-module gauche.internal %char-set-predefined))

(define char-set-complement  (with-module gauche char-set-complement))
(define char-set-complement! (with-module gauche char-set-complement!))

;; Predefined charsets - built-in

;;-------------------------------------------------------------------
;; Comparison
(define char-set=
  (case-lambda [() #t]
               [args (every %char-set-equal? args (cdr args))]))

(define char-set<=
  (case-lambda [() #t]
               [args (every %char-set<=? args (cdr args))]))

;;-------------------------------------------------------------------
;; Iteration
;;

;; slow implementation.  minimal error check.
;; cursor === (code . ranges) | #f

(define (char-set-cursor cs)
  (let1 ranges (%char-set-ranges cs)
    (if (null? ranges) #f (cons (caar ranges) ranges))))

(define (char-set-ref cs cursor)
  (if (and (pair? cursor) (integer? (car cursor)))
    (integer->char (car cursor))
    (error "bad character-set cursor:" cursor)))

(define (char-set-cursor-next cs cursor)
  (if (pair? cursor)
    (let ([code (car cursor)]
          [range (cadr cursor)])
      (cond [(< code (cdr range))  (cons (+ code 1) (cdr cursor))]
            [(null? (cddr cursor)) #f]
            [else (cons (caaddr cursor) (cddr cursor))]))
    (error "bad character-set cursor:" cursor)))

(define (end-of-char-set? cursor) (not cursor))

;; functional ops

(define (char-set-fold kons knil cs)
  (let loop ([cursor (char-set-cursor cs)]
             [result knil])
    (if (end-of-char-set? cursor)
      result
      (loop (char-set-cursor-next cs cursor)
            (kons (char-set-ref cs cursor) result)))))

(define (char-set-unfold! pred fun gen seed base)
  (let loop ([seed seed])
    (if (pred seed)
      base
      (let1 c (fun seed)
        (%char-set-add-range! base c c)
        (loop (gen seed))))))

(define (char-set-unfold pred fun gen seed :optional (base char-set:empty))
  (char-set-unfold! pred fun gen seed (char-set-copy base)))

(define (char-set-for-each proc cs)
  (let loop ([cursor (char-set-cursor cs)])
    (unless (end-of-char-set? cursor)
      (proc (char-set-ref cs cursor))
      (loop (char-set-cursor-next cs cursor)))))

(define (char-set-map proc cs)
  (rlet1 new (char-set)
    (let loop ([cursor (char-set-cursor cs)])
      (unless (end-of-char-set? cursor)
        (let1 c (proc (char-set-ref cs cursor))
          (%char-set-add-range! new c c)
          (loop (char-set-cursor-next cs cursor)))))))

;;-------------------------------------------------------------------
;; Construction
;;

;; char-set-copy : native
;; char-set : native

(define (list->char-set chars :optional (base char-set:empty))
  (%char-set-add-chars! (char-set-copy base) chars))

(define (list->char-set! chars base)
  (%char-set-add-chars! base chars))

(define (string->char-set str :optional (base char-set:empty))
  (%char-set-add-chars! (char-set-copy base) (string->list str)))

(define (string->char-set! str base)
  (%char-set-add-chars! base (string->list str)))

(define (char-set-filter pred cs :optional (base char-set:empty))
  (char-set-filter! pred cs (char-set-copy base)))

(define (char-set-filter! pred cs base)
  (let loop ([cursor (char-set-cursor cs)])
    (if (end-of-char-set? cursor)
      base
      (let1 c (char-set-ref cs cursor)
        (when (pred c) (%char-set-add-range! base c c))
        (loop (char-set-cursor-next cs cursor))))))

(define (integer-range->char-set low upper :optional (error? #f)
                                                     (base char-set:empty))
  (integer-range->char-set! low upper error? (char-set-copy base)))

(define (integer-range->char-set! low upper error? base)
  (when (< low 0)
    (if error?
      (error "argument out of range:" low)
      (set! low 0)))
  (when (> upper (+ *char-code-max* 1))
    (if error?
      (error "argument out of range:" upper)
      (set! upper (+ *char-code-max* 1))))
  (%char-set-add-range! base low (- upper 1)))

(define (ucs-range->char-set low upper :optional (error? #f)
                                                 (base char-set:empty))
  (ucs-range->char-set! low upper error? (char-set-copy base)))

(define ucs-range->char-set!
  (if (eq? (gauche-character-encoding) 'utf-8)
    integer-range->char-set!
    (^[low upper error? base]
      (when (< low 0)
        (if error?
          (error "argument out of range:" low)
          (set! low 0)))
      (if (< upper 128)
        (%char-set-add-range! base low (- upper 1))
        (begin
          (when (< low 128)
            (%char-set-add-range! base low 128)
            (set! low 128))
          (do ([i low (+ i 1)])
              [(>= i upper) base]
            (let1 c (ucs->char i)
              (if c
                (%char-set-add-range! base c c)
                (if error?
                  (errorf "unicode character #\\u~8,'0x is not supported in the native character set (~a)"
                          i (gauche-character-encoding)))))
            )))
      )
    ))

(define (->char-set obj)
  (cond [(list? obj)   (list->char-set obj)]
        [(string? obj) (string->char-set obj)]
        [(char-set? obj) obj]
        [(char? obj) (char-set obj)]
        [(is-a? obj <collection>) (list->char-set (x->lseq obj))]
        [else (errorf "cannot coerse ~s into a char-set" obj)]))

;;-------------------------------------------------------------------
;; Querying
;;

(define (char-set-count pred cs)
  (char-set-fold (^[c r] (if (pred c) (+ r 1) r)) 0 cs))

(define (char-set->list cs)
  (char-set-fold cons '() cs))

(define (char-set->string cs)
  (list->string (char-set-fold cons '() cs)))

;; char-set-contains? : native

(define (char-set-every pred cs)
  (let loop ((cursor (char-set-cursor cs)))
    (cond ((end-of-char-set? cursor))
          ((pred (char-set-ref cs cursor))
           (loop (char-set-cursor-next cs cursor)))
          (else #f))))

(define (char-set-any pred cs)
  (let loop ((cursor (char-set-cursor cs)))
    (cond ((end-of-char-set? cursor) #f)
          ((pred (char-set-ref cs cursor)) #t)
          (else (loop (char-set-cursor-next cs cursor))))))

;;-------------------------------------------------------------------
;; Algebra
;;

;; auxiliary functions for range operation other than adjoin and union.
;; (adjoin and union can use native functions).  These can also be defined
;; in C, but I don't see the needs of performance yet.
(define (%char-set-sub-range ranges from to)
  (let loop ((ranges ranges)
             (result '()))
    (if (null? ranges)
        (reverse result)
        (let ((lo (caar ranges))
              (hi (cdar ranges))
              (next (cdr ranges)))
          (if (<= lo from hi)
              (if (<= lo to hi)
                  (if (= lo from)
                      (if (= to hi)
                          (loop next result)
                          (loop next (acons (+ to 1) hi result)))
                      (if (= to hi)
                          (loop next (acons lo (- from 1) result))
                          (loop next (list* (cons (+ to 1) hi)
                                            (cons lo (- from 1))
                                            result))))
                  (if (= lo from)
                      (loop next result)
                      (loop next (acons lo (- from 1) result))))
              (if (<= lo to hi)
                  (if (= to hi)
                      (loop next result)
                      (loop next (acons (+ to 1) hi result)))
                  (if (and (< from lo) (< hi to))
                      (loop next result)
                      (loop next (acons lo hi result)))))
          ))
    ))

(define (%char-set-sub-chars range chars)
  (let loop ((range range)
             (chars chars))
    (if (null? chars)
        range
        (let ((code (char->integer (car chars))))
          (loop (%char-set-sub-range range code code) (cdr chars))))))

(define (%ranges->char-set ranges)
  (let ((base (char-set)))
    (for-each (^[range] (%char-set-add-range! base (car range) (cdr range)))
              ranges)
    base))

(define (char-set-adjoin base . chars)
  (if (null? chars) base (%char-set-add-chars! (char-set-copy base) chars)))

(define (char-set-adjoin! base . chars)
  (%char-set-add-chars! base chars))

(define (char-set-delete base . chars)
  (%ranges->char-set (%char-set-sub-chars (%char-set-ranges base) chars)))

(define char-set-delete! char-set-delete)

(define (char-set-union . charsets)
  (if (null? charsets)
      char-set:empty
      (let loop ((base (char-set-copy (car charsets)))
                 (rest (cdr charsets)))
        (if (null? rest)
            base
            (loop (%char-set-add! base (car rest)) (cdr rest))))))

(define (char-set-union! base . charsets)
  (if (null? charsets)
      base
      (let loop ((base base) (rest charsets))
        (if (null? rest)
            base
            (loop (%char-set-add! base (car rest)) (cdr rest))))))

(define (%char-set-intersection2 x y)
  (char-set-difference x (char-set-complement y)))

(define (char-set-intersection . charsets)
  (cond ((null? charsets) char-set:full)
        ((null? (cdr charsets)) (car charsets))
        (else (apply char-set-intersection
                     (%char-set-intersection2 (car charsets) (cadr charsets))
                     (cddr charsets)))))

(define (char-set-intersection! base . charsets)
  (if (null? charsets)
      base
      (apply char-set-intersection base charsets)))

(define (char-set-difference base . charsets)
  (define (char-range-sub2 ranges sub)
    (let loop ((ranges ranges) (sub sub))
      (if (null? sub)
          ranges
          (loop (%char-set-sub-range ranges (caar sub) (cdar sub))
                (cdr sub)))))

  (let loop ((ranges (%char-set-ranges base))
             (sets charsets))
    (if (null? sets)
        (%ranges->char-set ranges)
        (loop (char-range-sub2 ranges (%char-set-ranges (car sets)))
              (cdr sets))))
  )
(define char-set-difference! char-set-difference)

(define (%char-set-xor2 x y)
  (char-set-difference (char-set-union x y)
                       (%char-set-intersection2 x y)))

(define (char-set-xor . charsets)
  (cond ((null? charsets) char-set:empty)
        ((null? (cdr charsets)) (car charsets))
        (else (apply char-set-xor
                     (%char-set-xor2 (car charsets) (cadr charsets))
                     (cddr charsets)))))

(define (char-set-xor! base . charsets)
  (if (null? charsets)
      base
      (apply char-set-xor base charsets)))

(define (char-set-diff+intersection base . charsets)
  (values (apply char-set-difference base charsets)
          (char-set-intersection base (apply char-set-union charsets))))

;; NB: We don't modify the arguments so far; if we do modify them,
;; we need to be careful about the operation order.
(define (char-set-diff+intersection! cs1 cs2 . charsets)
  (values (apply char-set-difference cs1 cs2 charsets)
          (char-set-intersection cs1 (apply char-set-union cs2 charsets))))
