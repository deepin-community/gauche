;;;
;;; parameter.scm - parameter support
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

;; This module is for the backward compatibility.  Parameter is a built-in now,
;; so the new code no longer needs to use this module.
;;
;; An important compatibility node: As of 0.9.13, Gauche's built-in parameterize
;; becomes to be based on SRFI-226 rather than dynamic-wind.  The former
;; has a nicer property that the body of parameterize can be tail context.
;; Other than that, the two works almost the same, except when a delimited
;; continuation is involved.  See the discussion of SRFI-226.
;;
;; Since legacy code uses this module, we export backward-compatible
;; parameterize/dynwind as parameterize from this module.  That is,
;; if the code (use gauche.parameter), parameterize works exactly as the
;; older versions.
;;
;; This module also provides the 'hook' feature of parameters; they're
;; deprecated and we'll eventually drop its support; but meantime, legacy
;; code can keep working as far as it uses gauche.parameter.
;;
;; Note: (object-apply <parameter> ...) is only defined here.  Since
;; make-parameter returns a procedure rather than <parameter>, it is no
;; longer relevant.  We only supply it just in case when existing code
;; doing something tricky--such code surely uses gauche.parameter.

(define-module gauche.parameter
  (export <parameter>                   ;built-in
          parameter?                    ;built-in
          procedure-parameter           ;built-in
          make-parameter                ;core's make-legacy-parameter
          parameterize                  ;core's parameterize/dynwind
          parameter-pre-observers
          parameter-post-observers
          parameter-observer-add!
          parameter-observer-delete!)
  )
(select-module gauche.parameter)

(autoload gauche.hook make-hook add-hook! delete-hook! run-hook)

(declare (keep-private-macro parameterize))

(define-syntax parameterize parameterize/dynwind)
(define make-parameter make-legacy-parameter)

;; When an observer is first set, replace setter and restorer
;; to take into account of observers.
(define (%ensure-hooks param)
  (unless (slot-bound? param 'pre-observers)
    (let ([get (^[] ((with-module gauche.internal %primitive-parameter-ref)
                     param))]
          [set (^v ((with-module gauche.internal %primitive-parameter-set!)
                    param v))]
          [filter (slot-ref param 'filter)])
      (define (observed-set! old new)
        (run-hook (slot-ref param 'pre-observers) old new)
        (set new)
        (run-hook (slot-ref param 'post-observers) old new))

      (slot-set! param 'setter
                 (if filter
                   (^v (rlet1 old (get)
                         (observed-set! old (filter v))))
                   (^v (rlet1 old (get)
                         (observed-set! old v)))))
      (slot-set! param 'restorer          ;bypass filter proc
                 (^v (rlet1 old (get)
                       (observed-set! old v))))
      (slot-set! param 'pre-observers (make-hook 2))
      (slot-set! param 'post-observers (make-hook 2)))))

;; For the backward compatibility.
(define-method object-apply ((self <parameter>))
  ((with-module gauche.internal %primitive-parameter-ref) self))
(define-method object-apply ((self <parameter>) newval)
  ((slot-ref self 'setter) newval))
(define-method (setter object-apply) ((obj <parameter>) value)
  (obj value))

(define (parameter-pre-observers param)
  (cond [(procedure-parameter param) => parameter-pre-observers]
        [(is-a? param <parameter>)
         (%ensure-hooks param)
         (slot-ref param 'pre-observers)]
        [else
         (error "parameter procedure required, but got:" param)]))

(define (parameter-post-observers param)
  (cond [(procedure-parameter param) => parameter-post-observers]
        [(is-a? param <parameter>)
         (%ensure-hooks param)
         (slot-ref param 'post-observers)]
        [else
         (error "parameter procedure required, but got:" param)]))

(define (parameter-observer-add! param proc :optional (when 'after)
                                                      (where 'append))
  (unless (memq when '(before after))
    (error "`when' argument of parameter-observer-add! must be either 'before or 'after" when))
  (unless (memq where '(prepend append))
    (error "`where' argument of parameter-observer-add! must be either 'prepend or 'append" when))
  (add-hook! (if (eq? when 'before)
               (parameter-pre-observers param)
               (parameter-post-observers param))
             proc
             (eq? where 'append)))

(define (parameter-observer-delete! param proc :optional (where #f))
  (unless (eq? where 'after)
    (delete-hook! (parameter-pre-observers param) proc))
  (unless (eq? where 'before)
    (delete-hook! (parameter-post-observers param) proc)))
