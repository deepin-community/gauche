;;;
;;; liblist.scm - builtin list procedures
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

(select-module gauche.internal)

(inline-stub
 (.include "gauche/priv/configP.h"
           "gauche/vminsn.h"))

;;
;; R5RS Standard procs
;;

(select-module scheme)
(define-cproc pair? (obj) ::<boolean> :fast-flonum :constant
  (inliner PAIRP) SCM_PAIRP)
(define-cproc cons (obj1 obj2) ::<pair> (inliner CONS)
  (return (SCM_PAIR (Scm_Cons obj1 obj2))))
(define-cproc car (obj::<pair>) :constant
  (inliner CAR) (setter set-car!) SCM_CAR)
(define-cproc cdr (obj::<pair>) :constant
  (inliner CDR) (setter set-cdr!) SCM_CDR)
(define-cproc set-car! (obj::<pair> value) ::<void>
  (Scm_SetCar (SCM_OBJ obj) value))
(define-cproc set-cdr! (obj::<pair> value) ::<void>
  (Scm_SetCdr (SCM_OBJ obj) value))

(inline-stub
 "#define CXR_SETTER(PRE, pre, tail) \
  ScmObj cell = Scm_C##tail##r(obj); \
  if (!SCM_PAIRP(cell)) \
    Scm_Error(\"can't set c\" #pre #tail \"r of %S\", obj); \
  SCM_SET_C##PRE##R(cell, value);
"
 )
(define-cproc caar (obj::<pair>) :fast-flonum :constant
  (inliner CAAR) (setter (obj value) ::<void> (CXR_SETTER A a a))
  (return (Scm_Caar (SCM_OBJ obj))))
(define-cproc cadr (obj::<pair>) :fast-flonum :constant
  (inliner CADR) (setter (obj value) ::<void> (CXR_SETTER A a d))
  (return (Scm_Cadr (SCM_OBJ obj))))
(define-cproc cdar (obj::<pair>) :fast-flonum :constant
  (inliner CDAR) (setter (obj value) ::<void> (CXR_SETTER D d a))
  (return (Scm_Cdar (SCM_OBJ obj))))
(define-cproc cddr (obj::<pair>) :fast-flonum :constant
  (inliner CDDR) (setter (obj value) ::<void> (CXR_SETTER D d d))
  (return (Scm_Cddr (SCM_OBJ obj))))

;; NB: we avoid using getter-with-setter here, since
;;   - The current compiler doesn't take advantage of locked setters
;;   - Using getter-with-setter loses the inferred closure name
;; But this may change in future, of course.
(select-module gauche)
(define-syntax %define-cxr
  (syntax-rules ()
    ((_ name a b)
     (begin
       (define-inline (name x) (a (b x)))
       (define-in-module scheme name name)
       (set! (setter name) (^[x v] (set! (a (b x)) v)))
       ))))

(%define-cxr caaar  car  caar)
(%define-cxr caadr  car  cadr)
(%define-cxr cadar  car  cdar)
(%define-cxr caddr  car  cddr)
(%define-cxr cdaar  cdr  caar)
(%define-cxr cdadr  cdr  cadr)
(%define-cxr cddar  cdr  cdar)
(%define-cxr cdddr  cdr  cddr)
(%define-cxr caaaar caar caar)
(%define-cxr caaadr caar cadr)
(%define-cxr caadar caar cdar)
(%define-cxr caaddr caar cddr)
(%define-cxr cadaar cadr caar)
(%define-cxr cadadr cadr cadr)
(%define-cxr caddar cadr cdar)
(%define-cxr cadddr cadr cddr)
(%define-cxr cdaaar cdar caar)
(%define-cxr cdaadr cdar cadr)
(%define-cxr cdadar cdar cdar)
(%define-cxr cdaddr cdar cddr)
(%define-cxr cddaar cddr caar)
(%define-cxr cddadr cddr cadr)
(%define-cxr cdddar cddr cdar)
(%define-cxr cddddr cddr cddr)

;; primitives for immutable pars
(define-cproc ipair? (obj) ::<boolean> Scm_ImmutablePairP)
(define-cproc ipair (car cdr) ::<pair>
  (return (SCM_PAIR (Scm_MakeImmutablePair car cdr SCM_NIL))))
