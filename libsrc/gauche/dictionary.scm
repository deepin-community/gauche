;;;
;;; gauche.dictionary - dictionary generics
;;;
;;;   Copyright (c) 2007-2024  Shiro Kawai  <shiro@acm.org>
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

(define-module gauche.dictionary
  ;; TRANSIENT - somehow we need both 'use' and 'extend' to make this work.
  ;; Should only 'extend' be enough.  This is just a workaround until we
  ;; resolve the issue.
  (use gauche.collection)
  (use gauche.libdict)
  (extend gauche.libdict)
  (extend gauche.collection)
  (export dict-get dict-put! |setter of dict-get|
          dict-immutable? dict-transparent? dict-exists?
          dict-delete!
          dict-seek dict-find dict-any
          dict-fold dict-fold-right
          dict-for-each dict-map
          dict-keys dict-values dict-comparator
          dict->alist dict-pop! dict-push! dict-update! dict-clear!
          define-dict-interface

          <bimap> make-bimap bimap-put!
          bimap-left bimap-left-get bimap-left-exists? bimap-left-delete!
          bimap-right bimap-right-get bimap-right-exists? bimap-right-delete!

          <stacked-map> make-stacked-map stacked-map-stack
          stacked-map-push! stacked-map-pop! stacked-map-depth
          stacked-map-entry-update! stacked-map-entry-delete!
          ))
(select-module gauche.dictionary)

;;;
;;; Generic dictionary API
;;;

;; Generic dictionary interface.
;; Required methods:
;;
;;    dict-get dict key [default]
;;    dict-put! dict key value
;;    dict-delete! dict key             ; for deletable dictionary
;;
;; Quasi-required methods (if not provided, returns #f.  It may hinder
;; the dict to be used in certain context.):
;;
;;    dict-comparator dict
;;
;; Optional methods (if not provided, the default method works, though
;; maybe inefficient.):
;;
;;    dict-immutable? dict-seek
;;    dict-fold dict proc seed
;;    dict-fold-right dict proc seed    ; for ordered dictionary
;;    dict-exists? dict key
;;    dict-map dict proc
;;    dict-for-each dict proc
;;    dict-keys dict
;;    dict-values dict
;;    dict-pop! dict key [default]
;;    dict-push! dict key value
;;    dict-update! dict key proc [default]
;;    dict->alist
;;
;; The macro 'define-dict-interface' is defined in libdict.scm.

