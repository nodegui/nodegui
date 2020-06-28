---
id: "componentformattingoption"
title: "ComponentFormattingOption"
sidebar_label: "ComponentFormattingOption"
---

## Index

### Enumeration members

* [DecodeReserved](componentformattingoption.md#decodereserved)
* [EncodeDelimiters](componentformattingoption.md#encodedelimiters)
* [EncodeReserved](componentformattingoption.md#encodereserved)
* [EncodeSpaces](componentformattingoption.md#encodespaces)
* [EncodeUnicode](componentformattingoption.md#encodeunicode)
* [FullyDecoded](componentformattingoption.md#fullydecoded)
* [FullyEncoded](componentformattingoption.md#fullyencoded)
* [PrettyDecoded](componentformattingoption.md#prettydecoded)

## Enumeration members

###  DecodeReserved

• **DecodeReserved**: = 33554432

Decode the US-ASCII characters that the URL specification does not allow to appear in the URL. This is the default on the getters of individual components.

___

###  EncodeDelimiters

• **EncodeDelimiters**: = 0x400000 | 0x800000

Leave certain delimiters in their encoded form, as would appear in the URL when the full URL is represented as text. The delimiters are affected by this option change from component to component. This flag has no effect in toString() or toEncoded().

___

###  EncodeReserved

• **EncodeReserved**: = 16777216

Leave US-ASCII characters not permitted in the URL by the specification in their encoded form. This is the default on toString() and toEncoded().

___

###  EncodeSpaces

• **EncodeSpaces**: = 1048576

Leave space characters in their encoded form ("%20").

___

###  EncodeUnicode

• **EncodeUnicode**: = 2097152

Leave non-US-ASCII characters encoded in their UTF-8 percent-encoded form (e.g., "%C3%A9" for the U+00E9 codepoint, LATIN SMALL LETTER E WITH ACUTE).

___

###  FullyDecoded

• **FullyDecoded**: = FullyEncoded | DecodeReserved | 0x4000000

Attempt to decode as much as possible. For individual components of the URL, this decodes every percent encoding sequence, including control characters (U+0000 to U+001F) and UTF-8 sequences found in percent-encoded form. Use of this mode may cause data loss, see below for more information.

___

###  FullyEncoded

• **FullyEncoded**: = EncodeSpaces | EncodeUnicode | EncodeDelimiters | EncodeReserved

Leave all characters in their properly-encoded form, as this component would appear as part of a URL. When used with toString(), this produces a fully-compliant URL in QString form, exactly equal to the result of toEncoded()

___

###  PrettyDecoded

• **PrettyDecoded**: = 0

The component is returned in a "pretty form", with most percent-encoded characters decoded. The exact behavior of PrettyDecoded varies from component to component and may also change from Qt release to Qt release. This is the default.
