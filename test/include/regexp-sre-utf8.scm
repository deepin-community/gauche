;;-*- coding:utf-8 -*-

;; SRE tests using Unicode chars.
;; This file is included from regexp.scm.  The test-* procedures
;; are defined there.

;; Charsets
(test-cset (string->char-set "BC") (& ("ABC") (w/ascii ("кириллица aBC"))))
(test-ast-error (& ("ABC") (w/ascii ("кириллица aBC") "def")))

;; The following tests are taken from Chibi's regexp-test.sld
(test-sre #f '(: bol (* lower) eol) "abcD")
(test-sre '("abcD") '(w/nocase (* lower)) "abcD")
(test-sre '("σζ") '(* lower) "σζ")
(test-sre '("Σ") '(* upper) "Σ")
(test-sre '("\x01C5;") '(* title) "\x01C5;")
(test-sre '("σζ\x01C5;") '(w/nocase (* lower)) "σζ\x01C5;")

(test-sre '("кириллица") '(* alpha) "кириллица")
(test-sre '("") '(w/ascii (* alpha)) "кириллица")
(test-sre '("кириллица") '(w/nocase "КИРИЛЛИЦА") "кириллица")

(test-sre '("") '(w/ascii (* numeric)) "１２３４５")

(test-sre '("한") '(: bog grapheme eog) "한")
(test-sre #f '(: "ᄒ" bog grapheme eog "ᆫ") "한")
