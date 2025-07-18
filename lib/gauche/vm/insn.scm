;; Generated from vminsn.scm.  DO NOT EDIT
(define-module gauche.vm.insn (extend gauche.vm.insn-core))
(select-module gauche.vm.insn)
;; #x000  NOP
(make <vm-insn-info> :name 'NOP :code 0
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body 'NEXT)

;; #x001  CONST
(make <vm-insn-info> :name 'CONST :code 1
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((val)) (FETCH-OPERAND val) INCR-PC ($result val)))

;; #x002  CONSTI
(make <vm-insn-info> :name 'CONSTI :code 2
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result:i (SCM_VM_INSN_ARG code)))

;; #x003  CONSTN
(make <vm-insn-info> :name 'CONSTN :code 3
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result SCM_NIL))

;; #x004  CONSTF
(make <vm-insn-info> :name 'CONSTF :code 4
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result SCM_FALSE))

;; #x005  CONSTU
(make <vm-insn-info> :name 'CONSTU :code 5
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result SCM_UNDEFINED))

;; #x006  CONST-PUSH
(make <vm-insn-info> :name 'CONST-PUSH :code 6
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONST PUSH)
  :body '#f)

;; #x007  CONSTI-PUSH
(make <vm-insn-info> :name 'CONSTI-PUSH :code 7
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONSTI PUSH)
  :body '#f)

;; #x008  CONSTN-PUSH
(make <vm-insn-info> :name 'CONSTN-PUSH :code 8
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONSTN PUSH)
  :body '#f)

;; #x009  CONSTF-PUSH
(make <vm-insn-info> :name 'CONSTF-PUSH :code 9
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONSTF PUSH)
  :body '#f)

;; #x00a  CONST-RET
(make <vm-insn-info> :name 'CONST-RET :code 10
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONST RET)
  :body '#f)

;; #x00b  CONSTF-RET
(make <vm-insn-info> :name 'CONSTF-RET :code 11
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONSTF RET)
  :body '#f)

;; #x00c  CONSTU-RET
(make <vm-insn-info> :name 'CONSTU-RET :code 12
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONSTU RET)
  :body '#f)

;; #x00d  PUSH
(make <vm-insn-info> :name 'PUSH :code 13
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (CHECK-STACK-PARANOIA 1) (PUSH-ARG VAL0) NEXT))

;; #x00e  PRE-CALL
(make <vm-insn-info> :name 'PRE-CALL :code 14
  :num-params 1 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((next::ScmWord*)) (CHECK-STACK-PARANOIA CONT_FRAME_SIZE) (FETCH-LOCATION next) (PUSH-CONT next) INCR-PC CHECK-INTR NEXT))

;; #x00f  PUSH-PRE-CALL
(make <vm-insn-info> :name 'PUSH-PRE-CALL :code 15
  :num-params 1 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(PUSH PRE-CALL)
  :body '#f)

;; #x010  CHECK-STACK
(make <vm-insn-info> :name 'CHECK-STACK :code 16
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((reqstack::int (SCM_VM_INSN_ARG code))) (CHECK-STACK reqstack) NEXT))

;; #x011  CALL
(make <vm-insn-info> :name 'CALL :code 17
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((nm) (argc::int) (proctype::int)) (label call_entry) ($undef APPLY_CALL) ($include "./vmcall.c") (label tail_apply_entry) ($define APPLY_CALL) ($include "./vmcall.c")))

;; #x012  TAIL-CALL
(make <vm-insn-info> :name 'TAIL-CALL :code 18
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(begin (let* ((ct::ScmCallTrace* (-> vm callTrace))) (when (!= ct NULL) (set! (ref (aref (-> ct entries) (-> ct top)) base) BASE) (set! (ref (aref (-> ct entries) (-> ct top)) pc) PC) (set! (-> ct top) (logand (+ (-> ct top) 1) (- (-> ct size) 1))))) (DISCARD-ENV) ($goto-insn CALL)))

;; #x013  JUMP
(make <vm-insn-info> :name 'JUMP :code 19
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (FETCH-LOCATION PC) CHECK-INTR NEXT))

;; #x014  RET
(make <vm-insn-info> :name 'RET :code 20
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(begin (RETURN-OP) CHECK-INTR NEXT))

;; #x015  DEFINE
(make <vm-insn-info> :name 'DEFINE :code 21
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((var) (val VAL0)) (FETCH-OPERAND var) (VM_ASSERT (SCM_IDENTIFIERP var)) (SCM_FLONUM_ENSURE_MEM val) INCR-PC (let* ((id::ScmIdentifier* (Scm_OutermostIdentifier (SCM_IDENTIFIER var))) (mod::ScmModule* (-> id module)) (name::ScmSymbol* (SCM_SYMBOL (-> id name)))) (case (SCM_VM_INSN_ARG code) ((0) (Scm_MakeBinding mod name val 0)) ((1 SCM_BINDING_CONST) (Scm_MakeBinding mod name val SCM_BINDING_CONST)) ((SCM_BINDING_INLINABLE) (Scm_MakeBinding mod name val SCM_BINDING_INLINABLE))) ($result (SCM_OBJ name)))))

;; #x016  CLOSURE
(make <vm-insn-info> :name 'CLOSURE :code 22
  :num-params 0 :alt-num-params '()
  :operand-type 'code
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((body)) (FETCH-OPERAND body) INCR-PC ($result (Scm_MakeClosure body (get_env vm)))))

;; #x017  LOCAL-ENV
(make <vm-insn-info> :name 'LOCAL-ENV :code 23
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (CHECK-STACK-PARANOIA (ENV-SIZE 0)) (FINISH-ENV SCM_FALSE ENV) NEXT))

;; #x018  PUSH-LOCAL-ENV
(make <vm-insn-info> :name 'PUSH-LOCAL-ENV :code 24
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(PUSH LOCAL-ENV)
  :body '(begin (CHECK-STACK-PARANOIA (ENV-SIZE 1)) (PUSH-ARG VAL0) (FINISH-ENV SCM_FALSE ENV) NEXT))

;; #x019  LOCAL-ENV-CLOSURES
(make <vm-insn-info> :name 'LOCAL-ENV-CLOSURES :code 25
  :num-params 1 :alt-num-params '()
  :operand-type 'codes
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nlocals::int (SCM_VM_INSN_ARG code)) (z::ScmObj*) (cp) (clo SCM_UNDEFINED) (e::ScmEnvFrame*)) (FETCH-OPERAND cp) INCR-PC (CHECK-STACK-PARANOIA (ENV-SIZE nlocals)) (dotimes (i nlocals) (set! (* (post++ SP)) SCM_UNDEFINED)) (FINISH-ENV SCM_FALSE ENV) (set! e (get_env vm)) (set! z (- (cast ScmObj* e) nlocals)) (dolist (c cp) (cond ((SCM_COMPILED_CODE_P c) (set! (* (post++ z)) (set! clo (Scm_MakeClosure c e)))) ((SCM_PROCEDUREP c) (set! (* (post++ z)) c) (set! clo c)) (else (set! (* (post++ z)) c)))) ($result clo)))

;; #x01a  POP-LOCAL-ENV
(make <vm-insn-info> :name 'POP-LOCAL-ENV :code 26
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (set! ENV (-> ENV up)) NEXT))

