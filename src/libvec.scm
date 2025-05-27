;;;
;;; libvec.scm - builtin vector procedures
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
           "gauche/vminsn.h"
           "gauche/priv/vectorP.h"
           "gauche/priv/bytesP.h"
           "gauche/priv/mmapP.h"))

;;;
;;; Standard Vector
;;;

;; NB: make-vector is defined in libalpha.scm

(select-module scheme)

(define-cproc vector (:rest args) (inliner VEC)
  (return (Scm_ListToVector args 0 -1)))

(define-cproc vector? (obj) ::<boolean> :fast-flonum :constant
  (inliner VECTORP) SCM_VECTORP)

(define-cproc vector-length (vec::<vector>) ::<fixnum> :constant
  (inliner VEC-LEN) SCM_VECTOR_SIZE)

(define-cproc vector-ref (vec::<vector> k::<integer> :optional fallback)
  :constant
  (setter vector-set!)
  (cond [(or (SCM_BIGNUMP k)
             (< (SCM_INT_VALUE k) 0)
             (>= (SCM_INT_VALUE k) (SCM_VECTOR_SIZE vec)))
         (when (SCM_UNBOUNDP fallback)
           (Scm_Error "vector-ref index out of range: %S" k))
         (return fallback)]
        [else (return (SCM_VECTOR_ELEMENT vec (SCM_INT_VALUE k)))]))

(define-cproc vector-set! (vec::<vector> k::<integer> obj) ::<void>
  (begin
    (SCM_VECTOR_CHECK_MUTABLE vec)
    (if (or (SCM_BIGNUMP k)
            (< (SCM_INT_VALUE k) 0)
            (>= (SCM_INT_VALUE k) (SCM_VECTOR_SIZE vec)))
      (Scm_Error "vector-set! index out of range: %S" k)
      (set! (SCM_VECTOR_ELEMENT vec (SCM_INT_VALUE k)) obj))))

(define-cproc vector->list
  (vec::<vector> :optional (start::<fixnum> 0) (end::<fixnum> -1))
  Scm_VectorToList)

(define-cproc list->vector
  (list::<list> :optional (start::<fixnum> 0) (end::<fixnum> -1))
  Scm_ListToVector)

(define-cproc vector-fill!
  (vec::<vector> fill :optional (start::<fixnum> 0) (end::<fixnum> -1))
  ::<void> Scm_VectorFill)

(define-cproc vector-copy
  (v::<vector> :optional (start::<fixnum> 0) (end::<fixnum> -1) fill)
  Scm_VectorCopy)

(define-cproc vector-copy!
  (t::<vector> tstart::<fixnum> s::<vector>
               :optional (sstart::<fixnum> 0) (send::<fixnum> -1)) ::<void>
  (let* ([tsize::long (SCM_VECTOR_SIZE t)])
    (SCM_VECTOR_CHECK_MUTABLE t)
    (when (< send 0) (set! send (SCM_VECTOR_SIZE s)))
    (unless (and (<= 0 tstart) (<= tstart tsize))
      (Scm_Error "tstart out of range: %ld" tstart))
    (unless (and (<= 0 sstart) (<= sstart (SCM_VECTOR_SIZE s)))
      (Scm_Error "sstart out of range: %ld" sstart))
    (unless (and (<= 0 send) (<= send (SCM_VECTOR_SIZE s)))
      (Scm_Error "send out of range: %ld" send))
    (unless (<= (+ tstart (- send sstart)) tsize)
      (Scm_Error "source vector overruns the target vector: %20.0S [%ld,%ld]"
                 s sstart send))
    (unless (<= sstart send)
      (Scm_Error "send (%ld) must be greater than or equal to sstart (%ld)"
                 send sstart))
    (if (<= tstart sstart)
      (let* ([i::ScmSmallInt sstart] [j::ScmSmallInt tstart])
        (for [() (and (< i send) (< j tsize)) (begin (post++ i) (post++ j))]
             (set! (SCM_VECTOR_ELEMENT t j) (SCM_VECTOR_ELEMENT s i))))
      (let* ([i::ScmSmallInt send]
             [j::ScmSmallInt (+ tstart (- send sstart))])
        (when (>= j tsize)
          (set! i (- i (- j tsize)))
          (set! j tsize))
        (for [(begin (post-- i) (post-- j))
              (and (>= i sstart) (>= j tstart))
              (begin (post-- i) (post-- j))]
             (set! (SCM_VECTOR_ELEMENT t j) (SCM_VECTOR_ELEMENT s i)))))))

