;;;
;;; peg.scm - Parser Expression Grammar Parser
;;;
;;;   Copyright (c) 2006 Rui Ueyama (rui314@gmail.com)
;;;   Copyright (c) 2008-2024  Shiro Kawai  <shiro@acm.org>
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

(define-module parser.peg
  (use scheme.list)
  (use scheme.charset)
  (use srfi.13)
  (use gauche.collection)
  (use gauche.generator)
  (use gauche.lazy)
  (use text.tree)
  (use util.match)
  (export <parse-error>
          make-peg-parse-error

          peg-run-parser
          peg-parse-string peg-parse-port
          peg-parser->generator peg-parser->lseq

          parse-success?
          return-result return-failure
          return-failure/expect return-failure/unexpect
          return-failure/message return-failure/compound

          $bind $return $fail $expect $lift $lift* $debug
          $let $let* $try $assert $not
          $or $fold-parsers $fold-parsers-right
          $seq $seq0 $list $list* $between
          $many $many1 $many_ $many1_ $repeat $repeat_
          $many-till $many-till_
          $optional
          $sep-by $end-by $sep-end-by
          $chain-left $chain-right
          $lazy $parameterize

          $cut $raise

          $any $eos $.

          $string $string-ci
          $char $one-of $none-of
          $satisfy $match1 $match1*
          $binding $lbinding

          $->rope $->string $->symbol rope->string rope-finalize
          )
  )

(select-module parser.peg)