;; #x01b  LOCAL-ENV-JUMP
(make <vm-insn-info> :name 'LOCAL-ENV-JUMP :code 27
  :num-params 1 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (local_env_shift vm (SCM_VM_INSN_ARG code)) (FETCH-LOCATION PC) CHECK-INTR NEXT))

;; #x01c  LOCAL-ENV-CALL
(make <vm-insn-info> :name 'LOCAL-ENV-CALL :code 28
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (cast int (- SP ARGP)))) (VM-ASSERT (SCM_CLOSUREP VAL0)) (cond ((> nargs 0) (CHECK-STACK-PARANOIA (ENV-SIZE 0)) (FINISH-ENV SCM_FALSE (-> (SCM_CLOSURE VAL0) env))) (else (set! ENV (-> (SCM_CLOSURE VAL0) env)) (set! ARGP SP))) (set! (-> vm base) (SCM_COMPILED_CODE (-> (SCM_CLOSURE VAL0) code))) (set! PC (-> vm base code)) (CHECK-STACK (-> vm base maxstack)) CHECK-INTR (SCM_PROF_COUNT_CALL vm (SCM_OBJ (-> vm base))) NEXT))

;; #x01d  LOCAL-ENV-TAIL-CALL
(make <vm-insn-info> :name 'LOCAL-ENV-TAIL-CALL :code 29
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (cast int (- SP ARGP))) (to::ScmObj*)) (VM-ASSERT (SCM_CLOSUREP VAL0)) (if (IN-STACK-P (cast ScmObj* CONT)) (set! to (CONT-FRAME-END CONT)) (set! to (-> vm stackBase))) (when (and (> nargs 0) (!= to ARGP)) (let* ((t::ScmObj* to) (a::ScmObj* ARGP)) (dotimes (c nargs) (set! (* (post++ t)) (* (post++ a)))))) (set! ARGP to) (set! SP (+ to nargs)) ($goto-insn LOCAL-ENV-CALL)))

;; #x01e  BF
(make <vm-insn-info> :name 'BF :code 30
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($branch (SCM_CHECKED_FALSEP VAL0)))

;; #x01f  BT
(make <vm-insn-info> :name 'BT :code 31
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($branch (not (SCM_CHECKED_FALSEP VAL0))))

;; #x020  BNEQ
(make <vm-insn-info> :name 'BNEQ :code 32
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp z ($branch* (not (SCM_EQ VAL0 z)))))

;; #x021  BNEQV
(make <vm-insn-info> :name 'BNEQV :code 33
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp z ($branch* (not (Scm_EqvP VAL0 z)))))

;; #x022  BNNULL
(make <vm-insn-info> :name 'BNNULL :code 34
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($branch* (not (SCM_NULLP VAL0))))

;; #x023  BNUMNE
(make <vm-insn-info> :name 'BNUMNE :code 35
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((y VAL0)) ($w/argp x ($branch* (not (Scm_NumEq x y))))))

;; #x024  BNLT
(make <vm-insn-info> :name 'BNLT :code 36
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r < ($branch* (not r))))

;; #x025  BNLE
(make <vm-insn-info> :name 'BNLE :code 37
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r <= ($branch* (not r))))

;; #x026  BNGT
(make <vm-insn-info> :name 'BNGT :code 38
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r > ($branch* (not r))))

;; #x027  BNGE
(make <vm-insn-info> :name 'BNGE :code 39
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r >= ($branch* (not r))))

;; #x028  LREF-VAL0-BNUMNE
(make <vm-insn-info> :name 'LREF-VAL0-BNUMNE :code 40
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body BNUMNE)))

;; #x029  LREF-VAL0-BNLT
(make <vm-insn-info> :name 'LREF-VAL0-BNLT :code 41
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body BNLT)))

;; #x02a  LREF-VAL0-BNLE
(make <vm-insn-info> :name 'LREF-VAL0-BNLE :code 42
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body BNLE)))

;; #x02b  LREF-VAL0-BNGT
(make <vm-insn-info> :name 'LREF-VAL0-BNGT :code 43
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body BNGT)))

;; #x02c  LREF-VAL0-BNGE
(make <vm-insn-info> :name 'LREF-VAL0-BNGE :code 44
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body BNGE)))

;; #x02d  BNUMNEI
(make <vm-insn-info> :name 'BNUMNEI :code 45
  :num-params 1 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((imm::long (SCM_VM_INSN_ARG code))) ($w/argr v0 ($type-check v0 SCM_NUMBERP "number") ($branch* (not (or (and (SCM_INTP v0) (== (SCM_INT_VALUE v0) imm)) (and (SCM_FLONUMP v0) (== (SCM_FLONUM_VALUE v0) imm))))))))

;; #x02e  BNEQC
(make <vm-insn-info> :name 'BNEQC :code 46
  :num-params 0 :alt-num-params '()
  :operand-type 'obj+label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((z)) (FETCH-OPERAND z) INCR-PC ($branch* (not (SCM_EQ VAL0 z)))))

;; #x02f  BNEQVC
(make <vm-insn-info> :name 'BNEQVC :code 47
  :num-params 0 :alt-num-params '()
  :operand-type 'obj+label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((z)) (FETCH-OPERAND z) INCR-PC ($branch* (not (Scm_EqvP VAL0 z)))))

;; #x030  RF
(make <vm-insn-info> :name 'RF :code 48
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($retc (SCM_CHECKED_FALSEP VAL0)))

;; #x031  RT
(make <vm-insn-info> :name 'RT :code 49
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($retc (not (SCM_CHECKED_FALSEP VAL0))))

;; #x032  RNEQ
(make <vm-insn-info> :name 'RNEQ :code 50
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($retc* (not (SCM_EQ VAL0 v)))))

;; #x033  RNEQV
(make <vm-insn-info> :name 'RNEQV :code 51
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($retc* (not (Scm_EqvP VAL0 v)))))

;; #x034  RNNULL
(make <vm-insn-info> :name 'RNNULL :code 52
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($retc* (not (SCM_NULLP VAL0))))

;; #x035  RECEIVE
(make <vm-insn-info> :name 'RECEIVE :code 53
  :num-params 2 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($receive (set! size (+ CONT_FRAME_SIZE (ENV_SIZE (+ reqargs restarg)))) (CHECK-STACK-PARANOIA size) (FETCH-LOCATION nextpc) INCR-PC (PUSH-CONT nextpc)))

;; #x036  TAIL-RECEIVE
(make <vm-insn-info> :name 'TAIL-RECEIVE :code 54
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($receive (set! size (ENV_SIZE (+ reqargs restarg)))))

;; #x037  RECEIVE-ALL
(make <vm-insn-info> :name 'RECEIVE-ALL :code 55
  :num-params 0 :alt-num-params '()
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nextpc::ScmWord*)) (CHECK-STACK-PARANOIA CONT_FRAME_SIZE) (FETCH-LOCATION nextpc) INCR_PC (PUSH-CONT nextpc) ($goto-insn TAIL-RECEIVE-ALL)))

;; #x038  TAIL-RECEIVE-ALL
(make <vm-insn-info> :name 'TAIL-RECEIVE-ALL :code 56
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (CHECK-STACK-PARANOIA (ENV-SIZE (+ (-> vm numVals) 1))) (PUSH-ARG VAL0) (dotimes (i (- (-> vm numVals) 1)) (PUSH-ARG (aref (-> vm vals) i))) (FINISH-ENV SCM_FALSE ENV) NEXT))