(define-cproc vector-append (:rest vecs)
  (let* ([len::long 0]
         [_ (dolist [v vecs]
              (unless (SCM_VECTORP v)
                (Scm_Error "vector required, but got: %S" v))
              (set! len (+ len (SCM_VECTOR_SIZE v))))]
         [dst (Scm_MakeVector len SCM_UNDEFINED)]
         [j::long 0])
    (dolist [v vecs]
      (let* ([k::long (SCM_VECTOR_SIZE v)])
        (memcpy (+ (SCM_VECTOR_ELEMENTS dst) j) (SCM_VECTOR_ELEMENTS v)
                (* k (sizeof ScmWord)))
        (set! j (+ j k))))
    (return dst)))

(select-module gauche)
(define-cproc vector-immutable? (v::<vector>) ::<boolean>
  SCM_VECTOR_IMMUTABLE_P)

(select-module gauche)
;; R7RS
(define-in-module scheme (vector->string v :optional (start 0)
                                                     (end (vector-length v)))
  (assume-type v <vector>)
  (assume (exact-integer? start))
  (assume (exact-integer? end))
  (with-output-to-string
    (^[]
      (do ([i start (+ i 1)])
          ((>= i end))
        (write-char (vector-ref v i))))))
(define-in-module scheme (string->vector s :optional
                                           (start (string-cursor-start s))
                                           (end (string-cursor-end s)))
  (assume-type s <string>)
  (let* ([ss (string-index->cursor s start)]
         [ee (string-index->cursor s end)]
         [size (string-cursor-diff s ss ee)])
    (when (< size 0)
      (error "End point precedes start point" (list start end)))
    (rlet1 v (make-vector size)
      (do ([ss ss (string-cursor-next s ss)]
           [i 0 (+ i 1)])
          [(string-cursor>=? ss ee)]
        (vector-set! v i (string-ref s ss))))))

;;;
;;; Weak vectors
;;;

(select-module gauche)

(define-cproc make-weak-vector (size::<fixnum>) Scm_MakeWeakVector)

(define-cproc weak-vector-length (wv::<weak-vector>) ::<int>
  (return (-> wv size)))

(define-cproc weak-vector-ref
  (wv::<weak-vector> index::<fixnum> :optional fallback)
  Scm_WeakVectorRef)

(define-cproc weak-vector-set! (wv::<weak-vector> index::<fixnum> val)
  Scm_WeakVectorSet)

;;;
;;; Uniform vectors
;;;

;; Most public uniform vector APIs are defined in gauche.uvector.
;; We provide a handful basic APIs here for the performance.

(select-module gauche)

(inline-stub
 (define-enum SCM_UVECTOR_S8)
 (define-enum SCM_UVECTOR_U8)
 (define-enum SCM_UVECTOR_S16)
 (define-enum SCM_UVECTOR_U16)
 (define-enum SCM_UVECTOR_S32)
 (define-enum SCM_UVECTOR_U32)
 (define-enum SCM_UVECTOR_S64)
 (define-enum SCM_UVECTOR_U64)
 (define-enum SCM_UVECTOR_F16)
 (define-enum SCM_UVECTOR_F32)
 (define-enum SCM_UVECTOR_F64)
 (define-enum SCM_UVECTOR_GENERIC)
 )

(define-cproc make-s8vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::int8_t (Scm_GetInteger8Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeS8Vector length filler))))

(define-cproc make-u8vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::uint8_t (Scm_GetIntegerU8Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeU8Vector length filler))))

(define-cproc make-s16vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::int16_t (Scm_GetInteger16Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeS16Vector length filler))))

(define-cproc make-u16vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::uint16_t (Scm_GetIntegerU16Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeU16Vector length filler))))

(define-cproc make-s32vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::int32_t (Scm_GetInteger32Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeS32Vector length filler))))

(define-cproc make-u32vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::uint32_t (Scm_GetIntegerU32Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeU32Vector length filler))))

(define-cproc make-s64vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::int64_t (Scm_GetInteger64Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeS64Vector length filler))))

(define-cproc make-u64vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::uint64_t (Scm_GetIntegerU64Clamp fill SCM_CLAMP_ERROR NULL)])
    (return (Scm_MakeU64Vector length filler))))

(define-cproc make-f16vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::ScmHalfFloat (Scm_DoubleToHalf (Scm_GetDouble fill))])
    (return (Scm_MakeF16Vector length filler))))