(define-cproc ilist (:rest args) ::<list>
  (if (SCM_NULLP args)
    (return SCM_NIL)
    (let* ([h SCM_NIL] [t SCM_NIL])
      (dopairs (cp args)
        (if (SCM_NULLP t)
          (set! h (Scm_MakeImmutablePair (SCM_CAR cp) SCM_NIL SCM_NIL)
                t h)
          (let* ([p (Scm_MakeImmutablePair (SCM_CAR cp) SCM_NIL SCM_NIL)])
            (SCM_SET_CDR_UNCHECKED t p)
            (set! t p))))
      (return h))))

(select-module scheme)
(define-cproc null? (obj) ::<boolean> :fast-flonum :constant
  (inliner NULLP) SCM_NULLP)
(define-cproc list? (obj) ::<boolean> :fast-flonum :constant
  SCM_PROPER_LIST_P)
(define-cproc list (:rest args) ::<list> (inliner LIST) (return args))

(define-cproc length (list) ::<long> :constant (inliner LENGTH)
  (let* ([len::long (Scm_Length list)])
    (when (< len 0) (Scm_Error "bad list: %S" list))
    (return len)))

(select-module gauche)
(define-cproc length<=? (list k::<integer>) ::<boolean> :constant
  (if (SCM_INTP k)
    (let* ([n::ScmSmallInt (SCM_INT_VALUE k)])
      (dolist [_ list] (when (<= (post-- n) 0) (return FALSE)))
      (return (<= 0 n)))
    ;; k is bignum. it is impossible to have that long list, but list
    ;; can be circular, so we need to scan list entirely anyway.
    (if (< (Scm_Sign k) 0)
      (return FALSE)
      (let* ([ln::ScmSmallInt (Scm_Length list)])
        (return (>= ln 0))))))
(define-cproc length=? (list k::<integer>) ::<boolean> :constant
  (if (SCM_INTP k)
    (let* ([n::ScmSmallInt (SCM_INT_VALUE k)])
      (dolist [_ list] (when (<= (post-- n) 0) (return FALSE)))
      (return (== 0 n)))
    (return FALSE)))
(define (length<? list k) (length<=? list (- k 1)))
(define (length>? list k) (not (length<=? list k)))
(define (length>=? list k) (not (length<? list k)))

(select-module scheme)
(define-cproc append (:rest lists) (inliner APPEND) Scm_Append)
(define-cproc reverse (list::<list> :optional (tail ())) Scm_Reverse2)

(define-cproc list-tail (list k::<fixnum> :optional fallback) :constant
  Scm_ListTail)

;; list-set! requires the first argument to be a <pair>, for
;; passing length 0 list (proper or dotted) to list-set! is useless anyways.
;; list-ref, on the other hand, can accept non-list argument (which is
;; technically a dotted list of length 0), as far as FALLBACK is given.
;; Cf. https://github.com/shirok/Gauche/issues/814

;;We need to define list-set! as cproc in order to use it in the setter clause
;;of list-ref.  This limitation of cgen.stub should be removed in future.
;;(define (list-set! lis k v) (set-car! (list-tail lis k) v))
(define-cproc list-set! (lis::<pair> k::<fixnum> v) ::<void>
  (let* ([p (Scm_ListTail (SCM_OBJ lis) k SCM_FALSE)])
    (if (SCM_PAIRP p)
      (Scm_SetCar p v)
      (Scm_Error "list-set!: index out of bound: %d" k))))
(define-cproc list-ref (lis k::<fixnum> :optional fallback) :constant
  (setter list-set!)
    ;; Better error message for the common mistake
  (when (and (SCM_UNBOUNDP fallback) (not (SCM_LISTP lis)))
    (Scm_Error "list-ref: argument must be a list, but got: %S" lis))
  (return (Scm_ListRef (SCM_OBJ lis) k fallback)))

(define-cproc memq (obj list::<list>) :constant (inliner MEMQ) Scm_Memq)
(define-cproc memv (obj list::<list>) :constant (inliner MEMV) Scm_Memv)

(define-cproc assq (obj alist::<list>) :constant (inliner ASSQ) Scm_Assq)
(define-cproc assv (obj alist::<list>) :constant (inliner ASSV) Scm_Assv)

(select-module gauche.internal)
;; Actual member and assoc is defined blow.
(define-cproc %member (obj list::<list>)
  (return (Scm_Member obj list SCM_CMP_EQUAL)))
(define-cproc %assoc (obj alist::<list>)
  (return (Scm_Assoc obj alist SCM_CMP_EQUAL)))

;;
;; Some extra procedures
;;

(select-module gauche)
(define-cproc length+ (list) ::<integer>? :constant ;; SRFI-1
  (let* ([i::int (Scm_Length list)])
    (if (< i 0) (return SCM_FALSE) (return (Scm_MakeInteger i)))))