;; #x039  VALUES-N
(make <vm-insn-info> :name 'VALUES-N :code 57
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(begin (VM-ASSERT ENV) (let* ((nvals::int (cast int (-> ENV size)))) (set! (-> vm numVals) nvals) (for (() (> nvals 1) (post-- nvals)) (POP-ARG (aref (-> vm vals) (- nvals 1)))) (POP-ARG VAL0) NEXT)))

;; #x03a  LSET
(make <vm-insn-info> :name 'LSET :code 58
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lset (SCM_VM_INSN_ARG0 code) (SCM_VM_INSN_ARG1 code)))

;; #x03b  GSET
(make <vm-insn-info> :name 'GSET :code 59
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((loc)) (FETCH-OPERAND loc) (SCM_FLONUM_ENSURE_MEM VAL0) (cond ((SCM_GLOCP loc) (SCM_GLOC_SET (SCM_GLOC loc) VAL0)) ((SCM_IDENTIFIERP loc) (let* ((gloc::ScmGloc* NULL)) (Scm_IdentifierGlobalSet (SCM_IDENTIFIER loc) VAL0 (& gloc)) (set! (* PC) (SCM_WORD gloc)))) (else ($vm-err "GSET: can't be here"))) INCR-PC (set! (-> vm numVals) 1) NEXT))

;; #x03c  LREF
(make <vm-insn-info> :name 'LREF :code 60
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lref (SCM_VM_INSN_ARG0 code) (SCM_VM_INSN_ARG1 code)))

;; #x03d  LREF0
(make <vm-insn-info> :name 'LREF0 :code 61
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 0 0))

;; #x03e  LREF1
(make <vm-insn-info> :name 'LREF1 :code 62
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 0 1))

;; #x03f  LREF2
(make <vm-insn-info> :name 'LREF2 :code 63
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 0 2))

;; #x040  LREF3
(make <vm-insn-info> :name 'LREF3 :code 64
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 0 3))

;; #x041  LREF10
(make <vm-insn-info> :name 'LREF10 :code 65
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 1 0))

;; #x042  LREF11
(make <vm-insn-info> :name 'LREF11 :code 66
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 1 1))

;; #x043  LREF12
(make <vm-insn-info> :name 'LREF12 :code 67
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 1 2))

;; #x044  LREF20
(make <vm-insn-info> :name 'LREF20 :code 68
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 2 0))

;; #x045  LREF21
(make <vm-insn-info> :name 'LREF21 :code 69
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 2 1))

;; #x046  LREF30
(make <vm-insn-info> :name 'LREF30 :code 70
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($lrefNN 3 0))

;; #x047  LREF-PUSH
(make <vm-insn-info> :name 'LREF-PUSH :code 71
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF PUSH)
  :body '#f)

;; #x048  LREF0-PUSH
(make <vm-insn-info> :name 'LREF0-PUSH :code 72
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 PUSH)
  :body '#f)

;; #x049  LREF1-PUSH
(make <vm-insn-info> :name 'LREF1-PUSH :code 73
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 PUSH)
  :body '#f)

;; #x04a  LREF2-PUSH
(make <vm-insn-info> :name 'LREF2-PUSH :code 74
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 PUSH)
  :body '#f)

;; #x04b  LREF3-PUSH
(make <vm-insn-info> :name 'LREF3-PUSH :code 75
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 PUSH)
  :body '#f)

;; #x04c  LREF10-PUSH
(make <vm-insn-info> :name 'LREF10-PUSH :code 76
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 PUSH)
  :body '#f)

;; #x04d  LREF11-PUSH
(make <vm-insn-info> :name 'LREF11-PUSH :code 77
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 PUSH)
  :body '#f)

;; #x04e  LREF12-PUSH
(make <vm-insn-info> :name 'LREF12-PUSH :code 78
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 PUSH)
  :body '#f)

;; #x04f  LREF20-PUSH
(make <vm-insn-info> :name 'LREF20-PUSH :code 79
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 PUSH)
  :body '#f)

;; #x050  LREF21-PUSH
(make <vm-insn-info> :name 'LREF21-PUSH :code 80
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 PUSH)
  :body '#f)

;; #x051  LREF30-PUSH
(make <vm-insn-info> :name 'LREF30-PUSH :code 81
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 PUSH)
  :body '#f)

;; #x052  LREF-RET
(make <vm-insn-info> :name 'LREF-RET :code 82
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF RET)
  :body '#f)

;; #x053  LREF0-RET
(make <vm-insn-info> :name 'LREF0-RET :code 83
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 RET)
  :body '#f)

;; #x054  LREF1-RET
(make <vm-insn-info> :name 'LREF1-RET :code 84
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 RET)
  :body '#f)

;; #x055  LREF2-RET
(make <vm-insn-info> :name 'LREF2-RET :code 85
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 RET)
  :body '#f)

;; #x056  LREF3-RET
(make <vm-insn-info> :name 'LREF3-RET :code 86
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 RET)
  :body '#f)

;; #x057  LREF10-RET
(make <vm-insn-info> :name 'LREF10-RET :code 87
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 RET)
  :body '#f)

;; #x058  LREF11-RET
(make <vm-insn-info> :name 'LREF11-RET :code 88
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 RET)
  :body '#f)

;; #x059  LREF12-RET
(make <vm-insn-info> :name 'LREF12-RET :code 89
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 RET)
  :body '#f)

;; #x05a  LREF20-RET
(make <vm-insn-info> :name 'LREF20-RET :code 90
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 RET)
  :body '#f)

;; #x05b  LREF21-RET
(make <vm-insn-info> :name 'LREF21-RET :code 91
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 RET)
  :body '#f)

;; #x05c  LREF30-RET
(make <vm-insn-info> :name 'LREF30-RET :code 92
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 RET)
  :body '#f)

;; #x05d  GREF
(make <vm-insn-info> :name 'GREF :code 93
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((v)) (GLOBAL-REF v) ($result v)))

;; #x05e  GREF-PUSH
(make <vm-insn-info> :name 'GREF-PUSH :code 94
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(GREF PUSH)
  :body '#f)

;; #x05f  GREF-CALL
(make <vm-insn-info> :name 'GREF-CALL :code 95
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(GREF CALL)
  :body '#f)

;; #x060  GREF-TAIL-CALL
(make <vm-insn-info> :name 'GREF-TAIL-CALL :code 96
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(GREF TAIL-CALL)
  :body '#f)

;; #x061  PUSH-GREF
(make <vm-insn-info> :name 'PUSH-GREF :code 97
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(PUSH GREF)
  :body '#f)

;; #x062  PUSH-GREF-CALL
(make <vm-insn-info> :name 'PUSH-GREF-CALL :code 98
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(PUSH GREF CALL)
  :body '#f)

;; #x063  PUSH-GREF-TAIL-CALL
(make <vm-insn-info> :name 'PUSH-GREF-TAIL-CALL :code 99
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(PUSH GREF TAIL-CALL)
  :body '#f)

;; #x064  PROMISE
(make <vm-insn-info> :name 'PROMISE :code 100
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result (Scm_MakePromise SCM_PROMISE_UNFORCED VAL0)))

;; #x065  VALUES-APPLY
(make <vm-insn-info> :name 'VALUES-APPLY :code 101
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code))) (CHECK-STACK (ENV-SIZE nargs)) (dotimes (i nargs) (when (>= i (- SCM_VM_MAX_VALUES 1)) (for-each (lambda (vv) (PUSH-ARG vv)) (aref (-> vm vals) (- SCM_VM_MAX_VALUES 1))) (break)) (PUSH-ARG (aref (-> vm vals) i))) ($goto-insn TAIL-CALL)))

;; #x066  CONS
(make <vm-insn-info> :name 'CONS :code 102
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((ca)) (POP-ARG ca) ($result (Scm_Cons ca VAL0))))

