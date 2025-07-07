;;;
;;; libbox.scm - Boxes
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

(select-module gauche)

;; box is built-in since it is used in equal? implementation.  See
;; %interleave-equal? in libbool.scm.

;; Internally, we have <box> (single-value box) and <mv-box> (multi-value
;; box) as separate types, to make single-value box efficient.

;; We also EXPERIMENTALLY have <shared-box>, which has an atomic
;; shared counter to keep track of the number of objects that shares the
;; box.  Notably, if the counter is one, you can be sure that no other
;; objects refers to the box so that you can modify the object(s)
;; kept in it without being worried that you affect the mutation
;; to others.
;;
;; Although the counter operation is MT-safe, it is not an alternative
;; of mutex.  If the object can be mutated from multiple threads, you have
;; to protect it with a separate mutex.
;;
;; The counter is neither a reference counter in a strict sense; the
;; references to a counted box can be kept in an environment, for example.
;;
;; See https://srfi-email.schemers.org/srfi-discuss/msg/16912128/
;; for the discussion triggered this implementation.

(inline-stub
 (.include "gauche/priv/configP.h"
           "gauche/priv/atomicP.h")

 (define-ctype ScmSharedBox
   ::(.struct ScmSharedBoxRec
              (SCM_HEADER::||
               counter::ScmAtomicVar
               numValues::ScmSmallInt
               values::(.array ScmObj (1)))))

 (define-cclass <shared-box> :base :private :no-meta
   "ScmSharedBox*" "Scm_SharedBoxClass"
   (c "SCM_CLASS_DEFAULT_CPL")
   ()
   (printer (let* ([b::ScmSharedBox* (SCM_SHARED_BOX obj)]
                   [cnt::ScmAtomicWord (Scm_AtomicLoad (& (-> b counter)))])
              (Scm_Printf port "#<shared-box[%d]<%d>"
                          (-> b numValues) cnt)
              (dotimes [i (-> b numValues)]
                (Scm_Printf port " %S" (aref (-> b values) i)))
              (Scm_Printf port ">"))))

 (.define SCM_SHARED_BOX_SIZE (x) (-> (SCM_SHARED_BOX x) numValues))
 (.define SCM_SHARED_BOX_VALUES (x) (-> (SCM_SHARED_BOX x) values))
 )


;;;
;;; API
;;;

;; We use them in equal? implementation as well, so here we go...
(define-cproc box (:optarray (argv argc 1) :rest rest)
  (cond
   [(== argc 0) (return (SCM_OBJ (Scm_MakeMVBox 0 SCM_FALSE)))]
   [(SCM_NULLP rest) (return (SCM_OBJ (Scm_MakeBox (aref argv 0))))]
   [else (return (SCM_OBJ (Scm_ListToMVBox (Scm_Cons (aref argv 0) rest))))]))

(define-cproc box? (v) ::<boolean>
  (return (or (SCM_BOXP v) (SCM_MVBOXP v) (SCM_SHARED_BOX_P v))))

(define-cproc set-box! (b :rest vs) ::<void>
  (cond
   [(SCM_BOXP b)
    (unless (and (SCM_PAIRP vs) (SCM_NULLP (SCM_CDR vs)))
      (Scm_Error "Wrong number of values to set to a single-value box %S: %S"
                 b vs))
    (SCM_BOX_SET b (SCM_CAR vs))]
   [(SCM_MVBOXP b)
    (let* ([argc::ScmSmallInt (Scm_Length vs)]
           [i::ScmSmallInt 0])
      (unless (== argc (SCM_MVBOX_SIZE b))
        (Scm_Error "Wrong number of values to set to a multi-value box %S: %S"
                   b vs))
      (for (() (< i argc) (begin (post++ i) (set! vs (SCM_CDR vs))))
        (set! (aref (SCM_MVBOX_VALUES b) i) (SCM_CAR vs))))]
   [(SCM_SHARED_BOX_P b)
    (let* ([argc::ScmSmallInt (Scm_Length vs)]
           [i::ScmSmallInt 0])
      (unless (== argc (SCM_SHARED_BOX_SIZE b))
        (Scm_Error "Wrong number of values to set to a shared box %S: %S"
                   b vs))
      (for (() (< i argc) (begin (post++ i) (set! vs (SCM_CDR vs))))
        (set! (aref (SCM_SHARED_BOX_VALUES b) i) (SCM_CAR vs))))]
   [else (SCM_TYPE_ERROR b "<box>, <mv-box>, or <shared-box>")]))

