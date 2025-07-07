;;
;; test util modules
;;

(use gauche.test)
(test-start "util")

(use scheme.list)

;;-----------------------------------------------
(test-section "util.match")
(use util.match)
(test-module 'util.match)
(test* "match (quasiquote + empty-vector)"
       #t
       (match '#() (`#() #t) (_ #f)))
(test* "match (quasi-pattern + vector)"
       '(3 1 2)
       (match '#(1 2 3) (`#(,a ,b ,c) (list c a b)) (_ #f)))
(test* "match (quasi-pattern + ellipsis + vector)"
       '(1 2 3)
       (match '#(1 2 3) (`#(,a ...) a) (_ #f)))

;;-----------------------------------------------
(test-section "util.combinations")
(use util.combinations)
(test-module 'util.combinations)

(test* "permutations (boundary)" '(())
       (permutations '()))
(test* "permutations (boundary)" '((a))
       (permutations '(a)))
(test* "permutations" '((a b) (b a))
       (permutations '(a b)))
(test* "permutations" '((a a) (a a))
       (permutations '(a a)))
(test* "permutations" '((a b c) (a c b) (b a c) (b c a) (c a b) (c b a))
       (permutations '(a b c)))
(test* "permutations" '((a b c d) (a b d c) (a c b d) (a c d b)
                        (a d b c) (a d c b) (b a c d) (b a d c)
                        (b c a d) (b c d a) (b d a c) (b d c a)
                        (c a b d) (c a d b) (c b a d) (c b d a)
                        (c d a b) (c d b a) (d a b c) (d a c b)
                        (d b a c) (d b c a) (d c a b) (d c b a))
       (permutations '(a b c d)))

(test* "permutations* (boundary)" '(())
       (permutations* '()))
(test* "permutations* (boundary)" '((a))
       (permutations* '(a)))
(test* "permutations*" '((a b) (b a))
       (permutations* '(a b)))
(test* "permutations*" '((a a))
       (permutations* '(a a)))
(test* "permutations*" '((a b c) (a c b) (b a c) (b c a) (c a b) (c b a))
       (permutations* '(a b c)))
(test* "permutations*" '((a a b) (a b a) (b a a))
       (permutations* '(a a b)))
(test* "permutations*" '((a b a) (a a b) (b a a))
       (permutations* '(a b a)))
(test* "permutations*" '((b a a) (a b a) (a a b))
       (permutations* '(b a a)))
(test* "permutations*" '((a a a))
       (permutations* '(a a a)))
(test* "permutations*" '((a b c d) (a b d c) (a c b d) (a c d b)
                         (a d b c) (a d c b) (b a c d) (b a d c)
                         (b c a d) (b c d a) (b d a c) (b d c a)
                         (c a b d) (c a d b) (c b a d) (c b d a)
                         (c d a b) (c d b a) (d a b c) (d a c b)
                         (d b a c) (d b c a) (d c a b) (d c b a))
       (permutations* '(a b c d)))
(test* "permutations*" '((a a b c) (a a c b) (a b a c) (a b c a)
                         (a c a b) (a c b a) (b a a c) (b a c a)
                         (b c a a) (c a a b) (c a b a) (c b a a))
       (permutations* '(a a b c)))
(test* "permutations*" '((a b a c) (a b c a) (a a b c) (a a c b)
                         (a c b a) (a c a b) (b a a c) (b a c a)
                         (b c a a) (c a b a) (c a a b) (c b a a))
       (permutations* '(a b a c)))
(test* "permutations*" '((a b c a) (a b a c) (a c b a) (a c a b)
                         (a a b c) (a a c b) (b a c a) (b a a c)
                         (b c a a) (c a b a) (c a a b) (c b a a))
       (permutations* '(a b c a)))
(test* "permutations*" '((a b a b) (a b b a) (a a b b)
                         (b a a b) (b a b a) (b b a a))
       (permutations* '(a b a b)))
(test* "permutations*" '((a a a b) (a a b a) (a b a a) (b a a a))
       (permutations* '(a a a b)))
(test* "permutations*" '((a b a a) (a a b a) (a a a b) (b a a a))
       (permutations* '(a b a a)))
(test* "permutations*" '((a a a a))
       (permutations* '(a a a a)))

(test* "permutations*" '(("a" "b" "b" "a") ("a" "b" "a" "b") ("a" "a" "b" "b")
                         ("b" "a" "b" "a") ("b" "a" "a" "b") ("b" "b" "a" "a"))
       (permutations* '("a" "b" "b" "a") string=?))

(test* "permutations-for-each"
       '()
       (let1 r '()
         (permutations-for-each (^p (push! r p)) '())
         (reverse r)))
(test* "permutations-for-each"
       '((a))
       (let1 r '()
         (permutations-for-each (^p (push! r p)) '(a))
         (reverse r)))
(test* "permutations-for-each"
       '((a b c) (a c b) (b a c) (b c a) (c a b) (c b a))
       (let1 r '()
         (permutations-for-each (^p (push! r p)) '(a b c))
         (reverse r)))
(test* "permutations*-for-each"
       '()
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '())
         (reverse r)))
(test* "permutations*-for-each"
       '((a))
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '(a))
         (reverse r)))
(test* "permutations*-for-each"
       '((a b c) (a c b) (b a c) (b c a) (c a b) (c b a))
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '(a b c))
         (reverse r)))
(test* "permutations*-for-each"
       '((a a b) (a b a) (b a a))
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '(a a b))
         (reverse r)))
(test* "permutations*-for-each"
       '((a a a))
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '(a a a))
         (reverse r)))
(test* "permutations*-for-each"
       '(("a" "a" "b") ("a" "b" "a") ("b" "a" "a"))
       (let1 r '()
         (permutations*-for-each (^p (push! r p)) '("a" "a" "b")
                                 string=?)
         (reverse r)))

(test* "combinations" '(())
       (combinations '() 0))
(test* "combinations" '((a))
       (combinations '(a) 1))
(test* "combinations" '((a) (b) (c) (d))
       (combinations '(a b c d) 1))
(test* "combinations" '((a b) (a c) (b c))
       (combinations '(a b c) 2))
(test* "combinations" '((a b c))
       (combinations '(a b c) 3))
(test* "combinations" '((a b c) (a b d) (a c d) (b c d))
       (combinations '(a b c d) 3))

(test* "combinations*" '(())
       (combinations* '() 0))
(test* "combinations*" '((a))
       (combinations* '(a) 1))
(test* "combinations*" '((a) (b) (c) (d))
       (combinations* '(a b c d) 1))
(test* "combinations*" '((a b) (a c) (b c))
       (combinations* '(a b c) 2))
(test* "combinations*" '((a b c))
       (combinations* '(a b c) 3))
(test* "combinations*" '((a b c) (a b d) (a c d) (b c d))
       (combinations* '(a b c d) 3))
(test* "combinations*" '((a) (b))
       (combinations* '(a a b) 1))
(test* "combinations*" '((a a) (a b))
       (combinations* '(a a b) 2))
(test* "combinations*" '((a a b))
       (combinations* '(a a b) 3))
(test* "combinations*" '((a b) (a a))
       (combinations* '(a b a a) 2))
(test* "combinations*" '((a b a) (a a a))
       (combinations* '(a b a a) 3))
(test* "combinations*" '((a b b) (a b a))
       (combinations* '(a b b a) 3))
(test* "combinations*" '(("a" "b" "b") ("a" "b" "a"))
       (combinations* '("a" "b" "b" "a") 3 string=?))

(test* "combinations-for-each" '(())
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '() 0)
         (reverse! r)))
(test* "combinations-for-each" '((a))
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '(a) 1)
         (reverse! r)))
(test* "combinations-for-each" '((a) (b) (c) (d))
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '(a b c d) 1)
         (reverse! r)))
(test* "combinations-for-each" '((a b) (a c) (b c))
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '(a b c) 2)
         (reverse! r)))
(test* "combinations-for-each" '((a b c))
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '(a b c) 3)
         (reverse! r)))
(test* "combinations-for-each" '((a b c) (a b d) (a c d) (b c d))
       (let1 r '()
         (combinations-for-each (^c (push! r c)) '(a b c d) 3)
         (reverse! r)))

(test* "combinations*-for-each" '(())
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '() 0)
         (reverse! r)))
(test* "combinations*-for-each" '((a))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a) 1)
         (reverse! r)))
(test* "combinations*-for-each" '((a) (b) (c) (d))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b c d) 1)
         (reverse! r)))
(test* "combinations*-for-each" '((a b) (a c) (b c))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b c) 2)
         (reverse! r)))
(test* "combinations*-for-each" '((a b c))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b c) 3)
         (reverse! r)))
(test* "combinations*-for-each" '((a b c) (a b d) (a c d) (b c d))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b c d) 3)
         (reverse! r)))
(test* "combinations*-for-each" '((a) (b))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a a b) 1)
         (reverse! r)))
(test* "combinations*-for-each" '((a a) (a b))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a a b) 2)
         (reverse! r)))
(test* "combinations*-for-each" '((a a b))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a a b) 3)
         (reverse! r)))
(test* "combinations*-for-each" '((a b) (a a))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b a a) 2)
         (reverse! r)))
(test* "combinations*-for-each" '((a b a) (a a a))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b a a) 3)
         (reverse! r)))
(test* "combinations*-for-each" '((a b b) (a b a))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '(a b b a) 3)
         (reverse! r)))
(test* "combinations*-for-each" '(("a" "b" "b") ("a" "b" "a"))
       (let1 r '()
         (combinations*-for-each (^c (push! r c)) '("a" "b" "b" "a") 3
                                 string=?)
         (reverse! r)))

(test* "power-set-binary" '(())
       (power-set-binary '()))
(test* "power-set-binary" '(() (a))
       (power-set-binary '(a)))
(test* "power-set-binary" '(() (c) (b) (b c) (a) (a c) (a b) (a b c))
       (power-set-binary '(a b c)))

(test* "power-set" '(())
       (power-set '()))
(test* "power-set" '(() (a))
       (power-set '(a)))
(test* "power-set" '(() (a) (b) (c) (a b) (a c) (b c) (a b c))
       (power-set '(a b c)))

(test* "power-set*" '(())
       (power-set* '()))
(test* "power-set*" '(() (a))
       (power-set* '(a)))
(test* "power-set*" '(() (a) (b) (a a) (a b) (a a b))
       (power-set* '(a a b)))
(test* "power-set*" '(() ("a") ("b") ("a" "a") ("a" "b") ("a" "a" "b"))
       (power-set* '("a" "a" "b") string=?))

(test* "power-set-for-each" '(())
       (let1 r '()
         (power-set-for-each (^s (push! r s)) '())
         (reverse! r)))
(test* "power-set-for-each" '(() (a))
       (let1 r '()
         (power-set-for-each (^s (push! r s))  '(a))
         (reverse! r)))
(test* "power-set-for-each" '(() (a) (b) (c) (a b) (a c) (b c) (a b c))
       (let1 r '()
         (power-set-for-each (^s (push! r s))  '(a b c))
         (reverse! r)))

(test* "power-set*-for-each" '(())
       (let1 r '()
         (power-set*-for-each (^s (push! r s)) '())
         (reverse! r)))
(test* "power-set*-for-each" '(() (a))
       (let1 r '()
         (power-set*-for-each (^s (push! r s))  '(a))
         (reverse! r)))
(test* "power-set*-for-each" '(() (a) (b) (a a) (a b) (a a b))
       (let1 r '()
         (power-set*-for-each (^s (push! r s))  '(a a b))
         (reverse! r)))
(test* "power-set*-for-each" '(() ("a") ("b") ("a" "a") ("a" "b") ("a" "a" "b"))
       (let1 r '()
         (power-set*-for-each (^s (push! r s))  '("a" "a" "b")
                              string=?)
         (reverse! r)))

(test* "cartesian-product" '((a 0) (a 1) (b 0) (b 1) (c 0) (c 1))
       (cartesian-product '((a b c) (0 1))))
(test* "cartesian-product" '((a 0 0) (a 0 1) (a 1 0) (a 1 1)
                             (b 0 0) (b 0 1) (b 1 0) (b 1 1))
       (cartesian-product '((a b) (0 1) (0 1))))
(test* "cartesian-product-right" '((a 0) (b 0) (c 0) (a 1) (b 1) (c 1))
       (cartesian-product-right '((a b c) (0 1))))
(test* "cartesian-product-right" '((a 0 0) (b 0 0) (a 1 0) (b 1 0)
                                   (a 0 1) (b 0 1) (a 1 1) (b 1 1))
       (cartesian-product-right '((a b) (0 1) (0 1))))

;;-----------------------------------------------
(test-section "util.dominator")
(use util.dominator)
(test-module 'util.dominator)

(let ((graph1 '((a b c)
                (b d)
                (c d)
                (d e f)
                (e h)
                (f g)
                (g d h)
                (h j k)
                (i h)
                (j l)
                (k l))))
  (test* "dominators"
         '((l h) (j h) (k h) (h d) (e d) (g f) (f d) (d a) (b a) (c a))
         ($ calculate-dominators 'a
            (^n (filter-map (^g (and (memq n (cdr g)) (car g))) graph1))
            (^n (assoc-ref graph1 n '()))
            eq-comparator)))

;;-----------------------------------------------
(test-section "util.identifier-syntax")

(define-module test-identifier-syntax
  (use gauche.test)
  (use util.identifier-syntax)
  (test-module 'util.identifier-syntax)

  (define p (cons 4 5))
  (define-syntax p.car (identifier-syntax (car p)))
  (test* "identifier-syntax form 1" 4 p.car)

  (test* "identifier-syntax form 1 no set!"
         (test-error <error> #/id macro can't be used with set!/i)
         (eval '(set! p.car 99) (current-module)))

  (let ((p (cons 6 7)))
    (test* "identifier-syntax hygiene" 4 p.car))

  (define-syntax p.cdr (identifier-syntax
                        [_ (cdr p)]
                        [(set! _ expr) (set-cdr! p expr)]))
  (test* "identifier-sytnax form 2" 5 p.cdr)
  (test* "identidier-syntax set!" '(4 . 99)
         (begin
           (set! p.cdr 99)
           p))
  (let ((p (cons 6 7)))
    (set! p.cdr 101)
    (test* "identifier-syntax hygiene" 101 p.cdr))

  (let ((p (cons 8 9)))
    (let-syntax ([p.cdr (identifier-syntax
                         [_ (cdr p)]
                         [(set! _ expr) (set-cdr! p (+ 1 expr))])])
      (let ((p (cons 0 1)))
        (set! p.cdr 9999)
        (test* "local identifier syntax hygine" '(0 . 1) p)
        (test* "local identifier syntax hygine" 10000 p.cdr))
      (test* "local identifier syntax hygine" '(8 . 10000) p)))
  (test* "local identifier syntax hygine" '(4 . 101) p)
  )

;;-----------------------------------------------
(test-section "util.isomorph")
(use util.isomorph)
(test-module 'util.isomorph)

(define-class <isomorph-test> ()
  ((a :init-keyword :a)
   (b :init-keyword :b)))

(define-method object-isomorphic? ((x <isomorph-test>)
                                   (y <isomorph-test>)
                                   context)
  (and (isomorphic? (ref x 'a) (ref y 'a) context)
       (isomorphic? (ref x 'b) (ref y 'b) context)))

(define (make-data type)
  (let* ((z (vector #f #f #f #f))
         (x (circular-list "a" 'b 4 9845938427094857239485 #\z 8+5i z))
         (y (circular-list "a" 'b 4 9845938427094857239485 #\z 8+5i z))
         (w (make <isomorph-test> :a z)))
    (vector-set! z 0 x)
    (vector-set! z 1 y)
    (vector-set! z 2 w)
    (slot-set! w 'b w)
    (if type (vector-set! z 3 x) (vector-set! z 3 y))
    z))

(test* "isomorphic?" #t
       (isomorphic? (make-data #f) (make-data #f)))
(test* "isomorphic?" #f
       (isomorphic? (make-data #t) (make-data #f)))

;;-----------------------------------------------
(test-section "util.lcs")
(use util.lcs)
(test-module 'util.lcs)

(test* "lcs skip" '(a c)
       (lcs '(a b c) '(a c)))

(test* "lcs head" '(a b)
       (lcs '(a b c) '(a b)))

(test* "lcs tail" '(b c)
       (lcs '(a b c) '(b c)))

(test* "lcs same" '(a b c)
       (lcs '(a b c) '(a b c)))

(test* "lcs no common" '()
       (lcs '(a b c) '(x y z)))

(test* "lcs empty" '()
       (lcs '(a b c) '()))

(test* "lcs mislead" '(a x b y c z)
       (lcs '(a x b y c z p d q) '(a b c a x b y c z)))

(test* "lcs mislead count"
       '(6 ((a 0 0) (x 1 4) (b 2 5) (y 3 6) (c 4 7) (z 5 8)))
       (lcs-with-positions '(a x b y c z p d q) '(a b c a x b y c z)))

(let1 z (iota 200)
  (test* "lcs (long, same)" #t (equal? z (lcs z z)))
  (test* "lcs (long, none)" '(199) (lcs (reverse z) z))
  (test* "lcs (long)" '(0 1 2 3 4 5 6 7 8 9)
         (lcs z (apply append (make-list 10 (iota 10)))))
  (test* "lcs (long)" '(0 1 2 3 4 5 6 7 8 9)
         (lcs z (apply append (make-list 10 (iota 10 9 -1)))))
  )

(test* "lcs edit-list"
       '(((- 0 a))
         ((+ 2 d))
         ((- 4 h) (+ 4 f))
         ((+ 6 k))
         ((- 8 n) (- 9 p) (+ 9 r) (+ 10 s) (+ 11 t)))
       (lcs-edit-list '(a b c e h j l m n p)
                      '(b c d e f j k l m r s t)))

(test* "lcs edit-list"
       '(((- 0 a) (- 1 b) (- 2 c) (- 3 d) (+ 0 e) (+ 1 f) (+ 2 g) (+ 3 h)))
       (lcs-edit-list '(a b c d) '(e f g h)))

(test* "lcs edit-list"
       '()
       (lcs-edit-list '(a b c d) '(a b c d)))

(test* "lcs edit-list"
       '(((- 0 a) (- 1 b) (- 2 c) (- 3 d)))
       (lcs-edit-list '(a b c d) '()))

(test* "lcs edit-list"
       '(((+ 0 a) (+ 1 b) (+ 2 c) (+ 3 d)))
       (lcs-edit-list '() '(a b c d)))

(test* "lcs edit-list"
       '(((+ 0 b)) ((- 1 b)))
       (lcs-edit-list '(a b) '(b a)))

(test* "lcs edit-list"
       '(((- 1 b)))
       (lcs-edit-list '(a b) '(a)))

(test* "lcs edit-list"
       '(((+ 1 b)))
       (lcs-edit-list '(a) '(a b)))

(test* "lcs edit-list/context (no diff)"
       '()
       (lcs-edit-list/context '(a b c) '(a b c)))

(test* "lcs edit-list/context (a empty)"
       '(#((0 0) (0 3 (+ a) (+ b) (+ c))))
       (lcs-edit-list/context '() '(a b c)))

(test* "lcs edit-list/context (b empty)"
       '(#((0 3 (- a) (- b) (- c)) (0 0)))
       (lcs-edit-list/context '(a b c) '()))

(test* "lcs edit-list/context (deletion)"
       '(#((0 4 (= a) (- b) (= c) (= d))
           (0 3 (= a) (= c) (= d))))
       (lcs-edit-list/context '(a b c d) '(a c d)))

(test* "lcs edit-list/context (addition)"
       '(#((0 4 (= a) (= b) (= c) (= d))
           (0 5 (= a) (= b) (+ z) (= c) (= d))))
       (lcs-edit-list/context '(a b c d) '(a b z c d)))

(test* "lcs edit-list/context (change)"
       '(#((0 3 (= a) (! b) (= c)) (0 3 (= a) (! d) (= c))))
       (lcs-edit-list/context '(a b c) '(a d c)))

(test* "lcs edit-list/context size"
       '(#((3 12 (= d) (= e) (= f) (! g) (! h) (! i) (= j) (= k) (= l))
           (3 12 (= d) (= e) (= f) (! x) (! y) (! z) (= j) (= k) (= l))))
       (lcs-edit-list/context '(a b c d e f g h i j k l m n)
                              '(a b c d e f x y z j k l m n)))

(test* "lcs edit-list/context size"
       '(#((5 10 (= f) (! g) (! h) (! i) (= j))
           (5 10 (= f) (! x) (! y) (! z) (= j))))
       (lcs-edit-list/context '(a b c d e f g h i j k l m n)
                              '(a b c d e f x y z j k l m n)
                              eq? :context-size 1))

(test* "lcs edit-list/context multiple hunks"
       '(#((1 4 (= b) (! c) (= d))
           (1 5 (= b) (! C) (! C) (= d)))
         #((9 13 (= j) (- k) (- l) (= m))
           (10 12 (= j) (= m))))
       (lcs-edit-list/context '(a b c   d e f g h i j k l m n)
                              '(a b C C d e f g h i j     m n)
                              eq? :context-size 1))

(test* "lcs edit-list/context hunk merging"
       '(#((0 11 (= a) (! b) (! c) (= d) (= e) (= f) (= g) (! h) (! i) (= j) (= k))
           (0 11 (= a) (! B) (! C) (= d) (= e) (= f) (= g) (! H) (! I) (= j) (= k)))
         #((12 17 (= m) (= n) (! o) (! p) (= q))
           (12 17 (= m) (= n) (! O) (! P) (= q))))
       (lcs-edit-list/context '(a b c d e f g h i j k l m n o p q)
                              '(a B C d e f g H I j k l m n O P q)
                              eq? :context-size 2))

(test* "lcs edit-list/context boundary condition 1"
       '(#((0 5 (- a) (- b) (= c) (= d) (= e))
           (0 3 (= c) (= d) (= e)))
         #((8 11 (= i) (= j) (= k))
           (6 11 (= i) (= j) (= k) (+ l) (+ m))))
       (lcs-edit-list/context '(a b c d e f g h i j k)
                              '(c d e f g h i j k l m)))

(test* "lcs edit-list/context boundary condition"
       '(#((0 5 (! a) (! b) (= c) (= d) (= e))
           (0 4 (! B) (= c) (= d) (= e)))
         #((8 12 (= i) (= j) (= k) (! L))
           (7 12 (= i) (= j) (= k) (! l) (! m))))
       (lcs-edit-list/context '(a b c d e f g h i j k L)
                              '(B c d e f g h i j k l m)))

(test* "lcs edit-list/unified (no diff)"
       '()
       (lcs-edit-list/unified '(a b c) '(a b c)))

(test* "lcs edit-list/unified (a empty)"
       '(#(0 0 0 3 ((+ a) (+ b) (+ c))))
       (lcs-edit-list/unified '() '(a b c)))

(test* "lcs edit-list/unified (b empty)"
       '(#(0 3 0 0 ((- a) (- b) (- c))))
       (lcs-edit-list/unified '(a b c) '()))

(test* "lcs edit-list/unified (deletion)"
       '(#(0 4 0 3 ((= a) (- b) (= c) (= d))))
       (lcs-edit-list/unified '(a b c d) '(a c d)))

(test* "lcs edit-list/unified (addition)"
       '(#(0 4 0 5 ((= a) (= b) (+ z) (= c) (= d))))
       (lcs-edit-list/unified '(a b c d) '(a b z c d)))

(test* "lcs edit-list/unified (change)"
       '(#(0 3 0 3 ((= a) (- b) (+ d) (= c))))
       (lcs-edit-list/unified '(a b c) '(a d c)))

(test* "lcs edit-list/unified size"
       '(#(3 9 3 9 ((= d) (= e) (= f) (- g) (- h) (- i)
                    (+ x) (+ y) (+ z) (= j) (= k) (= l))))
       (lcs-edit-list/unified '(a b c d e f g h i j k l m n)
                              '(a b c d e f x y z j k l m n)))

(test* "lcs edit-list/unified size"
       '(#(5 5 5 5 ((= f) (- g) (- h) (- i)
                    (+ x) (+ y) (+ z) (= j))))
       (lcs-edit-list/unified '(a b c d e f g h i j k l m n)
                              '(a b c d e f x y z j k l m n)
                              eq? :context-size 1))

(test* "lcs edit-list/unified multiple hunks"
       '(#(1 3 1 4 ((= b) (- c) (+ C) (+ C) (= d)))
         #(9 4 10 2 ((= j) (- k) (- l) (= m))))
       (lcs-edit-list/unified '(a b c   d e f g h i j k l m n)
                              '(a b C C d e f g h i j     m n)
                              eq? :context-size 1))

(test* "lcs edit-list/unified hunk merging"
       '(#(0 11 0 11 ((= a) (- b) (- c) (+ B) (+ C) (= d) (= e) (= f) (= g)
                      (- h) (- i) (+ H) (+ I) (= j) (= k)))
         #(12 5 12 5 ((= m) (= n) (- o) (- p) (+ O) (+ P) (= q))))
       (lcs-edit-list/unified '(a b c d e f g h i j k l m n o p q)
                              '(a B C d e f g H I j k l m n O P q)
                              eq? :context-size 2))

(test* "lcs edit-list/unified boundary condition 1"
       '(#(0 5 0 3 ((- a) (- b) (= c) (= d) (= e)))
         #(8 3 6 5 ((= i) (= j) (= k) (+ l) (+ m))))
       (lcs-edit-list/unified '(a b c d e f g h i j k)
                              '(c d e f g h i j k l m)))

(test* "lcs edit-list/unified boundary condition"
       '(#(0 5 0 4 ((- a) (- b) (+ B) (= c) (= d) (= e)))
         #(8 4 7 5 ((= i) (= j) (= k) (- L) (+ l) (+ m))))
       (lcs-edit-list/unified '(a b c d e f g h i j k L)
                              '(B c d e f g h i j k l m)))

;;-----------------------------------------------
(test-section "util.rbtree")
(use util.rbtree)
(use gauche.sequence)
(use srfi.27)
(test-module 'util.rbtree)

(define rbtree-check
  (with-module util.rbtree rbtree-check))

(let1 tree1 #f
  (test* "make-rbtree" #t
         (begin (set! tree1 (make-rbtree = <))
                (rbtree? tree1)))
  (test* "rbtree-get" (test-error)
         (rbtree-get #f 0 'foo))
  (test* "rbtree-get" 'not-found
         (rbtree-get tree1 0 'not-found))
  (test* "rbtree-get" (test-error)
         (rbtree-get tree1 0))
  (test* "rbtree-put!" (test-error)
         (rbtree-put! #f 0 'foo))
  (test* "rbtree-put!" "0"
         (begin (rbtree-put! tree1 0 "0")
                (rbtree-get tree1 0)))
  (test* "rbtree-put!" '("0" "1")
         (begin (rbtree-put! tree1 1 "1")
                (list (rbtree-get tree1 0)
                      (rbtree-get tree1 1))))
  (test* "rbtree-put!" 'bar
         (begin (rbtree-put! tree1 2 'foo)
                (rbtree-put! tree1 2 'bar)
                (rbtree-get tree1 2)))
  (test* "rbtree-check" #t
         (rbtree-check tree1))
  (test* "rbtree-fold" '(2 bar 1 "1" 0 "0")
         (rbtree-fold tree1 list* '()))
  (test* "rbtree-fold-right" '(0 "0" 1 "1" 2 bar)
         (rbtree-fold-right tree1 list* '()))
  (test* "rbtree-delete! (exiting key)" '(#t not-found)
         (let1 r (rbtree-delete! tree1 1)
           (list r (rbtree-get tree1 1 'not-found))))
  (test* "rbtree-delete! (non-existing key)" #f
         (rbtree-delete! tree1 1))
  (test* "rbtree-delete!" 'no-error
         (begin (rbtree-delete! tree1 1)
                'no-error))
  (test* "rbtree->alist" '()
         (rbtree->alist (make-rbtree = <)))
  (test* "rbtree->alist" '((0 . "0") (1 . "1") (2 . "2"))
         (let1 tree (make-rbtree = <)
           (for-each (^p (rbtree-put! tree (car p) (cdr p)))
                     '((0 . "0") (1 . "1") (2 . "2")))
           (rbtree->alist tree)))
  (test* "alist->rbtree" '((0 . "0") (1 . "1") (2 . "2"))
         (rbtree->alist
          (alist->rbtree '((0 . "0") (1 . "1") (2 . "2")) = <)))
  (test* "rbtree-empty?" #f
         (rbtree-empty? tree1))
  (test* "rbtree-empty?" #t
         (rbtree-empty? (make-rbtree < =)))
  (test* "rbtree-empty?" (test-error)
         (rbtree-empty? 'wrong-arg))
  (test* "rbtree-exists?" '(#t #f)
         (let1 tree (make-rbtree = <)
           (rbtree-put! tree 1 'foo)
           (map (cut rbtree-exists? tree <>)
                '(1 2))))
  (test* "rbtree-num-entries" '(0 1 0)
         (let* ((t (make-rbtree = <))
                (a (rbtree-num-entries t))
                (b (begin (rbtree-put! t 7 7)
                          (rbtree-num-entries t)))
                (c (begin (rbtree-delete! t 7)
                          (rbtree-num-entries t))))
           (list a b c)))
  (test* "rbtree-push!" '(bar foo)
         (let1 tree (make-rbtree = <)
           (rbtree-push! tree 1 'foo)
           (rbtree-push! tree 1 'bar)
           (rbtree-get tree 1)))
  (test* "rbtree-pop!" '(foo bar)
         (let1 tree (alist->rbtree '((1 foo bar)) = <)
           (let1 r (rbtree-pop! tree 1)
             (list r (rbtree-pop! tree 1)))))
  (test* "rbtree-update!" 2
         (let1 tree (make-rbtree = <)
           (rbtree-update! tree 1 (cut + 1 <>) 0)
           (rbtree-update! tree 1 (cut + 1 <>) 0)
           (rbtree-get tree 1)))
  )

;; iterators
(let ((empty (make-rbtree = <))
      (tree2 (alist->rbtree '((1 . "1") (0 . "0") (2 . "2")) = <)))

  (test* "rbtree-min" '(0 . "0") (rbtree-min tree2))
  (test* "rbtree-max" '(2 . "2") (rbtree-max tree2))
  (test* "rbtree-min" (test-error) (rbtree-min 'wrong-arg))
  (test* "rbtree-min" (test-error) (rbtree-min 'wrong-arg))
  (test* "rbtree-min" 'default (rbtree-min empty 'default))
  (test* "rbtree-max" 'default (rbtree-max empty 'default))

  (test* "rbtree-keys" '(0 1 2)
         (rbtree-keys tree2))

  (test* "rbtree-values" '("0" "1" "2")
         (rbtree-values tree2))

  (test* "rbtree-copy" #t
         (let1 new (rbtree-copy tree2)
           (rbtree-check new)
           (equal? (rbtree->alist tree2)
                   (rbtree->alist new))))

  (test* "for-each" (rbtree->alist tree2)
         (let1 r '()
           (for-each (^e (push! r e)) tree2)
           (reverse! r)))

  (test* "map" (rbtree->alist tree2)
         (map values tree2))

  (test* "fold" (rbtree->alist tree2)
         (reverse! (fold cons '() tree2)))

  (test* "fold-right" (rbtree->alist tree2)
         (fold-right cons '() tree2))

  (test* "ref" '("0" "1" "2")
         (map (cut ref tree2 <>) '(0 1 2)))

  (test* "rbtree-extract-min!" '((0 . "0") (1 . "1"))
         (let1 r (rbtree-extract-min! tree2)
           (list r (rbtree-min tree2))))

  (test* "rbtree-extract-max!" '((2 . "2") (1 . "1"))
         (let1 r (rbtree-extract-max! tree2)
           (list r (rbtree-max tree2))))
  )

;; collection interface
(let1 tree4 (alist->rbtree '(("0" . 0) ("1" . 1) ("2" . 1))
                           string=? string<?)
  (test* "map" '(("0" . 0) ("1" . 1) ("2" . 1))
         (map values tree4))

  (test* "call-with-builder" '(("0" . 0) ("1" . 1) ("2" . 1))
         (call-with-builder <rbtree>
                            (lambda (add! get)
                              (for-each add! '(("0" . 0) ("1" . 1) ("2" . 1)))
                              (rbtree->alist (get)))
                            :key=? string=? :key<? string<?))
  )

;; random insertion/deletion

(let1 tree4 (make-rbtree = <)
  (random-source-randomize! default-random-source)

  (test* "random insertion/deletion" 'done
         (begin (dotimes (_ 5)
                  (dotimes (_ 30)
                    (let1 i (random-integer 30)
                      (rbtree-put! tree4 i i)
                      (rbtree-check tree4)))
                  (dotimes (_ 30)
                    (let1 i (random-integer 30)
                      (rbtree-delete! tree4 i)
                      (rbtree-check tree4))))
                'done))
  )


;;-----------------------------------------------
(test-section "util.record")
(use util.record)
(test-module 'util.record)

(define record:1 (make-record-type "record:1" '(a b c)))

(test* "make-record-type" #t
       (is-a? record:1 <class>))

(test* "make-record-type (error)" (test-error)
       (make-record-type "record:1" '((x 2) y)))

(test* "make-record-type (error)" (test-error)
       (make-record-type "record:1" '(a b a)))

(test* "record-constructor" #t
       (is-a? ((record-constructor record:1)) <record>))

(test* "record-constructor" '(7 8 9)
       (let ((obj ((record-constructor record:1 '(c b a)) 9 8 7)))
         (map (cut slot-ref obj <>) '(a b c))))

(test* "record-predicate" #t
       (let ((obj ((record-constructor record:1))))
         ((record-predicate record:1) obj)))

(test* "record-predicate" #f
       (let ((obj ((record-constructor record:1))))
         ((record-predicate record:1) (make <record>))))

(test* "record-accessor" 1
       (let ((obj ((record-constructor record:1 '(b)) 1))
             (acc (record-accessor record:1 'b)))
         (acc obj)))

(test* "record-modifier" 2
       (let ((obj ((record-constructor record:1 '(c)) 3))
             (acc (record-accessor record:1 'c))
             (mod (record-modifier record:1 'c)))
         (mod obj 2)
         (acc obj)))

;;-----------------------------------------------
(test-section "util.relation")
(use util.relation)
(test-module 'util.relation)
(use gauche.sequence)

(let ((r #f))
  (test* "simple-relation" '<simple-relation>
         (begin
           (set! r (make <simple-relation>
                     :columns '(a b c d e)
                     :rows (list
                            (vector 0 1 2 3 4)
                            (vector 5 6 7 8 9)
                            (vector 10 11 12 13 14)
                            (vector 15 16 17 18 19))))
           (class-name (class-of r))))

  (test* "simple-relation (relation-ref)" '(0 5 10 15)
         (map (cut relation-ref r <> 'a) r))

  (test* "simple-relation (relation-accessor)" '(1 6 11 16)
         (let1 ref (relation-accessor r)
           (map (cut ref <> 'b) r)))

  (test* "simple-relation (relation-column-getter)" '(2 7 12 17)
         (let1 getter (relation-column-getter r 'c)
           (map getter r)))

  (test* "simple-relation (relation-set!)" '(100 105 110 115)
         (begin
           (for-each (lambda (row)
                       (relation-set! r row 'a
                                      (+ (relation-ref r row 'a) 100)))
                     r)
           (map (cut relation-ref r <> 'a) r)))

  (test* "simple-relation (relation-modifier)" '(201 206 211 216)
         (let ((set (relation-modifier r))
               (ref (relation-accessor r)))
           (for-each (lambda (row)
                       (set row 'b (+ (ref row 'b) 200)))
                     r)
           (map (cut ref <> 'b) r)))

  (test* "simple-relation (relation-column-setter)" '(304 309 314 319)
         (let ((getter (relation-column-getter r 'e))
               (setter (relation-column-setter r 'e)))
           (for-each (lambda (row) (setter row (+ (getter row) 300))) r)
           (map getter r)))

  (test* "simple-relation (relation-fold)" 1264
         (relation-fold r + 0 'a 'b))

  )

(define-class <object-set-test> ()
  ((a :init-value 0 :init-keyword :a)
   (b :init-value 1 :init-keyword :b)
   (c :init-value 2 :init-keyword :c)))

(let ((r #f))
  (test* "object-set-relation" '<object-set-relation>
         (begin
           (set! r (make <object-set-relation>
                     :class <object-set-test>
                     :rows (list
                            (make <object-set-test> :a 0 :b 1 :c 2)
                            (make <object-set-test> :a 3 :b 4 :c 5)
                            (make <object-set-test> :a 6 :b 7 :c 8)
                            (make <object-set-test> :a 9 :b 10 :c 11))))
           (class-name (class-of r))))

  (test* "object-set-relation (relation-ref)" '(0 3 6 9)
         (map (cut relation-ref r <> 'a) r))

  (test* "object-set-relation (relation-accessor)" '(1 4 7 10)
         (let1 ref (relation-accessor r)
           (map (cut ref <> 'b) r)))

  (test* "object-set-relation (relation-column-getter)" '(2 5 8 11)
         (let1 getter (relation-column-getter r 'c)
           (map getter r)))

  (test* "object-set-relation (relation-set!)" '(100 103 106 109)
         (begin
           (for-each (lambda (row)
                       (relation-set! r row 'a
                                      (+ (relation-ref r row 'a) 100)))
                     r)
           (map (cut relation-ref r <> 'a) r)))

  (test* "object-set-relation (relation-modifier)" '(201 204 207 210)
         (let ((set (relation-modifier r))
               (ref (relation-accessor r)))
           (for-each (lambda (row)
                       (set row 'b (+ (ref row 'b) 200)))
                     r)
           (map (cut ref <> 'b) r)))

  (test* "object-set-relation (relation-column-setter)" '(302 305 308 311)
         (let ((getter (relation-column-getter r 'c))
               (setter (relation-column-setter r 'c)))
           (for-each (lambda (row) (setter row (+ (getter row) 300))) r)
           (map getter r)))

  (test* "simple-relation (relation-fold)" 1644
         (relation-fold r + 0 'a 'c))
  )
;;-----------------------------------------------
(test-section "util.stream")
(use util.stream)
(test-module 'util.stream)

(test* "stream?" #t
       (stream? (stream-cons 'a stream-null)))

(test* "stream-cons/car/cdr" '(1 1 1)
       (letrec ((s (stream-cons 1 s)))
         (list (stream-car s)
               (stream-cadr s)
               (stream-caddr s))))

(test* "stream-delay" #t
       (stream? (stream-delay (error "Boo"))))

(test* "stream-lambda/stream-take" '(1 3 5 7 9)
       (letrec ([iter (stream-lambda (f x)
                        (stream-cons x (iter f (f x))))])
         (stream->list (stream-take (iter (pa$ + 2) 1) 5))))

(test* "define-stream/stream-take" '(0 2 4 6 8)
       (let ()
         (define-stream (iter f x)
           (stream-cons x (iter f (f x))))
         (stream->list (stream-take (iter (pa$ + 2) 0) 5))))

(test* "stream-unfold" '(0 1 4 9 16 25 36 49 64 81)
       (stream->list 10
                     (stream-unfold (cut expt <> 2)
                                    (^_ #t)
                                    (cut + <> 1)
                                    0)))

(test* "stream-unfoldn" '((0 2 4 6) (1 3 5 7))
       (receive (s0 s1)
           (stream-unfoldn (lambda (s)
                             (values (+ s 2)
                                     (list s)
                                     (list (+ s 1))))
                           0 2)
         (map (lambda (s)
                (list (stream-first s)
                      (stream-second s)
                      (stream-third s)
                      (stream-fourth s)))
              (list s0 s1))))

(test* "stream-unfolds" '((1 3 5 7) (0 2 4 6))
       (receive (s0 s1)
           (stream-unfolds (^s (if (stream-null? s)
                                 (values s '() '())
                                 (if (odd? (stream-car s))
                                   (values (stream-cdr s)
                                           (list (stream-car s))
                                           #f)
                                   (values (stream-cdr s)
                                           #f
                                           (list (stream-car s))))))
                           (stream-iota 10))
         (map (lambda (s)
                (list (stream-first s)
                      (stream-second s)
                      (stream-third s)
                      (stream-fourth s)))
              (list s0 s1))))

(test* "stream-map/stream-ref" '(2 4 6 8)
       (let1 s
           (stream-map (cut * 2 <>)
                       (stream-unfoldn (^s (values (+ s 1) (list s)))
                                       0 1))
         (map (cut stream-ref s <>) '(1 2 3 4))))

(test* "stream-for-each/stream-iota" '(1 3 5 7)
       (let1 r '()
         (stream-for-each (lambda (x y)
                            (push! r (+ x y)))
                          (stream-iota 4)
                          (stream-iota -1 1))
         (reverse r)))

(test* "stream-iota" '(1.0 1.5 2.0 2.5 3.0)
       (stream->list (stream-iota 5 1 0.5)))

(test* "stream-iota" '(1.0 1.0+1.0i 1.0+2.0i 1.0+3.0i)
       (stream->list (stream-iota 4 1 +i)))

(test* "stream-filter/take/drop" '(12 15 18 21)
       (let1 s (stream-filter (^x (zero? (modulo x 3)))
                              (stream-iota))
         (stream->list (stream-take (stream-drop s 4) 4))))

(test* "stream-range" '(10 9 8 7)
       (stream->list (stream-range 10 6)))

(test* "stream-range" '(10.0 9.0 8.0 7.0)
       (stream->list (stream-range 10 6.0)))

(test* "stream-range" (lrange 0 1 0.1)
       (stream->list (stream-range 0 1 0.1)))

(test* "stream-drop-while/stream-range" '(5 6 7 8 9)
       (stream->list 5 (stream-drop-while (cut < <> 5)
                                          (stream-range 0))))

(test* "stream-take-while/stream-range" '(0 1 2 3 4)
       (stream->list (stream-take-while (cut < <> 5)
                                        (stream-range 0))))

(test* "stream-fold" '(4 3 2 1 0)
       (stream-fold xcons '() (stream-iota 5)))

(test* "stream-from" '(0 1 2 3 4)
       (stream->list 5 (stream-from 0)))

(test* "stream-from" '(1 3 5 7 9)
       (stream->list 5 (stream-from 1 2)))

(test* "stream-from" '(1 3/2 2 5/2 3)
       (stream->list 5 (stream-from 1 1/2)))

(test* "stream-from" '(1.0 1.1 1.2 1.3 1.4)
       (stream->list 5 (stream-from 1 0.1)))

(test* "stream-iterate" '(10 11 12 13 14)
       (stream->list 5 (stream-iterate (cut + <> 1) 10)))

(test* "stream-iterate" '(1 2 4 8 16)
       (stream->list 5 (stream-iterate (cut * <> 2) 1)))

(test* "stream-length" 6 (stream-length (stream 0 1 2 3 4 5)))
(test* "stream-length" 0 (stream-length (stream)))

(test* "stream-match" 5
       (let ()
         (define (len s)
           (stream-match s
             [() 0]
             [(head . tail) (+ 1 (len tail))]))
         (len (stream 0 1 2 3 4))))

(test* "stream-match" 'ok
       (stream-match (stream 1 1 2)
         [(x y . _) (equal? x y) 'ok]
         [else 'ng]))

(test* "stream-match" 'ng
       (stream-match (stream 1 2 1)
         [(x y . _) (equal? x y) 'ok]
         [else 'ng]))

(test* "stream-of" '(0 4 16 36 64)
       (stream->list
        (stream-of (* x x)
                   (x in (stream-range 0 10))
                   (even? x))))

(test* "stream-of" '((1 1) (1 2) (2 1) (2 2) (3 1) (3 2))
       (stream->list
        (stream-of (list a b)
                   (a in (stream-range 1 4))
                   (b in (stream-range 1 3)))))

(test* "stream-of" '((3 4 5) (5 12 13) (6 8 10))
       (stream->list
        (stream-of (list a b c)
                   (a in (stream-range 1 14))
                   (b in (stream-range a 14))
                   (c in (stream-range b 14))
                   (d is (+ (* a a) (* b b)))
                   (= (* c c) d))))

(test* "stream-reverse" '(5 4 3 2 1)
       (stream->list (stream-reverse (stream 1 2 3 4 5))))
(test* "stream-reverse" '()
       (stream->list (stream-reverse stream-null)))

(test* "stream-scan" '(0 1 3 6 10 15)
       (stream->list 6 (stream-scan + 0 (stream-from 1))))
(test* "stream-scan"  '(1 1 2 3 5 8 13 21 34 55)
       (letrec ((fibs (stream-scan + 1 (stream-cons 0 fibs))))
         (stream->list 10 fibs)))
(test* "stream-scan" '(() (a) (b a) (c b a) (d c b a) (e d c b a))
       (stream->list (stream-scan xcons '() (stream 'a 'b 'c 'd 'e))))

(test* "stream-zip" '((0 a) (1 b) (2 c))
       (stream->list
        (stream-zip (stream 0 1 2) (stream 'a 'b 'c))))

(test* "stream-zip" '(0 3 5 7 10)
       (let ()
         (define-stream (stream-finds eq obj s)
           (stream-of (car x)
                      (x in (stream-zip (stream-from 0) s))
                      (eq obj (cadr x))))
         (stream->list
          (stream-finds char=? #\a
                        (string->stream "abracadabra")))))

(test* "stream-remove" '(0 2 4 6)
       (stream->list (stream-remove odd? (stream-iota 8))))

(test* "port->stream" '(#\a #\b #\c)
       (let1 p (open-input-string "abc")
         (stream->list (port->stream p))))

(test* "stream+" '(1 1/2 1/3)
       (stream->list (stream-take (stream+ 1 (/ 1 2) (/ 1 3) (/ 1 0)) 3)))

(test* "stream-append" '(1 2 3 4 a b c d A B C D)
       (stream->list
        (stream-append (stream 1 2 3 4)
                       (stream 'a 'b 'c 'd)
                       (stream 'A 'B 'C 'D))))

(test* "stream-constant" '(1 2 3 1 2 3 1 2)
       (stream->list 8
                     (stream-constant 1 2 3)))

(test* "stream-count" 4
       (stream-count odd? (stream-iota 8)))

(test* "stream-any" #f
       (stream-any even? stream-null))

(test* "stream-any" #f
       (stream-any even? (list->stream '(1 3))))

(test* "stream-any" #t
       (stream-any even? (list->stream '(1 2))))

(test* "stream-any" 1
       (stream-any string->number (list->stream '("1" "a"))))

(test* "stream-any" 1
       (stream-any string->number (list->stream '("1" "2"))))

(test* "stream-any" 1
       (stream-any string->number
                   (list->stream '("1" "2"))
                   (list->stream '(10 10))))

(test* "stream-any" 1
       (stream-any string->number
                   (list->stream '("1" "2"))
                   (list->stream '(10))))

(test* "stream-any" #f
       (stream-any string->number
                   (list->stream '("1" "2"))
                   (list->stream '())))

(test* "stream-every" #t
       (stream-every odd? stream-null))

(test* "stream-every" #t
       (stream-every odd? (list->stream '(1 3))))

(test* "stream-every" #f
       (stream-every odd? (list->stream '(1 2))))

(test* "stream-every" #f
       (stream-every string->number (list->stream '("1" "a"))))

(test* "stream-every" 2
       (stream-every string->number (list->stream '("1" "2"))))

(test* "stream-every" 2
       (stream-every string->number
                     (list->stream '("1" "2"))
                     (list->stream '(10 10))))

(test* "stream-every" 1
       (stream-every string->number
                     (list->stream '("1" "2"))
                     (list->stream '(10))))

(test* "stream-every" #t
       (stream-every string->number
                   (list->stream '("1" "2"))
                   (list->stream '())))

(test* "stream-intersperse" '(1 0 2 0 3)
       (stream->list (stream-intersperse (stream 1 2 3) 0)))
(test* "stream-intersperse" '()
       (stream->list (stream-intersperse (stream) 0)))

(test* "stream-split" '((1 3) (5 7 9) () (1))
       (stream->list
        (stream-map stream->list
                    (stream-split (stream 1 3 2 5 7 9 6 8 1) even?))))

(test* "stream-last" 3
       (stream-last (stream 1 2 3)))
(test* "stream-last" (test-error)
       (stream-last (stream)))

(test* "stream-last-n" '(3 4 5)
       (stream->list (stream-last-n (stream 1 2 3 4 5) 3)))
(test* "stream-last-n" '(1 2)
       (stream->list (stream-last-n (stream 1 2) 3)))
(test* "stream-last" '()
       (stream->list (stream-last-n (stream) 3)))

;;-----------------------------------------------
(test-section "util.temporal-relation")
(use util.temporal-relation)
(test-module 'util.temporal-relation)

(define-module temporal-relation-test
  (use gauche.test)
  (use util.temporal-relation :prefix tr:)
  (use util.match)

  (define (interval a b) (cons a b))
  (define p tr:pair-interval-protocol)
  (define data
    `([,(interval 0 5) ,(interval 6 9) before]
      [,(interval 0 5) ,(interval 5 9) meets]
      [,(interval 0 6) ,(interval 5 9) overlaps]
      [,(interval 0 9) ,(interval 5 9) finished-by]
      [,(interval 0 9) ,(interval 3 8) contains]
      [,(interval 3 8) ,(interval 3 9) starts]
      [,(interval 3 9) ,(interval 3 9) equal]
      [,(interval 3 9) ,(interval 3 8) started-by]
      [,(interval 4 8) ,(interval 0 9) during]
      [,(interval 4 9) ,(interval 0 9) finishes]
      [,(interval 4 9) ,(interval 0 8) overlapped-by]
      [,(interval 5 9) ,(interval 0 5) met-by]
      [,(interval 6 9) ,(interval 0 4) after]))
  (define point-data
    `([,(interval 0 5) 9 before]
      [,(interval 0 8) 8 finished-by]
      [,(interval 0 8) 7 contains]
      [,(interval 5 9) 5 started-by]
      [,(interval 5 9) 0 after]))

  (dolist [d data]
    (match-let1 [x y rel] d
      (test* #"relation? ~rel" #t (tr:relation? rel))
      (test* #"relate ~x ~y" rel (tr:relate p x y))
      (test* #"relate ~y ~x" rel (tr:inverse (tr:relate p y x)))))

  (dolist [d point-data]
    (match-let1 [x y rel] d
      (test* #"relate ~x ~y" rel (tr:relate-point p x y))))
  )

;;-----------------------------------------------
(test-section "util.toposort")
(use util.toposort)
(test-module 'util.toposort)


;; using famous socks example (Corman)
(let ([sorted '(socks undershorts watch shirt tie pants belt jacket shoes)]
      [input '((shirt tie belt)
               (tie jacket)
               (belt jacket)
               (watch)
               (pants shoes belt)
               (undershorts pants shoes)
               (socks shoes))])

  (test* "topological-sort, default" sorted
         (topological-sort input))

  (test* "topological-sort, eq?" sorted
         (topological-sort input eq?))

  (test* "topological-sort, string=?"
         (map symbol->string sorted)
         (topological-sort (map (cut map symbol->string <>) input) string=?))
  )

;; cycle
(test* "topological-sort: error" (test-error)
       (topological-sort '((watch tie)
                           (tie watch))))
(test* "topological-sort: error" (test-error)
       (topological-sort '((shirt watch)
                           (watch tie)
                           (tie watch))))


;;-----------------------------------------------
(test-section "util.unification")
(use util.unification)
(test-module 'util.unification)
(use util.match)

(let ([data
       ;; (a b merged)
       '((1 1 1)
         (1 2 #f)
         (a 1 1)
         (a (1 2) (1 2))
         (a (1 b) (1 b))
         (a (1 a) #f)
         ((a b) (b 1) (1 1))
         ((a b (c 3)) (2 c (3 b)) (2 3 (3 3)))
         ((a b (c 3)) (2 c (4 b)) #f)
         ((a b (c 3)) (2 c b) #f)
         ((a b (c 3)) (2 d (3 b)) (2 3 (3 3)))
         ((a b c)     (2 c (3 d)) (2 (3 d) (3 d)))
         ((a b c)     (2 c (3 a)) (2 (3 2) (3 2)))
         ((a b c)     (2 c (3 b)) #f))])

  (define var (make-comparator symbol? eq? #f eq-hash))
  (define val (make-comparator number? eqv? #f #f))
  (define (node proto args) args)

  (dolist [d data]
    (match-let1 (a b m) d
      (test* #"unify-merge ~a ~b => ~m" m (unify-merge a b var val fold node))
      (test* #"unify-merge ~b ~a => ~m" m (unify-merge b a var val fold node))))
  )

(test-end)