;; #x067  CONS-PUSH
(make <vm-insn-info> :name 'CONS-PUSH :code 103
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CONS PUSH)
  :body '#f)

;; #x068  CAR
(make <vm-insn-info> :name 'CAR :code 104
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($type-check v SCM_PAIRP "pair") ($result (SCM_CAR v))))

;; #x069  CAR-PUSH
(make <vm-insn-info> :name 'CAR-PUSH :code 105
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CAR PUSH)
  :body '#f)

;; #x06a  LREF0-CAR
(make <vm-insn-info> :name 'LREF0-CAR :code 106
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 CAR)
  :body '#f)

;; #x06b  LREF1-CAR
(make <vm-insn-info> :name 'LREF1-CAR :code 107
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 CAR)
  :body '#f)

;; #x06c  LREF2-CAR
(make <vm-insn-info> :name 'LREF2-CAR :code 108
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 CAR)
  :body '#f)

;; #x06d  LREF3-CAR
(make <vm-insn-info> :name 'LREF3-CAR :code 109
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 CAR)
  :body '#f)

;; #x06e  LREF10-CAR
(make <vm-insn-info> :name 'LREF10-CAR :code 110
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 CAR)
  :body '#f)

;; #x06f  LREF11-CAR
(make <vm-insn-info> :name 'LREF11-CAR :code 111
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 CAR)
  :body '#f)

;; #x070  LREF12-CAR
(make <vm-insn-info> :name 'LREF12-CAR :code 112
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 CAR)
  :body '#f)

;; #x071  LREF20-CAR
(make <vm-insn-info> :name 'LREF20-CAR :code 113
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 CAR)
  :body '#f)

;; #x072  LREF21-CAR
(make <vm-insn-info> :name 'LREF21-CAR :code 114
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 CAR)
  :body '#f)

;; #x073  LREF30-CAR
(make <vm-insn-info> :name 'LREF30-CAR :code 115
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 CAR)
  :body '#f)

;; #x074  CDR
(make <vm-insn-info> :name 'CDR :code 116
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($type-check v SCM_PAIRP "pair") ($result (SCM_CDR v))))

;; #x075  CDR-PUSH
(make <vm-insn-info> :name 'CDR-PUSH :code 117
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CDR PUSH)
  :body '#f)

;; #x076  LREF0-CDR
(make <vm-insn-info> :name 'LREF0-CDR :code 118
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 CDR)
  :body '#f)

;; #x077  LREF1-CDR
(make <vm-insn-info> :name 'LREF1-CDR :code 119
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 CDR)
  :body '#f)

;; #x078  LREF2-CDR
(make <vm-insn-info> :name 'LREF2-CDR :code 120
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 CDR)
  :body '#f)

;; #x079  LREF3-CDR
(make <vm-insn-info> :name 'LREF3-CDR :code 121
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 CDR)
  :body '#f)

;; #x07a  LREF10-CDR
(make <vm-insn-info> :name 'LREF10-CDR :code 122
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 CDR)
  :body '#f)

;; #x07b  LREF11-CDR
(make <vm-insn-info> :name 'LREF11-CDR :code 123
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 CDR)
  :body '#f)

;; #x07c  LREF12-CDR
(make <vm-insn-info> :name 'LREF12-CDR :code 124
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 CDR)
  :body '#f)

;; #x07d  LREF20-CDR
(make <vm-insn-info> :name 'LREF20-CDR :code 125
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 CDR)
  :body '#f)

;; #x07e  LREF21-CDR
(make <vm-insn-info> :name 'LREF21-CDR :code 126
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 CDR)
  :body '#f)

;; #x07f  LREF30-CDR
(make <vm-insn-info> :name 'LREF30-CDR :code 127
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 CDR)
  :body '#f)

;; #x080  CAAR
(make <vm-insn-info> :name 'CAAR :code 128
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($cxxr SCM_CAR SCM_CAR))

;; #x081  CAAR-PUSH
(make <vm-insn-info> :name 'CAAR-PUSH :code 129
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CAAR PUSH)
  :body '#f)

;; #x082  CADR
(make <vm-insn-info> :name 'CADR :code 130
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($cxxr SCM_CAR SCM_CDR))

;; #x083  CADR-PUSH
(make <vm-insn-info> :name 'CADR-PUSH :code 131
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CADR PUSH)
  :body '#f)

;; #x084  CDAR
(make <vm-insn-info> :name 'CDAR :code 132
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($cxxr SCM_CDR SCM_CAR))

;; #x085  CDAR-PUSH
(make <vm-insn-info> :name 'CDAR-PUSH :code 133
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CDAR PUSH)
  :body '#f)

;; #x086  CDDR
(make <vm-insn-info> :name 'CDDR :code 134
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($cxxr SCM_CDR SCM_CDR))

;; #x087  CDDR-PUSH
(make <vm-insn-info> :name 'CDDR-PUSH :code 135
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(CDDR PUSH)
  :body '#f)

;; #x088  LIST
(make <vm-insn-info> :name 'LIST :code 136
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (cp SCM_NIL) (arg)) (when (> nargs 0) (SCM_FLONUM_ENSURE_MEM VAL0) (set! cp (Scm_Cons VAL0 cp)) (while (> (pre-- nargs) 0) (POP-ARG arg) (set! cp (Scm_Cons arg cp)))) ($result cp)))

;; #x089  LIST-STAR
(make <vm-insn-info> :name 'LIST-STAR :code 137
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (cp SCM_NIL) (arg)) (VM-ASSERT (>= nargs 1)) (SCM_FLONUM_ENSURE_MEM VAL0) (set! cp VAL0) (while (> (pre-- nargs) 0) (POP-ARG arg) (set! cp (Scm_Cons arg cp))) ($result cp)))

;; #x08a  LENGTH
(make <vm-insn-info> :name 'LENGTH :code 138
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((len::int (Scm_Length VAL0))) (when (< len 0) ($vm-err "proper list required, but got %S" VAL0)) ($result:i len)))

;; #x08b  MEMQ
(make <vm-insn-info> :name 'MEMQ :code 139
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result (Scm_Memq v VAL0))))

;; #x08c  MEMV
(make <vm-insn-info> :name 'MEMV :code 140
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result (Scm_Memv v VAL0))))

;; #x08d  ASSQ
(make <vm-insn-info> :name 'ASSQ :code 141
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result (Scm_Assq v VAL0))))

;; #x08e  ASSV
(make <vm-insn-info> :name 'ASSV :code 142
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result (Scm_Assv v VAL0))))

;; #x08f  EQ
(make <vm-insn-info> :name 'EQ :code 143
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result:b (SCM_EQ v VAL0))))

;; #x090  EQV
(make <vm-insn-info> :name 'EQV :code 144
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp v ($result:b (Scm_EqvP v VAL0))))

