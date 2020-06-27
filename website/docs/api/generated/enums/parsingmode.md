---
id: "parsingmode"
title: "ParsingMode"
sidebar_label: "ParsingMode"
---

## Index

### Enumeration members

* [DecodedMode](parsingmode.md#decodedmode)
* [StrictMode](parsingmode.md#strictmode)
* [TolerantMode](parsingmode.md#tolerantmode)

## Enumeration members

###  DecodedMode

• **DecodedMode**: = 2

QUrl will interpret the URL component in the fully-decoded form, where percent characters stand for themselves, not as the beginning of a percent-encoded sequence. This mode is only valid for the setters setting components of a URL; it is not permitted in the QUrl constructor, in fromEncoded() or in setUrl(). For more information on this mode, see the documentation for QUrl::FullyDecoded.

___

###  StrictMode

• **StrictMode**: = 1

Only valid URLs are accepted. This mode is useful for general URL validation.

___

###  TolerantMode

• **TolerantMode**: = 0

QUrl will try to correct some common errors in URLs. This mode is useful for parsing URLs coming from sources not known to be strictly standards-conforming.