(define-cproc make-f32vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::float (cast float (Scm_GetDouble fill))])
    (return (Scm_MakeF32Vector length filler))))

(define-cproc make-f64vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::double (Scm_GetDouble fill)])
    (return (Scm_MakeF64Vector length filler))))

(define-cproc make-c32vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::ScmHalfComplex (Scm_GetHalfComplex fill)])
    (return (Scm_MakeC32Vector length filler))))

(define-cproc make-c64vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::ScmFloatComplex (Scm_GetFloatComplex fill)])
    (return (Scm_MakeC64Vector length filler))))

(define-cproc make-c128vector (length::<fixnum> :optional (fill 0))
  (let* ([filler::ScmDoubleComplex (Scm_GetDoubleComplex fill)])
    (return (Scm_MakeC128Vector length filler))))

(define-cproc s8vector-set! (v::<s8vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_S8 i val (Scm_ClampMode clamp))))
(define-cproc s8vector-ref (v::<s8vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter s8vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_S8 i fallback)))

(define-cproc u8vector-set! (v::<u8vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_U8 i val (Scm_ClampMode clamp))))
(define-cproc u8vector-ref (v::<u8vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter u8vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_U8 i fallback)))

(define-cproc s16vector-set! (v::<s16vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_S16 i val (Scm_ClampMode clamp))))
(define-cproc s16vector-ref (v::<s16vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter s16vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_S16 i fallback)))

(define-cproc u16vector-set! (v::<u16vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_U16 i val (Scm_ClampMode clamp))))
(define-cproc u16vector-ref (v::<u16vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter u16vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_U16 i fallback)))

(define-cproc s32vector-set! (v::<s32vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_S32 i val (Scm_ClampMode clamp))))
(define-cproc s32vector-ref (v::<s32vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter s32vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_S32 i fallback)))

(define-cproc u32vector-set! (v::<u32vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_U32 i val (Scm_ClampMode clamp))))
(define-cproc u32vector-ref (v::<u32vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter u32vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_U32 i fallback)))

(define-cproc s64vector-set! (v::<s64vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_S64 i val (Scm_ClampMode clamp))))
(define-cproc s64vector-ref (v::<s64vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter s64vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_S64 i fallback)))

(define-cproc u64vector-set! (v::<u64vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_U64 i val (Scm_ClampMode clamp))))
(define-cproc u64vector-ref (v::<u64vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter u64vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_U64 i fallback)))

(define-cproc f16vector-set! (v::<f16vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_F16 i val (Scm_ClampMode clamp))))
(define-cproc f16vector-ref (v::<f16vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter f16vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_F16 i fallback)))

(define-cproc f32vector-set! (v::<f32vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_F32 i val (Scm_ClampMode clamp))))
(define-cproc f32vector-ref (v::<f32vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter f32vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_F32 i fallback)))

(define-cproc f64vector-set! (v::<f64vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_F64 i val (Scm_ClampMode clamp))))
(define-cproc f64vector-ref (v::<f64vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter f64vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_F64 i fallback)))

(define-cproc c32vector-set! (v::<c32vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_C32 i val (Scm_ClampMode clamp))))
(define-cproc c32vector-ref (v::<c32vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter c32vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_C32 i fallback)))

(define-cproc c64vector-set! (v::<c64vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_C64 i val (Scm_ClampMode clamp))))
(define-cproc c64vector-ref (v::<c64vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter c64vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_C64 i fallback)))

(define-cproc c128vector-set! (v::<c128vector> i::<fixnum> val :optional clamp)
  (return (Scm_UVectorSet v SCM_UVECTOR_C128 i val (Scm_ClampMode clamp))))
(define-cproc c128vector-ref (v::<c128vector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter c128vector-set!)
  (return (Scm_VMUVectorRef v SCM_UVECTOR_C128 i fallback)))

(define-cproc uvector-set! (v::<uvector> i::<fixnum> val :optional clamp)
  ::<void> :fast-flonum
  (Scm_UVectorSet v (Scm_UVectorType (Scm_ClassOf (SCM_OBJ v))) i val
                  (Scm_ClampMode clamp)))
(define-cproc uvector-ref (v::<uvector> i::<fixnum> :optional fallback)
  :fast-flonum
  (setter uvector-set!)
  (return (Scm_VMUVectorRef v (Scm_UVectorType (Scm_ClassOf (SCM_OBJ v)))
                            i fallback)))
(define-cproc uvector-length (v::<uvector>) ::<ulong> :constant
  SCM_UVECTOR_SIZE)