;; #x091  APPEND
(make <vm-insn-info> :name 'APPEND :code 145
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (cp SCM_NIL) (args SCM_NIL) (a)) (case nargs ((0) (break)) ((1) (set! cp VAL0) (break)) ((2) (SCM_FLONUM_ENSURE_MEM VAL0) (POP-ARG a) (set! cp (Scm_Append2 a VAL0)) (break)) (else (set! args (Scm_Cons VAL0 SCM_NIL)) (while (> (pre-- nargs) 0) (POP-ARG a) (set! args (Scm_Cons a args))) (set! cp (Scm_Append args)))) ($result cp)))

;; #x092  NOT
(make <vm-insn-info> :name 'NOT :code 146
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_CHECKED_FALSEP v))))

;; #x093  REVERSE
(make <vm-insn-info> :name 'REVERSE :code 147
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result (Scm_Reverse v))))

;; #x094  APPLY
(make <vm-insn-info> :name 'APPLY :code 148
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (cp)) (SCM_FLONUM_ENSURE_MEM VAL0) (while (> (pre-- nargs) 1) (POP-ARG cp) (set! VAL0 (Scm_Cons cp VAL0))) (set! cp VAL0) (POP-ARG VAL0) (TAIL-CALL-INSTRUCTION) (set! VAL0 (Scm_VMApply VAL0 cp)) NEXT))

;; #x095  TAIL-APPLY
(make <vm-insn-info> :name 'TAIL-APPLY :code 149
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(let* ((rest VAL0) (nargc::int (- (SCM_VM_INSN_ARG code) 2)) (proc (* (- SP nargc 1)))) (set! VAL0 proc) (post++ ARGP) (when (SCM_NULLP rest) ($goto-insn TAIL-CALL)) (unless (SCM_PAIRP rest) ($vm-err "Rest argument is not proper: %S" rest)) (set! VAL0 proc) (set! (* (post++ SP)) rest) (DISCARD-ENV) (goto tail_apply_entry)))

;; #x096  IS-A
(make <vm-insn-info> :name 'IS-A :code 150
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp obj ($type-check VAL0 SCM_CLASSP "class") (let* ((c::ScmClass* (SCM_CLASS VAL0))) (cond ((not (SCM_FALSEP (-> (Scm_ClassOf obj) redefined))) (Scm__VMProtectStack vm) ($result (Scm_VMIsA obj c))) (else ($result:b (SCM_ISA obj c)))))))

;; #x097  NULLP
(make <vm-insn-info> :name 'NULLP :code 151
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_NULLP v))))

;; #x098  PAIRP
(make <vm-insn-info> :name 'PAIRP :code 152
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_PAIRP v))))

;; #x099  CHARP
(make <vm-insn-info> :name 'CHARP :code 153
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_CHARP v))))

;; #x09a  EOFP
(make <vm-insn-info> :name 'EOFP :code 154
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_EOFP v))))

;; #x09b  STRINGP
(make <vm-insn-info> :name 'STRINGP :code 155
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_STRINGP v))))

;; #x09c  SYMBOLP
(make <vm-insn-info> :name 'SYMBOLP :code 156
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_SYMBOLP v))))

;; #x09d  VECTORP
(make <vm-insn-info> :name 'VECTORP :code 157
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_VECTORP v))))

;; #x09e  NUMBERP
(make <vm-insn-info> :name 'NUMBERP :code 158
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_NUMBERP v))))

;; #x09f  REALP
(make <vm-insn-info> :name 'REALP :code 159
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (SCM_REALP v))))

;; #x0a0  IDENTIFIERP
(make <vm-insn-info> :name 'IDENTIFIERP :code 160
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result:b (or (SCM_SYMBOLP v) (SCM_IDENTIFIERP v)))))

;; #x0a1  SETTER
(make <vm-insn-info> :name 'SETTER :code 161
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result (Scm_Setter v))))

;; #x0a2  VALUES
(make <vm-insn-info> :name 'VALUES :code 162
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '#f
  :body '(begin ($values) NEXT))

;; #x0a3  VALUES-RET
(make <vm-insn-info> :name 'VALUES-RET :code 163
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #t
  :fold-lref #f
  :combined '(VALUES RET)
  :body '(begin ($values) (RETURN-OP) NEXT))

;; #x0a4  VEC
(make <vm-insn-info> :name 'VEC :code 164
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (i::int (- nargs 1)) (vec (Scm_MakeVector nargs SCM_UNDEFINED))) (when (> nargs 0) (let* ((arg VAL0)) (for (() (> i 0) (post-- i)) (SCM_FLONUM_ENSURE_MEM arg) (set! (SCM_VECTOR_ELEMENT vec i) arg) (POP-ARG arg)) (SCM_FLONUM_ENSURE_MEM arg) (set! (SCM_VECTOR_ELEMENT vec 0) arg))) ($result vec)))

;; #x0a5  LIST2VEC
(make <vm-insn-info> :name 'LIST2VEC :code 165
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($result (Scm_ListToVector v 0 -1))))

;; #x0a6  APP-VEC
(make <vm-insn-info> :name 'APP-VEC :code 166
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (cp SCM_NIL) (args SCM_NIL) (a)) (when (> nargs 0) (SCM_FLONUM_ENSURE_MEM VAL0) (set! cp VAL0) (while (> (pre-- nargs) 0) (POP-ARG a) (set! args (Scm_Cons a args))) (dolist (a (Scm_ReverseX args)) (when (< (Scm_Length a) 0) ($vm-err "list required, but got %S" a)) (set! cp (Scm_Append2 a cp)))) ($result (Scm_ListToVector cp 0 -1))))

;; #x0a7  VEC-LEN
(make <vm-insn-info> :name 'VEC-LEN :code 167
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v ($type-check v SCM_VECTORP "vector") ($result:i (SCM_VECTOR_SIZE v))))

;; #x0a8  VEC-REF
(make <vm-insn-info> :name 'VEC-REF :code 168
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((k VAL0)) ($w/argp vec ($type-check vec SCM_VECTORP "vector") ($type-check k SCM_INTP "fixnum") (when (or (< (SCM_INT_VALUE k) 0) (>= (SCM_INT_VALUE k) (SCM_VECTOR_SIZE vec))) ($vm-err "vector-ref index out of range: %S" k)) ($result (SCM_VECTOR_ELEMENT vec (SCM_INT_VALUE k))))))

;; #x0a9  VEC-SET
(make <vm-insn-info> :name 'VEC-SET :code 169
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((vec) (ind)) (POP-ARG ind) (POP-ARG vec) ($type-check vec SCM_VECTORP "vector") ($type-check ind SCM_INTP "fixnum") (when (SCM_VECTOR_IMMUTABLE_P vec) ($vm-err "vector is immutable: %S" vec)) (let* ((k::int (SCM_INT_VALUE ind)) (v VAL0)) (when (or (< k 0) (>= k (SCM_VECTOR_SIZE vec))) ($vm-err "vector-set! index out of range: %d" k)) (SCM_FLONUM_ENSURE_MEM v) (set! (SCM_VECTOR_ELEMENT vec k) v) ($result SCM_UNDEFINED))))

;; #x0aa  VEC-REFI
(make <vm-insn-info> :name 'VEC-REFI :code 170
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr vec ($type-check vec SCM_VECTORP "vector") (let* ((k::int (SCM_VM_INSN_ARG code))) (when (or (< k 0) (>= k (SCM_VECTOR_SIZE vec))) ($vm-err "vector-ref index out of range: %d" k)) ($result (SCM_VECTOR_ELEMENT vec k)))))