(define %unique (list #f))

;; Default is mutable.  Immutable dict should override.
(define-method dict-immutable? ((dict <dictionary>)) #f)

;; Default is opaque (the content isn't shown by the printer)
(define-method dict-transparent? ((dict <dictionary>)) #f)

(define-method dict-exists? ((dict <dictionary>) key)
  (not (eq? (dict-get dict key %unique) %unique)))

(define-method dict-fold ((dict <dictionary>) proc seed)
  ;; This depends on the fact that a dictionary is also a collection.
  (fold (^[kv seed] (proc (car kv) (cdr kv) seed)) dict seed))

(define-method dict-fold-right ((dict <ordered-dictionary>) proc seed)
  (fold-right (^[kv seed] (proc (car kv) (cdr kv) seed)) dict seed))

(define-method dict-seek ((dict <dictionary>) pred fail succ)
  (let/cc return
    (dict-fold dict
               (^[k v _] (if-let1 r (pred k v)
                           (receive rs (succ r k v)
                             (apply return rs))
                           #f))
               #f)
    (fail)))

(define-method dict-find ((dict <dictionary>) pred
                          :optional (fail (^[] (values #f #f))))
  (dict-seek dict pred fail (^[r k v] (values k v))))

(define-method dict-any ((dict <dictionary>) pred)
  (dict-seek dict pred (^[] #f) (^[r k v] r)))

(define-method dict-map ((dict <dictionary>) proc)
  (reverse (dict-fold dict (^[k v s] (cons (proc k v) s)) '())))

(define-method dict-for-each ((dict <dictionary>) proc)
  (dict-fold dict (^[k v s] (proc k v) #f) '()))

(define-method dict-keys ((dict <dictionary>))
  (dict-fold dict (^[k v s] (cons k s)) '()))

(define-method dict-keys ((dict <ordered-dictionary>))
  (reverse (dict-fold dict (^[k v s] (cons k s)) '())))

(define-method dict-values ((dict <dictionary>))
  (dict-fold dict (^[k v s] (cons v s)) '()))

(define-method dict-values ((dict <ordered-dictionary>))
  (reverse (dict-fold dict (^[k v r] (cons v r)) '())))

(define-method dict->alist ((dict <dictionary>))
  (dict-fold dict acons '()))

(define-method dict->alist ((dict <ordered-dictionary>))
  (reverse (dict-fold dict acons '())))

(define-method dict-delete! ((dict <dictionary>) key) ;fallback
  (error "You can't delete entry from a dictionary ~s" dict))

(define-method dict-clear! ((dict <dictionary>))
  (dolist [key (dict-keys dict)]
    (dict-delete! dict key)))

(define-method dict-pop! ((dict <dictionary>) key . maybe-default)
  (let1 r (dict-get dict key %unique)
    (cond [(eq? r %unique)
           (if (pair? maybe-default)
             (car maybe-default)
             (errorf "dict-pop!: no value for key ~s in ~s" key dict))]
          [(pair? r)
           (dict-put! dict key (cdr r))
           (car r)]
          [else
           (errorf "dict-pop!: value for key ~s is not a pair: ~s" key r)])))

(define-method dict-push! ((dict <dictionary>) key value)
  (dict-put! dict key (cons value (dict-get dict key '()))))

(define-method dict-update! ((dict <dictionary>) key proc . maybe-default)
  (let1 r (apply dict-get dict key maybe-default)
    (dict-put! dict key (proc r))))

(define-method (setter dict-get) (dict key val)
  (dict-put! dict key val))

(define-method dict-comparator ((dict <dictionary>)) #f)


;;;
;;; Bidirectional map
;;;

(define-class <bimap-meta> (<class>) ())

;; Currently we only support strict one-to-one mapping.
(define-class <bimap> (<dictionary>)
  ((left  :init-keyword :left)    ; x -> y
   (right :init-keyword :right)   ; y -> x
   (on-conflict :init-keyword :on-conflict
                :init-value :supersede)
   )
  :metaclass <bimap-meta>)

(define (make-bimap left right :key (on-conflict :supersede))
  (unless (memv on-conflict '(#f :error :supersede))
    (error "got invalid on-conflict value; possible values are "
           ":supersede, :error or #f, but got" on-conflict))
  (make <bimap> :left left :right right :on-conflict on-conflict))

(define (bimap-left bm)  (slot-ref bm 'left))
(define (bimap-right bm) (slot-ref bm 'right))

(define-macro (define-bimap-ops lr fwd rev)
  (define (N templ) (string->symbol (format templ lr)))
  `(begin
     (define (,(N "bimap-~a-get") bm key . maybe-default)
       (apply dict-get (,fwd bm) key maybe-default))
     (define (,(N "bimap-~a-exists?") bm key)
       (dict-exists? (,fwd bm) key))
     (define (,(N "bimap-~a-delete!") bm key)
       (let ([f (,fwd bm)]
             [r (,rev bm)])
         (and (dict-exists? f key)
              (let1 val (dict-get f key)
                (dict-delete! f key)
                (dict-delete! r val)))))
     ))

(define-bimap-ops left  bimap-left bimap-right)
(define-bimap-ops right bimap-right bimap-left)

(define (bimap-put! bm x y :key (on-conflict (~ bm 'on-conflict)))
  (let ([x-exists? (dict-exists? (bimap-left bm) x)]
        [y-exists? (dict-exists? (bimap-right bm) y)])
    (if (or x-exists? y-exists?)
      (case on-conflict
        [(:error)
         (if x-exists?
           (error "attempt to insert duplicate left-key into bimap: " x)
           (error "attempt to insert duplicate right-key into bimap: " y))]
        [(#f) #f]
        [(:supersede)
         (when x-exists?
           (dict-delete! (bimap-right bm) (dict-get (bimap-left bm) x)))
         (when y-exists?
           (dict-delete! (bimap-left bm) (dict-get (bimap-right bm) y)))
         (dict-put! (bimap-left bm) x y)
         (dict-put! (bimap-right bm) y x)
         #t]
        [else
         (error "bimap-put!: on-conflict argument must be either one of \
              :supersede, :error or #f, but got:" on-conflict)])
      (begin
        (dict-put! (bimap-left bm) x y)
        (dict-put! (bimap-right bm) y x)))))

;; the normal ref/set! uses left map
(define-method dict-get ((dict <bimap>) key . maybe-default)
  (apply bimap-left-get dict key maybe-default))
(define-method dict-put! ((dict <bimap>) key val)
  (bimap-put! dict key val))
(define-method dict-exists? ((dict <bimap>) key)
  (bimap-left-exists? dict key))
(define-method dict-delete! ((dict <bimap>) key)
  (bimap-left-delete! dict key))
(define-method dict-fold ((dict <bimap>) proc seed)
  (dict-fold (bimap-left dict) proc seed))
(define-method dict-comparator ((dict <bimap>))
  (dict-comparator (bimap-left dict)))
(define-method dict-transparent? ((dict <bimap>)) #t)

;; Collection protocol.   We just redirect methods to left map.
(define-method call-with-iterator ((coll <bimap>) proc . args)
  (apply call-with-iterator (bimap-left coll) proc args))

;;;
;;; Stacked map
;;;

;; Stacked map allows you to stack (layer) multiple maps and treat
;; as if they are a single map.  The top map "shadows" the bottom maps.

(define-class <stacked-map-meta> (<class>) ())

(define-class <stacked-map> (<dictionary>)
  ((key-comparator :init-keyword :key-comparator :init-value default-comparator)
   (stack     :init-keyword :stack :init-value '())
   ;; Unique-dict-maker is a thunk that creates a new dictionary
   ;; to be used to check key uniqueness.  When a stacked map is
   ;; traversed (e.g. by dict-fold), a new unique-dict is created
   ;; and keys are stored as the traversal progresses, and used to
   ;; filter out already-seen keys.
   (unique-dict-maker))
  :metaclass <stacked-map-meta>)

(define-method initialize ((self <stacked-map>) initargs)
  (next-method)
  (unless (slot-bound? self 'unique-dict-maker)
    (let1 cmpr (slot-ref self 'key-comparator)
      (slot-set! self 'unique-dict-maker
                 (if (comparator-hashable? cmpr)
                   (cut make-hash-table cmpr)
                   (cut make-tree-map cmpr))))))

(define (make-stacked-map cmpr . maps)
  (if (comparator? cmpr)
    (make <stacked-map> :key-comparator cmpr :stack maps)
    (make <stacked-map>
      :key-comparator (dict-comparator cmpr) ; cmpt is the first map
      :stack (cons cmpr maps))))

(define-method stacked-map-stack ((smap <stacked-map>) (dict <dictionary>))
  (make <stacked-map>
    :key-comparator (slot-ref smap 'key-comparator)
    :stack (cons dict (slot-ref smap 'stack))))

(define-method stacked-map-push! ((smap <stacked-map>) (dict <dictionary>))
  (slot-push! smap 'stack dict))
(define-method stacked-map-pop! ((smap <stacked-map>))
  (slot-pop! smap 'stack))
(define-method stacked-map-depth ((smap <stacked-map>))
  (length (slot-ref smap 'stack)))

;; These two alters the specific map that contains the key.
(define-method stacked-map-entry-update! ((smap <stacked-map>) key proc
                                          :optional fallback)
  (let loop ([ms (slot-ref smap 'stack)])
    (cond [(null? ms) #f]
          [(dict-get (car ms) key) (dict-update! (car ms) key proc fallback)]
          [else (loop (cdr ms))])))
(define-method stacked-map-entry-delete! ((smap <stacked-map>) key)
  (let loop ([ms (slot-ref smap 'stack)])
    (cond [(null? ms) #f]
          [(dict-get (car ms) key) (dict-delete! (car ms) key) #t]
          [else (loop (cdr ms))])))

(define-method dict-exists? ((smap <stacked-map>) key)
  (any (cut dict-exists? <> key) (slot-ref smap 'stack)))

(define-method dict-transparent? ((dict <stacked-map>)) #t)

(define-method dict-get ((smap <stacked-map>) key . maybe-default)
  (let1 maybe-r (any (^m (let1 r (dict-get m key %unique)
                           (and (not (eq? r %unique)) (list r))))
                     (slot-ref smap 'stack))
    (cond [maybe-r (car maybe-r)]
          [(pair? maybe-default) (car maybe-default)]
          [else (errorf "~s doesn't have an entry for key ~s" smap key)])))

;; This puts entry to the topmost dict.
(define-method dict-put! ((smap <stacked-map>) key val)
  (let1 maps (slot-ref smap 'stack)
    (if (null? maps)
      (error "You can't add an entry to an empty stacked map:" smap)
      (dict-put! (car maps) key val))))

;; This deletes entry from *all* dicts.
(define-method dict-delete! ((smap <stacked-map>) key)
  (for-each (cut dict-delete! <> key) (slot-ref smap 'stack)))

(define-method dict-comparator ((smap <stacked-map>))
  (slot-ref smap 'key-comparator))

(define-method dict-fold ((smap <stacked-map>) proc seed)
  (let1 udict (and-let* ([thunk (slot-ref smap 'unique-dict-maker)])
                (thunk))
    (if udict
      (fold (^[m s]
              (dict-fold m (^[k v s] (if (dict-exists? udict k)
                                       s
                                       (begin (dict-put! udict k #t)
                                              (proc k v s))))
                         s))
            seed (slot-ref smap 'stack))
      (fold (^[m s] (dict-fold m proc s)) seed (slot-ref smap 'stack)))))