(define-cproc unbox (b)
  (setter set-box!)
  (cond
   [(SCM_BOXP b) (return (SCM_BOX_VALUE b))]
   [(SCM_MVBOXP b) (return (Scm_ValuesFromArray (SCM_MVBOX_VALUES b)
                                                (SCM_MVBOX_SIZE b)))]
   [(SCM_SHARED_BOX_P b) (return (Scm_ValuesFromArray
                                  (SCM_SHARED_BOX_VALUES b)
                                  (SCM_SHARED_BOX_SIZE b)))]
   [else (SCM_TYPE_ERROR b "<box> or <mv-box>") (return SCM_UNDEFINED)]))

(define-cproc box-arity (b) ::<int>
  (cond
   [(SCM_BOXP b) (return 1)]
   [(SCM_MVBOXP b) (return (SCM_MVBOX_SIZE b))]
   [(SCM_SHARED_BOX_P b) (return (SCM_SHARED_BOX_SIZE b))]
   [else (SCM_TYPE_ERROR b "<box>, <mv-box>, or <shared-box>")]))

(define-cproc set-box-value! (b i::<fixnum> val) ::<void>
  (cond
   [(SCM_BOXP b)
    (unless (== i 0) (Scm_Error "index out of range for %S: %d" b i))
    (SCM_BOX_SET b val)]
   [(SCM_MVBOXP b)
    (unless (and (<= 0 i)
                 (< i (SCM_MVBOX_SIZE b)))
      (Scm_Error "index out of range for %S: %d" b i))
    (set! (aref (SCM_MVBOX_VALUES b) i) val)]
   [(SCM_SHARED_BOX_P b)
    (unless (and (<= 0 i)
                 (< i (SCM_SHARED_BOX_SIZE b)))
      (Scm_Error "index out of range for %S: %d" b i))
    (set! (aref (SCM_SHARED_BOX_VALUES b) i) val)]
   [else (SCM_TYPE_ERROR b "<box>, <mv-box>, or <shared-box>")]))

(define-cproc unbox-value (b i::<fixnum>)
  (setter set-box-value!)
  (cond
   [(SCM_BOXP b)
    (unless (== i 0) (Scm_Error "index out of range for %S: %d" b i))
    (return (SCM_BOX_VALUE b))]
   [(SCM_MVBOXP b)
    (unless (and (<= 0 i)
                 (< i (SCM_MVBOX_SIZE b)))
      (Scm_Error "index out of range for %S: %d" b i))
    (return (aref (SCM_MVBOX_VALUES b) i))]
   [(SCM_SHARED_BOX_P b)
    (unless (and (<= 0 i)
                 (< i (SCM_SHARED_BOX_SIZE b)))
      (Scm_Error "index out of range for %S: %d" b i))
    (return (aref (SCM_SHARED_BOX_VALUES b) i))]
   [else (SCM_TYPE_ERROR b "<box>, <mv-box>, or <shard-box>")]))

;;;
;;; <shared-box> specific API
;;;
;;  for now, we hide these API in a separate module.

(define-module gauche.experimental.shared-box)
(select-module gauche.experimental.shared-box)

(export shared-box shared-box-count shared-box-inc!)

;; API
(define-cproc shared-box (initial-count::<fixnum> :rest values)
  (let* ([numVals::ScmSmallInt (Scm_Length values)]
         [z::ScmSharedBox* (SCM_NEW2 (.type ScmSharedBox*)
                                     (+ (sizeof (.type ScmSharedBox))
                                        (* (sizeof (.type ScmObj))
                                           (- numVals 1))))]
         [i::int 0])
    (SCM_SET_CLASS z (& Scm_SharedBoxClass))
    (Scm_AtomicStore (& (-> z counter)) (cast ScmAtomicWord initial-count))
    (set! (-> z numValues) numVals)
    (dolist [v values]
      (set! (aref (-> z values) (post++ i)) v))
    (return (SCM_OBJ z))))

;; API
(define-cproc shared-box-count (cb::<shared-box>)
  (let* ([v::ScmAtomicWord (Scm_AtomicLoad (& (-> cb counter)))])
    ;; NB: We might need an api to convert ScmAtomicWord to Scheme integer.
    (return (Scm_MakeInteger (cast long v)))))

;; API
(define-cproc shared-box-inc! (cb::<shared-box>
                               :optional (delta::<fixnum> 1))
  (for ()
    (let* ([v::ScmAtomicWord (Scm_AtomicLoad (& (-> cb counter)))]
           [vv::ScmAtomicWord (+ v delta)])
      (when (Scm_AtomicCompareExchange (& (-> cb counter)) (& v) vv)
        (return (Scm_MakeInteger (cast long v)))))))