(define-cproc uvector-immutable? (v::<uvector>) ::<boolean>
  SCM_UVECTOR_IMMUTABLE_P)
(define-cproc uvector? (obj) ::<boolean> :constant
  SCM_UVECTORP)

(define-cproc u8vector? (x) ::<boolean> SCM_U8VECTORP)
(define-cproc s8vector? (x) ::<boolean> SCM_S8VECTORP)
(define-cproc u16vector? (x) ::<boolean> SCM_U16VECTORP)
(define-cproc s16vector? (x) ::<boolean> SCM_S16VECTORP)
(define-cproc u32vector? (x) ::<boolean> SCM_U32VECTORP)
(define-cproc s32vector? (x) ::<boolean> SCM_S32VECTORP)
(define-cproc u64vector? (x) ::<boolean> SCM_U64VECTORP)
(define-cproc s64vector? (x) ::<boolean> SCM_S64VECTORP)
(define-cproc f16vector? (x) ::<boolean> SCM_F16VECTORP)
(define-cproc f32vector? (x) ::<boolean> SCM_F32VECTORP)
(define-cproc f64vector? (x) ::<boolean> SCM_F64VECTORP)
(define-cproc c32vector? (x) ::<boolean> SCM_C32VECTORP)
(define-cproc c64vector? (x) ::<boolean> SCM_C64VECTORP)
(define-cproc c128vector? (x) ::<boolean> SCM_C128VECTORP)