;;;============================================================
;;; How is EBNF represented in the PEG library?
;;;
;;;   A ::= B C
;;;     => (define a ($seq b c))
;;;    If you need values of B and C, use monadic macro $let, or applicative
;;;    combinator $lift
;;;     => (define a ($let ([x b] [y c]) ($return (cons x y))))
;;;     => (define a ($lift cons b c)
;;;
;;;   A :: B | C
;;;     => (define a ($or b c))
;;;     To be precise, this actually mean B / C in PEG; if B fails without
;;;     consuming input, we try C.  But if B ever consumes input, we don't
;;;     backtrack and A fails.  If you want backtracking, use $try as well.
;;;     => (define a ($or ($try b) c))
;;;
;;;   A :: B*
;;;     => (define a ($many b))
;;;   A :: B+
;;;     => (define a ($many b 1))
;;;   A ::= B B | B B B
;;;     => (define a ($many b 2 3))
;;;     '$many' gathers the semantic values of B into list.  One common case
;;;     is that you want a string out of gathered values.  $->string is a
;;;     combinator that just translates the semantic value.
;;;     => (define a ($->string ($many b)))
;;;     If the result of a is further gathered, it is wasteful to make it
;;;     a string, since it will be thrown away soon.  We have an efficient
;;;     intermediate string representation called rope.  Here you can make
;;;     the result of a as rope:
;;;     => (define a ($->rope ($many b)))
;;;     Later, you can concatenate and convert ropes to a string by
;;;     rope->string.
;;;     If you don't need the values, you can use $many_ instead, which
;;;     is more efficient.
;;;
;;;   A ::= B?
;;;     => (define a ($optional b))
;;;
;;;


;;;  In this module, we provide various constructors of PARSERs,
;;;  and DRIVER procedures.
;;;
;;;  A PARSER is merely a closure that takes a list of input (most
;;;  likely it's a lazy sequence of characters, but it can be a
;;;  list of anything), and returns three results:
;;;
;;;    Status: #f if parse is successful, or a symbol to indicate
;;;            a kind of error.
;;;    Value: parsed value, or error message.
;;;    Next: a list of next input.
;;;
;;;  That is,
;;;    Parser :: [a] -> (Status, Value, [a])
;;;
;;;  Failure status and value
;;;
;;;    status           value
;;;    ------------------------------------------------
;;;    fail-message     string (message)
;;;    fail-expect      string (message), char, char-set
;;;    fail-unexpect    string (message)
;;;    fail-compound    ((Status . Value) ...)
;;;    fail-error       (tag (Status . Value ...))
;;;
;;;  A DRIVER is a wrapper to take a parser and an input.
;;;  DRIVER applies the parser on the input, and on success, it returns the
;;;  value and the rest of the input.  On failure, it translates the error
;;;  status into <parser-error> object and raises it.
;;;

;;;============================================================
;;; Parse result types
;;;

;; An error object for the external API.  Note that a parser won't raise
;; this error; it just returns a 'failure' value, so that other options
;; can be tried if there's any.   Creating, throwing, and catching an error
;; is expensive operation compared to the simple call/return.  It is the
;; parser driver that sees the failure as the final result, and constructs
;; <parse-error> to raise.
;; NB: 'Token' slot is (car rest) or #<eof>.  It's redundant, but kept for
;; the backward compatibility.
(define-condition-type <parse-error> <error> #f
  (position)                            ;stream position
  (type)                                ;fail type
  (objects)                             ;expecting/unexpecting items
  (token)                               ;token that caused error
  (rest))                               ;rest of input string, including token

(define-method write-object ((o <parse-error>) out)
  (format out "#<<parse-error> ~S>" (~ o 'message)))

;; Primitive parts to be used inside custom parser.
;; The user usually doesn't need to use them, as long as he construct
;; parsers by parser combinators.
(define-inline (parse-success? x) (not x))

(define-inline (return-result v s) (values #f v s))
(define-hybrid-syntax return-failure
  (^[t v s] (values t v s))
  ;; If type is given as a literal symbol, we statically check it.
  (er-macro-transformer
   (^[f r c]
     (match f
       [(_ ('quote x) v s)
        (unless (memq x '(fail-message fail-expect fail-unexpect
                                       fail-error fail-compound))
          (error "Invalid failure type; must be one of fail-message, \
                  fail-expect, fail-unexpect, fail-compund or \
                  fail-error, but got: " x))
        (quasirename r
          `(values ',x ,v ,s))]
       [(_ t v s)
        (quasirename r
          `(values ,t ,v ,s))]
       [_ f]))))
(define-inline (return-failure/message v s)  (values 'fail-message v s))
(define-inline (return-failure/expect v s)   (values 'fail-expect v s))
(define-inline (return-failure/unexpect v s) (values 'fail-unexpect v s))
(define-inline (return-failure/compound v s) (values 'fail-compound v s))
(define (return-error-from-failure tag failure payload s)
  (case failure
    [(fail-error) (match-let1 (_ . alist) payload
                    (values 'fail-error `(,tag . ,alist) s))]
    [else         (values 'fail-error `(,tag (,failure . ,payload)) s)]))

(define (make-peg-parse-error type objs pos seq)
  (define (flatten-compound-error objs)
    (append-map (^e (if (eq? (car e) 'fail-compound)
                      (flatten-compound-error (cdr e))
                      (list e)))
                objs))
  (define (analyze-compound-error objs pos)
    (let1 grps (map (^g (cons (caar g) (map cdr g)))
                    (group-collection (flatten-compound-error objs) :key car))
      (let ([msgs (assoc-ref grps 'fail-message)]
            [exps (assoc-ref grps 'fail-expect)]
            [unexps (assoc-ref grps 'fail-unexpect)])
        (tree->string
         (cons (or-concat (cond-list
                           [exps (compound-exps exps)]
                           [unexps (compound-unexps unexps)]
                           [msgs msgs]))
               (format " at ~a" pos))))))
  (define (or-concat lis)
    (define (rec lis)
      (match lis
        [(x y) `("(",x") or (",y")")]
        [(x . more) `("(",x"), ",@(rec more))]))
    (match lis
      [() '()]
      [(x) `(,x)]
      [xs (rec xs)]))
  (define (compound-exps exps)
    (match (delete-duplicates exps equal?)
      [(x) (format "expecting ~s" x)]
      [(xs ...) (format "expecting one of ~s" xs)]))
  (define (compound-unexps unexps)
    (match (delete-duplicates unexps equal?)
      [(x) (format "not expecting ~s" x)]
      [(xs ...) (format "not expecting any of ~s" xs)]))
  (define pos-fmt
    (if (sequence-position? pos)
      (format "~s:~a:~a"
              (or (sequence-position-source pos) "(unknown input)")
              (sequence-position-line pos)
              (sequence-position-column pos))
      pos))
  (define (message objs pos nexttok)
    (case type
      [(fail-message)  (format "~a at ~a" objs pos-fmt)] ;objs is a string message
      [(fail-expect)
       (if (char? objs)
         (format "expecting ~s at ~a, but got ~s" objs pos-fmt nexttok)
         (format "expecting ~a at ~a, but got ~s" objs pos-fmt nexttok))]
      [(fail-unexpect)
       (if (char? objs)
         (format "expecting but ~s at ~a, and got ~s" objs pos-fmt nexttok)
         (format "expecting but ~a at ~a, and got ~s" objs pos-fmt nexttok))]
      [(fail-compound) (analyze-compound-error objs pos)]
      [(fail-error) (analyze-compound-error (cdr objs) pos)] ;car is a tag
      [else (format "unknown parser error at ~a: ~a" pos-fmt objs)]  ;for safety
      ))
  (let ([nexttok (if (pair? seq) (car seq) (eof-object))])
    (make-condition <parse-error>
                    'position pos 'type type 'objects objs
                    'token nexttok 'rest seq
                    'message (message objs pos nexttok))))

(define (%get-input-pos head s)
  (or (lseq-position s)
      (let loop ([c 0] [head head])
        (cond [(eq? head s) c]
              [(null? head) "(unknown position)"]
              [else (loop (+ c 1) (cdr head))]))))

(define (construct-peg-parser-error r v s s1)
  (make-peg-parse-error r v (%get-input-pos s s1) s1))

;; API
;;   Default driver.  Returns parsed value and next stream
(define (peg-run-parser parser s)
  (receive (r v s1) (parser s)
    (if (parse-success? r)
      (values (rope-finalize v) s1)
      (raise (construct-peg-parser-error r v s s1)))))

;; Coerce something to lseq.  accepts generator.
;; We check applicability of x->lseq first, since an object can be both
;; passed to x->lseq and applicable as a thunk, but x->lseq should take
;; precedence.
;; NB: This is not abstract enough---the gory details should be hidden
;; in gauche.lazy module.
(define (%->lseq obj)
  (cond [(eq? (class-of obj) <pair>) obj] ;avoid forcing a lazy pair
        [(applicable? x->generator (class-of obj))
         (generator->lseq (x->generator obj))]
        [(applicable? obj) (generator->lseq obj)]
        [else (error "object cannot be used as a source of PEG parser:" obj)]))

;; API
;;   NB: We can consolidate peg-parse-string and peg-parse-port via
;;   x->generator, but should we?
(define (peg-parse-string parser str :optional (cont #f))
  (check-arg string? str)
  (receive (r rest) (peg-run-parser parser (x->lseq str))
    (if cont
      (cont r rest)
      r)))
;; API
(define (peg-parse-port parser port :optional (cont #f))
  (check-arg input-port? port)
  (receive (r rest) (peg-run-parser parser (x->lseq port))
    (if cont
      (cont r rest)
      r)))

;; API
;;  Returns a generator
(define (peg-parser->generator parser src)
  (let1 s (%->lseq src)
    (^[] (if (null? s)
           (eof-object)
           (receive (r v s1) (parser s)
             (cond [(not (parse-success? r))
                    (raise (construct-peg-parser-error r v s s1))]
                   [(eof-object? v) (set! s '()) v]
                   [else (set! s s1) (rope-finalize v)]))))))

;; API
;;  Returns an lseq
;;  Input position info is propagated if available
(define (peg-parser->lseq parser src)
  (let1 s (%->lseq src)
    (generator->lseq
     (^[] (if (null? s)
            (eof-object)
            (receive (r v s1) (parser s)
              ;; TODO: Refactor this part and similar part above
              (let1 val (cond [(not (parse-success? r))
                               (raise (construct-peg-parser-error r v s s1))]
                              [(eof-object? v) (set! s '()) v]
                              [else (set! s s1) (rope-finalize v)])
                (if-let1 pos (lseq-position s)
                  (values val pos)
                  val))))))))

;;;============================================================
;;; Lazily-constructed string
;;;

(define-inline (make-rope obj)
  (cons 'rope obj))

(define-inline (rope? obj)
  (and (pair? obj) (eq? (car obj) 'rope)))

(inline-stub
 (define-cfn rope2string_int (obj p) ::void :static
   (label restart)
   (cond [(SCM_STRINGP obj) (SCM_PUTS obj p)]
         [(SCM_CHARP obj) (SCM_PUTC (SCM_CHAR_VALUE obj) p)]
         [(SCM_PAIRP obj)
          (when (SCM_EQ (SCM_CAR obj) 'rope)
            (set! obj (SCM_CDR obj)) (goto restart))
          (for-each (lambda (elt)
                      (cond [(SCM_STRINGP elt) (SCM_PUTS elt p)]
                            [(SCM_CHARP elt) (SCM_PUTC (SCM_CHAR_VALUE elt) p)]
                            [else (rope2string_int elt p)]))
                    obj)]
         [(not (or (SCM_NULLP obj) (SCM_FALSEP obj)))
          (Scm_Error "rope->string: unknown object to write: %S" obj)]))

 (define-cproc rope->string (obj)
   (let* ([p (Scm_MakeOutputStringPort TRUE)])
     (rope2string_int obj p)
     (return (Scm_GetOutputString (SCM_PORT p) 0))))
 )

;;;============================================================
;;; Primitives
;;;

(define-inline ($return val) (^s (return-result val s)))

(define ($fail msg) (^s (return-failure/message msg s)))

(define $raise
  (case-lambda
    [(tag msg)
     (^s (return-failure 'fail-error `(,tag (fail-message . ,msg)) s))]
    [(msg)
     (^s (return-failure 'fail-error `(error (fail-message . ,msg)) s))]))

;; return a parser that tries PARSE.  On success, returns what it
;; returned.  On failure, returns 'fail-expect with MSG.
(define ($expect parse msg)
  (^s (receive (r v ss) (parse s)
        (if (parse-success? r)
          (return-result v ss)
          (return-failure/expect msg ss)))))

;; A convenience utility to check the upper bound, allowing unlimited
;; upper bound by #f.
(define-inline (>=? count max) (and max (>= count max)))

;;;============================================================
;;; Combinators
;;;

;; API
;; p :: Parser
;; f :: Value -> Parser
;; $bind :: Parser, (Value -> Parser) -> Parser
(define-inline ($bind p f)
  (^s (receive [r v s1] (p s)
        (if (parse-success? r)
          ((f v) s1)
          (return-failure r v s1)))))

;; API
;; $lift :: (a,...) -> b, (Parser,..) -> Parser
;; ($lift f parser) == ($let ([x parser]) ($return (f x)))
;;
;; $lift* is like $lift, but f gets semantic values as a single list.
;;
;; The number of parsers is almost always fixed, and we macro-expand into
;; chain of parser calls in such cases.

;; Aux function for macro expander
(define (expand-$lift *?)
)

(define-hybrid-syntax $lift
  (^[f . parsers]
    ;; We don't use the straightforward definition (using $let or $bind)
    ;; to reduce closure construction.
    (^s (let accum ([s s] [parsers parsers] [vs '()])
          (if (null? parsers)
            (return-result (apply f (reverse vs)) s)
            (receive [r v s1] ((car parsers) s)
              (if (parse-success? r)
                (accum s1 (cdr parsers) (cons v vs))
                (return-failure r v s1)))))))
  (er-macro-transformer
   (^[f r c]
     (define (generate-1 fn vs ps s)
       (if (null? ps)
         (quasirename r `(return-result (,fn ,@(reverse vs)) ,s))
         (let* ([v1 (gensym "v")]
                [inner (generate-1 fn (cons v1 vs) (cdr ps) s)])
           (quasirename r `(receive [res ,v1 ,s] (,(car ps) ,s)
                             (if (parse-success? res)
                               ,inner
                               (return-failure res ,v1 ,s)))))))
     (match f
       [(_ fn . ps)
        (let1 s (r's)
          (quasirename r
            `(^[,s] ,(generate-1 fn '() ps s))))]
       [_ f]))))

(define-hybrid-syntax $lift*
  (^[f . parsers]
    (^s (let accum ([s s] [parsers parsers] [vs '()])
          (if (null? parsers)
            (return-result (f (reverse vs)) s)
            (receive [r v s1] ((car parsers) s)
              (if (parse-success? r)
                (accum s1 (cdr parsers) (cons v vs))
                (return-failure r v s1)))))))
  (er-macro-transformer
   (^[f r c]
     (define (generate-1 fn vs ps s)
       (if (null? ps)
         (quasirename r `(return-result (,fn (list ,@(reverse vs))) ,s))
         (let* ([v1 (gensym "v")]
                [inner (generate-1 fn (cons v1 vs) (cdr ps) s)])
           (quasirename r `(receive [res ,v1 ,s] (,(car ps) ,s)
                             (if (parse-success? res)
                               ,inner
                               (return-failure res ,v1 ,s)))))))
     (match f
       [(_ fn . ps)
        (let1 s (r's)
          (quasirename r
            `(^[,s] ,(generate-1 fn '() ps s))))]
       [_ f]))))

;; API
;; For debugging
(define ($debug name parser)
  (^s (format (current-error-port) "#?parser(~a)<~,,,,v:s\n"
              name (debug-print-width) s)
      (receive [r v s] (parser s)
        (debug-print-post (list r v s))
        (values r v s))))

;; API
;; Convert failure to error
(define $cut
  (case-lambda
    [(tag parser) (^s (receive (r v s) (parser s)
                        (if (parse-success? r)
                          (return-result v s)
                          (return-error-from-failure tag r v s))))]
    [(parser) ($cut 'error parser)]))

;; API
;; $let (bind ...) body ...
;;   where
;;     bind := (var parser)
;;          |  (parser)
;;          |  parser
;; var's are visible from body ... (but not from parser)
(define-syntax $let
  (er-macro-transformer
   (^[f r c]
     (match f
       [(_ (bind ...) body ...)
        (let1 vars&parsers
            (map (^b (match b
                       [(var parser) `(,var ,(gensym "parser") ,parser)]
                       [(parser) `(,(gensym "_") ,(gensym "parser") ,parser)]
                       [parser `(,(gensym "_") ,(gensym "parser") ,parser)]))
                 bind)
          (quasirename r
            `(let (,@(map (^b `(,(cadr b) ,(caddr b))) vars&parsers))
               ,@(let loop ([vars&parsers vars&parsers])
                   (if (null? vars&parsers)
                     body
                     (match-let1 [(var pvar _) . rest] vars&parsers
                       (quasirename r
                         `(($bind ,pvar (^[,var] ,@(loop rest)))))))))))]
       [_ (error "Malformed $let:" f)]))))

;; API
;; $let* (bind ...) body ...
;;   where
;;     bind := (var parser)
;;          |  (parser)
;;          |  parser
;; var's are visible from subsequent bind and body
(define-syntax $let*
  (er-macro-transformer
   (^[f r c]
     (match f
       [(_ () body ...) (quasirename r `(begin ,@body))]
       [(_ ((var parser) bind ...) body ...)
        (quasirename r
          `($bind ,parser (^[,var] ($let* ,bind ,@body))))]
       [(_ ((parser) bind ...) body ...)
        (quasirename r
          `($bind ,parser (^[,(gensym "_")] ($let* ,bind ,@body))))]
       [(_ (parser bind ...) body ...)
        (quasirename r
          `($bind ,parser (^[,(gensym "_")] ($let* ,bind ,@body))))]
       [_ (error "Malformed $let*:" f)]))))

;; API
;; ($parameterize ((param expr) ..) parser ...)
;; Returns a parser that run parser ... while altering the parameter values
;; like parameterize.  The parser ... are run as if in $seq.
;; Suggested by Saito Atsushi
(define-syntax $parameterize
  (er-macro-transformer
   (^[f r c]
     (match f
       [(_ ((p e) ...) parser ...)
        (let1 tmp (gensym)
          (quasirename r
            `(let1 ,tmp ($seq ,@parser)
               (^[s] (parameterize (,@(map list p e))
                       (,tmp s))))))]))))

;; API
;; $or p1 p2 ...
;; $or p1 p2 ... :else pz
;;   Ordered choice.
;;   When all of p1 p2 ... fail without consuming input, returns compound
;;   failure of all of them, except in the latter form, where all the failures
;;   before pz is discarded.  Usually, pz is ($fail ...) to give a nicer
;;   failure message than the compound one.
(define ($or . parsers)
  (define (fail vs s)
    (match vs
      [((r . v)) (values r v s)] ;; no need to create compound error
      [vs      (return-failure/compound (reverse vs) s)]))
  (match parsers
    [()  (^s (return-failure/message "empty $or" s))]
    [(p) p]
    [(ps ...)
     (^s (let loop ([vs '()] [ps ps])
           (if (eq? (car ps) :else)
             (if (null? (cdr ps))
               (error "$or - no parsers after :else")
               (loop '() (cdr ps)))     ;discard previous errors
             (receive (r v s1) ((car ps) s)
               (cond [(parse-success? r) (values r v s1)]
                     [(eq? r 'fail-error) (values r v s1)]
                     [(null? (cdr ps))
                      (if (eq? s s1)
                        (fail (acons r v vs) s1)
                        (return-failure r v s1))] ; last branch consumed input
                     [(eq? s s1) (loop (acons r v vs) (cdr ps))]
                     [else (fail (acons r v vs) s1)])))))]))

;; API
;; $fold-parsers proc seed parsers
;; $fold-parsers-right proc seed parsers
;;   Apply parsers sequentially, passing around seed value.
;;   Note: $fold-parsers can be written much simpler (only shown in
;;   recursion branch):
;;     ($let ([v (car ps)]) ($fold-parsers proc (proc v seed) (cdr ps)))
;;   but it needs to create closures at parsing time, rather than construction
;;   time.  Interestingly, $fold-parsers-right can be written simply
;;   without this disadvantage.
(define ($fold-parsers proc seed ps)
  (if (null? ps)
    ($return seed)
    (lambda (s)
      (let loop ((s s) (ps ps) (seed seed))
        (if (null? ps)
          (return-result seed s)
          (receive (r1 v1 s1) ((car ps) s)
            (if (parse-success? r1)
              (loop s1 (cdr ps) (proc v1 seed))
              (return-failure r1 v1 s1))))))))

;; API
(define ($fold-parsers-right proc seed ps)
  (match ps
    [()       ($return seed)]
    [(p . ps) ($lift proc p ($fold-parsers-right proc seed ps))]))

;; API
;; $seq P ... Pz
;;   Matches P ... Pz sequentially, and returns the result of Pz.
;;   To get all the results of p1, p2, ... in a list, use $lift list p1 p2 ...
(define ($seq . parsers)
  ($fold-parsers (^[v s] v) #f parsers))

;; API
;; $seq0 P0 P ...
;;   Matches P0 P ..., and returns the result of P.
(define ($seq0 parse . followers)
  (apply $lift (^[v . _] v) parse followers))

;; API
;; $list P ...
;; $list* P ...
;;   Same as ($lift list P ...) and ($list list* P ...), but we see them
;;   a lot, so it's worth to have them.
(define-inline ($list . parsers) (apply $lift list parsers))
(define-inline ($list* . parsers) (apply $lift list* parsers))

;; API
;; $try parser
;;   Try to match parsers.  If it fails, backtrack to
;;   the starting position of the stream.  So,
;;    ($or ($try a)
;;         ($try b)
;;         ...)
;;   would try a, b, ... even some of them consumes the input.
(define-inline ($try p)
  (^[s0] (receive (r v s) (p s0)
           (cond [(parse-success? r) (return-result v s)]
                 [(eq? r 'fail-error) (return-failure r v s)]
                 [else (return-failure r v s0)]))))

;; API
;; $assert parser
;;   Match parser, but never consumes the result.
;;   On success, the value of the parser is returned.
(define-inline ($assert p)
  (^s (receive (r v s1) (p s)
        (values r v s))))

;; API
;; $not parser
;;   Succeeds when the input does not matches parser.  The value is #t.
;;   If the input matches P, unexpected failure results.
;;   Never consumes input.
(define ($not p)
  (^s (receive (r v s1) (p s)
        (if (parse-success? r)
          (return-failure/unexpect v s)
          (return-result #f s)))))

;; API
(define-syntax $lazy
  (syntax-rules ()
    [(_ parse)
     (let ((p (delay parse)))
       (lambda (s) ((force p) s)))]))

;; alternative $lazy possibility (need benchmark!)
;(define-syntax $lazy
;  (syntax-rules ()
;    ((_ parse)
;     (letrec ((p (lambda (s) (set! p parse) (p s))))
;       (lambda (s) (p s))))))

;; Utility
(define (%check-min-max min max)
  (when (or (negative? min)
            (and max (> min max)))
    (error "invalid argument:" min max)))

;; API
;; $many p :optional min max
;; $many_ p :optional min max
;; $many1 p :optional max
;; $many1_ p :optional max
(define-inline ($many parse :optional (min 0) (max #f))
  (%check-min-max min max)
  (lambda (s)
    (let loop ([vs '()] [s s] [count 0])
      (if (>=? count max)
        (return-result (reverse! vs) s)
        (receive (r v s1) (parse s)
          (cond [(parse-success? r) (loop (cons v vs) s1 (+ count 1))]
                [(and (eq? s s1) (<= min count))
                 (return-result (reverse! vs) s1)]
                [else (return-failure r v s1)]))))))

(define-inline ($many_ parse :optional (min 0) (max #f))
  (%check-min-max min max)
  (lambda (s)
    (let loop ([s s] [count 0])
      (if (>=? count max)
        (return-result #t s)
        (receive (r v s1) (parse s)
          (cond [(parse-success? r) (loop s1 (+ count 1))]
                [(and (eq? s s1) (<= min count))
                 (return-result #t s1)]
                [else (return-failure r v s1)]))))))

(define-inline ($many1 parse :optional (max #f)) ($many parse 1 max))
(define-inline ($many1_ parse :optional (max #f)) ($many_ parse 1 max))

;; API
;; $repeat p n
;; $repeat_ p n
;;   Exactly n time of P.  Same as ($many p n n)
(define ($repeat parse n) ($many parse n n))
(define ($repeat_ parse n) ($many_ parse n n))

;; API
;; $many-till P E :optional min max
;; $many-till_ P E :optional min max
(define ($many-till parse end . args)
  (apply $many ($seq ($not end) parse) args))
(define ($many-till_ parse end . args)
  (apply $many_ ($seq ($not end) parse) args))

;; API
;; $optional p :optional fallback
;;   Try P.  If not match, use FALLBACK as the value.
;;   Does not backtrack by default; if P may consume some input and
;;   you want to backtrack later, wrap it with $try.
(define ($optional parse :optional (fallback #f))
  ($or parse ($return fallback)))

;; API
;; $sep-by p sep :optional min max
;;   P sparated by SEP, e.g. P SEP P SEP P.  Returns list of values of P.
;;   If SEP consumes input then fails, or the following P fails, then the
;;   entire $sep-by fails.
(define ($sep-by parse sep :optional (min 0) (max #f))
  (define rep
    ($let ([x parse]
           [xs ($many ($seq sep parse)
                      (clamp (- min 1) 0)
                      (and max (- max 1)))])
      ($return (cons x xs))))
  (cond
   [(and max (zero? max)) ($return '())]
   [(> min 0) rep]
   [else ($or rep ($return '()))]))

;; API
;; $end-by p sep :optional min max
;;   Matches repetition of P SEP.  Returns a list of values of P.
;;   This one doesn't set backtrack point, so for example the input is
;;   P SEP P SEP P Q, the entire match fails.
(define ($end-by parse sep . args)
  (apply $many ($try ($let ([v parse] sep) ($return v))) args))

;; API
;; $sep-end-by p sep min max
;;   The last SEP is optional.  The definition is a bit involved
;;   for performance.
(define ($sep-end-by parse sep :optional (min 0) (max #f))
  (%check-min-max min max)
  (^s (let loop ([vs '()] [s s] [count 0])
        (if (>=? count max)
          (return-result (reverse vs) s)
          (receive (r v s.) (parse s)
            (cond [(parse-success? r)
                   (receive (r. v. s..) (sep s.)
                     (cond [(parse-success? r.)
                            (loop (cons v vs) s.. (+ count 1))]
                           [(and (eq? s.. s.) (<= min (+ count 1)))
                            (return-result (reverse (cons v vs)) s.)]
                           [else (return-failure r. v. s..)]))]
                  [(and (eq? s s.) (<= min count))
                   (return-result (reverse vs) s)]
                  [else (return-failure r v s.)]))))))

;; API
;; $between A B C
;;   Matches A B C, and returns the result of B.
(define ($between open parse close)
  ($let (open [v parse] close) ($return v)))

;; API
;; $chain-left P OP
(define ($chain-left parse op)
  (lambda (st)
    (receive (r v s) (parse st)
      (if (parse-success? r)
        (let loop ([r1 r] [v1 v] [s1 s])
          (receive (r2 v2 s2) (($let ([proc op] [v parse])
                                 ($return (proc v1 v)))
                               s1)
            (if (parse-success? r2)
              (loop r2 v2 s2)
              (return-failure r1 v1 s1))))
        (return-failure r v s)))))

;; API
;; $chain-right P OP
(define ($chain-right parse op)
  (rec (loop s)
    (($let ([h parse])
       ($or ($try ($let ([proc op]
                         [t loop])
                    ($return (proc h t))))
            ($return h)))
     s)))

;; API
;; $satisfy PRED EXPECT [RESULT])
;;   - Returns a parser such that ...
;;   - If the head of input stream satisfies PRED,
;;     call (RESULT head (PRED head)) and let its result
;;     as the value of successulf parsing.
;;   - Otherwise, returns failure with EXPECT as the expected input.
(define-inline ($satisfy pred expect :optional (result #f))
  (^s (if-let1 v (and (pair? s) (pred (car s)))
        (return-result (if result
                         (result (car s) v)
                         (car s))
                       (cdr s))
        (return-failure/expect expect s))))

;; API
;; $match1 PATTERN [(=> FAIL)] [RESULT]
;; $match1* PATTERN [(=> FAIL)] [RESULT]
;;   - Run util.match#match against the input stream.
;;   - $match1 takes one item from stream and see if it matches
;;     with PATTERN.
;;   - $match1* applys PATTERN on the entire input stream.
;;   - If matched, RESULT is evaluated in the environment where pattern
;;     variables in PATTERN are bound, and its result becomes the result
;;     value of the parser.
;;   - If RESULT is omitted, the matched item is returned.
;;   - If (=> FAIL) is given, FAIL (must be an identifier) is bound to
;;     a closure to be called (FAIL message) to return a failure.
;;     NB: Unlinke the (=> FAIL) in match (util.match), FAIL is not
;;     a continuation but just a procedure, so it must be called at
;;     the tail position of RESULT.

(define-syntax $match1*
  (er-macro-transformer
   (^[f r c]
     (define (=>? x) (c (r'=>) (r x)))
     (define fail-mark (gensym))
     (define (build-fail-decl fail)
       (if fail
         (quasirename r
           `((define (,fail msg) (cons ',fail-mark msg))))
         '()))
     (define (build-return result fail tail)
       (if fail
         (quasirename r
           `(let ((r ,result))
              (if (and (pair? r) (eq? (car r) ',fail-mark))
                (return-failure/message (cdr r) s)
                (return-result r ,tail))))
         (quasirename r
           `(return-result ,result ,tail))))
     ;; If pat is (x ...), add a rest var: (x ... . rest)
     ;; Returns the pattern and the rest var.
     (define (make-match-pattern pat)
       (if (pair? pat)
         (if (null? (cdr (last-pair pat)))
           (let1 rest (gensym)
             (values (append pat rest) rest))
           (values pat '()))
         (values pat '())))
     (define (build-parser pat result fail)
       (receive (match-pat tail) (make-match-pattern pat)
         (quasirename r
           `(lambda (s)
              ,@(build-fail-decl fail)
              (match s
                [,match-pat ,(build-return result fail tail)]
                [_ (return-failure/expect ,(write-to-string pat) s)])))))
     (match f
       [(_ pat ((? =>?) fail) result)
        (build-parser pat result fail)]
       [(_ pat result)
        (build-parser pat result #f)]
       [(_ pat)
        (build-parser pat
                      (if-let1 n (length+ pat)
                        (quasirename r
                          `(take s ,n))
                        (r 's))
                      #f)]))))

(define-syntax $match1
  (er-macro-transformer
   (^[f r c]
     (define (=>? x) (c (r'=>) (r x)))
     (define fail-mark (gensym))
     (define (build-fail-decl fail)
       (if fail
         (quasirename r
           `((define (,fail msg) (cons ',fail-mark msg))))
         '()))
     (define (build-return result fail)
       (if fail
         (quasirename r
           `(let ((r ,result))
              (if (and (pair? r) (eq? (car r) ',fail-mark))
                (return-failure/message (cdr r) s)
                (return-result r (cdr s)))))
         (quasirename r
           `(return-result ,result (cdr s)))))
     (define (build-parser pat result fail)
       (quasirename r
         `(lambda (s)
            ,@(build-fail-decl fail)
            (if (pair? s)
              (match (car s)
                [,pat ,(build-return result fail)]
                [_ (return-failure/expect ,(write-to-string pat) s)])
              (return-failure/expect ,(write-to-string pat) s)))))
     (match f
       [(_ pat ((? =>?) fail) result)
        (build-parser pat result fail)]
       [(_ pat result)
        (build-parser pat result #f)]
       [(_ pat)
        (build-parser pat (quasirename r `(car s)) #f)]
       ))))

;; $binding  <peg-bind-expression> ... [(=> FAIL)] <body>
;; $lbinding <peg-bind-expression> ... [(=> FAIL)] <body>
;;   EXPERIMENTAL
;;   <peg-bind-expression> is an expression that yields a parser,
;;   but allowed to contain a form ($: var <peg-bind-expression>).
;;   When inner <peg-bind-expression> accepts an input, its semantic
;;   value is set to var.
;;
;;   The parser runs as if ($seq <peg-bind-expression> ...), then
;;   if it succeeds, evaluate <body> with all such
;;   vars to be bound.  If a branch of <peg-bind-expression> isn't
;;   tried, vars included in it is bound to #<undef>.
;;
;;   $lbinding is similar to $binding, except that it behaves as if
;;   entire expression is enclosed in $lazy.
;;
;;   An obvious translation is to create an enclosing scope, binds all
;;   vars to some default value, and convert ($: var expr) to
;;   ($lift (^x (set! var x) x) expr).  However, it causes allocation
;;   of closures for each parser combinator every time the entire parser
;;   is called, which incurs performance overhead.
;;
;;   Instead we rely on dynamic environment.  All closure allocation is
;;   static.  The main parser sets up a vector for the storage in a parameter,
;;   and each $: form store the value to the corresponding slot.
;;   If match succeeds, the stored values are retrieved and bound to VARs.
;;
;;   If (=> FAIL) form is given, FAIL, which should be an identifier, is
;;   bound to a closure that can be called as (FAIL message).  If you
;;   determine that the parser should fail inside <body>, you can call FAIL
;;   at a tail position, with a suitable message.
;;
;;   Limitation - since $binding walks code, it can't be statically nested.

(define %binding-storage
  (make-parameter 'accessing-binding-storage-out-of-context))

(define-syntax $lbinding
  (syntax-rules ()
    ([_ x ...] ($lazy ($binding x ...)))))

(define-syntax $binding
  (er-macro-transformer
   (^[f r c]
     (define $:? (let1 $:. (r'$:) (^x (c $:. (r x)))))
     (define =>? (let1 =>. (r'=>) (^x (c =>. (r x)))))
     (define fail-mark (gensym))
     ;; walk down form, gather variables and modify $: forms.
     ;; returns modified form and list of (var . index)
     (define (walk f vs)
       (match f
         [((? $:?) var expr)
          (unless (identifier? var)
            (error "($: var expr) form requires an identifier as var, but got:"
                   var))
          (receive (expr_ vs) (walk expr vs)
            (receive (vs ind) (add-var var vs)
              (values (quasirename r
                        `($lift (^[x] (set! (vector-ref (%binding-storage) ,ind) x) x)
                                ,expr_))
                      vs)))]
         [(xs ...) (map-accum walk vs xs)]
         [obj (values obj vs)]))
     (define (add-var var vs) ; returns var-alist and index
       (if-let1 p (assq var vs)
         (values vs (cdr p))
         (let1 ind (length vs)
           (values (acons var ind vs) ind))))
     (define (build-fail-decl fail)
       (if fail
         (quasirename r
           ;; NB: We can't optimize dynamically created case-lambda yet.
           ;; `((define ,fail
           ;;     (case-lambda
           ;;       ((msg) (list* ',fail-mark #f msg))
           ;;       ((tag msg) (list* ',fail-mark tag msg)))))
           ;; With the following definition, the branch is likely
           ;; to be optimized out when call to fail is inlined:
           `((define (,fail a . b)
               (if (null? b)
                 (list* ',fail-mark #f a) ;a=msg
                 (list* ',fail-mark a (car b)))))) ;a=tag, (car b)=msg
         '()))
     (define (build-return result fail tail)
       (if fail
         (quasirename r
           `(let ((r ,result))
              (if (and (pair? r) (eq? (car r) ',fail-mark))
                (if (symbol? (cadr r))
                  (return-error-from-failure (cadr r) 'fail-message (cddr r) s)
                  (return-failure/message (cddr r) s))
                (return-result r ,tail))))
         (quasirename r
           `(return-result ,result ,tail))))

     (define (build-parser parsers vs body fail)
       (quasirename r
         `(let ([parser ($seq ,@parsers)])
            (^[s]
              ,@(build-fail-decl fail)
              (let1 storage (make-vector ,(length vs))
                (parameterize ((%binding-storage storage))
                  (receive (rr v s) (parser s)
                    (if (parse-success? rr)
                      ,(build-return
                        (quasirename r
                          `(let ,(map
                                  (^p (let ([var (car p)]
                                            [ind (cdr p)])
                                        (quasirename r
                                          `(,var (vector-ref storage ,ind)))))
                                  vs)
                             ,body))
                        fail
                        (r's))
                      (return-failure rr v s)))))))))

     ;; optimization - if all the variable binding form is in the first level,
     ;; e.g.
     ;;   ($binding ($: x parser1)
     ;;             ($: y parser2)
     ;;             body)
     ;; We can simply use $lift.
     ;;   ($lift (lambda (x y) body) parser1 parser2)
     ;; This saves setting up value vector.
     ;; NB: we can't do this optimization if (=> fail) is used.

     ;; check if lift optimization is possible.  note that duplicate vars
     ;; are allowed, but that can be detected with the following, for
     ;; vars are deduped.
     (define (liftable? first-level-parsers vars)
       (= (length vars)
          (count (^p (match p
                       [((? $:?) v _) #t]
                       [_ #f]))
                 first-level-parsers)))

     (define (build-lift-form first-level-parsers body)
       ;; ((var . parser) ...).
       (define vars&parsers (map (^p (match p
                                       [((? $:?) v p) `(,v . ,p)]
                                       [p `(,(gensym) . ,p)]))
                                 first-level-parsers))
       (quasirename r
         `($lift (lambda ,(map car vars&parsers) ,body)
                 ,@(map cdr vars&parsers))))

     (define (bad) (error "Malformed $binding:" f))

     (let loop ([forms (cdr f)] [ps '()])
       (match forms
         [(((? =>?) fail) body)
          (receive (parsers. vars) (walk (reverse ps) '())
            (build-parser parsers. vars body fail))]
         [(((? =>?) fail) body ...) (bad)]
         [(body)
          (receive (parsers. vars) (walk (reverse ps) '())
            (if (liftable? ps vars)
              (build-lift-form (reverse ps) body)
              (build-parser parsers. vars body #f)))]
         [(parser . rest) (loop rest (cons parser ps))]
         [() (bad)])))))

;;;============================================================
;;; String parsers
;;;

(define-inline ($->rope parser . more-parsers)
  (if (null? more-parsers)
    ($lift make-rope parser)
    (apply $lift* make-rope parser more-parsers)))
(define-inline ($->string parser . more-parsers)
  (if (null? more-parsers)
    ($lift ($ rope->string $ make-rope $) parser)
    (apply $lift* ($ rope->string $ make-rope $) parser more-parsers)))
(define-inline ($->symbol parser . more-parsers)
  (if (null? more-parsers)
    ($lift ($ string->symbol $ rope->string $ make-rope $) parser)
    (apply $lift* ($ string->symbol $ rope->string $ make-rope $)
           parser more-parsers)))

(define (rope-finalize obj)
  (cond [(rope? obj) (rope->string obj)]
        [(pair? obj)
         (let ((ca (rope-finalize (car obj)))
               (cd (rope-finalize (cdr obj))))
           (if (and (eq? ca (car obj)) (eq? cd (cdr obj)))
             obj
             (cons ca cd)))]
        [else obj]))

;; NB: On success, we know the matched input is the same as STR,
;; so we don't need to bother to collect matched chars.
(define-inline ($string str)
  (if (= (string-length str) 1)
    (let1 ch (string-ref str 0)
      (^s
        (if (and (pair? s) (eqv? (car s) ch))
          (return-result str (cdr s))
          (return-failure/expect str s))))
    (let1 lis (string->list str)
      (^[s0]
        (let loop ([s s0] [lis lis])
          (if (null? lis)
            (return-result str s)
            (if (and (pair? s) (eqv? (car s) (car lis)))
              (loop (cdr s) (cdr lis))
              (return-failure/expect str s0))))))))

(define ($string-ci str)
  (let1 lis (string->list str)
    (^[s0]
      (let loop ([r '()] [s s0] [lis lis])
        (if (null? lis)
          (return-result (make-rope (reverse! r)) s)
          (if (and (pair? s)
                   (char? (car s))
                   (char-ci=? (car s) (car lis)))
            (loop (cons (car s) r) (cdr s) (cdr lis))
            (return-failure/expect str s0)))))))

(define-inline ($char c)
  (assume-type c <char>)
  ($satisfy (cut eqv? c <>) c))

(define ($char-ci c)
  (assume-type c <char>)
  ($satisfy (^x (and (char? x) (char-ci=? c x)))
            (list->char-set c (char-upcase c) (char-downcase c))))

;; Anything except end of stream.
(define-inline ($any)
  (^s (if (pair? s)
        (return-result (car s) (cdr s))
        (return-failure/unexpect "end of input" s))))

(define-inline ($eos)
  (^s (if (pair? s)
        (return-failure/expect "end of input" s)
        (return-result (eof-object) s))))

;; Parse one item---a char, a string or a charset.
(define-inline ($. item)
  (cond
   [(char-set? item) ($one-of item)]
   [(char? item) ($char item)]
   [(string? item) ($string item)]
   [(symbol? item) ($satisfy (cut eq? <> item) item)]
   [else (error "Bad item: $. requires a char, a char-set, a string, \
                 or a symbol, but got:" item)]))

(define-hybrid-syntax $one-of
  (^[items]
    (cond
     [(char-set? items)
      ($satisfy (^x (and (char? x) (char-set-contains? items x)))
                items)]
     [(list? items) ($expect (apply $or (map $. items)) items)]
     [else (error "$one-of requires a charset or a list of items, \
                   but got:" items)]))
  (er-macro-transformer
   (^[f r c]
     (match f
       [(_ (? char-set? items))
        (quasirename r
          `($satisfy (^[x] (and (char? x) (char-set-contains? ,items x)))
                     ',items))]
       [(_ ('quote (items ...)))
        (if (every (^x (or (char? x) (symbol? x))) items)
          (quasirename r
            `($satisfy (^[x] (memv x ',items)) ',items))
          f)]
       [_ f]))))

;; NB: $none-of can't be generalized like $one-of, for the value to return
;; on success is ambiguous except the case we're matching a single character.
;; The asymmetry doesn't look good... we may drop $none-of in future.
(define ($none-of charset)
  (assume-type charset <char-set>)
  ($satisfy (^x (or (not (char? x)) (not (char-set-contains? charset x))))
            `(none-of ,charset)))