;; #x0ab  VEC-SETI
(make <vm-insn-info> :name 'VEC-SETI :code 171
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp vec ($type-check vec SCM_VECTORP "vector") (when (SCM_VECTOR_IMMUTABLE_P vec) ($vm-err "vector is immutable: %S" vec)) (let* ((k::int (SCM_VM_INSN_ARG code)) (v VAL0)) (when (or (< k 0) (>= k (SCM_VECTOR_SIZE vec))) ($vm-err "vector-set! index out of range: %d" k)) (SCM_FLONUM_ENSURE_MEM v) (set! (SCM_VECTOR_ELEMENT vec k) v) ($result SCM_UNDEFINED))))

;; #x0ac  UVEC-REF
(make <vm-insn-info> :name 'UVEC-REF :code 172
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((k VAL0) (utype::int (SCM_VM_INSN_ARG code))) ($w/argp vec ($type-check k SCM_INTP "fixnum") ($result (Scm_VMUVectorRef (SCM_UVECTOR vec) utype (SCM_INT_VALUE k) SCM_UNBOUND)))))

;; #x0ad  NUMEQ2
(make <vm-insn-info> :name 'NUMEQ2 :code 173
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (cond ((and (SCM_INTP VAL0) (SCM_INTP arg)) ($result:b (== VAL0 arg))) ((and (SCM_FLONUMP VAL0) (SCM_FLONUMP arg)) ($result:b (== (SCM_FLONUM_VALUE VAL0) (SCM_FLONUM_VALUE arg)))) (else ($result:b (Scm_NumEq arg VAL0))))))

;; #x0ae  NUMLT2
(make <vm-insn-info> :name 'NUMLT2 :code 174
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r < ($result:b r)))

;; #x0af  NUMLE2
(make <vm-insn-info> :name 'NUMLE2 :code 175
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r <= ($result:b r)))

;; #x0b0  NUMGT2
(make <vm-insn-info> :name 'NUMGT2 :code 176
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r > ($result:b r)))

;; #x0b1  NUMGE2
(make <vm-insn-info> :name 'NUMGE2 :code 177
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/numcmp r >= ($result:b r)))

;; #x0b2  NUMADD2
(make <vm-insn-info> :name 'NUMADD2 :code 178
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (cond ((and (SCM_INTP arg) (SCM_INTP VAL0)) ($result:n (+ (SCM_INT_VALUE arg) (SCM_INT_VALUE VAL0)))) ((and (SCM_FLONUMP arg) (SCM_FLONUMP VAL0)) ($result:f (+ (SCM_FLONUM_VALUE arg) (SCM_FLONUM_VALUE VAL0)))) (else ($result (Scm_Add arg VAL0))))))

;; #x0b3  NUMSUB2
(make <vm-insn-info> :name 'NUMSUB2 :code 179
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (cond ((and (SCM_INTP arg) (SCM_INTP VAL0)) ($result:n (- (SCM_INT_VALUE arg) (SCM_INT_VALUE VAL0)))) ((and (SCM_FLONUMP arg) (SCM_FLONUMP VAL0)) ($result:f (- (SCM_FLONUM_VALUE arg) (SCM_FLONUM_VALUE VAL0)))) (else ($result (Scm_Sub arg VAL0))))))

;; #x0b4  NUMMUL2
(make <vm-insn-info> :name 'NUMMUL2 :code 180
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (SCM_FLONUMP arg) (cond ((and (== (SCM_MAKE_INT 0) VAL0) (not (SCM_IS_INF (SCM_FLONUM_VALUE arg))) (not (SCM_IS_NAN (SCM_FLONUM_VALUE arg)))) ($result (SCM_MAKE_INT 0))) ((SCM_REALP VAL0) ($result:f (* (Scm_GetDouble arg) (Scm_GetDouble VAL0)))) (else ($result (Scm_Mul arg VAL0)))) (if (SCM_FLONUMP VAL0) (cond ((and (== (SCM_MAKE_INT 0) arg) (not (SCM_IS_INF (SCM_FLONUM_VALUE VAL0))) (not (SCM_IS_NAN (SCM_FLONUM_VALUE VAL0)))) ($result (SCM_MAKE_INT 0))) ((SCM_REALP arg) ($result:f (* (Scm_GetDouble arg) (Scm_GetDouble VAL0)))) (else ($result (Scm_Mul arg VAL0)))) ($result (Scm_Mul arg VAL0))))))

;; #x0b5  NUMDIV2
(make <vm-insn-info> :name 'NUMDIV2 :code 181
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (or (and (SCM_FLONUMP arg) (SCM_REALP VAL0)) (and (SCM_FLONUMP VAL0) (SCM_REALP arg))) ($result:f (/ (Scm_GetDouble arg) (Scm_GetDouble VAL0))) ($result (Scm_Div arg VAL0)))))

;; #x0b6  LREF-VAL0-NUMADD2
(make <vm-insn-info> :name 'LREF-VAL0-NUMADD2 :code 182
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($arg-source lref ($insn-body NUMADD2)))

;; #x0b7  NEGATE
(make <vm-insn-info> :name 'NEGATE :code 183
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v (cond ((SCM_INTP v) ($result:n (- (SCM_INT_VALUE v)))) ((SCM_FLONUMP v) ($result:f (- (Scm_GetDouble v)))) (else ($result (Scm_Negate v))))))

;; #x0b8  NUMIADD2
(make <vm-insn-info> :name 'NUMIADD2 :code 184
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (and (SCM_REALP arg) (SCM_REALP VAL0)) ($result:f (+ (Scm_GetDouble arg) (Scm_GetDouble VAL0))) ($result (Scm_Add (Scm_Inexact arg) (Scm_Inexact VAL0))))))

;; #x0b9  NUMISUB2
(make <vm-insn-info> :name 'NUMISUB2 :code 185
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (and (SCM_REALP arg) (SCM_REALP VAL0)) ($result:f (- (Scm_GetDouble arg) (Scm_GetDouble VAL0))) ($result (Scm_Sub (Scm_Inexact arg) (Scm_Inexact VAL0))))))

;; #x0ba  NUMIMUL2
(make <vm-insn-info> :name 'NUMIMUL2 :code 186
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (and (SCM_REALP arg) (SCM_REALP VAL0)) ($result:f (* (Scm_GetDouble arg) (Scm_GetDouble VAL0))) ($result (Scm_Mul (Scm_Inexact arg) (Scm_Inexact VAL0))))))

;; #x0bb  NUMIDIV2
(make <vm-insn-info> :name 'NUMIDIV2 :code 187
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp arg (if (and (SCM_FLONUMP arg) (SCM_FLONUMP VAL0)) ($result:f (/ (Scm_GetDouble arg) (Scm_GetDouble VAL0))) ($result (Scm_VMDivInexact arg VAL0)))))

;; #x0bc  NUMADDI
(make <vm-insn-info> :name 'NUMADDI :code 188
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((imm::long (SCM_VM_INSN_ARG code))) ($w/argr arg (cond ((SCM_INTP arg) ($result:n (+ imm (SCM_INT_VALUE arg)))) ((SCM_FLONUMP arg) ($result:f (+ (SCM_FLONUM_VALUE arg) (cast double imm)))) (else ($result (Scm_Add (SCM_MAKE_INT imm) arg)))))))

