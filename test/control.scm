;; Tests for control.* modules

(use gauche.test)
(use gauche.vport)
(use gauche.threads)
(use scheme.list)
(use srfi.19)
(use data.queue)

(test-start "control")

;;--------------------------------------------------------------------
;; control.job
;;
(test-section "control.job")
(use control.job)
(test-module 'control.job)

(let ((j #f)
      (z #f))
  (test* "make-job" #t
         (begin (set! j (make-job (^[] #f)))
                (job? j)))

  (dolist [when `((:acknowledge ,job-acknowledge-time)
                  (:start       ,job-start-time)
                  (:finish      ,job-finish-time))]
    (test* (format "job-touch! ~a (pre)" (car when)) #f
           ((cadr when) j))
    (test* (format "job-touch! ~a" (car when)) #t
           (let1 time (job-touch! j (car when))
             (time=? time ((cadr when) j)))))

  (set! j (make-job (^[] (set! z #t) 'ok)))
  (test* "job-run! precondition" '(#f #f) (list (job-status j) z))
  (test* "job-run! postcondition" '(done ok #t)
         (begin (job-run! j)
                (list (job-status j) (job-result j) z)))

  (set! j (make-job (^[] (raise 'gosh) 'ok)))
  (test* "job-run! error condition" '(error gosh)
         (begin (job-run! j)
                (list (job-status j) (job-result j))))

  (set! j (make-job (^[] #f) :cancellable #t))
  (test* "job-run! killed" '(killed test)
         (begin (job-mark-killed! j 'test)
                (list (job-status j) (job-result j))))
  )

(cond-expand
 [gauche.sys.pthreads
  (test* "job-wait, job-kill" '(killed foo)
         (let* ([gate (make-mtqueue :max-length 0)]
                [job (make-job (^[] (enqueue/wait! gate #t) (sys-sleep 10))
                               :waitable #t)]
                [t1 (thread-start! (make-thread (^[] (job-run! job))))]
                [t2 (thread-start! (make-thread (^[] (job-wait job))))])
           (dequeue/wait! gate)
           (job-mark-killed! job 'foo)
           (list (thread-join! t2) (job-result job))))

  (test* "job-wait and error" '(error "bang")
         (let* ([job (make-job (^[] (error "bang")) :waitable #t)]
                [t1 (thread-start! (make-thread (^[] (job-wait job))))])
           (job-run! job)
           (list (thread-join! t1) (and (<error> (job-result job))
                                        (~ (job-result job)'message)))))
  ]
 [else])

;;--------------------------------------------------------------------
;; control.thread-pool
;;

(test-section "control.thread-pool")
(use control.thread-pool)
(test-module 'control.thread-pool)

(let ([pool (make-thread-pool 5)]
      [rvec (make-vector 10 #f)])
  (test* "pool" '(5 #t 5 #f)
         (list (length (~ pool'pool))
               (every thread? (~ pool'pool))
               (~ pool'size)
               (~ pool'max-backlog)))

  (test* "doit" '#(0 1 2 3 4 5 6 7 8 9)
         (begin (dotimes [k 10]
                  (add-job! pool (^[]
                                   (sys-nanosleep 1e7)
                                   (vector-set! rvec k k))))
                (and (wait-all pool #f 1e7) rvec)))

  (test* "error results" '(ng ng ng ng ng)
         (begin (dotimes [k 5]
                  (add-job! pool (^[]
                                   (sys-nanosleep 1e7)
                                   (raise 'ng)
                                   (vector-set! rvec k k))
                            #t))
                (and (wait-all pool #f 1e7)
                     (map (cut job-result <>)
                          (queue->list (~ pool'result-queue))))))
  )

;; Testing max backlog and timeout
(let ([pool (make-thread-pool 1 :max-backlog 1)]
      [gate #f])
  (define (work) (do [] [gate] (sys-nanosleep #e1e8)))

  (add-job! pool work)

  (test* "add-job! backlog" #t
         (job? (add-job! pool work)))

  (test* "add-job! timeout" #f
         (add-job! pool work #f 0.1))

  (set! gate #t)
  (test* "add-job! backlog" #t
         (job? (add-job! pool work #t)))

  ;; synchronize
  (dequeue/wait! (thread-pool-results pool))

  (set! gate #f)
  (test* "wait-all timeout" #f
         (begin (add-job! pool work)
                (wait-all pool 0.1 #e1e7)))

  ;; fill the queue.
  (add-job! pool work #t)

  (test* "shutdown - raising <thread-pool-shutting-down>"
         (test-error <thread-pool-shut-down>)
         ;; subtle arrangement: The timing of thread execution isn't
         ;; guaranteed, but we hope to run the following events in
         ;; sequence:
         ;;  - main: add-job!  - this will block because queue is full
         ;;  - t1: enqueue/wait! triggers q1.
         ;;  - t1: terminate-all! - this causes the pending add-job! to
         ;;                raise an exception.  this call blocks.
         ;;  - main: add-job! raises an exception, and triggers q2.
         ;;  - t2: triggered by q1, this sets gate to #t, causing the
         ;;                suspended jobs to resume.
         ;;  - t1: terminate-all! returns once all the suspended jobs
         ;;                are finished.  making sure q2 is already triggered,
         ;;                we set gate to 'finished for the later check.
         (let* ([q1 (make-mtqueue :max-length 0)]
                [q2 (make-mtqueue :max-length 0)]
                [t1 (make-thread (^[]
                                   (enqueue/wait! q1 #t)
                                   (terminate-all! pool
                                                   :cancel-queued-jobs #t)
                                   (dequeue/wait! q2)
                                   (set! gate 'finished)))]
                [t2 (make-thread (^[]
                                   (dequeue/wait! q1)
                                   (sys-nanosleep #e2e8)
                                   (set! gate #t)))])
           (thread-start! t1)
           (thread-start! t2)
           (unwind-protect (add-job! pool work)
             (enqueue/wait! q2 #t))))

  (test* "shutdown - killing a job in the queue"
         'killed
         (job-status (dequeue/wait! (thread-pool-results pool))))
  (test* "shutdown check" 'finished
         (let retry ([n 0])
           (cond [(= n 10) #f]
                 [(symbol? gate) gate]
                 [else (sys-nanosleep #e1e8) (retry (+ n 1))])))
  )

;; now, test forcible termination
(let ([pool (make-thread-pool 1)]
      [gate #f])
  (define (work) (do [] [gate] (sys-nanosleep #e1e8)))
  (test* "forced shutdown" 'killed
         (let1 xjob (add-job! pool work)
           (terminate-all! pool :force-timeout 0.05)
           (job-status xjob))))

;; This SEGVs on 0.9.3.3 (test code by @cryks)
(test* "thread pool termination" 'terminated
       (let ([t (thread-start! (make-thread (cut undefined)))]
             [pool (make-thread-pool 10)])
         (terminate-all! pool)
         (thread-terminate! t)
         (thread-state t)))

;;--------------------------------------------------------------------
;; control.cseq
;;

(test-section "control.cseq")
(use control.cseq)
(test-module 'control.cseq)

;; This doesn't always work because of the timing.
'(let ((k 0))
   (define (gen) (if (>= k 10) (eof-object) (begin0 k (inc! k))))
   (define seq (generator->cseq gen))
   (test* "cseq (gen)" '(0 10)
          (list (car seq) k)))

(let ((k 0))
  (define (gen) (if (>= k 10) (eof-object) (begin0 k (inc! k))))
  (define seq (generator->cseq gen))
  (test* "cseq (gen)" '(0 1 2 3 4 5 6 7 8 9) seq))

(let ((k 0))
  (define (gen) (if (= k 5) (error "oops") (begin0 k (inc! k))))
  (define seq (generator->cseq gen))
  (test* "cseq (gen)" '(0 1 2 3) (take seq 4))
  (test* "cseq (gen)" (test-error <error> "oops") (take seq 5)))

(let ()
  (define (coro yield)
    (let loop ((k 0)) (when (< k 10) (yield k) (loop (+ k 1)))))
  (define seq (coroutine->cseq coro))
  (test* "cseq (coroutine)" '(0 1 2 3 4 5 6 7 8 9) seq))

;;--------------------------------------------------------------------
;; control.future
;;

(test-section "control.future")
(use control.future)
(test-module 'control.future)

(test* "simple future" '(#t 3)
       (let1 f (future 3)
         (list (future? f)
               (future-get f))))
(test* "multiple values" '(1 2 3)
       (values->list (future-get (future (values 1 2 3)))))
(let1 f (future (error "oops"))
  (test* "future error handling (delayed)" #t
         (future? f))
  (test* "future error handling (propagated)" (test-error <error> "oops")
         (future-get f)))

;;--------------------------------------------------------------------
;; control.pmap
;;
(test-section "control.pmap")
(use control.pmap)
(test-module 'control.pmap)

(test* "pmap (default)"
       (map (cut * <> 2) (iota 100))
       (pmap (cut * <> 2) (iota 100)))
(test* "pmap (thread-pool)"
       (map (cut * <> 2) (iota 100))
       (pmap (cut * <> 2) (iota 100) :mapper (make-pool-mapper)))
(test* "pmap (thread-pool reuse)"
       (append (map (cut * <> 2) (iota 100))
               (map (cut * <> 3) (iota 100)))
       (let* ([pool (make-thread-pool (sys-available-processors))]
              [mapper (make-pool-mapper pool)])
         (unwind-protect
             (append (pmap (cut * <> 2) (iota 100) :mapper mapper)
                     (pmap (cut * <> 3) (iota 100) :mapper mapper))
           (terminate-all! pool))))
(test* "pmap (fully concurrent)"
       (map (cut * <> 2) (iota 25))
       (pmap (cut * <> 2) (iota 25) :mapper (make-fully-concurrent-mapper)))
(let ([flag #t])
  (test* "pmap (fully concurrent, timeout)"
         (and flag '(timeout timeout timeout timeout timeout))
         (pmap (^n (begin (sys-sleep 60) (set! flag #f) n))
               (iota 5)
               :mapper (make-fully-concurrent-mapper 0.2 'timeout))))

(test* "pfind (single)"
       (find (cut = <> 7) (iota 10))
       (pfind (cut = <> 7) (iota 10) :mapper (sequential-mapper)))

(test* "pany (signle)"
       (any (^x (and (= x 7) 42)) (iota 10))
       (pany (^x (and (= x 7) 42)) (iota 10) :mapper (sequential-mapper)))

(test* "pfind (static)"
       (find (cut = <> 1) (iota 20))
       (pfind (^x (and (sys-sleep (quotient x 2))
                       (= x 1)))
              (iota 20)
              :mapper (make-static-mapper)))
(test* "pany (static)"
       (any (^x (and (= x 1) 42)) (iota 10))
       (pany (^x (and (sys-sleep (quotient x 2))
                      (= x 1)
                      42))
             (iota 20)
             :mapper (make-static-mapper)))
(test* "pfind (pool)"
       (find (cut = <> 1) (iota 20))
       (pfind (^x (and (sys-sleep (quotient x 2))
                       (= x 1)))
              (iota 20)
              :mapper (make-pool-mapper)))
(test* "pany (pool)"
       (any (^x (and (= x 1) 42)) (iota 10))
       (pany (^x (and (sys-sleep (quotient x 2))
                      (= x 1)
                      42))
             (iota 20)
             :mapper (make-pool-mapper)))
(test* "pfind (fully-concurrent)"
       (find (cut = <> 1) (iota 20))
       (pfind (^x (and (sys-sleep (quotient x 2))
                       (= x 1)))
              (iota 20)
              :mapper (make-fully-concurrent-mapper)))
(test* "pany (fully-concurrent)"
       (any (^x (and (= x 1) 42)) (iota 10))
       (pany (^x (and (sys-sleep (quotient x 2))
                      (= x 1)
                      42))
             (iota 20)
             :mapper (make-fully-concurrent-mapper)))

;;--------------------------------------------------------------------
;; control.scheduler
;;
(test-section "control.scheduler")
(use control.scheduler)
(test-module 'control.scheduler)

(let ()
  (define a '())
  (define b #f)
  (define e #f)
  (define sched (make <scheduler> :error-handler (^e (set! e e))))

  (let ((id1 #f) (id2 #f))
    (test* "scheduler-schedule!" #t
           (begin
             (set! id1 (scheduler-schedule! sched
                                            (constantly #f)
                                            (make-time time-duration 0 10000)))
             (integer? id1)))
    (test* "scheduler-exists?" '(#t #f)
           (list (scheduler-exists? sched id1)
                 (scheduler-exists? sched (+ id1 1))))
    (test* "scheduler-schedule!" '(#t #t)
           (begin
             (set! id2 (scheduler-schedule! sched
                                            (constantly #f)
                                            (make-time time-duration 0 10000)))
             (list (scheduler-exists? sched id1)
                   (scheduler-exists? sched id2))))
    (test* "scheduler-remove!" '(#f #t)
           (begin (scheduler-remove! sched id1)
                  (list (scheduler-exists? sched id1)
                        (scheduler-exists? sched id2))))
    (test* "scheduler-remove!" '(#f #f)
           (begin (scheduler-remove! sched id2)
                  (list (scheduler-exists? sched id2)
                        (scheduler-exists? sched id2))))
    )

  (let ()
    (test* "running?" #t
           (scheduler-running? sched))
    (test* "scheduler-terminate!" '(a)
           (begin
             (scheduler-schedule! sched (^[] (push! a 'a)) 0 1)
             (scheduler-terminate! sched)
             a))
    (test* "don't accept new task" (test-error <error> #/queue is closed/)
           (scheduler-schedule! sched (^[] (set! b 'b)) 0))
    (test* "running?" #f
           (scheduler-running? sched))
    (test* "see if tasks are really stopped" '((a) #f)
           (list a b)))
  )

(let ()
  ;; test cancellation
  (define sched (make <scheduler>))
  (scheduler-schedule! sched (^[] (error "oops")) 0)
  (sys-nanosleep 1000)
  (test* "scheduler-terminate! on error" (test-error <error> #/oops/)
         (scheduler-terminate! sched))
  )

;; SRFI-120 is a wrapper of control.scheduler
(use srfi.120)
(test-module 'srfi.120)

(define-module srfi-120-test
  (use gauche.test)
  (use srfi.18)
  (use srfi.19)
  (use srfi.64)
  (use srfi.120)
  ;; we don't want to use cond-expand gauche clause in the srfi-120 test;
  ;; rather we want to let it use SRFI-64.
  (define-syntax cond-expand (syntax-rules () ([_ . x] '())))
  (test-include-r7 "include/srfi-120-tests" (exclude (timer))))

;;--------------------------------------------------------------------
;; control.port
;;
(test-section "control.plumbing")
(use control.plumbing)
(test-module 'control.plumbing)

;; pipe, 1-in 1-out
(let ()
  (define r '())

  ;;  >[inlet]===[outlet]>
  (define plumbing (make-plumbing))
  (define inlet (open-inlet-output-port plumbing))
  (define outlet (open-outlet-input-port plumbing))

  (define t
    (thread-start! (make-thread (^[] (let loop ()
                                       (let1 c (read-char outlet)
                                         (if (eof-object? c)
                                           'done
                                           (begin (push! r c)
                                                  (loop)))))))))

  (define (gather-result expected-length)
    (if (= (length r) expected-length)
      (list->string (reverse r))
      (begin (sys-nanosleep #e1e6) (gather-result expected-length))))

  (test* "simple pipe, accessors" `((,inlet) (,outlet))
         (list (plumbing-inlet-ports plumbing)
               (plumbing-outlet-ports plumbing)))
  (test* "simple pipe, port to plumbing" `(,plumbing ,plumbing)
         (list (port-plumbing inlet)
               (port-plumbing outlet)))

  (display "abc" inlet)
  (test* "simple pipe, not flushed" '() r)
  (flush inlet)
  (test* "simple pipe, flushed" "abc" (gather-result 3))

  (display "de" inlet)
  (flush inlet)
  (test* "simple pipe, flushed" "abcde" (gather-result 5))

  (close-output-port inlet)
  (test* "closing inlet causes EOF on outlet" 'done
         (thread-join! t))
  )

;; closing outlet automatically
(let ()
  ;;  >[inlet0]==\   /=> {outlet0}
  ;;              +=+
  ;;  >[inlet1]==/   \=> {outlet1}

  (define plumbing (make-plumbing))
  (define inlet0 (open-inlet-output-port plumbing 'inlet0))
  (define inlet1 (open-inlet-output-port plumbing 'inlet1))
  (define outlet0 (open-output-string))
  (define outlet1 (open-output-string))
  (add-outlet-output-port! plumbing outlet0 'outlet0)
  (add-outlet-output-port! plumbing outlet1 'outlet1 :close-on-eof #t)

  (test* "multi inlets, accessors" (list inlet0 inlet1)
         (plumbing-inlet-ports plumbing)
         (cut lset= eq? <> <>))
  (test* "multi outlets, accessors" (list outlet0 outlet1)
         (plumbing-outlet-ports plumbing)
         (cut lset= eq? <> <>))
  (test* "multi inlets/outlets, plumbing access" `(,plumbing ,plumbing #f #f)
         (list (port-plumbing inlet0)
               (port-plumbing inlet1)
               (port-plumbing outlet0)
               (port-plumbing outlet1)))
  (test* "access by name" (list inlet0 inlet1 outlet0 outlet1)
         (list (plumbing-get-port plumbing 'inlet0)
               (plumbing-get-port plumbing 'inlet1)
               (plumbing-get-port plumbing 'outlet0)
               (plumbing-get-port plumbing 'outlet1)))

  (test* "closing outlet ports (not yet)" '(#f #f)
         (begin
           (display "a" inlet0)
           (close-output-port inlet0)
           (list (port-closed? outlet0)
                 (port-closed? outlet1))))
  (test* "closing outlet ports" '(#f #t)
         (begin
           (display "b" inlet1)
           (close-output-port inlet1)
           (list (port-closed? outlet0)
                 (port-closed? outlet1))))

  (test* "outlet content" '("ab" "ab")
         (list (get-output-string outlet0)
               (get-output-string outlet1)))

  )

;; asynchronous output outlet
(let ()
  ;; >[inlet] ==> {outlet}
  (define outlet (open-output-string))
  (define plumbing (make-plumbing))
  (define inlet (open-inlet-output-port plumbing))

  (test* "async outlet output" "a"
         (begin
           (add-outlet-output-port! plumbing outlet #f
                                    :asynchronous #t
                                    :close-on-eof #t)
           (display "a" inlet)
           (flush inlet)
           (sys-nanosleep #e5e6)
           (get-output-string outlet)))
  (test* "async outlet output" "abc"
         (begin
           (display "bc" inlet)
           (close-output-port inlet)
           (sys-nanosleep #e5e6)
           (get-output-string outlet)))
  (test* "async outlet output" #t
         (port-closed? outlet))
  )

;; broadcast output port
(let ()
  ;;              /=> {outlet0]
  ;;  >[inlet] ==+==> {outlet1}
  ;;              \=> {outlet2}
  (define outlet0 (open-output-string))
  (define outlet1 (open-output-string))
  (define outlet2 (open-output-string))
  (define inlet
    (open-broadcast-output-port outlet0 outlet1 outlet2))

  (test* "broadcast output port" '("a" "a" "a")
         (begin
           (display "a" inlet)
           (close-output-port inlet)
           (sys-nanosleep #e5e6)
           (list (get-output-string outlet0)
                 (get-output-string outlet1)
                 (get-output-string outlet2))))
  )

;; pipe
(let ()
  ;;  >[in0]==\    /==[out0]>
  ;;           +==+
  ;;  >[in1]==/    \==[out1]>
  (define-values (ins outs) (make-pipe :num-inlets 2 :num-outlets 2))
  (define-values (in0 in1) (apply values ins))
  (define-values (out0 out1) (apply values outs))
  (test* "pipe" '("abcdef" "ghij")
         (begin
           (display "abcde" in0)
           (flush in0)
           (display "f\nghij\n" in1)
           (flush in1)
           (let* ([a (read-line out0)]
                  [b (read-line out0)])
             (list a b))))
  (test* "pipe, flush on close" "klmno"
         (begin
           (display "klmno\n" in0)
           (close-output-port in0)
           (read-line out0)))
  (test* "pipe, closing propagation (not yet)" #f
         (port-closed? out0))
  (test* "pipe, closing propagation" (eof-object)
         (begin
           (close-output-port in1)
           (read-line out0)))
  (test* "pipe, closing" "abcdef\nghij\nklmno\n"
         (port->string out1))
  )

;; pump
(let ()
  ;; {in} >====> {out}
  (define mtq (make-mtqueue))
  (define in (let ([eof? #f])
               (make <buffered-input-port>
                 :fill (^[buf]
                         (if eof?
                           (eof-object)
                           (let1 ch (dequeue/wait! mtq)
                             (if (eof-object? ch)
                               (begin (set! eof? #t) ch)
                               (begin (set! (~ buf 0) (char->integer ch)) 1)))))
                 :ready (^[] (or eof? (not (queue-empty? mtq)))))))
  (define out (open-output-string))
  (define pump (make-pump `(,in) `(,out)))

  (set! (port-buffering in) :none)
  (test* "pump" ""
         (get-output-string out))
  (test* "pump" "a"
         (begin (enqueue/wait! mtq #\a)
                (sys-nanosleep #e5e7)
                (get-output-string out)))
  (test* "pump" "ab"
         (begin (enqueue/wait! mtq #\b)
                (sys-nanosleep #e5e6)
                (get-output-string out)))
  (test* "pump" "ab"
         (begin (enqueue/wait! mtq (eof-object))
                (sys-nanosleep #e5e6)
                (get-output-string out)))
  )


;; tapping
(let ()
  ;;          pipe               tapping
  ;;  {feed} >===[intermediate]>>==+==> {outlet}
  ;;                                \
  ;;                                 =[tap]>
  (define-values (feeds intermediates) (make-pipe))
  (define outlet (open-output-string))
  (define tap (open-tapping-input-port (car intermediates)
                                       outlet :close-on-eof #t))
  (test* "pipe & tap (tap)" "abcde"
         (begin
           (display "abcde\n" (car feeds))
           (flush (car feeds))
           (read-line tap)))
  (test* "pipe & tap (outlet)" "abcde\nfghij\n"
         (begin
           (display "fghij\n" (car feeds))
           (close-output-port (car feeds))
           (while (not (port-closed? outlet))
             (sys-nanosleep #e5e7))
           (get-output-string outlet)))
  (test* "pipe & tap (outlet, close)" #t
         (port-closed? outlet))
  (test* "pipe & tap (tap)" "fghij"
         (read-line tap))
  (test* "pipe & tap (eof)" (eof-object)
         (read-line tap))
  )

;; plumbing
(let ()
  (define-values (feeds inlets) (make-pipe))
  (define inlet0 (car inlets))
  (define outlet0 (open-output-string))
  (define pl (plumbing `(< ,inlet0 inlet0)
                       `(< inlet1)
                       `(> ,outlet0 (:coe :async))
                       `(> outlet1)))
  (define inlet1 (plumbing-get-port pl 'inlet1))
  (define outlet1 (plumbing-get-port pl 'outlet1))

  (test* "plumbing - created ports" '(#t #t)
         (list (output-port? inlet1)
               (input-port? outlet1)))

  (test* "plumbing - feed inlet0" "abc"
         (begin
           (display "abc" (car feeds))
           (flush (car feeds))
           (sys-nanosleep #e5e7)
           (get-output-string outlet0)))

  (test* "plumbing - feed inlet1" (test-one-of "abcdefxyz" "abcxyzdef")
         (begin
           (display "def" (car feeds))
           (close-port (car feeds))
           (display "xyz" inlet1)
           (flush inlet1)
           (sys-nanosleep #e5e7)
           (get-output-string outlet0)))

  (test* "plumbing - reading outlet1" (test-one-of "abcdefxyz" "abcxyzdef")
         (begin
           (close-port inlet1)
           (sys-nanosleep #e5e7)
           (port->string outlet1)))

  (test* "plumbing - coe" #t
         (port-closed? outlet0))
  )

(test-end)
