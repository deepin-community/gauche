;;
;; test for charconv
;;

(use gauche.test)

(test-start "charconv")
(use gauche.charconv)
(test-module 'gauche.charconv)

(define (file->string file)
  (string-complete->incomplete
   (call-with-input-file file port->byte-string)))

(define (file->string-conv/in file from . args)
  (string-complete->incomplete
   (call-with-input-file file
     (lambda (f)
       (port->byte-string  (apply open-input-conversion-port f from args))))))

(define (file->string-conv/out file to from reader writer . args)
  (string-complete->incomplete
   (call-with-output-string
     (lambda (out)
       (call-with-input-file file
         (lambda (in)
           (let ((cv (apply open-output-conversion-port out to
                            :from-code from args)))
             (let loop ((data (reader in)))
               (if (eof-object? data)
                   (close-output-port cv)
                   (begin (writer data cv) (loop (reader in))))))))))))

(define (map-test tester file from-codes to-codes)
  (let1 srcdir (sys-dirname (current-load-path))
    (dolist [from from-codes]
      (dolist [to to-codes]
        (tester #"~|srcdir|/~|file|" from to)))))

;;--------------------------------------------------------------------
(test-section "ces-equivalent? and ces-upper-compatible?")

(define-syntax ces=-test
  (syntax-rules ()
    ((_ op a b exp)
     (test (format "~s ~s ~s" op a b) exp (lambda () (op a b '?))))))

(ces=-test ces-equivalent? 'none  'none      #t)
(ces=-test ces-equivalent? 'eucjp 'euc-jp    #t)
(ces=-test ces-equivalent? 'sjis  'shift_jis #t)
(ces=-test ces-equivalent? 'utf8  'utf-8     #t)
(ces=-test ces-equivalent? 'utf8  'none      #t)
(ces=-test ces-equivalent? 'none  'eucjp     #t)
(ces=-test ces-equivalent? 'sjis  'none      #t)
(ces=-test ces-equivalent? 'eucjp "EUC-JP"   #t)
(ces=-test ces-equivalent? "Shift_JIS" "SJIS" #t)
(ces=-test ces-equivalent? 'hoge  'euc-jp    '?)
(ces=-test ces-equivalent? 'hoge  'none      #t)

(ces=-test ces-upper-compatible? 'eucjp 'usascii  #t)
(ces=-test ces-upper-compatible? 'usascii 'eucjp  #f)
(ces=-test ces-upper-compatible? 'sjis 'usascii   #t)
(ces=-test ces-upper-compatible? 'usascii 'sjis   #f)
(ces=-test ces-upper-compatible? 'eucjp 'sjis     #f)
(ces=-test ces-upper-compatible? 'sjis 'eucjp     #f)
(ces=-test ces-upper-compatible? 'eucjp 'none     #t)
(ces=-test ces-upper-compatible? 'none 'eucjp     #t)
(ces=-test ces-upper-compatible? 'iso-2022-jp-2 'usascii #t)
(ces=-test ces-upper-compatible? 'usascii 'iso-2022-jp-2 #f)
(ces=-test ces-upper-compatible? 'iso-2022-jp-2 'iso-2022-jp #t)

;;--------------------------------------------------------------------
(test-section "input conversion")

(define (test-input file from to :key (guesser #f) illegal-output)
  (let* ((realfrom (or guesser from))
         (infostr  (format #f "~a.~a (~a) => ~a [~a]" file from realfrom to
                           illegal-output))
         (fromfile (format #f "~a.~a" file from))
         (tofile   (format #f "~a.~a" file to)))
    (if (ces-conversion-supported? from to)
      (test infostr
            (file->string tofile)
            (lambda () (file->string-conv/in fromfile realfrom
                                             :to-code to
                                             :illegal-output illegal-output)))
      (test infostr "(not supported)"
            (lambda () "(not supported)")))
    ))

(map-test test-input "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP" "UTF-16" "UTF-16BE" "UTF-16LE")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP" "UTF-16BE" "UTF-16LE"))
(map-test test-input "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-input "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-input "data/jp4"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-input "data/kr1"
          '("EUCKR" "UTF-8" "ISO2022KR")
          '("EUCKR" "UTF-8" "ISO2022KR"))

;; illegal-output replace
(map-test (lambda (file from to)
            (test-input file from to :illegal-output 'replace))
          "data/jp1"
          '("ASCII" "EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("ASCII"))
(map-test (lambda (file from to)
            (test-input file from to :illegal-output 'replace))
          "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("ASCII"))
(map-test (lambda (file from to)
            (test-input file from to :illegal-output 'replace))
          "data/lat1"
          '("ISO8859-1")
          '("ASCII" "ISO8859-1" "EUCJP" "SJIS" "ISO2022JP" "UTF-8"
            "UTF-16" "UTF-16BE" "UTF-16LE"
            "UTF-32" "UTF-32BE" "UTF-32LE"))
(map-test (lambda (file from to)
            (test-input file from to :illegal-output 'replace))
          "data/lat1x"
          '("ISO8859-1" "EUCJP" "UTF-8" "SJIS"
            "UTF-16" "UTF-16BE" "UTF-16LE"
            "UTF-32" "UTF-32BE" "UTF-32LE")
          '("ISO8859-1"))
(dolist [n '(2 3 4 5 6 7 8 9 10 11 13 14 15 16)]
  (map-test test-input #"data/lat~|n|"
            `(,#"ISO8859-~|n|" "UTF-16BE")
            `(,#"ISO8859-~|n|" "UTF-16BE")))

;; autodetect tester
(map-test (lambda (file from to)
            (test-input file from to :guesser "*JP"))
          "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test (lambda (file from to)
            (test-input file from to :guesser "*JP"))
          "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test (lambda (file from to)
            (test-input file from to :guesser "*JP"))
          "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

;; UTF BOM illegal-output
(let ()
  (define (f n) #"~(sys-dirname (current-load-path))/~n")

  (define (bom-test bom-src)
    (equal? (call-with-input-file (f "data/jp1.UTF-8") port->string)
            (call-with-input-file (f bom-src) port->string)))
  (bom-test "data/jp1.UTF-16-BOMBE")
  (bom-test "data/jp1.UTF-16-BOMLE"))

;;--------------------------------------------------------------------
(test-section "output conversion")

(define (test-output type reader writer file from to)
  (let ((infostr  (format #f "~a ~a => ~a (~a)" file from to type))
        (fromfile (format #f "~a.~a" file from))
        (tofile   (format #f "~a.~a" file to)))
    (if (ces-conversion-supported? from to)
        (test infostr
              (file->string tofile)
              (lambda ()
                (file->string-conv/out fromfile to from reader writer)))
        (test infostr "(not supported)"
              (lambda () "(not supported)")))
    ))

(define (test-output/byte file from to)
  (test-output "byte" read-byte write-byte file from to))

(define (test-output/char file from to)
  (test-output "char" read-char write-char file from to))

(define (test-output/chunk256 file from to)
  (test-output "chunk256" (^p (read-block 256 p)) display file from to))

(define (test-output/chunk20 file from to)
  (test-output "chunk20" (^p (read-block 20 p)) display file from to))

(define internal-enc '("UTF-8"))

(map-test test-output/byte "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP" "UTF-16" "UTF-16BE" "UTF-16LE")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP" "UTF-16BE" "UTF-16LE"))
(map-test test-output/chunk256 "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk20 "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/char "data/jp1"
          internal-enc
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

(map-test test-output/byte "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk256 "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk20 "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/char "data/jp2"
          internal-enc
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

(map-test test-output/byte "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk256 "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk20 "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/char "data/jp3"
          internal-enc
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

(map-test test-output/byte "data/jp4"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk256 "data/jp4"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/chunk20 "data/jp4"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-output/char "data/jp4"
          internal-enc
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

(map-test test-output/byte "data/kr1"
          '("EUCKR" "UTF-8" "ISO2022KR")
          '("EUCKR" "UTF-8" "ISO2022KR"))
(map-test test-output/chunk256 "data/kr1"
          '("EUCKR" "UTF-8" "ISO2022KR")
          '("EUCKR" "UTF-8" "ISO2022KR"))
(map-test test-output/chunk20 "data/kr1"
          '("EUCKR" "UTF-8" "ISO2022KR")
          '("EUCKR" "UTF-8" "ISO2022KR"))

(dolist [n '(1 2 3 4 5 6 7 8 9 10 11 13 14 15 16)]
  (map-test test-output/chunk20 #"data/lat~|n|"
            `(,#"ISO8859-~|n|" "UTF-16BE")
            `(,#"ISO8859-~|n|" "UTF-16BE")))

;;--------------------------------------------------------------------
(test-section "open -> #f")

(test* "input :if-does-not-exist #f" #f
       (with-input-from-file "_NOT_EXIST_" (lambda () (error "PANIC!"))
                             :if-does-not-exist #f :encoding "*JP"))

(test* "output :if-does-not-exist #f" #f
       (with-output-to-file "_NOT_EXIST_" (lambda () (error "PANIC!"))
                            :if-does-not-exist #f :encoding "UTF-8"))

;;--------------------------------------------------------------------
(test-section "utf8 optional BOM handling")

(let ()
  (define (file->lines path encoding)
    (call-with-input-file #"~(sys-dirname (current-load-path))/~path"
      port->string-list
      :encoding encoding))

  (test* "utf8 optional BOM handling (utf8bom)"
         '("abc" "\xfeff;def")
         (file->lines "data/utf8bom.txt" 'utf-8-bom))

  (test* "utf8 optional BOM handling (utf8)"
         '("\xfeff;abc" "\xfeff;def")
         (file->lines "data/utf8bom.txt" 'utf8))
  )

;;--------------------------------------------------------------------
(test-section "code guessing")

(define (test-guess file code scheme)
  (let ((infostr (format #f "guess ~a from ~a.~a" scheme file code))
        (infile  (format #f "~a.~a" file code)))
    ;; TODO: fix the kluge of CES name
    (test infostr
          (cond
           ((string=? code "EUCJP") "EUC-JP")
           ((string=? code "SJIS") "Shift_JIS")
           ((string=? code "ISO2022JP") "ISO-2022-JP")
           (else code))
          (lambda ()
            (ces-guess-from-string (file->string infile) scheme)))))

(map-test test-guess "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("*JP"))
(map-test test-guess "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("*JP"))
(map-test test-guess "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("*JP"))

;;--------------------------------------------------------------------
(test-section "string conversion")

(define (test-string file from to)
  (let ((infostr (format #f "string(~a) ~a => ~a" file from to))
        (instr   (file->string (format #f "~a.~a" file from)))
        (outstr  (file->string (format #f "~a.~a" file to))))
    (if (ces-conversion-supported? from to)
        (test infostr
              outstr
              (lambda ()
                (string-complete->incomplete
                 (ces-convert instr from to))))
        (test infostr "(not supported)"
              (lambda () "(not supported)")))
    ))

(map-test test-string "data/jp1"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-string "data/jp2"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-string "data/jp3"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-string "data/jp4"
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

;;-------------------------------------------------------------------
(test-section "replacement illegal-output")
(test* "utf-8 -> ascii noreplacement" (test-error <io-decoding-error>)
       (ces-convert #u8(#x61 #xe3 #x81 #x82 #x62 #xe3 #x81
                       #x84 #x63 #xe3 #x81 #x86)
                    'utf-8 'ascii))
(test* "utf-8 -> ascii replacement" "a?b?c?"
       (ces-convert #u8(#x61 #xe3 #x81 #x82 #x62 #xe3 #x81
                        #x84 #x63 #xe3 #x81 #x86)
                    'utf-8 'ascii :illegal-output 'replace))

(let ([src #u8(#x61 #xe2 #x98 #xba #x62 #xe2 #x9b #xb1 #x63)])
  ;; src is #\a + snowman + #\b + umbrella + #\c
  (test* "utf-8 -> eucjp noreplacement" (test-error <io-decoding-error>)
       (ces-convert-to <u8vector> src 'utf-8 'eucjp))
  (test* "utf-8 -> eucjp replacement" '#u8(#x61 #xa2 #xae #x62 #xa2 #xae #x63)
       (ces-convert-to <u8vector> src 'utf-8 'eucjp :illegal-output 'replace))
  (test* "utf-8 -> sjis noreplacement" (test-error <io-decoding-error>)
       (ces-convert-to <u8vector> src 'utf-8 'sjis))
  (test* "utf-8 -> sjis replacement" '#u8(#x61 #x81 #xac #x62 #x81 #xac #x63)
       (ces-convert-to <u8vector> src 'utf-8 'sjis :illegal-output 'replace))
  )

;;--------------------------------------------------------------------
(test-section "wrapping conversion")

(define (test-wrap/in str from to)
  (if (ces-conversion-supported? from to)
      (test* #"wrap-input-conversion-port (~|from|, ~|to|)"
             (string-complete->incomplete
              (port->string (open-input-conversion-port
                             (open-input-string str)
                             from :to-code to :owner? #t)))
             (string-complete->incomplete
              (port->string (wrap-with-input-conversion
                             (open-input-string str)
                             from :to-code to))))
      (test* #"wrap-input-conversion-port (~|from|, ~|to|)"
             "(not supported)" "(not supported)")))

(define (test-wrap/out str from to)
  (if (ces-conversion-supported? from to)
      (test* #"wrap-output-conversion-port (~|from|, ~|to|)"
             (string-complete->incomplete
              (let* ((os  (open-output-string))
                     (out (open-output-conversion-port os to :from-code from)))
                (display str out)
                (close-output-port out)
                (get-output-string os)))
             (string-complete->incomplete
              (let* ((os  (open-output-string))
                     (out (wrap-with-output-conversion os to :from-code from)))
                (display str out)
                (close-output-port out)
                (get-output-string os))))
      (test* #"wrap-input-conversion-port (~|from|, ~|to|)"
             "(not supported)" "(not supported)")))

(map-test test-wrap/in "foobar"
          '("NONE" "ASCII" "EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("NONE" "ASCII" "EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
(map-test test-wrap/out "foobar"
          '("NONE" "ASCII" "EUCJP" "UTF-8" "SJIS" "ISO2022JP")
          '("NONE" "ASCII" "EUCJP" "UTF-8" "SJIS" "ISO2022JP"))

;;--------------------------------------------------------------------
(test-section "call-with/conversion")

(define (test-call-with file code)
  (if (ces-conversion-supported? code (gauche-character-encoding))
    (test* #"call-with-input-conversion (~code -> ~(gauche-character-encoding))"
           (file->string-conv/in #"~|file|.~code" code)
           (string-complete->incomplete
            (call-with-input-file #"~|file|.~code"
              (lambda (p)
                (call-with-input-conversion p port->string
                                            :encoding code))))))
  (if (ces-conversion-supported? (gauche-character-encoding) code)
    (let ((s (call-with-input-file (format "~a.~a" file "UTF-8")
               port->string)))
      (test* #"call-with-output-conversion (~(gauche-character-encoding) -> ~code)"
             (string-complete->incomplete
              (ces-convert s (gauche-character-encoding) code))
             (string-complete->incomplete
              (call-with-output-string
                (lambda (p)
                  (call-with-output-conversion p
                    (lambda (pp) (display s pp))
                    :encoding code)))))))
  )

(dolist (file '("data/jp1" "data/jp2" "data/jp3" "data/jp4"))
  (dolist (code '("EUCJP" "UTF-8" "SJIS" "ISO2022JP"))
    (test-call-with #"~(sys-dirname (current-load-path))/~file" code)))

;;--------------------------------------------------------------------
(test-section "ucs <-> char")

;; this test is here since it requires gauche.charconv to be loaded.

(test "ucs <-> char" #x61
      (lambda () (char->ucs (ucs->char #x61))))
(test "ucs <-> char" #xa1
      (lambda () (char->ucs (ucs->char #xa1))))

(test "ucs <-> char" #x0391
      (lambda () (char->ucs (ucs->char #x0391))))
(test "ucs <-> char" #x3042
      (lambda () (char->ucs (ucs->char #x3042))))

(test "ucs char syntax" #\a
      (lambda () (read-from-string "#\\u0061")))
(test "ucs char syntax" #\b
      (lambda () (read-from-string "#\\u00000062")))
(test "ucs char syntax" #xa1
      (lambda () (char->ucs (read-from-string "#\\u00a1"))))

(test "usc char syntax" #x0391
      (lambda () (char->ucs (read-from-string "#\\u0391"))))
(test "ucs char syntax" #x3042
      (lambda () (char->ucs (read-from-string "#\\u3042"))))

(test "ucs string syntax" "abcde"
      (lambda () (read-from-string "\"\\u0061bcde\"")))
(test "ucs string syntax" "abcde"
      (lambda () (read-from-string "\"\\U00000061bcde\"")))

(test "usc string syntax" #x0391
      (lambda () (char->ucs (string-ref (read-from-string "\"\\u03911\"") 0))))
(test "ucs string syntax" #x3042
      (lambda () (char->ucs (string-ref (read-from-string "\"\\u30421\"") 0))))

;;--------------------------------------------------------------------
(test-section "coding-aware port")

(define *target-string*
  (read-from-string
   "\"\\u3053\\u3093\\u306b\\u3061\\u306f\\u3001\\u4e16\\u754c\""))

(define (test-coding-aware-port num encoding)
  (when (ces-conversion-supported? (gauche-character-encoding) encoding)
    (test* (format "program source port reading from jpsrc~a.~a" num encoding)
           *target-string*
           (call-with-input-file (format "~a/data/jpsrc~a.~a.scm"
                                         (sys-dirname (current-load-path))
                                         num encoding)
             (lambda (in)
               (let ((src (open-coding-aware-port in)))
                 (let loop ((x (read src)))
                   (cond ((eof-object? x) (close-input-port src) x)
                         ((eq? (cadr x) '*the-string*)
                          (close-input-port src)
                          (caddr x))
                         (else (loop (read src)))))))))))

(unless (eq? (gauche-character-encoding) 'none)
  (dolist (num '(1 2 3))
    (dolist (enc '("EUCJP" "SJIS" "UTF-8"))
      (test-coding-aware-port num enc))))

;;--------------------------------------------------------------------
(test-section "default-file-encoding")

(let1 srcdir (sys-dirname (current-load-path))
  (test* "default-file-encoding (input)"
         (call-with-input-file #"~|srcdir|/data/lat1.UTF-8" port->string)
         (parameterize ([default-file-encoding 'latin1])
           (call-with-input-file #"~|srcdir|/data/lat1.ISO8859-1" port->string)))
  (sys-unlink "testdata.o")
  (test* "default-file-encoding (output)"
         (call-with-input-file #"~|srcdir|/data/lat1.ISO8859-1" port->byte-string)
         (let1 data (call-with-input-file #"~|srcdir|/data/lat1.UTF-8" port->string)
           (parameterize ([default-file-encoding 'latin1])
             (call-with-output-file "testdata.o"
               (^p (display data p))))
           (call-with-input-file "testdata.o" port->byte-string)))
  (sys-unlink "testdata.o"))

(test-end)