;; #x0bd  LREF0-NUMADDI
(make <vm-insn-info> :name 'LREF0-NUMADDI :code 189
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 NUMADDI)
  :body '#f)

;; #x0be  LREF1-NUMADDI
(make <vm-insn-info> :name 'LREF1-NUMADDI :code 190
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 NUMADDI)
  :body '#f)

;; #x0bf  LREF2-NUMADDI
(make <vm-insn-info> :name 'LREF2-NUMADDI :code 191
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 NUMADDI)
  :body '#f)

;; #x0c0  LREF3-NUMADDI
(make <vm-insn-info> :name 'LREF3-NUMADDI :code 192
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 NUMADDI)
  :body '#f)

;; #x0c1  LREF10-NUMADDI
(make <vm-insn-info> :name 'LREF10-NUMADDI :code 193
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 NUMADDI)
  :body '#f)

;; #x0c2  LREF11-NUMADDI
(make <vm-insn-info> :name 'LREF11-NUMADDI :code 194
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 NUMADDI)
  :body '#f)

;; #x0c3  LREF12-NUMADDI
(make <vm-insn-info> :name 'LREF12-NUMADDI :code 195
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 NUMADDI)
  :body '#f)

;; #x0c4  LREF20-NUMADDI
(make <vm-insn-info> :name 'LREF20-NUMADDI :code 196
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 NUMADDI)
  :body '#f)

;; #x0c5  LREF21-NUMADDI
(make <vm-insn-info> :name 'LREF21-NUMADDI :code 197
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 NUMADDI)
  :body '#f)

;; #x0c6  LREF30-NUMADDI
(make <vm-insn-info> :name 'LREF30-NUMADDI :code 198
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 NUMADDI)
  :body '#f)

;; #x0c7  LREF0-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF0-NUMADDI-PUSH :code 199
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF0 NUMADDI PUSH)
  :body '#f)

;; #x0c8  LREF1-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF1-NUMADDI-PUSH :code 200
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF1 NUMADDI PUSH)
  :body '#f)

;; #x0c9  LREF2-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF2-NUMADDI-PUSH :code 201
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF2 NUMADDI PUSH)
  :body '#f)

;; #x0ca  LREF3-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF3-NUMADDI-PUSH :code 202
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF3 NUMADDI PUSH)
  :body '#f)

;; #x0cb  LREF10-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF10-NUMADDI-PUSH :code 203
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF10 NUMADDI PUSH)
  :body '#f)

;; #x0cc  LREF11-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF11-NUMADDI-PUSH :code 204
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF11 NUMADDI PUSH)
  :body '#f)

;; #x0cd  LREF12-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF12-NUMADDI-PUSH :code 205
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF12 NUMADDI PUSH)
  :body '#f)

;; #x0ce  LREF20-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF20-NUMADDI-PUSH :code 206
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF20 NUMADDI PUSH)
  :body '#f)

;; #x0cf  LREF21-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF21-NUMADDI-PUSH :code 207
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF21 NUMADDI PUSH)
  :body '#f)

;; #x0d0  LREF30-NUMADDI-PUSH
(make <vm-insn-info> :name 'LREF30-NUMADDI-PUSH :code 208
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '(LREF30 NUMADDI PUSH)
  :body '#f)

;; #x0d1  NUMSUBI
(make <vm-insn-info> :name 'NUMSUBI :code 209
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((imm::long (SCM_VM_INSN_ARG code))) ($w/argr arg (cond ((SCM_INTP arg) ($result:n (- imm (SCM_INT_VALUE arg)))) ((SCM_FLONUMP arg) ($result:f (- (cast double imm) (SCM_FLONUM_VALUE arg)))) (else ($result (Scm_Sub (SCM_MAKE_INT imm) arg)))))))

;; #x0d2  NUMMODI
(make <vm-insn-info> :name 'NUMMODI :code 210
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((divisor::ScmSmallInt (SCM_VM_INSN_ARG code))) ($w/argr arg ($result (Scm_Modulo arg (SCM_MAKE_INT divisor) FALSE)))))

;; #x0d3  NUMREMI
(make <vm-insn-info> :name 'NUMREMI :code 211
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((divisor::ScmSmallInt (SCM_VM_INSN_ARG code))) ($w/argr arg ($result (Scm_Modulo arg (SCM_MAKE_INT divisor) TRUE)))))

;; #x0d4  ASHI
(make <vm-insn-info> :name 'ASHI :code 212
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((cnt::ScmSmallInt (SCM_VM_INSN_ARG code))) ($w/argr arg ($result (Scm_Ash arg cnt)))))

;; #x0d5  LOGAND
(make <vm-insn-info> :name 'LOGAND :code 213
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp x ($result (Scm_LogAnd x VAL0))))

;; #x0d6  LOGIOR
(make <vm-insn-info> :name 'LOGIOR :code 214
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp x ($result (Scm_LogIor x VAL0))))

;; #x0d7  LOGXOR
(make <vm-insn-info> :name 'LOGXOR :code 215
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp x ($result (Scm_LogXor x VAL0))))

;; #x0d8  LOGANDC
(make <vm-insn-info> :name 'LOGANDC :code 216
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((obj)) ($w/argr x (FETCH-OPERAND obj) INCR-PC ($result (Scm_LogAnd x obj)))))

;; #x0d9  LOGIORC
(make <vm-insn-info> :name 'LOGIORC :code 217
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((obj)) ($w/argr x (FETCH-OPERAND obj) INCR-PC ($result (Scm_LogIor x obj)))))

;; #x0da  LOGXORC
(make <vm-insn-info> :name 'LOGXORC :code 218
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((obj)) ($w/argr x (FETCH-OPERAND obj) INCR-PC ($result (Scm_LogXor x obj)))))

;; #x0db  READ-CHAR
(make <vm-insn-info> :name 'READ-CHAR :code 219
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (ch::int 0) (port::ScmPort*)) (cond ((== nargs 1) ($type-check VAL0 SCM_IPORTP "input port") (set! port (SCM_PORT VAL0))) (else (set! port SCM_CURIN))) (set! ch (Scm_Getc port)) ($result (?: (< ch 0) SCM_EOF (SCM_MAKE_CHAR ch)))))

;; #x0dc  PEEK-CHAR
(make <vm-insn-info> :name 'PEEK-CHAR :code 220
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (ch::int 0) (port::ScmPort*)) (cond ((== nargs 1) ($type-check VAL0 SCM_IPORTP "input port") (set! port (SCM_PORT VAL0))) (else (set! port SCM_CURIN))) (set! ch (Scm_Peekc port)) ($result (?: (< ch 0) SCM_EOF (SCM_MAKE_CHAR ch)))))

;; #x0dd  WRITE-CHAR
(make <vm-insn-info> :name 'WRITE-CHAR :code 221
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::int (SCM_VM_INSN_ARG code)) (ch) (port::ScmPort*)) (cond ((== nargs 2) ($type-check VAL0 SCM_OPORTP "output port") (set! port (SCM_PORT VAL0)) (POP-ARG ch)) (else (set! port SCM_CUROUT ch VAL0))) ($type-check ch SCM_CHARP "character") (SCM_PUTC (SCM_CHAR_VALUE ch) port) ($result SCM_UNDEFINED)))

