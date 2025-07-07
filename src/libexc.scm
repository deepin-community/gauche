;;;
;;; libexc.scm - errors and exceptions
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
(inline-stub
 (.include "gauche/priv/configP.h"
           "gauche/exception.h"))

(use util.match)
(declare (keep-private-macro define-condition-type condition))

(define <exception> <condition>) ;; backward compatibility

;;;
;;; Core procedures
;;;

(select-module gauche)
;; NB: rewind-before keyword arg is EXPERIMENTAL.
(define-cproc with-error-handler
  (handler thunk :key (rewind-before::<boolean> #f))
  (unless (SCM_PROCEDURE_TAKE_NARG_P handler 1)
    (Scm_Error "error handler must take at least 1 argument, but got %S"
               handler))
  (unless (SCM_PROCEDURE_THUNK_P thunk)
    (Scm_Error "thunk required, but got %S" thunk))
  (if rewind-before
    (return (Scm_VMWithGuardHandler handler thunk))
    (return (Scm_VMWithErrorHandler handler thunk))))

(define-cproc report-error (exception :optional (port (current-error-port)))
  Scm_ReportError)

(define-cproc condition-type-name (c) Scm_ConditionTypeName)

;; A convenience procedure; safe for non-message condition objects.
;; (cf. error-object-message of r7rs)
(define (condition-message e :optional (fallback #f))
  (if (and (condition? e)
           (condition-has-type? e <message-condition>))
    (condition-ref e 'message)
    fallback))

(define (print-default-error-heading exc out)
  (assume-type out <output-port>)
  (cond [(not (condition? exc))
         (format out "*** ERROR: unhandled exception: ~s\n" exc)]
        [(condition-has-type? exc <message-condition>)
         (format out "*** ~a: ~,,,,200:a\n"
                 (condition-type-name exc) (~ exc'message))]
        [else
         (format out "*** ~a\n" (condition-type-name exc))]))

;; Additional reporting.  We report mixins after main conditions,
;; for mixing give additional context (e.g. "when compiling ...")
(define (print-additional-error-heading exc out)
  (define (additional-condition c)
    (guard (e [else (warn "Error from (report-additional-condition ~s)\n" c)
                    #f])
      (report-additional-condition c out)))
  (assume-type out <output-port>)
  (when (condition? exc)
    (receive (mixins mains)
        (if (is-a? exc <compound-condition>)
          (partition (cut is-a? <> <mixin-condition>) (~ exc'%conditions))
          (values '() (list exc)))
      (for-each additional-condition mains)
      (for-each additional-condition mixins))))

(select-module gauche.internal)
(define-cproc %type-error (what::<const-cstring>
                           expected-type::<const-cstring>
                           actual-object)
  ::<void> Scm_TypeError)

(define-in-module gauche (type-error expr expected-type actual-object)
  (%type-error (write-to-string expr)
               (write-to-string expected-type) ;TODO: nicer formatting in future
               actual-object))

;;;
;;; Srfi-18, Srfi-226 primitives
;;;

(select-module gauche)
(define-cproc current-exception-handler () Scm_VMCurrentExceptionHandler)
(define-cproc exception-handler-stack () Scm_VMExceptionHandlerStack)
(define-cproc with-exception-handler (handler thunk)
  Scm_VMWithExceptionHandler)

;; The optional arg is to support r7rs semantics
(select-module gauche.internal)
(define-cproc %raise (exception :optional (non-continuable? #f))
  (let* ([flags::u_long
          (?: (SCM_FALSEP non-continuable?) 0 SCM_RAISE_NON_CONTINUABLE)])
    (return (Scm_Raise exception flags))))

;; For r7rs compatible guard.
;; %reraise must be called at the tail position of the error handler.
;; It tells the VM that the error handler returns from handling a continuable
;; exception.
;; After this returns, the control gets back to Scm_VMDefaultExceptionHandler,
;; which restores dynamic environment and returns to the original caller
;; of raise-continuable.
(define-cproc %reraise ()
  (return (Scm_VMReraise)))

;; SRFI-18 raise
(define-in-module gauche (raise c) (%raise c))

;; R7RS raise-continuable is effectively same as Gauche's raise
(define-in-module gauche (raise-continuable c) (raise c))

;;;
;;; Srfi-35
;;;

(select-module gauche)

(define-cproc condition? (obj) ::<boolean> SCM_CONDITIONP)

(define-cproc condition-has-type? (c k) ::<boolean> Scm_ConditionHasType)

(define-cproc make-compound-condition (:rest conditions)
  Scm_MakeCompoundCondition)

(define (make-condition-type name parent field-names)
  (unless (condition-type? parent)
    (error "condition-type required as a parent of make-condition-type, but got:" parent))
  (make <condition-meta>
    :name name
    :supers (list parent)
    :slots  field-names))

(define (condition-type? obj)
  (is-a? obj <condition-meta>))

(define (make-condition type . initargs)
  (unless (condition-type? type)
    (error "make-condition requires a condition type, but got:" type))
  (let ((c (make type)))
    (let loop ((args initargs))
      (cond ((null? args) c)
            ((null? (cdr args))
             (error "make-condition is given non-even initargs:" initargs))
            ((slot-exists? c (car args))
             (slot-set! c (car args) (cadr args))
             (loop (cddr args)))
            (else
             (errorf "condition type ~s doesn't have a field ~s"
                     type (car args)))))))

(define (condition-ref c slot)
  (slot-ref c slot))  ;; compound condition traps slot-missing

(define (extract-condition c type)
  (unless (condition-has-type? c type)
    (errorf "cannot extract a condition of type ~s from a condition ~s"
            type c))
  (let ((cc (make type)))
    (let loop ((slots (class-slots type)))
      (if (null? slots)
        cc
        (let ((sn (slot-definition-name (car slots))))
          (when (slot-bound? c sn)
            (slot-set! cc sn (slot-ref c sn)))
          (loop (cdr slots)))))))

;; SRFI-35/SRFI-36 compatibility
(define &condition   <condition>)
(define &message     <message-condition>)
(define &serious     <serious-condition>)
(define &error       <error>)
(define &i/o-error   <io-error>)
(define &i/o-port-error <port-error>)
(define &i/o-read-error <io-read-error>)
(define &i/o-write-error <io-write-error>)
(define &i/o-closed-error <io-closed-error>)
(define &read-error  <read-error>)

(define (message-condition? obj) (is-a? obj <message-condition>))
(define (serious-condition? obj) (is-a? obj <serious-condition>))
(define (error? obj) (is-a? obj <error>))

;; SRFI-226
(define &continuation <continuation-violation>)
(define (make-continuation-violation tag)
  (make <continuation-violation> :prompt-tag tag))
(define (continuation-violation? obj)
  (is-a? obj <continuation-violation>))
(define (continuation-violation-prompt-tag condition)
  (assume-type condition <continuation-violation>)
  (~ condition 'prompt-tag))

;;;
;;; Thread exception classes
;;;

;; TODO - set metaclass of those exceptions to <condition-meta>

(select-module gauche.threads)
(inline-stub
 (define-cfn thread_exception_allocate (klass::ScmClass* _) :static
   (return (Scm_MakeThreadException klass NULL)))

 (define-cfn thread_exception_print (obj port::ScmPort* _::ScmWriteContext*)
   ::void :static
   (let* ([k::ScmClass* (SCM_CLASS_OF obj)]
          [exc::ScmThreadException* (SCM_THREAD_EXCEPTION obj)]
          [cname (Scm_ShortClassName k)])
     (if (SCM_UNDEFINEDP (-> exc data))
       (Scm_Printf port "#<%A %S>" cname (SCM_OBJ_SAFE (-> exc thread)))
       (Scm_Printf port "#<%A %S %S>" cname (SCM_OBJ_SAFE (-> exc thread))
                   (-> exc data)))))

 (define-cfn uncaught_exception_print (obj port::ScmPort* _::ScmWriteContext*)
   ::void :static
   (let* ([exc::ScmThreadException* (SCM_THREAD_EXCEPTION obj)])
     (Scm_Printf port "#<uncaught-exception in thread %S: %S>"
                 (SCM_OBJ_SAFE (-> exc thread)) (-> exc data))))

 (define-cfn terminated_thread_print (obj port::ScmPort* _::ScmWriteContext*)
   ::void :static
   (let* ([exc::ScmThreadException* (SCM_THREAD_EXCEPTION obj)])
     (Scm_Printf port "#<terminated-thread-exception: %S terminated by %S>"
                 (SCM_OBJ_SAFE (-> exc thread)) (-> exc data))))

 "static ScmClass *thread_exception_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_ThreadExceptionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
 };"

 (define-cclass <thread-exception>
   "ScmThreadException*" "Scm_ThreadExceptionClass"
   ("Scm_ConditionClass")
   ((thread :type <thread>))
   (allocator (c "thread_exception_allocate"))
   (printer   (c "thread_exception_print")))

 (define-cclass <join-timeout-exception>
   "ScmThreadException*" "Scm_JoinTimeoutExceptionClass"
   (c "thread_exception_cpa")
   ()
   (allocator (c "thread_exception_allocate"))
   (printer   (c "thread_exception_print"))
   (unboxer   "SCM_THREAD_EXCEPTION"))

 (define-cclass <abandoned-mutex-exception>
   "ScmThreadException*" "Scm_AbandonedMutexExceptionClass"
   (c "thread_exception_cpa")
   ((mutex  :c-name "data"))
   (allocator (c "thread_exception_allocate"))
   (printer   (c "thread_exception_print"))
   (unboxer   "SCM_THREAD_EXCEPTION"))

 (define-cclass <terminated-thread-exception>
   "ScmThreadException*" "Scm_TerminatedThreadExceptionClass"
   (c "thread_exception_cpa")
   ((terminator :c-name "data"))
   (allocator (c "thread_exception_allocate"))
   (printer   (c "terminated_thread_print"))
   (unboxer   "SCM_THREAD_EXCEPTION"))

 (define-cclass <uncaught-exception>
   "ScmThreadException*" "Scm_UncaughtExceptionClass"
   (c "thread_exception_cpa")
   ((reason :c-name data))
   (allocator (c "thread_exception_allocate"))
   (printer   (c "uncaught_exception_print"))
   (unboxer   "SCM_THREAD_EXCEPTION"))

 (define-cclass <concurrent-modification-violation>
   "ScmThreadException*" "Scm_ConcurrentModificationViolationClass"
   (c "thread_exception_cpa")
   ()
   (allocator (c "thread_exception_allocate"))
   (printer   (c "uncaught_exception_print"))
   (unboxer   "SCM_THREAD_EXCEPTION"))
 )

;; SRFI-226
(define &thread <thread-exception>)
(define (make-thread-condition)
  (make <thread-exception> :thread (current-thread)))
(define (thread-condition? obj) (is-a? obj <thread-exception>))

(define &uncaught-exception <uncaught-exception>)
(define (make-uncaught-exception-condition obj)
  (make <uncaught-exception> :reason obj))
(define (uncaught-exception-condition? obj) (is-a? obj <uncaught-exception>))
(define (uncaught-exception-condition-reason obj)
  (assume-type obj <uncaught-exception>)
  (slot-ref obj 'reason))

(define &thread-already-terminated <terminated-thread-exception>)
(define (make-thread-already-terminated-condition)
  (make <terminated-thread-exception>))
(define (thread-already-terminated-condition? obj)
  (is-a? obj <terminated-thread-exception>))

(define &thread-timeout <join-timeout-exception>)
(define (make-thread-timeout-condition)
  (make <join-timeout-exception>))
(define (thread-timeout-condition? obj)
  (is-a? obj <join-timeout-exception>))

(define &thread-abandoned-mutex <abandoned-mutex-exception>)
(define (make-thread-abandoned-mutex-condition)
  (make <abandoned-mutex-exception>))
(define (thread-abandoned-mutex-condition? obj)
  (is-a? obj <abandoned-mutex-exception>))

(define &concurrent-modification <concurrent-modification-violation>)
(define (make-concurrent-modification-violation)
  (make <concurrent-modification-violation>))
(define (concurrent-modification-violation? obj)
  (is-a? obj <concurrent-modification-violation>))

;;;
;;; Mixin conditions
;;;

;; Mixin condition is compounded to a condition to augment context around
;; the condition.  See src/gauche/exception.h for the deails of these
;; mixin conditions.

;; TODO - set metaclass of those mixins to <condition-meta>

(select-module gauche)
(inline-stub
 "static ScmClass *mixin_condition_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_MixinConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
  };"

 (define-cfn condition-continuation-mixin-allocate (klass::ScmClass* _) :static
   (let* ([c::ScmConditionContinuationMixin* (SCM_NEW_INSTANCE ScmConditionContinuationMixin klass)])
     (set! (-> c continuation) SCM_FALSE)
     (return (SCM_OBJ c))))

 (define-cclass <condition-continuation-mixin>
   "ScmConditionContinuationMixin*" "Scm_CoditionContinuationMixinClass"
   (c "mixin_condition_cpa")
   ((continuation))
   (allocator (c "condition_continuation_mixin_allocate")))

 (define-cfn load-condition-mixin-allocate (klass::ScmClass* _) :static
   (let* ([c::ScmLoadConditionMixin* (SCM_NEW_INSTANCE ScmLoadConditionMixin klass)])
     (set! (-> c history) SCM_FALSE)
     (set! (-> c port) SCM_FALSE)
     (return (SCM_OBJ c))))

 (define-cclass <load-condition-mixin>
   "ScmLoadConditionMixin*" "Scm_LoadConditionMixinClass"
   (c "mixin_condition_cpa")
   ((history)
    (port))
   (allocator (c "load_condition_mixin_allocate")))

 (define-cfn compile-error-mixin-allocate (klass::ScmClass* _) :static
   (let* ([c::ScmCompileErrorMixin* (SCM_NEW_INSTANCE ScmCompileErrorMixin klass)])
     (set! (-> c expr) SCM_FALSE)
     (return (SCM_OBJ c))))

 (define-cclass <compile-error-mixin>
   "ScmCompileErrorMixin*" "Scm_CompileErrorMixinClass"
   (c "mixin_condition_cpa")
   ((expr))
   (allocator (c "compile_error_mixin_allocate")))


 ;; Filename errors are defined in SRFI-36.  Internally most of those filename
 ;; errors occur as <system-error> first; we compound the following conditions
 ;; as needed.  In C name we use "Mixin", but in Scheme we follow SRFI-36
 ;; names and drop "-mixin".
 ;; In C-level all filename mixin classes share one struct definition, and
 ;; one allocator.
 (define-cfn filename-error-mixin-allocate (klass::ScmClass* _) :static
   (let* ([c::ScmFilenameErrorMixin* (SCM_NEW_INSTANCE ScmFilenameErrorMixin klass)])
     (set! (-> c filename) SCM_FALSE)
     (return (SCM_OBJ c))))

 "static ScmClass *filename_condition_cpa[] = {
   SCM_CLASS_STATIC_PTR(Scm_FileProtectionErrorMixinClass),
   SCM_CLASS_STATIC_PTR(Scm_FilenameErrorMixinClass),
   SCM_CLASS_STATIC_PTR(Scm_MixinConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_ConditionClass),
   SCM_CLASS_STATIC_PTR(Scm_TopClass),
   NULL
  };"

 (define-cclass <io-filename-error>
   "ScmFilenameErrorMixin*" "Scm_FilenameErrorMixinClass"
   (c "filename_condition_cpa+2")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))

 (define-cclass <io-malformed-filename-error>
   "ScmFilenameErrorMixin*" "Scm_MalformedFilenameErrorClass"
   (c "filename_condition_cpa+1")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))

 (define-cclass <io-file-protection-error>
   "ScmFilenameErrorMixin*" "Scm_FileProtectionErrorMixinClass"
   (c "filename_condition_cpa+1")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))

 (define-cclass <io-file-is-read-only-error>
   "ScmFilenameErrorMixin*" "Scm_FileIsReadOnlyErrorMixinClass"
   (c "filename_condition_cpa")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))

 (define-cclass <io-file-already-exists-error>
   "ScmFilenameErrorMixin*" "Scm_FileAlreadyExistsErrorMixinClass"
   (c "filename_condition_cpa+1")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))

 (define-cclass <io-no-such-file-error>
   "ScmFilenameErrorMixin*" "Scm_NoSuchFileErrorMixinClass"
   (c "filename_condition_cpa+1")
   ((filename))
   (allocator (c "filename_error_mixin_allocate"))
   (unboxer "SCM_FILENAME_ERROR_MIXIN"))
 )
