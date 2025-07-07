;; -*- coding:utf-8 -*-
;;;
;;;  gen-unicode.scm - generate unicode-handling tables
;;;
;;;    Originally written by Shiro Kawai, 2011
;;;    Public Domain - use as you like.
;;;

;; Reads Unicode data tables and generates various source files.

;; This script can serve three operations.
;;
;; (1) Generate unicode-data.scm from Unicode character database
;;   It is only necessary when new version of Unicode is published,
;;   and the resulting unicode-data.scm is checked in to the source
;;   tree so that other developers don't need UCD.
;;
;;    gosh ./gen-unicode.scm --import <unicode-database-directory> unicode-data.scm [unicode-test.scm]
;;
;; (2) Generate source files from unicode-data.scm
;;   To reduce runtime overhead, unicode properties are saved in binary
;;   tables, within the following two generated source files:
;;
;;   char_attr.c                - General category and case mappings.
;;   gauche/priv/unicode_attr.h - Grapheme break, word break, East-asian width
;;   ext/gauche/unicode-attr.scm - Break property symbols
;;
;;   This is done when you build from git source tree.
;;
;;    gosh ./gen-unicode.scm --compile unicode-data.scm
;;
;; (3) Fetch Unicode character database files.  This is for developer's
;;   convenience.
;;
;;    gosh ./gen-unicode.scm --fetch <unicode-database-directory> [<unicode-version>
;;   Note that the original content in <unicode-database-directory> is
;;   overwritten.
;;   You might need to adjust code for newer version of Unicode.
;;   See doc/HOWTO-unicode.txt for the details.

(use file.util)
(use gauche.charconv)
(use gauche.dictionary)
(use gauche.generator)
(use gauche.record)
(use gauche.sequence)
(use gauche.uvector)
(use scheme.list)
(use srfi.13)
(use srfi.42)
(use text.csv)
(use util.match)

;; needs to load from source
(add-load-path "../lib" :relative)
(use text.unicode.ucd)
(use text.unicode.codeset)

;; rfc.http is only required by '--fetch' operation.  We don't want to load
;; it during build process, so let's autoload it.
(autoload rfc.http http-get)


;; We generate four kind of lookup structures.  Each structure consists
;; of various types of tables in order to reduce the size.
;;
;; * General categories and case bits
;;
;;    This structure maps Unicode codepoint to a byte containing the
;;    following info:
;;
;;    bit 7-6 - Alphabetic and case info
;;                00 : non-alphabetic char
;;                01 : lowercase alphabetic char
;;                10 : uppercase alphabetic char
;;                11 : caseless or titlecase alphabetic char
;;    bit 5   - Reserved
;;    bit 4-0 - General category (Lu, Nd, Cc, etc.)
;;              See ucd-general-categories
;;              and the enum in src/gauche/char_attr.h
;;
;;    For U+0000 to U+1ffff, we have a single table that directly maps
;;    the codepoint to the above byte.
;;
;;      unsigned char ucs_general_category_00000[0x20000]  (131072 bytes)
;;
;;    Above U+20000 the mappings are sparse and mostly contiguous, so we
;;    generate a C code that performs a binary search.
;;
;;      unsigned char ucs_general_category_20000(ScmChar code)
;;
;; * Case mapping
;;
;;    Almost all characters that needs case mappings are below #xffff.  In
;;    Unicode 6.0, the only exceptions are 80 characters in U+104xx range
;;    (Deseret).
;;
;;    Among case-mapped characters, almost all of them requires a simple
;;    rule---that is, either a character can be lowercased by adding some
;;    small value to the codepoint, or a character can be upcased and
;;    titlecased by adding some small value to the codepoint.  These have
;;    simple casemap entries.  Characters that requires more complex handling
;;    have extended casemap entries.
;;
;;    The tables first maps a codepoint into 16bit entry.  The entry
;;    represents either a simple casemap entry, or an index to an
;;    extended casemap entry.
;;
;;    bit15 == 0:
;;      This is a simple entry.  uppercase and titlecase is the same,
;;      no special case mappings, and conversion between
;;      (upper,title) <-> lower is simply done by adding the given offset.
;;
;;      If bit14 is 0, this letter is uppercase.  Converting to uppercase and
;;                     titlecase is noop.  Converting to lowercase is to add
;;                    the offset.
;;      If bit14 is 1, this letter is lowercase.  Converting to lowercase is
;;                     noop.  Converting to uppercase and titlecase is to add
;;                     the offset.
;;      bit13-bit0, singned integer offset [-8192, 8191]
;;
;;    bit15 == 1:
;;      This is an extended entry (except #xffff).
;;      bit14-bit0 is an index to an extended entry table.
;;
;;    #xffff indicates empty entry.
;;
;;    Characters that require case mapping tend to cluster, so we use two-staged
;;    table to lookup the 16-bit entry from the codepoint below U+10000.
;;
;;    The bit 15-8 is the index of this table:
;;
;;       static unsiged char casemap_000[256]
;;
;;    If the value is 255, the character doesn't have case mappings.
;;    Otherwise, let V be the value of the above lookup, the entry
;;    can be looked up by the following table:
;;
;;       static unsiged char casemap_subtable[V][<lower 8 bit of codepoint>];
;;
;;    We only need to have 18 subtables.
;;
;; * Digit values
;;
;;    Characters with categrory Nd has associated numeric value 0..9.
;;    A set of decimal numeric characters for 0..9 are always contiguous.
;;    As of Unicode 6.2, we have 42 of such sets.
;;
;; * Break properties
;;
;;    This structure maps codepoint to the Grapheme_Cluster_Break,
;;    Word_Break and Sentence_Break properties.
;;
;;    See http://www.unicode.org/reports/tr29/
;;    http://www.unicode.org/Public/UNIDATA/auxiliary/GraphemeBreakProperty.txt
;;    http://www.unicode.org/Public/UNIDATA/auxiliary/WordBreakProperty.txt
;;    http://www.unicode.org/Public/UNIDATA/auxiliary/SentenceBreakProperty.txt
;;
;;    NB: As of Unicode 13, we also need Extended_Poctographic (ExtPict)
;;    Emoji property to do clustering properly.  For grapheme break
;;    properties, all ExtPict codepoints are GB_Other, so we simply name
;;    them GB_ExtPict.  For word break properties, ExtPict falls on WB_Other
;;    and WB_ALetter.  We Name the former WB_ExtPict, and the latter
;;    WB_ExtPict_ALetter.
;;
;;    The definitive list of properties are in text.unicode.ucd,
;;    ucd-grapheme-break-properties and ucd-word-break-properties
;;
;;   Codepoints below U+20000 are looked up by two-staged tables.
;;   First, look up this table with (codepoint >> 8).
;;
;;     static unsigned char {GB|WB}_break_table[0x200]
;;
;;   If the value is up to single-property-offset (224), the value is
;;   the index to the secondary table.
;;
;;     static unsigned char {GB|WB}_break_subtable[index][256]
;;
;;   The value of this table encodes GB|WB properties.
;;   If th evalue is equal to or more than single-property-offset,
;;   it indicates the entire block of 256 codepoints shared the same
;;   property, (- value single-property-offset).
;;
;;   Codepoints on or above U+20000 are all 'Other', except the following
;;   ranges.  They are handled specially in the lookup procedure.
;;
;;    E0001          GB_Control, WB_Format
;;    E0020..E007F   GB_Control, WB_Format
;;    E0100..E01EF   GB_Extend, WB_Extend
;;
;;
;; * Emoji Properties
;;
;;    Also http://unicode.org/reports/tr51
;;    https://www.unicode.org/Public/13.0.0/ucd/emoji/emoji-data.txt
;;

;;;
;;;  Main entry
;;;

(define (main args)
  (match (cdr args)
    [("--fetch" dir . maybe-version) (apply fetch-ucd dir maybe-version)]
    [("--import" dir ucdfile) (import-data dir ucdfile #f)]
    [("--import" dir ucdfile testfile) (import-data dir ucdfile testfile)]
    [("--analyze" ucdfile lobits)
     (analyze-break-tables (call-with-input-file ucdfile ucd-load-db)
                           (string->number lobits))]
    [("--compile" ucdfile)
     (unless (file-exists? ucdfile)
       (exit 1 "Couldn't open unicode data file: ~a" ucdfile))
     (generate-tables (call-with-input-file ucdfile ucd-load-db))]
    [else
     (exit 1 "Usage:\n\
              gen-unicode.scm --fetch <unicode-database-dir> [<unicode-version>]\n\
              gen-unicode.scm --import <unicode-database-dir> <ucd-file>\n\
              gen-unicode.scm --compile <unicode-data.scm>")])
  0)

;;;
;;; Fetching
;;;
(define (fetch-ucd dir :optional (version #f))
  (let ([path (if version
                #"/Public/~|version|/ucd"
                "/Public/UCD/latest/ucd")]
        [datafiles   '("UnicodeData.txt"
                       "SpecialCasing.txt"
                       "PropList.txt"
                       "EastAsianWidth.txt"
                       "auxiliary/GraphemeBreakProperty.txt"
                       "auxiliary/SentenceBreakProperty.txt"
                       "auxiliary/WordBreakProperty.txt"
                       "auxiliary/GraphemeBreakTest.txt"
                       "auxiliary/SentenceBreakTest.txt"
                       "auxiliary/WordBreakTest.txt"
                       "emoji/emoji-data.txt")])
    (make-directory* (build-path dir "auxiliary"))
    (make-directory* (build-path dir "emoji"))
    (dolist [f datafiles]
      (let1 p (build-path dir f)
        (display #"Getting ~|f|... ") (flush)
        (call-with-output-file p
          (^o (http-get "www.unicode.org" (build-path path f)
                        :sink o :flusher (^ _ #t))))
        (display "done\n")))))

;;;
;;;  Importing
;;;

;; Dump unicode character data in ucdfile.
(define (import-data dir ucdfile testfile)
  (unless (file-is-directory? dir)
    (exit 1 "Directory required, but got: ~a" dir))
  (let1 ucd-db (ucd-parse-files dir)
    (with-output-to-file ucdfile
      (cut ucd-save-db ucd-db))
    (when testfile
      (with-output-to-file testfile
        (^[] (import-break-test ucd-db dir))))))

(define (import-break-test ucd-db dir)
  ;; break test file format:
  ;;  <line>: <sep> (<code> <sep>)+ '#' <comment>
  ;;  <sep> : '÷' | '×'
  ;;  <code> : #[[:xdigit:]]+
  ;;
  ;; returns (<count> <seq> <comment>)
  ;;   where
  ;;     <count> : integer, to make it easy to find tests
  ;;     <seq> : <bool> (<integer> <bool>)+
  ;;     <bool> : #t as breakable (÷), #f as unbreakable (×)
  (define (parse-1 line)
    (and-let1 m (#/^([÷×])\s+/ line)
      (let loop ([line (m'after)] [r (list (break-flag (m 1)))])
        (rxmatch-case line
          [#/^([[:xdigit:]]+)\s+([÷×])\s+(.*)/ (_ cc ff rr)
              (loop rr (list* (break-flag ff) (string->number cc 16) r))]
          [#/^#\s+(.*)/ (_ comment) (list (reverse r) comment)]
          [else (list (reverse r) "")]))))
  (define (break-flag s) (equal? s "÷"))
  (define (parse name file)
    (let1 path (build-path dir file)
      (print)
      (print ";; " file)
      (print #"(define ~name '(")
      (generator-for-each (^[r k] (pprint (cons k r)))
                          (gfilter-map parse-1 (file->line-generator path))
                          (giota))
      (print "))")))
  (print ";; -*- coding:utf-8 -*-")
  (print ";; Generated from Unicode " (ucd-version ucd-db) " test data files")
  (parse '*grapheme-break-tests* "auxiliary/GraphemeBreakTest.txt")
  (parse '*word-break-tests*     "auxiliary/WordBreakTest.txt")
  (parse '*sentence-break-tests* "auxiliary/SentenceBreakTest.txt")
  )

;;;
;;;  Generate source file
;;;

(define (generate-tables db)
  (let-values ([(c.p char_attr.c) (sys-mkstemp "char_attr.c.")]
               [(h.p unicode_attr.h) (sys-mkstemp "unicode_attr.h.")]
               [(scm.p unicode-attr.scm) (sys-mkstemp "unicode-attr.scm.")])
    (with-output-to-port c.p
      (^() (preamble db "/*" "*/")
        (generate-category-tables db)
        (generate-case-tables db)
        (generate-digit-value-tables db)))
    (with-output-to-port h.p
      (^() (preamble db "/*" "*/")
        (generate-break-tables db)
        (generate-width-tables db)))
    (with-output-to-port scm.p
      (^() (preamble db ";;" "")
        (generate-break-symbols db)))
    (close-port c.p)
    (close-port h.p)
    (close-port scm.p)
    (make-directory* "gauche/priv") ; in case we're building out-of-tree
    (sys-rename char_attr.c "char_attr.c")
    (sys-rename unicode_attr.h "gauche/priv/unicode_attr.h")
    (sys-rename unicode-attr.scm "../ext/gauche/unicode-attr.scm")))

(define (preamble db op cl)
  (print #"~|op| Generated automatically from Unicode character database ~|cl|")
  (print #"~|op| See src/gen-unicode.scm for the description of data structures. ~|cl|")
  (print #"~|op| Unicode version ~(ucd-version db).  Do not edit. ~|cl|")
  )

(define (generate-category-tables db)
  (define (emit-entry e)
    (if e
      (cond
       [(ucd-entry-uppercase e)  (format #t " U(~a)," (ucd-entry-category e))]
       [(ucd-entry-lowercase e)  (format #t " L(~a)," (ucd-entry-category e))]
       [(ucd-entry-alphabetic e) (format #t " A(~a)," (ucd-entry-category e))]
       [else                 (format #t "    ~a," (ucd-entry-category e))])
      (format #t "    Cn,")))
  (define (emit-columns start end p)
    (do-ec (:parallel (: k start end)
                      (:integers i))
           (begin
             (cond [(zero? (mod i 256)) (format #t "\n /* ~5,'0x - */\n" k)]
                   [(zero? (mod i 8))  (newline)])
             (p k)))
    (print))
  (define (ucs->entry ucs) (ucd-get-entry db ucs))

  ;; Setup
  (dolist [c (ucd-general-categories)]
    (format #t "#define ~a SCM_CHAR_CATEGORY_~a\n" c c))
  (print "#undef A")
  (print "#undef U")
  (print "#undef L")
  (print "#define A(x) ((x)|SCM_CHAR_ALPHABETIC_BITS)")
  (print "#define U(x) ((x)|SCM_CHAR_UPPERCASE_BITS)")
  (print "#define L(x) ((x)|SCM_CHAR_LOWERCASE_BITS)")

  (let ([code-sets (build-code-sets db (ucd-general-categories))])
    ;;   U+0000 - U+1ffff : direct table lookup
    (display "static unsigned char ucs_general_category_00000[] = {")
    (emit-columns 0 #x20000 (^i (emit-entry (ucs->entry i))))
    (print "};")
    ;;   Over U+20000 - binary search
    (print)
    (print "static unsigned char ucs_general_category_20000(ScmChar code)")
    (print "{")
    (print "  /*")
    (for-each (^e (format #t "    ~6x ~a\n" (car e) (cdr e)))
              (ucd-get-category-ranges db))
    (print "  */")
    (generate-bisect (coerce-to <vector> (ucd-get-category-ranges db))
                     (^e (format "return ~a;"
                                 (case (cdr e)
                                   [(Lo) "A(Lo)"]
                                   [(#f) "Cn"]
                                   [else => identity]))))
    (print "}")
    (for-each
     (^s (dump-code-set-in-C (cdr s)))
     (sort (hash-table->alist code-sets) string<? (^x (x->string (car x)))))
    (print))

  ;; Bind predefined charset
  ;; The CAT entry can be just a symbol or (alias symbol).
  (print "static void init_predefined_charsets() {")
  (dolist [cat (append (ucd-general-categories)
                       '(L LC M N P S Z C
                         (LETTER L) ASCII_LETTER
                         (DIGIT Nd) ASCII_DIGIT
                         LETTER_DIGIT ASCII_LETTER_DIGIT
                         (LOWER Ll) ASCII_LOWER
                         (UPPER Lu) ASCII_UPPER
                         (TITLE Lt)
                         GRAPHIC ASCII_GRAPHIC
                         PRINTING ASCII_PRINTING
                         (PUNCTUATION P) ASCII_PUNCTUATION
                         (SYMBOL S) ASCII_SYMBOL
                         (ISO_CONTROL Cc) ASCII_CONTROL
                         HEX_DIGIT
                         WHITESPACE ASCII_WHITESPACE
                         BLANK ASCII_BLANK
                         ASCII EMPTY
                         ASCII_WORD (WORD ASCII_WORD)))]
    (let1 setname (if (pair? cat) (car cat) cat)
      (print #"  predef_sets[SCM_CHAR_SET_~|setname|] =")
      (if (pair? cat)
        (print #"    predef_sets[SCM_CHAR_SET_~(cadr cat)];")
        (print #"    make_charset_~|setname|();"))))
  (print "}")

  ;; Teardown
  (dolist [c (ucd-general-categories)]
    (format #t "#undef ~a\n" c))
  (format #t "#undef A\n")
  (format #t "#undef U\n")
  (format #t "#undef L\n")
  (print))

(define (generate-case-tables db)
  (define subtables '())
  (define extended '())
  ;; returns a list of (code . ucd-entry-case-map) with U+HHHxx where HHH
  ;; is given to the hi arg.
  (define (gather-entries hb)
    (fold-ec '() (: lb 256) (ucd-get-entry db (+ (* hb 256) lb))
             (^(e seed) (if (or (not e) (not (ucd-entry-case-map e)))
                          seed
                          (acons (+ (* hb 256) lb) (ucd-entry-case-map e) seed)))))
  ;; ucd-entry-alist :: ((code . ucd-entry-case-map) ...)
  ;; subtable :: (start-code . #(....))
  ;; returns (start-code . subtable-number)
  (define (gen-subtable start-code ucd-entry-alist)
    (if (null? ucd-entry-alist)
      `(,start-code . 255)
      (let* ([table-num (length subtables)]
             [vec   (make-vector 256 #f)])
        (dolist [p ucd-entry-alist]
          (when (ucd-extended-case-map? (cdr p))
            (push! extended (cdr p)))
          (set! (~ vec (logand (car p) #xff)) (cdr p)))
        (push! subtables (cons start-code vec))
        (cons start-code table-num))))
  ;;
  (define (gather-toptable)
    (list-ec (: hi 256) (gen-subtable (* hi 256) (gather-entries hi))))

  ;;
  (define (emit-subtable subtable)
    (format #t "  /* ~4,'0x - ~4,'0x */\n"
            (car subtable)
            (+ (car subtable) 255))
    (format #t "  {\n")
    (dotimes [n 256]
      (format #t "    ~20a,   /* 0x~4,'0x */\n"
              (if-let1 cmap (~ (cdr subtable) n)
                (if (ucd-simple-case-map? cmap)
                  (format "~a(~a)"
                          (if (eq? (ucd-simple-case-map-case cmap) 'upper)
                            "TOLOWER"
                            "TOUPPER")
                          (ucd-simple-case-map-offset cmap))
                  (format "EXTENDED(~a)"
                          (find-index (cut eq? cmap <>) extended)))
                "NO_CASE_MAPPING")
              (+ (car subtable) n)))
    (format #t "  },\n"))

  (define (emit-subtables)
    (format #t "static unsigned short casemap_subtable[][256] = {\n")
    (for-each emit-subtable (reverse subtables))
    (format #t "};\n\n"))

  (define (emit-toptable subtable-num-alist)
    (let1 vec (make-vector 256 255)
      (dolist [s subtable-num-alist]
        (set! (~ vec (div (car s) 256)) (cdr s)))
      (format #t "static unsigned char casemap_000[] = {")
      (dotimes [i 256]
        (when (zero? (mod i 16)) (newline))
        (format #t " ~3d," (~ vec i)))
      (format #t "\n};\n")))

  (define (emit-extended-case-maps)
    (format #t "static ScmCharCaseMap extended_casemaps[] = {\n")
    (dolist [e extended]
      (let ([simple  (ucd-extended-case-map-simple-map e)]
            [special (ucd-extended-case-map-special-map e)])
        (format #t "  { ~s,~s,~s,"
                (or (~ simple 0) 0)
                (or (~ simple 1) 0)
                (or (~ simple 2) 0))
        (if special
          (format #t "~a,~a,~a"
                  (extended-special-array (~ special 0))
                  (extended-special-array (~ special 1))
                  (extended-special-array (~ special 2)))
          (format #t "{-1},{-1},{-1}"))
        (format #t "}, /* ~4,'0x */\n" (ucd-extended-case-map-code e))))
    (format #t "};\n\n"))
  (define (extended-special-array lis)
    (apply format "{~a,~a,~a,-1}" (map (^i (list-ref lis i -1)) '(0 1 2))))

  ;; body of generate-case-tables
  (print "#define NO_CASE_MAPPING SCM_CHAR_NO_CASE_MAPPING")
  (print "#define TOLOWER(x) SCM_CHAR_CASEMAP_TOLOWER(x)")
  (print "#define TOUPPER(x) SCM_CHAR_CASEMAP_TOUPPER(x)")
  (print "#define EXTENDED(x) SCM_CHAR_CASEMAP_EXTENDED(x)")
  (let1 subtable-num-alist (gather-toptable)
    (emit-extended-case-maps)
    (emit-subtables)
    (emit-toptable subtable-num-alist))
  )

(define (generate-bisect entries gen-value)
  (define (bisect lo hi indent)
    (if (= (+ lo 1) hi)
      (format #t "~v,a~a\n" (* 2 indent) " " (gen-value (~ entries lo)))
      (let1 mid (div (+ lo hi) 2)
        (format #t "~v,aif (code < 0x~x) {\n"
                (* 2 indent) " " (car (~ entries mid)))
        (bisect lo mid (+ indent 1))
        (format #t "~v,a} else {\n" (* 2 indent) " ")
        (bisect mid hi (+ indent 1))
        (format #t "~v,a}\n" (* 2 indent) " "))))
  (bisect 0 (size-of entries) 1))

;; Digit-value tables.  Note that we'll have a shortcut for the first
;; chunk [0x30, 0x39], so we only generate for the second chunk and after
(define (generate-digit-value-tables db)
  (let1 ranges ($ reverse
                  $ fold (^[p s] (match s
                                   [() `(,p (0 . #f))]
                                   [((_ . last) . rest)
                                    (if (= (car p) last)
                                      `(,p ,@s)
                                      `(,p (,last . #f) ,@s))]))
                  '()
                  $ cdr $ (cut sort-by <> car) $ filter identity
                  $ ucd-map-entries db
                  (^[code entry]
                    (and (eq? (ucd-entry-category entry) 'Nd)
                         (zero? (ucd-entry-digit-value entry))
                         (cons code (+ code 10)))))

    (print)
    (print "static int ucs_digit_value(ScmChar code)")
    (print "{")
    (dolist [r ranges]
      (format #t "  /* ~5,'0x- ~a */\n" (car r) (if (cdr r) "Nd" "* ")))
    (generate-bisect (coerce-to <vector> ranges)
                     (^e (if (cdr e)
                           (format "return (code - 0x~x);" (car e))
                           "return -1;")))
    (print "}")))

;; Predefined character sets

(define (for-each-char-code proc)
  (dotimes [n #x2ffff] (proc n n))
  (proc #xe0000 #xe007f) ; Language tags; Cf
  (proc #xe0100 #xe01ef) ; Variation selectors; Mn
  (proc #xf0000 #xffffd) ; Private use; Co
  (proc #x100000 #x10fffd) ; Private use; Co
  )

(define (build-code-sets db categories)
  (define sets (make-hash-table 'eq?))
  (define (register set cat n m)
    (and-let1 e (ucd-get-entry db n)
      (if (eq? cat (ucd-entry-category e))
        (if (= n m)
          (add-code! set n)
          (add-code-range! set n m)))))
  ;; general category charsets (char-set:Lt etc.)
  (dolist [cat categories]
    (let1 cs (make <char-code-set> :name cat)
      (for-each-char-code (cut register cs cat <> <>))
      (hash-table-put! sets cat cs)))
  ;; general category class charsets (char-set:L etc.)
  (dolist [gcats (group-collection categories
                                  :key (^c (string-ref (symbol->string c) 0)))]
    (let1 cs
        (make <char-code-set>
          :name (string->symbol (substring (symbol->string (car gcats)) 0 1)))
      (for-each (^c (for-each-char-code (cut register cs c <> <>))) gcats)
      (hash-table-put! sets (~ cs'name) cs)))
  ;; SRFI-14 charsets (the ones that has equivalent set in general category set
  ;; is handled implicitly.
  (hash-table-put! sets 'ASCII_UPPER
                   (rlet1 cs (make <char-code-set> :name 'ASCII_UPPER)
                     (add-code-range! cs
                                      (char->integer #\A)
                                      (char->integer #\Z))))
  (hash-table-put! sets 'ASCII_LOWER
                   (rlet1 cs (make <char-code-set> :name 'ASCII_LOWER)
                     (add-code-range! cs
                                      (char->integer #\a)
                                      (char->integer #\z))))
  (hash-table-put! sets 'ASCII_LETTER
                   (code-set-union 'ASCII_LETTER
                                   (hash-table-ref sets 'ASCII_UPPER)
                                   (hash-table-ref sets 'ASCII_LOWER)))
  (hash-table-put! sets 'ASCII_DIGIT
                   (rlet1 cs (make <char-code-set> :name 'ASCII_DIGIT)
                     (add-code-range! cs
                                      (char->integer #\0)
                                      (char->integer #\9))))
  (hash-table-put! sets 'LETTER_DIGIT
                   (code-set-union 'LETTER_DIGIT
                                   (hash-table-ref sets 'L)
                                   (hash-table-ref sets 'Nd)))
  (hash-table-put! sets 'ASCII_LETTER_DIGIT
                   (code-set-union 'ASCII_LETTER_DIGIT
                                   (hash-table-ref sets 'ASCII_LETTER)
                                   (hash-table-ref sets 'ASCII_DIGIT)))
  (hash-table-put! sets 'ASCII_WHITESPACE
                   (rlet1 cs (make <char-code-set> :name 'ASCII_WHITESPACE)
                     (add-code-range! cs 9 13) ;TAB,LF,LTAB,FF,CR
                     (add-code! cs (char->integer #\space))))
  (hash-table-put! sets 'WHITESPACE
                   (code-set-union 'WHITESPACE
                                   (hash-table-ref sets 'ASCII_WHITESPACE)
                                   (hash-table-ref sets 'Z)))
  (hash-table-put! sets 'ASCII_BLANK
                   (rlet1 cs (make <char-code-set> :name 'ASCII_BLANK)
                     (add-code! cs 9) ;TAB
                     (add-code! cs (char->integer #\space))))
  (hash-table-put! sets 'BLANK
                   (code-set-union 'BLANK
                                   (hash-table-ref sets 'ASCII_BLANK)
                                   (hash-table-ref sets 'Zs)))
  (hash-table-put! sets 'ASCII_PUNCTUATION
                   (rlet1 cs (make <char-code-set> :name 'ASCII_PUNCTUATION)
                     (add-code! cs 33)  ;!
                     (add-code! cs 34)  ;"
                     (add-code! cs 35)  ;#
                     (add-code! cs 37)  ;%
                     (add-code! cs 38)  ;&
                     (add-code! cs 39)  ;'
                     (add-code! cs 40)  ;(
                     (add-code! cs 41)  ;)
                     (add-code! cs 42)  ;*
                     (add-code! cs 44)  ;,
                     (add-code! cs 45)  ;-
                     (add-code! cs 46)  ;.
                     (add-code! cs 47)  ;/
                     (add-code! cs 58)  ;:
                     (add-code! cs 59)  ;;
                     (add-code! cs 63)  ;?
                     (add-code! cs 64)  ;@
                     (add-code! cs 91)  ;[
                     (add-code! cs 92)  ;\
                     (add-code! cs 93)  ;)
                     (add-code! cs 95)  ;_
                     (add-code! cs 123) ;{
                     (add-code! cs 125) ;}
                     ))
  (hash-table-put! sets 'ASCII_SYMBOL
                   (rlet1 cs (make <char-code-set> :name 'ASCII_SYMBOL)
                     (add-code! cs 36)  ;$
                     (add-code! cs 43)  ;+
                     (add-code! cs 60)  ;<
                     (add-code! cs 61)  ;=
                     (add-code! cs 62)  ;>
                     (add-code! cs 94)  ;^
                     (add-code! cs 96)  ;`
                     (add-code! cs 124) ;|
                     (add-code! cs 126) ;~
                     ))
  (hash-table-put! sets 'GRAPHIC
                   (code-set-union 'GRAPHIC
                                   (hash-table-ref sets 'L)
                                   (hash-table-ref sets 'N)
                                   (hash-table-ref sets 'P)
                                   (hash-table-ref sets 'S)))
  (hash-table-put! sets 'ASCII_GRAPHIC
                   (code-set-union 'ASCII_GRAPHIC
                                   (hash-table-ref sets 'ASCII_LETTER)
                                   (hash-table-ref sets 'ASCII_DIGIT)
                                   (hash-table-ref sets 'ASCII_PUNCTUATION)
                                   (hash-table-ref sets 'ASCII_SYMBOL)))
  (hash-table-put! sets 'PRINTING
                   (code-set-union 'PRINTING
                                   (hash-table-ref sets 'GRAPHIC)
                                   (hash-table-ref sets 'WHITESPACE)))
  (hash-table-put! sets 'ASCII_PRINTING
                   (code-set-union 'ASCII_PRINTING
                                   (hash-table-ref sets 'ASCII_GRAPHIC)
                                   (hash-table-ref sets 'ASCII_WHITESPACE)))
  (hash-table-put! sets 'ASCII_CONTROL
                   (rlet1 cs (make <char-code-set> :name 'ASCII_CONTROL)
                     (add-code-range! cs #x00 #x1f)
                     (add-code! cs #x7f)))
  (hash-table-put! sets 'HEX_DIGIT
                   (rlet1 cs (make <char-code-set> :name 'HEX_DIGIT)
                     (add-code-range! cs
                                      (char->integer #\0)
                                      (char->integer #\9))
                     (add-code-range! cs
                                      (char->integer #\A)
                                      (char->integer #\F))
                     (add-code-range! cs
                                      (char->integer #\a)
                                      (char->integer #\f))))
  (hash-table-put! sets 'ASCII
                   (rlet1 cs (make <char-code-set> :name 'ASCII)
                     (add-code-range! cs 0 127)))
  (hash-table-put! sets 'ASCII_WORD
                   (rlet1 cs (make <char-code-set> :name 'ASCII_WORD)
                     (add-code-range! cs
                                      (char->integer #\0)
                                      (char->integer #\9))
                     (add-code-range! cs
                                      (char->integer #\A)
                                      (char->integer #\Z))
                     (add-code-range! cs
                                      (char->integer #\a)
                                      (char->integer #\z))
                     (add-code! cs (char->integer #\_))))
  (hash-table-put! sets 'LC
                   (code-set-union 'LC
                                   (hash-table-ref sets 'Lt)
                                   (hash-table-ref sets 'Ll)
                                   (hash-table-ref sets 'Lu)))
  (hash-table-put! sets 'EMPTY (make <char-code-set> :name 'EMPTY))
  sets)

;; Break property values
;; This goes to src/gauche/priv/unicode_attr.h and ext/gauche/unicode-attr.scm
;;
;; The data structure is two-level tables that maps codepoint 0-1FFFFF to
;; an octet.
;;
;; The first level, {GB|WB}_break_table, is 512-length byte vector.
;; Upper 9bit of codepoint is used to index this table.
;; If the entry is [0..224], it's the index to the {GB|WB}_break_subtable[N][],
;; which is indexed with the lower 8 bit of the codepoint.
;; If the entry is above that, it indicates the entire block shares the
;; same property.

(define (generate-break-tables db)
  (define single-property-offset 224)
  (define subtable-count 0)

  (define (get-property entry type); type : GB | WB
    (if entry
      (case type
        [(GB) (ucd-break-property-grapheme entry)]
        [(WB) (ucd-break-property-word entry)])
      'Other))

  (define (gen-entry code type) ; type : GB | WB
    (format #t "    ~a_~a,\n" type
            (get-property (ucd-get-break-property db code) type)))

  ;; returns subtable-number
  (define (gen-subtable start-code type)
    (define kind #f)
    (do-ec (: lb 256)
           (let* ([e (ucd-get-break-property db (+ start-code lb))]
                  [p (get-property e type)])
             (cond [(not kind) (set! kind p)]
                   [(eqv? kind p)]
                   [else (set! kind #t)])))
    (if (symbol? kind)
      ;; same property in the entire block
      (format "(BOFF+~a_~a)" type kind)
      (rlet1 subtable-num subtable-count
        (format #t "  {\n")
        (do-ec (: lb 256) (gen-entry (+ start-code lb) type))
        (format #t "  },\n")
        (inc! subtable-count))))

  (define (gen-main-table type)
    (set! subtable-count 0)
    (print)
    (print #"static unsigned char ~|type|_break_subtable[][256] = {")
    (let1 nlist (list-ec (: n 512) (gen-subtable (* n 256) type))
      (print "};")
      (when (>= subtable-count single-property-offset)
        (error #"~|type| subtable index overflow (~|subtable-count|)"))
      (print)
      (format #t "static unsigned char ~a_break_table[] = {" type)
      (do-ec (:parallel (: n nlist) (:integers i))
             (begin (when (zero? (mod i 4)) (format #t "\n   "))
                    (format #t " ~3d," n)))
      (format #t "\n};\n")))

  ;; Generate table of symbols
  (define (gen-symbol-table constants type)
    (for-each-with-index (^[i c] (format #t "#define ~a_~a ~a\n" type c i))
                         constants))

  (print)
  (gen-symbol-table (ucd-grapheme-break-properties) 'GB)
  (gen-symbol-table (ucd-word-break-properties) 'WB)
  (print)
  (print #"#define BOFF ~|single-property-offset|")
  (gen-main-table 'GB)
  (gen-main-table 'WB)
  )

;; Auxiliary stuff to find out optimal table configuration
;; NB: It looks like 3-level table doesn't save at all.
(define (analyze-break-tables db :optional (lobits 4))
  (define num-leaf-tables 0)
  (define num-intermediate-tables 0)

  ;; Check break properties of 2^lobits consecutive codepoints.
  ;; Returns (<codepoint-string> . <property-or-#t>).  If properties of
  ;; all codeponds are the same, cdr is the property; otherwise it's #t.
  (define (probe-lo start accessor)
    (define kind #f)
    (define (get-1 i)
      (if-let1 e (ucd-get-break-property db (+ start i))
        (accessor e)
        'Other))
    (do-ec (: i (expt 2 lobits))
           (let1 kk (get-1 i)
             (cond [(not kind) (set! kind kk)]
                   [(eqv? kind #t)]
                   [(eqv? kind kk)]
                   [else (set! kind #t)])))
    (when (eqv? kind #t) (inc! num-leaf-tables))
    (cons (format "~5,'0x" start) kind))
  ;; Check break properties of 16 consecutive 16 codepoint blocks.
  (define (probe-hi start accessor)
    (define kind #f)
    (define ps
      (list-ec (: ii (expt 2 (- 8 lobits)))
               (rlet1 p (probe-lo (+ start (ash ii lobits)) accessor)
                 (cond [(not kind) (set! kind (cdr p))]
                       [(eqv? kind (cdr p))]
                       [else (set! kind #t)]))))
    (case kind
      [(#t)
       (format #t "~3,'0xXX -------------\n" (ash start -8))
       (for-each (^p (format #t "  ~a ~a\n" (car p) (cdr p)))
                 (remove (^p (eq? (cdr p) 'Other)) ps))
       (inc! num-intermediate-tables)]
      [(Other)]
      [else
       (format #t "~3,'0xXX  ~a\n" (ash start -8) kind)]))

  (define (probe-all name accessor)
    (format #t "~a distribution\n" name)
    (set! num-leaf-tables 0)
    (set! num-intermediate-tables 0)
    (do-ec (: u #x200)
           (probe-hi (ash u 8) accessor))
    (list name num-leaf-tables num-intermediate-tables))

  (dolist [rr (list (probe-all "GB" ucd-break-property-grapheme)
                    (probe-all "WB" ucd-break-property-word))]
    (format #t "~a # int. tables = ~d, # leaf tables = ~d\n"
            (car rr) (cadr rr) (caddr rr)))
  )

(define (generate-break-symbols db)
  (define (gen-symbols constants type)
    (for-each-with-index
     (^[i c] (pprint `(define-constant ,(symbol-append type '_ c) ,i)))
     constants)
    (pprint `(define-constant ,(symbol-append '* type '-properties*)
               ',(map-with-index (^[i c] (cons c i)) constants))))

  (gen-symbols (ucd-grapheme-break-properties) 'GB)
  (gen-symbols (ucd-word-break-properties) 'WB)
  )

;; EastAsianWidth property values
;; This goes to src/gauche/priv/unicode_attr.h
;;
;; The data structure is two-level tables that maps codepoint 0-1FFFFF to
;; an octet.
;;
;; The first level, width_table, is 512-length byte vector.
;; Upper 9bit of codepoint is used to index this table.  If the entry
;; is one of WIDTH_x values, all codepoints of that range has that property
;; value.
;;
;; Otherwise, the entry value - NUM_WIDTH_PROPERTIES points to the subtable,
;; width_subtable[N][].  It is a vecto of nibbles; to look up, first take
;; 1-7bit of the codepoint and look up an octet; if the LSB of codepoint
;; is 0, take lower nibble; otherwise, take upper nibble.

(define (generate-width-tables db)
  (define prop-count (length (ucd-east-asian-widths)))
  (define subtable-count prop-count)

  ;; returns subtable-number
  (define (gen-subtable start-code)
    (let1 e (ucd-get-east-asian-width db start-code)
      (if (any?-ec (: lb 256)
                   (not (eq? (ucd-get-east-asian-width db (+ start-code lb)) e)))
        (rlet1 subtable-num subtable-count
          (print "  {")
          (do-ec (: c 128)
                 (let ([w0 (ucd-get-east-asian-width db (+ start-code (* c 2)))]
                       [w1 (ucd-get-east-asian-width db (+ start-code (* c 2) 1))])
                   (print #"    WIDTH_ENTRY(WIDTH_~|w1|, WIDTH_~|w0|),")))
          (print "  },")
          (inc! subtable-count))
        ;; all codepoints of this range shares the value.
        (find-index (cut eqv? e <>) (ucd-east-asian-widths)))))

  ;; Generate table of symbols
  (define (gen-symbol-table)
    (for-each-with-index (^(i c) (format #t "#define WIDTH_~a ~a\n" c i))
                         (ucd-east-asian-widths))
    (print #"#define NUM_WIDTH_PROPERTIES ~|prop-count|")
    (print)
    (print "static void init_WIDTH_symbols(ScmModule *mod) {")
    (print #"  ScmObj v = Scm_MakeVector(~|prop-count|, SCM_FALSE);")
    (for-each-with-index
     (^[i c]
       (print #"  SCM_VECTOR_ELEMENT(v, ~|i|) = SCM_INTERN(\"~|c|\");"))
     (ucd-east-asian-widths))
    (print "  Scm_DefineConst(mod, \
                 SCM_SYMBOL(SCM_INTERN(\"*east-asian-widths*\")), \
                 v);")
    (print "}"))

  (print)
  (gen-symbol-table)
  (print)
  (print "#define WIDTH_ENTRY(a, b)  (((a)<<4) | (b))")
  (print)
  (print "static unsigned char width_subtable[][128] = {")
  (let1 nlist (list-ec (: n 512) (gen-subtable (* n 256)))
    (print "};")
    (print)
    (format #t "static unsigned char width_table[] = {")
    (do-ec (:parallel (: n nlist) (:integers i))
           (begin (when (zero? (mod i 8)) (format #t "\n   "))
                  (format #t " ~3d," n)))
    (format #t "\n};\n"))
  )
