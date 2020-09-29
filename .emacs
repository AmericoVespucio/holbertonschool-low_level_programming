(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t
      global-linum-mode 1
      auto-complete-mode)
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
(setq column-number-mode t)
(global-linum-mode 1)
(require'package)
(let* ((no-ssl (and (memq system-type '(windows-nt ms-dos))
                                        (not (gnutls-available-p))))
              (url (concat (if no-ssl "http""https") "://melpa.org/packages/")))
    (add-to-list'package-archives (cons"melpa" url) t))
(when (< emacs-major-version 24)
    (add-to-list'package-archives '("gnu" . "http://elpa.gnu.org/packages/")))
(package-initialize)
(require 'auto-complete)
(global-auto-complete-mode t)