(define-cproc make-view-uvector (mem klass::<class> length::<integer>?
                                     :optional (offset::<fixnum> 0)
                                               (immutable?::<boolean> #f))
  (unless (SCM_MEMORY_REGION_P mem)
    (SCM_TYPE_ERROR mem "<memory-region>"))
  (let* ([len::ScmSmallInt 0])
    (cond [(SCM_FALSEP length) (set! len -1)]
          [(SCM_INTP length) (set! len (SCM_INT_VALUE length))]
          [else (Scm_Error "length is out of range: %S" length)])
    (return (Scm_MakeViewUVector (SCM_MEMORY_REGION mem)
                                 klass len offset immutable?))))

;; string <-> uvector

;; String operations
(inline-stub
 ;; A common operation to extract range of char* from the input string S.
 ;; START and END may be adjusted.
 ;; SP and EP are const char* variable that gets start and end pointers.
 (define-cise-stmt with-input-string-pointers
   [(_ (s start end sp ep) . body)
    (let ([sb (gensym)] [size (gensym)] [len (gensym)] [ss (gensym)])
      `(let* ([,sb :: (const ScmStringBody*) (SCM_STRING_BODY ,s)]
              [,size :: ScmSize (SCM_STRING_BODY_SIZE ,sb)]
              [,len :: ScmSize (SCM_STRING_BODY_LENGTH ,sb)]
              [,ss :: (const char*) (SCM_STRING_BODY_START ,sb)]
              [_ (SCM_CHECK_START_END ,start ,end (cast int ,len))]
              [,sp :: (const char*)
                   (?: (== ,start 0)
                       ,ss
                       (Scm_StringBodyPosition ,sb ,start))]
              [,ep :: (const char*)
                   (?: (== ,end ,len)
                       (+ ,ss ,size)
                       (Scm_StringBodyPosition ,sb ,end))])
         ,@body))])

 (define-cfn string->bytevector (klass::ScmClass*
                                 s::ScmString*
                                 start::ScmSmallInt
                                 end::ScmSmallInt
                                 immutable::int)
   :static
   (with-input-string-pointers (s start end sp ep)
     (let* ([buf::char* NULL])
       (if immutable
         (set! buf (cast char* sp))  ; Eek! drop const qualifier
         (begin
           (set! buf (SCM_NEW_ATOMIC2 (char*) (- ep sp)))
           (memcpy buf sp (- ep sp))))
       (return (Scm_MakeUVectorFull klass (cast ScmSmallInt (- ep sp)) buf
                                    immutable NULL)))))

 (define-cproc string->s8vector
   (s::<string>
    :optional (start::<fixnum> 0) (end::<fixnum> -1) (immutable?::<boolean> #f))
   (return (string->bytevector SCM_CLASS_S8VECTOR s start end immutable?)))

 (define-cproc string->u8vector
   (s::<string>
    :optional (start::<fixnum> 0) (end::<fixnum> -1) (immutable?::<boolean> #f))
   (return (string->bytevector SCM_CLASS_U8VECTOR s start end immutable?)))

 (define-cfn string->bytevector! (v::ScmUVector*
                                  tstart::ScmSmallInt
                                  s::ScmString*
                                  start::ScmSmallInt
                                  end::ScmSmallInt)
   :static
   (let* ([tlen::ScmSmallInt (SCM_UVECTOR_SIZE v)])
     (when (and (>= tstart 0) (< tstart tlen))
       (SCM_UVECTOR_CHECK_MUTABLE v)
       (with-input-string-pointers (s start end sp ep)
         (let* ([buf::(char*) (+ (cast char* (SCM_UVECTOR_ELEMENTS v)) tstart)])
           (if (> (- tlen tstart) (- ep sp))
             (memcpy buf sp (- ep sp))
             (memcpy buf sp (- tlen tstart))))))
     (return (SCM_OBJ v))))

 (define-cproc string->s8vector! (v::<s8vector>
                                  tstart::<fixnum>
                                  s::<string>
                                  :optional (start::<fixnum> 0)
                                  (end::<fixnum> -1))
   (return (string->bytevector! (SCM_UVECTOR v) tstart s start end)))

 (define-cproc string->u8vector! (v::<u8vector>
                                  tstart::<fixnum>
                                  s::<string>
                                  :optional (start::<fixnum> 0)
                                  (end::<fixnum> -1))
   (return (string->bytevector! (SCM_UVECTOR v) tstart s start end)))

 (define-cfn bytevector->string (v::ScmUVector*
                                 start::ScmSmallInt
                                 end::ScmSmallInt
                                 term)
   :static
   (let* ([len::ScmSmallInt (SCM_UVECTOR_SIZE v)])
     ;; We automatically avoid copying the string contents when the
     ;; following conditions are met:
     ;; * The source vector is immutable
     ;; * The owner of source vector is NULL (If there's an owner such as
     ;;   mmap handle, it isn't desirable if a string points to the memory
     ;;   without keeping ownership info.)
     ;; * The resulting string is not a small fraction of a large vector.
     ;;   If so, we may waste space by retaining large chunk of memory
     ;;   most of which won't be ever used.  Here we use some heuristics:
     ;;   - If the source vector is not small (>= 256)
     ;;   - and the string covers only a fraction (1/5) or less,
     ;;   - then we copy the content.
     ;; NB: We may add a flag that force the content to be shared, for
     ;; the programs that really want to avoid allocation.
     (SCM_CHECK_START_END start end len)
     (let* ([flags::int (?: (and (SCM_UVECTOR_IMMUTABLE_P v)
                                 (== (-> v owner) NULL)
                                 (not (and (>= len 256)
                                           (<= (- end start) (/ len 5)))))
                            0
                            SCM_STRING_COPYING)])
       (when (SCM_INTP term)
         (let* ([terminator::u_char (logand #xff (SCM_INT_VALUE term))]
                [i::ScmSmallInt])
           (for [(set! i start) (< i end) (post++ i)]
             (when (== terminator
                       (aref (cast u_char* (SCM_UVECTOR_ELEMENTS v)) i))
               (set! end i)
               (break)))))
       (return (Scm_MakeString (+ (cast char* (SCM_UVECTOR_ELEMENTS v)) start)
                               (- end start) -1 flags)))))

 (define-cproc s8vector->string (v::<s8vector>
                                 :optional (start::<fixnum> 0)
                                           (end::<fixnum> -1)
                                           (terminator #f))
   (return (bytevector->string (SCM_UVECTOR v) start end terminator)))

 (define-cproc u8vector->string (v::<u8vector>
                                 :optional (start::<fixnum> 0)
                                           (end::<fixnum> -1)
                                           (terminator #f))
   (return (bytevector->string (SCM_UVECTOR v) start end terminator)))

 (define-cfn string->wordvector (klass::ScmClass* s::ScmString*
                                 start::ScmSmallInt end::ScmSmallInt
                                 endian::ScmObj)
   :static
   (unless (SCM_SYMBOLP endian)
     (set! endian (Scm_DefaultEndian)))
   (with-input-string-pointers (s start end sp ep)
     (let* ([v (Scm_MakeUVector klass (- end start) NULL)]
            [eltp::uint32_t* (cast uint32_t* (SCM_UVECTOR_ELEMENTS v))]
            [i::ScmSmallInt 0]
            [do_swap::int (SWAP_REQUIRED endian)])
       (for [() (< sp ep) (post++ i)]
         (let* ([ch::ScmChar])
           (SCM_CHAR_GET sp ch)
           (if do_swap
             (let* ([v::swap_u32_t])
               (set! (ref v val) (cast uint32_t ch))
               (SWAP_4 v)
               (set! (aref eltp i) (ref v val)))
             (set! (aref eltp i) (cast uint32_t ch)))
           (+= sp (SCM_CHAR_NBYTES ch))))
       (return v))))

 (define-cproc string->s32vector (s::<string>
                                  :optional (start::<fixnum> 0)
                                            (end::<fixnum> -1)
                                            endian)
   (return (string->wordvector SCM_CLASS_S32VECTOR s start end endian)))

 (define-cproc string->u32vector (s::<string>
                                  :optional (start::<fixnum> 0)
                                            (end::<fixnum> -1)
                                            endian)
   (return (string->wordvector SCM_CLASS_U32VECTOR s start end endian)))

 (define-cfn string->wordvector! (v::ScmUVector*
                                  tstart::ScmSmallInt
                                  s::ScmString*
                                  start::ScmSmallInt
                                  end::ScmSmallInt
                                  endian::ScmObj)
   :static
   (unless (SCM_SYMBOLP endian)
     (set! endian (Scm_DefaultEndian)))
   (let* ([tlen::ScmSmallInt (SCM_UVECTOR_SIZE v)])
     (when (and (>= tstart 0) (< tstart tlen))
       (SCM_UVECTOR_CHECK_MUTABLE v)
       (with-input-string-pointers (s start end sp ep)
         (let* ([buf::uint32_t* (cast uint32_t* (SCM_UVECTOR_ELEMENTS v))]
                [i::ScmSmallInt tstart]
                [do_swap::int (SWAP_REQUIRED endian)])
           (for [() (and (< sp ep) (< i tlen)) (post++ i)]
             (let* ([ch::ScmChar])
               (SCM_CHAR_GET sp ch)
               (if do_swap
                 (let* ([v::swap_u32_t])
                   (set! (ref v val) (cast uint32_t ch))
                   (SWAP_4 v)
                   (set! (aref buf i) (ref v val)))
                 (set! (aref buf i) (cast uint32_t ch)))
               (+= sp (SCM_CHAR_NBYTES ch)))))))
     (return (SCM_OBJ v))))

 (define-cproc string->s32vector! (v::<s32vector>
                                   tstart::<fixnum>
                                   s::<string>
                                   :optional (start::<fixnum> 0)
                                             (end::<fixnum> -1)
                                             endian)
   (return (string->wordvector! (SCM_UVECTOR v) tstart s start end endian)))

 (define-cproc string->u32vector! (v::<u32vector>
                                   tstart::<fixnum>
                                   s::<string>
                                   :optional (start::<fixnum> 0)
                                             (end::<fixnum> -1)
                                             endian)
   (return (string->wordvector! (SCM_UVECTOR v) tstart s start end endian)))

 (define-cfn wordvector->string (v::ScmUVector*
                                 start::ScmSmallInt
                                 end::ScmSmallInt
                                 term
                                 endian)
   :static
   (unless (SCM_SYMBOLP endian)
     (set! endian (Scm_DefaultEndian)))
   (let* ([len::ScmSmallInt (SCM_UVECTOR_SIZE v)]
          [s (Scm_MakeOutputStringPort FALSE)]
          [do_swap::int (SWAP_REQUIRED endian)])
     (SCM_CHECK_START_END start end len)
     (let* ([eltp::int32_t* (cast int32_t* (SCM_UVECTOR_ELEMENTS v))])
       (while (< start end)
         (let* ([ch::ScmChar]
                [val::uint32_t (aref eltp (post++ start))])
           (if do_swap
             (let* ([v::swap_u32_t])
               (set! (ref v val) val)
               (SWAP_4 v)
               (set! ch (cast ScmChar (ref v val))))
             (set! ch (cast ScmChar val)))
           (when (and (SCM_INTP term)
                      (== (SCM_INT_VALUE term) ch))
             (break))
           (Scm_PutcUnsafe ch (SCM_PORT s)))))
     (return (Scm_GetOutputStringUnsafe (SCM_PORT s) 0))))

 (define-cproc s32vector->string (v::<s32vector>
                                  :optional (start::<fixnum> 0)
                                            (end::<fixnum> -1)
                                            (terminator #f)
                                            endian)
   (return (wordvector->string (SCM_UVECTOR v) start end terminator endian)))

 (define-cproc u32vector->string (v::<u32vector>
                                  :optional (start::<fixnum> 0)
                                            (end::<fixnum> -1)
                                            (terminator #f)
                                            endian)
   (return (wordvector->string (SCM_UVECTOR v) start end terminator endian)))
 )

;;;
;;; Bitvectors
;;;

(define-cproc bitvector? (obj) ::<boolean> SCM_BITVECTORP) ;SRFI-178
(define-cproc bitvector-length (v::<bitvector>) ::<int>    ;SRFI-178
  SCM_BITVECTOR_SIZE)

(define-cproc bitvector-any-value? (v::<bitvector> bit
                                    :optional (start::<fixnum> 0)
                                              (end::<fixnum> -1))
  ::<boolean>
  (let* ([b::int (Scm_Bit2Int bit)])
    (SCM_CHECK_START_END start end (SCM_BITVECTOR_SIZE v))
    (if b
      (return (Scm_BitsAny (SCM_BITVECTOR_BITS v) start end))
      (return (not (Scm_BitsEvery (SCM_BITVECTOR_BITS v) start end))))))

(define-cproc bitvector-every-value? (v::<bitvector> bit
                                      :optional (start::<fixnum> 0)
                                                (end::<fixnum> -1))
  ::<boolean>
  (let* ([b::int (Scm_Bit2Int bit)])
    (SCM_CHECK_START_END start end (SCM_BITVECTOR_SIZE v))
    (if b
      (return (Scm_BitsEvery (SCM_BITVECTOR_BITS v) start end))
      (return (not (Scm_BitsAny (SCM_BITVECTOR_BITS v) start end))))))

(define-cproc make-bitvector (len::<fixnum> :optional (init #f)) ;SRFI-178
  Scm_MakeBitvector)
(define-cproc bitvector (:rest bits) Scm_ListToBitvector) ;SRFI-178
(define-cproc list->bitvector (bits) Scm_ListToBitvector) ;SRFI-178

(define-cproc string->bitvector (s::<string>) ;SRFI-178
  (return (Scm_StringToBitvector s TRUE)))
(define-cproc bitvector->string (v::<bitvector>) ;SRFI-178
  (return (Scm_BitvectorToString v TRUE)))

(define-cproc bit->integer (bit) ::<int> Scm_Bit2Int) ;SRFI-178
(define-cproc bit->boolean (bit) ::<boolean> Scm_Bit2Int) ;SRFI-178

(define-cproc bitvector-set! (v::<bitvector> i::<fixnum> b) ::<void> ;SRFI-178
  (when (or (< i 0) (>= i (SCM_BITVECTOR_SIZE v)))
    (Scm_Error "bitvector index out of range: %ld" i))
  (SCM_BITVECTOR_CHECK_MUTABLE v)
  (if (Scm_Bit2Int b)
    (SCM_BITS_SET (SCM_BITVECTOR_BITS v) i)
    (SCM_BITS_RESET (SCM_BITVECTOR_BITS v) i)))

(define-cproc bitvector-ref/int (v::<bitvector> i::<fixnum> ;SRFI-178
                                                :optional fallback)
  (setter bitvector-set!)
  (when (or (< i 0) (>= i (SCM_BITVECTOR_SIZE v)))
    (if (SCM_UNBOUNDP fallback)
      (Scm_Error "bitvector index out of range: %ld" i)
      (return fallback)))
  (return (?: (SCM_BITS_TEST (SCM_BITVECTOR_BITS v) i)
              (SCM_MAKE_INT 1)
              (SCM_MAKE_INT 0))))

(define-cproc bitvector-ref/bool (v::<bitvector> i::<fixnum> ;SRFI-178
                                                 :optional fallback)
  (setter bitvector-set!)
  (when (or (< i 0) (>= i (SCM_BITVECTOR_SIZE v)))
    (if (SCM_UNBOUNDP fallback)
      (Scm_Error "bitvector index out of range: %ld" i)
      (return fallback)))
  (return (?: (SCM_BITS_TEST (SCM_BITVECTOR_BITS v) i) SCM_TRUE SCM_FALSE)))

(define-cproc bitvector-copy (v::<bitvector>
                              :optional (start::<fixnum> 0)
                                        (end::<fixnum> -1)) ;SRFI-178
  Scm_BitvectorCopy)

(define-cproc bitvector-copy! (dest::<bitvector>
                               dstart::<fixnum>
                               src::<bitvector>
                               :optional (start::<fixnum> 0)
                                         (end::<fixnum> -1)) ;SRFI-178
  Scm_BitvectorCopyX)

;;;
;;; Flat vector API (interact with underlying C array)
;;;

(select-module gauche)

(inline-stub
 (.define common_eqv (a b) (== a b))
 (.define common_lt  (a b) (< a b))

 (.define hc_eqv (a b) (and (== (ref a r) (ref b r))
                            (== (ref a i) (ref b i))))
 (.define hc_lt (a b) (or (< (ref a r) (ref b r))
                          (and (== (ref a r) (ref b r))
                               (< (ref a i) (ref b i)))))

 (.define fc_lt (a b) (or (< (crealf a) (crealf b))
                          (and (== (crealf a) (crealf b))
                               (< (cimagf a) (cimagf b)))))
 (.define dc_lt (a b) (or (< (creal a) (creal b))
                          (and (== (creal a) (creal b))
                               (< (cimag a) (cimag b)))))

 (define-cise-stmt %binary-search
   [(_ elttype eq lt)
    `(let* ([esize::u_int  (+ skip 1)]
            [nume::size_t (/ len esize)]
            [k::size_t (/ nume 2)]
            [hi::size_t nume]
            [lo::size_t 0])
       (while (< lo hi)
         (let* ([v:: ,elttype (aref vec (* k esize))])
           (cond [(,eq v key) (return (* k esize))]
                 [(,lt v key)
                  (set! lo k) (set! k (+ lo (/ (- hi lo) 2)))
                  (when (== lo k) (break))]
                 [else
                  (set! hi k) (set! k (+ lo (/ (- hi lo) 2)))])))
       (when floor
         (if (== lo hi)
           (set! (* floor) (cast (size_t) -1))
           (set! (* floor) (* lo esize))))
       (when ceil
         (if (== hi nume)
           (set! (* ceil) (cast (size_t) -1))
           (set! (* ceil) (* hi esize))))
       (return (cast (size_t) -1)))])

 (define-cfn Scm_BinarySearchS8 (vec::(const int8_t*)
                                 len::size_t
                                 key::int8_t
                                 skip::u_int
                                 floor::size_t*
                                 ceil::size_t*)
   ::size_t (%binary-search int8_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchU8 (vec::(const uint8_t*)
                                 len::size_t
                                 key::uint8_t
                                 skip::u_int
                                 floor::size_t*
                                 ceil::size_t*)
   ::size_t (%binary-search uint8_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchS16 (vec::(const int16_t*)
                                  len::size_t
                                  key::int16_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search int16_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchU16 (vec::(const uint16_t*)
                                  len::size_t
                                  key::uint16_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search uint16_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchS32 (vec::(const int32_t*)
                                  len::size_t
                                  key::int32_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search int32_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchU32 (vec::(const uint32_t*)
                                  len::size_t
                                  key::uint32_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search uint32_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchS64 (vec::(const int64_t*)
                                  len::size_t
                                  key::int64_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search int64_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchU64 (vec::(const uint64_t*)
                                  len::size_t
                                  key::uint64_t
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search uint64_t common-eqv common-lt))

 (define-cfn Scm_BinarySearchF16 (vec::(const ScmHalfFloat*)
                                  len::size_t
                                  key::ScmHalfFloat
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search ScmHalfFloat common-eqv common-lt))

 (define-cfn Scm_BinarySearchF32 (vec::(const float*)
                                  len::size_t
                                  key::float
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search float common-eqv common-lt))

 (define-cfn Scm_BinarySearchF64 (vec::(const double*)
                                  len::size_t
                                  key::double
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search double common-eqv common-lt))

 (define-cfn Scm_BinarySearchC32 (vec::(const ScmHalfComplex*)
                                  len::size_t
                                  key::ScmHalfComplex
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search ScmHalfComplex hc-eqv hc-lt))

 (define-cfn Scm_BinarySearchC64 (vec::(const ScmFloatComplex*)
                                  len::size_t
                                  key::(ScmFloatComplex)
                                  skip::u_int
                                  floor::size_t*
                                  ceil::size_t*)
   ::size_t (%binary-search (ScmFloatComplex) common-eqv fc-lt))

 (define-cfn Scm_BinarySearchC128 (vec::(const ScmDoubleComplex*)
                                   len::size_t
                                   key::(ScmDoubleComplex)
                                   skip::u_int
                                   floor::size_t*
                                   ceil::size_t*)
   ::size_t (%binary-search (ScmDoubleComplex) common-eqv dc-lt))
 )