;; Like length, but works on dotted and circular lists.
;; To avoid overhead for typical cases, we first use hare and tortoise to
;; detect circle, and only use hashtable to count pairs after we determine
;; list is circular.
(define (num-pairs list)
  (define (count-pairs-in-circle)
    (let1 tab (make-hash-table 'eq?)
      (let loop ([list list])
        (if (hash-table-exists? tab list)
          (hash-table-num-entries tab)
          (begin (hash-table-put! tab list #t)
                 (loop (cdr list)))))))
  (let loop ([n 0] [slow list] [list list])
    (if (pair? list)
      (if (pair? (cdr list))
        (if (eq? slow (cdr list))
          (count-pairs-in-circle)
          (loop (+ n 2) (cdr slow) (cddr list)))
        (+ n 1))
      n)))

(define-cproc proper-list? (obj)   ::<boolean> :constant SCM_PROPER_LIST_P)
(define-cproc dotted-list? (obj)   ::<boolean> :constant SCM_DOTTED_LIST_P)
(define-cproc circular-list? (obj) ::<boolean> :constant SCM_CIRCULAR_LIST_P)
(define-cproc make-list (len::<fixnum> :optional (fill #f)) Scm_MakeList)
(define-cproc acons (caa cda cd) ::<pair>
  (return (SCM_PAIR (Scm_Acons caa cda cd))))
(define-cproc last-pair (list) :constant Scm_LastPair)
(define-cproc list-copy (list) Scm_CopyList)

(define-cproc list* (arg :rest args)
  (inliner LIST-STAR)
  (if (SCM_NULLP args)
    (return arg)
    (let* ([head (SCM_LIST1 arg)] [tail head])
      (dopairs [cp args]
        (unless (SCM_PAIRP (SCM_CDR cp))
          (SCM_SET_CDR_UNCHECKED tail (SCM_CAR cp))
          (break))
        (SCM_APPEND1 head tail (SCM_CAR cp)))
      (return head))))

(define-cproc append! (:rest list)
  (let* ([h '()] [t '()])
    (dopairs [cp list]
      (when (SCM_NULLP (SCM_CDR cp))
        (if (SCM_NULLP h)
          (set! h (SCM_CAR cp))
          (Scm_SetCdr t (SCM_CAR cp)))
        (break))
      (SCM_APPEND h t (SCM_CAR cp))
      (unless (or (SCM_NULLP t) (SCM_NULLP (SCM_CDR t)))
        (Scm_Error "proper list required, but got %S" (SCM_CAR cp))))
    (return h)))

(define-cproc reverse! (list :optional (tail ())) Scm_Reverse2X)

(define-cproc monotonic-merge (sequences::<list>) ::<list> Scm_MonotonicMerge1)

(select-module gauche.internal)
(define-in-module scheme (map proc lis . more)
  (if (null? more)
    (let loop ([xs lis] [r '()])
      (cond [(pair? xs) (loop (cdr xs) (cons (proc (car xs)) r))]
            [(null? xs) (reverse r)]
            [else (error "improper list not allowed:" lis)]))
    (let loop ([xss (cons lis more)] [r '()])
      (receive (cars cdrs) (%zip-nary-args xss)
        (if (not cars)
          (reverse r)
          (loop cdrs (cons (apply proc cars) r)))))))

(define-in-module scheme (for-each proc lis . more)
  (if (null? more)
    (let loop ([xs lis])
      (cond [(pair? xs) (proc (car xs)) (loop (cdr xs))]
            [(null? xs) (undefined)]
            [else (error "improper list not allowed:" lis)]))
    (let loop ([xss (cons lis more)])
      (receive (cars cdrs) (%zip-nary-args xss)
        (unless (not cars)
          (apply proc cars)
          (loop cdrs))))))

(select-module gauche)
(define-inline (null-list? l)           ;SRFI-1
  (cond [(null? l)]
        [(pair? l) #f]
        [else (error "argument must be a list, but got:" l)]))

(define-inline cons* list*)             ;SRFI-1

(define (last lis) (car (last-pair lis))) ;SRFI-1

(define (iota count :optional (start 0) (step 1)) ;SRFI-1
  (unless (and (integer? count) (>= count 0))
    (error "count must be nonnegative integer: " count))
  (if (and (exact? start) (exact? step))
    ;; we allow inexact integer as 'count', for the consistency of
    ;; giota and liota in which we can also accept +inf.0 as count.
    (let1 count (exact count)
      (do ([c count (- c 1)]
           [v (+ start (* (- count 1) step)) (- v step)]
           [r '() (cons v r)])
          [(<= c 0) r]))
    ;; for inexact numbers, we use multiplication to avoid error accumulation.
    (do ([c count (- c 1)]
         [r '() (cons (+ start (*. (- c 1) step)) r)])
        [(<= c 0) r])))

(select-module gauche.internal)
(inline-stub
 ;; translate cmpmode argument
 (define-cfn getcmpmode (opt) ::int :static
   (cond
    [(or (SCM_UNBOUNDP opt) (SCM_EQ opt 'equal?)) (return SCM_CMP_EQUAL)]
    [(SCM_EQ opt 'eq?) (return SCM_CMP_EQ)]
    [(SCM_EQ opt 'eqv?) (return SCM_CMP_EQV)]
    [else (Scm_Error "unrecognized compare mode: %S" opt) (return 0)]))
 )

(define-cproc %delete (obj list::<list> :optional cmpmode)
  (return (Scm_Delete obj list (getcmpmode cmpmode))))
(define-cproc %delete! (obj list::<list> :optional cmpmode)
  (return (Scm_DeleteX obj list (getcmpmode cmpmode))))
(define-cproc %delete-duplicates (list::<list> :optional cmpmode)
  (return (Scm_DeleteDuplicates list (getcmpmode cmpmode))))
(define-cproc %delete-duplicates! (list::<list> :optional cmpmode)
  (return (Scm_DeleteDuplicatesX list (getcmpmode cmpmode))))
(define-cproc %alist-delete (elt list::<list> :optional cmpmode)
  (return (Scm_AssocDelete elt list (getcmpmode cmpmode))))
(define-cproc %alist-delete! (elt list::<list> :optional cmpmode)
  (return (Scm_AssocDeleteX elt list (getcmpmode cmpmode))))

(define-in-module gauche.internal (%zip-nary-args arglists . seed)
  (let loop ([as arglists]
             [cars '()]
             [cdrs '()])
    (cond [(null? as)
           (values (reverse! (if (null? seed) cars (cons (car seed) cars)))
                   (reverse! cdrs))]
          [(null? (car as)) (values #f #f)] ;;exhausted
          [(pair? (car as))
           (loop (cdr as) (cons (caar as) cars) (cons (cdar as) cdrs))]
          [else
           (error "argument lists contained an improper list ending with:"
                  (car as))])))

;; In the common case, these procs uses Gauche native, even not loading
;; the generic filter routine.
(define-syntax %case-by-cmp
  (syntax-rules ()
    [(_ args = eq-case eqv-case equal-case default-case)
     (let1 = (if (pair? args) (car args) equal?)
       (cond [(eq? = eq?)    eq-case]
             [(eq? = eqv?)   eqv-case]
             [(eq? = equal?) equal-case]
             [else default-case]))]))

(define-in-module gauche (delete x lis . args)
  (%case-by-cmp args =
                (%delete x lis 'eq?)
                (%delete x lis 'eqv?)
                (%delete x lis 'equal?)
                (filter (^y (not (= x y))) lis)))

(define-in-module gauche (delete! x lis . args)
  (%case-by-cmp args =
                (%delete! x lis 'eq?)
                (%delete! x lis 'eqv?)
                (%delete! x lis 'equal?)
                (filter! (^y (not (= x y))) lis)))

(define-in-module scheme (member x lis . args)
  (%case-by-cmp args =
                (memq x lis)
                (memv x lis)
                (%member x lis)
                (find-tail (^y (= x y)) lis)))

(define-in-module gauche (delete-duplicates lis . args)
  (%case-by-cmp args =
                (%delete-duplicates lis 'eq?)
                (%delete-duplicates lis 'eqv?)
                (%delete-duplicates lis 'equal?)
                (let recur ([lis lis])
                  (if (null-list? lis) lis
                      (let* ([x (car lis)]
                             [tail (cdr lis)]
                             [new-tail (recur (delete x tail =))])
                        (if (eq? tail new-tail) lis (cons x new-tail)))))))

(define-in-module gauche (delete-duplicates! lis . args)
  (%case-by-cmp args =
                (%delete-duplicates! lis 'eq?)
                (%delete-duplicates! lis 'eqv?)
                (%delete-duplicates! lis 'equal?)
                (let recur ((lis lis))
                  (if (null-list? lis) lis
                      (let* ((x (car lis))
                             (tail (cdr lis))
                             (new-tail (recur (delete! x tail =))))
                        (if (eq? tail new-tail) lis (cons x new-tail)))))))

;;
;; Higher-order stuff
;;

(select-module gauche)

(define (any pred lis . more)
  (if (null? more)
    (and (not (null-list? lis))
         (let loop ((head (car lis)) (tail (cdr lis)))
           (cond [(null-list? tail) (pred head)] ; tail call
                 [(pred head)]
                 [else (loop (car tail) (cdr tail))])))
    (let loop ([liss (cons lis more)])
      (receive (cars cdrs) ((with-module gauche.internal %zip-nary-args) liss)
        (cond [(not cars) #f]
              [(apply pred cars)]
              [else (loop cdrs)])))))

(define (every pred lis . more)
  (if (null? more)
    (or (null-list? lis)
        (let loop ([head (car lis)] [tail (cdr lis)])
          (cond [(null-list? tail) (pred head)] ; tail call
                [(not (pred head)) #f]
                [else (loop (car tail) (cdr tail))])))
    (receive (heads tails)
        ((with-module gauche.internal %zip-nary-args) (cons lis more))
      (or (not heads)
          (let loop ([heads heads] [tails tails])
            (receive (next-heads next-tails)
                ((with-module gauche.internal %zip-nary-args) tails)
              (if next-heads
                  (and (apply pred heads)
                       (loop next-heads next-tails))
                  (apply pred heads))))))))

(define (filter pred lis)
  (let loop ([lis lis] [r '()])
    (cond [(null-list? lis) (reverse r)]
          [(pred (car lis)) (loop (cdr lis) (cons (car lis) r))]
          [else (loop (cdr lis) r)])))

(define (filter! pred lis)
  (define (keep! prev lis)
    (when (pair? lis)
      (if (pred (car lis))
        (keep! lis (cdr lis))
        (skip! prev (cdr lis)))))
  (define (skip! prev lis)
    (let loop ([lis lis])
      (cond [(not (pair? lis)) (set-cdr! prev lis)]
            [(pred (car lis)) (set-cdr! prev lis) (keep! lis (cdr lis))]
            [else (loop (cdr lis))])))
  (let restart ([ans lis])
    (cond [(null-list? ans) ans]
          [(not (pred (car ans))) (restart (cdr ans))]
          [else (keep! ans (cdr ans)) ans])))

(define (remove  pred l) (filter  (^x (not (pred x))) l))
(define (remove! pred l) (filter! (^x (not (pred x))) l))

(define (filter-map fn lis . more)
  (if (null? more)
    (let loop ([lis lis] [r '()])
      (cond [(null-list? lis) (reverse r)]
            [(fn (car lis)) => (^x (loop (cdr lis) (cons x r)))]
            [else (loop (cdr lis) r)]))
    (let loop ([liss (cons lis more)] [r '()])
      (receive (cars cdrs)
          ((with-module gauche.internal %zip-nary-args) liss)
        (cond [(not cars) (reverse r)]
              [(apply fn cars) => (^x (loop cdrs (cons x r)))]
              [else (loop cdrs r)])))))

(define (fold kons knil lis . more)
  (if (null? more)
    (let loop ([lis lis] [knil knil])
      (if (null-list? lis) knil (loop (cdr lis) (kons (car lis) knil))))
    (let loop ([liss (cons lis more)] [knil knil])
      (receive (cars cdrs)
          ((with-module gauche.internal %zip-nary-args) liss knil)
        (if cars
          (loop cdrs (apply kons cars))
          knil)))))

(define (fold-left snok knil lis . more)
  (if (null? more)
    (let loop ([lis lis] [knil knil])
      (if (null-list? lis) knil (loop (cdr lis) (snok knil (car lis)))))
    (let loop ([liss (cons lis more)] [knil knil])
      (receive (cars- cdrs)
          ((with-module gauche.internal %zip-nary-args) liss)
        (if cars-
          (loop cdrs (apply snok knil cars-))
          knil)))))

(define (fold-right kons knil lis . more)
  (if (null? more)
    (let rec ([lis lis])
      (if (null-list? lis)
        knil
        (kons (car lis) (rec (cdr lis)))))
    (let rec ([liss (cons lis more)])
      (receive (cars cdrs) ((with-module gauche.internal %zip-nary-args) liss)
        (if cars
          (apply kons (append! cars (list (rec cdrs))))
          knil)))))

(define (count pred lis . more)
  (if (null? more)
    (let rec ([lis lis] [cnt 0])
      (if (null-list? lis)
        cnt
        (rec (cdr lis) (if (pred (car lis)) (+ cnt 1) cnt))))
    (let rec ([liss (cons lis more)] [cnt 0])
      (receive (cars cdrs) ((with-module gauche.internal %zip-nary-args) liss)
        (if cars
          (rec cdrs (if (apply pred cars) (+ cnt 1) cnt))
          cnt)))))

(define (reduce f ridentity lis)
  (if (null-list? lis)
    ridentity
    (fold f (car lis) (cdr lis))))

(define (reduce-right f ridentity lis)
  (if (null-list? lis)
    ridentity
    (let rec ([head (car lis)] [lis (cdr lis)])
      (if (pair? lis)
        (f head (rec (car lis) (cdr lis)))
        head))))

(define (append-reverse list tail)  (reverse list tail)) ;SRFI-1 compat
(define (append-reverse! list tail) (reverse! list tail));SRFI-1 compat

(define (concatenate  lists) (reduce-right append  '() lists))
(define (concatenate! lists) (reduce-right append! '() lists))

(define (append-map f lis . lists)  (concatenate  (apply map f lis lists)))
(define (append-map! f lis . lists) (concatenate! (apply map f lis lists)))

(define (map* fn tail-fn lis . more)
  (if (null? more)
    (let rec ([xs lis] [rs '()])
      (if (pair? xs)
        (rec (cdr xs) (cons (fn (car xs)) rs))
        (reverse rs (tail-fn xs))))
    (let rec ([xss (cons lis more)] [rs '()])
      (if (every pair? xss)
        (receive (cars cdrs) ((with-module gauche.internal %zip-nary-args) xss)
          (rec cdrs (cons (apply fn cars) rs)))
        (reverse rs (apply tail-fn xss))))))

(define (find pred lis)
  (let loop ([lis lis])
    (cond [(not (pair? lis)) #f]
          [(pred (car lis)) (car lis)]
          [else (loop (cdr lis))])))

(define (find-tail pred lis)
  (let loop ([lis lis])
    (cond [(not (pair? lis)) #f]
          [(pred (car lis)) lis]
          [else (loop (cdr lis))])))

(define (split-at lis i)
  (let loop ([i i] [rest lis] [r '()])
    (cond [(= i 0) (values (reverse! r) rest)]
          [(null? rest) (error "given list is too short:" lis)]
          [else (loop (- i 1) (cdr rest) (cons (car rest) r))])))

(define (split-at! lis i)
  (let loop ([i i] [rest lis] [prev #f])
    (cond [(= i 0) (if prev
                     (begin (set-cdr! prev '()) (values lis rest))
                     (values '() rest))]
          [(null? rest) (error "given list is too short:" lis)]
          [else (loop (- i 1) (cdr rest) rest)])))

;; partition is here, for gauche.procedure has partition$ and we don't
;; want it to depend on SRFI-1.  partition! is left in SRFI-1, for its
;; optimized version is rather complicated.
(define (partition pred lis)
  (let rec ([lis lis] [xs '()] [ys '()])
    (if (null-list? lis)
      (values (reverse! xs) (reverse! ys))
      (if (pred (car lis))
        (rec (cdr lis) (cons (car lis) xs) ys)
        (rec (cdr lis) xs (cons (car lis) ys))))))

(define (take list k)
  (let loop ([lis list] [r '()] [j k])
    (cond [(= j 0) (reverse! r)]
          [(pair? lis) (loop (cdr lis) (cons (car lis) r) (- j 1))]
          [else (errorf "take: input list is too short (expected at least \
                         ~a elements, but only ~a elements long): ~,,,,70s"
                        k (- k j) list)])))

(define drop list-tail)  ; SRFI-1

(define (take-right lis k)
  (let loop ([p0 (list-tail lis k)] [p1 lis])
    (if (pair? p0) (loop (cdr p0) (cdr p1)) p1)))

(define (drop-right lis k)
  (let rec ([p0 (list-tail lis k)] [p1 lis])
    (if (pair? p0) (cons (car p1) (rec (cdr p0) (cdr p1))) '())))

(define (take! lis k)
  (cond [(zero? k) '()]
        [else (set-cdr! (list-tail lis (- k 1)) '()) lis]))

(define (drop-right! lis k)
  (let1 p0 (list-tail lis k)
    (if (pair? p0)
      (let loop ([p0 (cdr p0)] [p1 lis])
        (if (pair? p0)
          (loop (cdr p0) (cdr p1))
          (begin (set-cdr! p1 '()) lis)))
      '())))

;; Permissive versions
(define (split-at* lis k :optional (fill? #f) (filler #f))
  (when (or (not (integer? k)) (negative? k))
    (error "index must be non-negative integer" k))
  (let loop ((i 0)
             (lis lis)
             (r '()))
    (cond [(= i k) (values (reverse! r) lis)]
          [(null? lis)
           (values (if fill?
                     (append! (reverse! r) (make-list (- k i) filler))
                     (reverse! r))
                   lis)]
          [else (loop (+ i 1) (cdr lis) (cons (car lis) r))])))

(define (take* lis k . args)
  (receive (h t) (apply split-at* lis k args) h))

(define (drop* lis k)
  (when (or (not (integer? k)) (negative? k))
    (error "index must be non-negative integer" k))
  (let loop ((i 0)
             (lis lis))
    (cond [(= i k) lis]
          [(null? lis) '()]
          [else (loop (+ i 1) (cdr lis))])))

(with-module gauche.internal
  ;; A tolerant version of list-tail.  If LIS is shorter than K, returns
  ;; (- k (length lis)) as the second value.
  (define (%list-tail* lis k)
    (let loop ([lis lis] [k k])
      (cond [(<= k 0) (values lis 0)]
            [(null? lis) (values lis k)]
            [else (loop (cdr lis) (- k 1))])))
  )

(define (take-right* lis k :optional (fill? #f) (filler #f))
  (when (or (not (integer? k)) (negative? k) (inexact? k))
    (error "index must be non-negative exact integer" k))
  ;; NB: This procedure can be used to take the last K elements of
  ;; a huge lazy list.  (Not so much in take-right, with which you need
  ;; to know the length of list is greater than K beforehand.)
  ;; The naive implementation (drop lis (- (length lis) k)) would require
  ;; to realize entire list on memory, which we want to avoid.
  ;; We overwrite LIS and TAIL in each iteration instead of rebinding it,
  ;; in order to release reference to the head of list.
  (receive (tail j) ((with-module gauche.internal %list-tail*) lis k)
    (if (= j 0)
      (let loop ()
        (if (pair? tail)
          (begin (set! lis (cdr lis))
                 (set! tail (cdr tail))
                 (loop))
          lis))
      (if fill?
        (append! (make-list j filler) lis)
        lis))))

(define (drop-right* lis k)
  (let1 len (length lis)
    (if (<= k len) (take lis (- len k)) '())))

;; slices - split a list to a bunch of sublists of length k
(define (slices lis k . args)
  (unless (and (integer? k) (positive? k))
    (error "index must be positive integer" k))
  (let loop ([lis lis]
             [r '()])
    (if (null? lis)
      (reverse! r)
      (receive (h t) (apply split-at* lis k args)
        (loop t (cons h r))))))

;; intersperse - insert ITEM between elements in the list.
;; (the order of arguments is taken from Haskell's intersperse)
(define (intersperse item lis)
  (define (rec l r)
    (if (null? l)
        (reverse! r)
        (rec (cdr l) (list* (car l) item r))))
  (if (null? lis)
      '()
      (rec (cdr lis) (list (car lis)))))

;;
;; Assoc lists
;;

(select-module gauche)
(define-cproc alist-copy (alist) Scm_AlistCopy)

(select-module gauche.internal)
(define-in-module scheme (assoc x lis . args)
  (%case-by-cmp args =
                (assq x lis)
                (assv x lis)
                (%assoc x lis)
                (find (^[entry] (= x (car entry))) lis)))

(define-in-module gauche (alist-delete key alist . args)
  (%case-by-cmp args =
                (%alist-delete key alist 'eq?)
                (%alist-delete key alist 'eqv?)
                (%alist-delete key alist 'equal?)
                (filter (^[elt] (not (= key (car elt)))) alist)))

(define-in-module gauche (alist-delete! key alist . args)
  (%case-by-cmp args =
                (%alist-delete! key alist 'eq?)
                (%alist-delete! key alist 'eqv?)
                (%alist-delete! key alist 'equal?)
                (filter! (^[elt] (not (= key (car elt)))) alist)))

(select-module gauche)
;; `reverse' alist search fn
(define (rassoc key alist :optional (eq equal?))
  (find (^[elt] (and (pair? elt) (eq (cdr elt) key))) alist))

(define rassq (cut rassoc <> <> eq?))
(define rassv (cut rassoc <> <> eqv?))

(define (alist-ref alist key :optional (eq equal?) (default #f))
  (cond [(assoc key alist eq) => cdr]
        [else default]))
(define (alist-key alist val :optional (eq equal?) (default #f))
  (cond [(rassoc val alist eq) => car]
        [else default]))
(define (alist-set! alist key val :optional (eq equal?))
  (cond [(assoc key alist eq) => (^p (set-cdr! p val) alist)]
        [else (acons key val alist)]))

(define (alist-adjoin alist key val :optional (eq equal?))
  (define (rec alis)
    (cond [(null? alis) '()]
          [(eq key (caar alis)) (acons key val (cdr alis))]
          [else (let1 tail (rec (cdr alis))
                  (if (eq? tail (cdr alis))
                    alis
                    (cons (car alis) tail)))]))
  (let1 r (rec alist)
    (if (eq? r alist)
      (acons key val alist)
      r)))

(define (alist-merge maybe-eq reducer . args)
  (define (merge* eq reducer alists)
    (cond [(null? alists) '()]
          [(null? (cdr alists)) (car alists)]
          [(null? (cddr alists))
           (merge2 eq reducer '() (car alists) (cadr alists))]
          [else
           (merge2 eq reducer '() (car alists)
                   (merge* eq reducer (cdr alists)))]))
  (define (merge2 eq reducer visited-keys alist1 alist2)
    (if (null? alist1)
      (remove (^p (member (car p) visited-keys)) alist2)
      (let* ([key (caar alist1)]
             [found (assoc key alist2 eq)])
        (if found
          (acons key (reducer (cdar alist1) (cdr found))
                 (merge2 eq reducer (cons key visited-keys)
                         (cdr alist1) alist2))
          (cons (car alist1)
                (merge2 eq reducer visited-keys (cdr alist1) alist2))))))
  (if (list? reducer)                   ;eq proc is omitted
    (merge* equal? maybe-eq (cons reducer args))
    (merge* maybe-eq reducer args)))

(define (alist-update-in alist keys proc :optional (key= equal?) (default #f))
  (define (rec alist key keys)
    (if (null? keys)
      (let1 val (assoc-ref alist key default key=)
        (assoc-adjoin alist key (proc val) key=))
      (let1 val (assoc-ref alist key '() key=)
        (assoc-adjoin alist key (rec val (car keys) (cdr keys)) key=))))
  (if (null? keys)
    (error "needs at least one key in assoc-update")
    (rec alist (car keys) (cdr keys))))

;; for backward compatibity
(define (assoc-ref alist key :optional (default #f) (eq-fn equal?))
  (alist-ref alist key eq-fn default))
(define (assq-ref alist key :optional (default #f))
  (alist-ref alist key eq? default))
(define (assv-ref alist key :optional (default #f))
  (alist-ref alist key eqv? default))
(define (rassoc-ref alist val :optional (default #f) (eq-fn equal?))
  (alist-key alist val eq-fn default))
(define (rassq-ref alist val :optional (default #f))
  (alist-key alist val eq? default))
(define (rassv-ref alist val :optional (default #f))
  (alist-key alist val eqv? default))
(define assoc-set! alist-set!)
(define assq-set!  (cut alist-set! <> <> <> eq?))
(define assv-set!  (cut alist-set! <> <> <> eqv?))
(define assoc-adjoin alist-adjoin)
(define (assoc-update-in alist keys proc :optional (default #f) (eq-fn equal?))
  (alist-update-in alist keys proc eq-fn default))

;;;
;;; Extended pairs
;;;

(select-module gauche)

(define-cproc extended-pair? (obj) ::<boolean> SCM_EXTENDED_PAIR_P)
(define-cproc extended-cons (car cdr :optional (attrs ()))
  (let* ([z (Scm_ExtendedCons car cdr)])
    (unless (SCM_NULLP attrs)
      (for-each (lambda (p)
                  (unless (SCM_PAIRP p)
                    (Scm_Error "Assoc list required, but got: %S" attrs))
                  (Scm_PairAttrSet (SCM_PAIR z) (SCM_CAR p) (SCM_CDR p)))
                (Scm_Reverse attrs)))
    (return z)))
(define-cproc extended-list (elt :rest more) ::<list> Scm_ExtendedCons)

(define-cproc pair-attributes (pair::<pair>) Scm_PairAttr)

(define-cproc pair-attribute-get (pair::<pair> key :optional fallback)
  (return (Scm_PairAttrGet (SCM_PAIR pair) key fallback)))

(define-cproc pair-attribute-set! (pair::<pair> key value)
  (return (Scm_PairAttrSet (SCM_PAIR pair) key value)))