;; #x0de  CURIN
(make <vm-insn-info> :name 'CURIN :code 222
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result (SCM_OBJ SCM_CURIN)))

;; #x0df  CUROUT
(make <vm-insn-info> :name 'CUROUT :code 223
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result (SCM_OBJ SCM_CUROUT)))

;; #x0e0  CURERR
(make <vm-insn-info> :name 'CURERR :code 224
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($result (SCM_OBJ SCM_CURERR)))

;; #x0e1  SLOT-REF
(make <vm-insn-info> :name 'SLOT-REF :code 225
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argp obj (TAIL-CALL-INSTRUCTION) (SCM_FLONUM_ENSURE_MEM VAL0) ($result (Scm_VMSlotRef obj VAL0 FALSE))))

;; #x0e2  SLOT-SET
(make <vm-insn-info> :name 'SLOT-SET :code 226
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((slot)) (POP-ARG slot) ($w/argp obj (TAIL-CALL-INSTRUCTION) (SCM_FLONUM_ENSURE_MEM slot) (SCM_FLONUM_ENSURE_MEM VAL0) ($result (Scm_VMSlotSet obj slot VAL0)))))

;; #x0e3  SLOT-REFC
(make <vm-insn-info> :name 'SLOT-REFC :code 227
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((slot)) (FETCH-OPERAND slot) INCR-PC (TAIL-CALL-INSTRUCTION) (SCM_FLONUM_ENSURE_MEM VAL0) ($result (Scm_VMSlotRef VAL0 slot FALSE))))

;; #x0e4  SLOT-SETC
(make <vm-insn-info> :name 'SLOT-SETC :code 228
  :num-params 0 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((slot)) (FETCH-OPERAND slot) INCR-PC ($w/argp obj (TAIL-CALL-INSTRUCTION) (SCM_FLONUM_ENSURE_MEM VAL0) ($result (Scm_VMSlotSet obj slot VAL0)))))

;; #x0e5  PUSH-HANDLERS
(make <vm-insn-info> :name 'PUSH-HANDLERS :code 229
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((nargs::long (SCM_VM_INSN_ARG code)) (before) (after VAL0) (args SCM_NIL)) (VM-ASSERT (>= (- SP (-> vm stackBase)) (+ 1 nargs))) (when (> nargs 0) (SCM_FLONUM_ENSURE_MEM VAL0) (set! args (Scm_Cons VAL0 SCM_NIL)) (while (> (pre-- nargs) 0) (let* ((v)) (POP-ARG v) (SCM_FLONUM_ENSURE_MEM v) (set! args (Scm_Cons v args)))) (POP-ARG after)) (POP-ARG before) (SCM_FLONUM_ENSURE_MEM before) (SCM_FLONUM_ENSURE_MEM after) (push_dynamic_handlers vm before after args) NEXT))

;; #x0e6  POP-HANDLERS
(make <vm-insn-info> :name 'POP-HANDLERS :code 230
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (pop_dynamic_handlers vm) NEXT))

;; #x0e7  BOX
(make <vm-insn-info> :name 'BOX :code 231
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((param::int (SCM_VM_INSN_ARG code))) (cond ((== param 0) (SCM_FLONUM_ENSURE_MEM VAL0) (let* ((b::ScmBox* (Scm_MakeBox VAL0))) (set! VAL0 (SCM_OBJ b)))) ((> param 0) (let* ((off::int (- param 1))) (VM-ASSERT (> (-> ENV size) off)) (let* ((v (ENV-DATA ENV off))) (SCM_FLONUM_ENSURE_MEM v) (let* ((b::ScmBox* (Scm_MakeBox v))) (set! (ENV-DATA ENV off) (SCM_OBJ b))))))) NEXT))

;; #x0e8  ENV-SET
(make <vm-insn-info> :name 'ENV-SET :code 232
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((off::int (SCM_VM_INSN_ARG code))) (VM-ASSERT (> (-> ENV size) off)) (SCM_FLONUM_ENSURE_MEM VAL0) (set! (ENV-DATA ENV off) VAL0) NEXT))

;; #x0e9  UNBOX
(make <vm-insn-info> :name 'UNBOX :code 233
  :num-params 0 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '($w/argr v (set! VAL0 (SCM_BOX_VALUE v)) NEXT))

;; #x0ea  LREF-UNBOX
(make <vm-insn-info> :name 'LREF-UNBOX :code 234
  :num-params 2 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #t
  :combined '(LREF UNBOX)
  :body '#f)

;; #x0eb  LOCAL-ENV-SHIFT
(make <vm-insn-info> :name 'LOCAL-ENV-SHIFT :code 235
  :num-params 1 :alt-num-params '()
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(begin (local_env_shift vm (SCM_VM_INSN_ARG code)) NEXT))

;; #x0ec  XLREF
(make <vm-insn-info> :name 'XLREF :code 236
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((dep_s)) (FETCH-OPERAND dep_s) INCR-PC ($lref (SCM_INT_VALUE dep_s) (SCM_VM_INSN_ARG code))))

;; #x0ed  XLSET
(make <vm-insn-info> :name 'XLSET :code 237
  :num-params 1 :alt-num-params '()
  :operand-type 'obj
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((dep_s)) (FETCH-OPERAND dep_s) INCR-PC ($lset (SCM_INT_VALUE dep_s) (SCM_VM_INSN_ARG code))))

;; #x0ee  EXTEND-DENV
(make <vm-insn-info> :name 'EXTEND-DENV :code 238
  :num-params 1 :alt-num-params '(0)
  :operand-type 'label
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((op::int (SCM_VM_INSN_ARG code)) (key) (next::ScmWord*)) (SCM_FLONUM_ENSURE_MEM VAL0) (POP-ARG key) (FETCH-LOCATION next) INCR_PC (PUSH-CONT next) (if (== op 0) (Scm_VMPushDynamicEnv key VAL0) (Scm_VMPushDynamicEnv key (Scm_Cons VAL0 (Scm_VMFindDynamicEnv key SCM_NIL)))) NEXT))

;; #x0ef  TAIL-EXTEND-DENV
(make <vm-insn-info> :name 'TAIL-EXTEND-DENV :code 239
  :num-params 1 :alt-num-params '(0)
  :operand-type 'none
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(let* ((op::int (SCM_VM_INSN_ARG code)) (key)) (SCM_FLONUM_ENSURE_MEM VAL0) (POP-ARG key) (if (== op 0) (Scm_VMPushDynamicEnv key VAL0) (Scm_VMPushDynamicEnv key (Scm_Cons VAL0 (Scm_VMFindDynamicEnv key SCM_NIL)))) NEXT))

;; #x0f0  XINSN
(make <vm-insn-info> :name 'XINSN :code 240
  :num-params 0 :alt-num-params '()
  :operand-type 'obj+native
  :obsoleted #f
  :multi-value #f
  :fold-lref #f
  :combined '#f
  :body '(.if (and SCM_TARGET_X86_64 (not GAUCHE_WINDOWS)) (let* ((jitcode::void*)) INCR_PC (FETCH_LOCATION jitcode) INCR_PC (asm :volatile "mov %[vm], %%r15; call *%[jitcode]" () ((vm "r" vm) (jitcode "r" jitcode)) ("r12" "r15")) NEXT) (Scm_Panic "XINSN instruction should never be seen on this platform.")))


