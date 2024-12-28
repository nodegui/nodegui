---
id: "qfontmetricsf"
title: "QFontMetricsF"
sidebar_label: "QFontMetricsF"
---

## Hierarchy

* [Component](component.md)

  ↳ **QFontMetricsF**

## Index

### Constructors

* [constructor](qfontmetricsf.md#constructor)

### Properties

* [native](qfontmetricsf.md#native)

### Methods

* [ascent](qfontmetricsf.md#ascent)
* [averageCharWidth](qfontmetricsf.md#averagecharwidth)
* [boundingRect](qfontmetricsf.md#boundingrect)
* [capHeight](qfontmetricsf.md#capheight)
* [descent](qfontmetricsf.md#descent)
* [elidedText](qfontmetricsf.md#elidedtext)
* [fontDpi](qfontmetricsf.md#fontdpi)
* [height](qfontmetricsf.md#height)
* [horizontalAdvance](qfontmetricsf.md#horizontaladvance)
* [inFont](qfontmetricsf.md#infont)
* [inFontUcs4](qfontmetricsf.md#infontucs4)
* [leading](qfontmetricsf.md#leading)
* [leftBearing](qfontmetricsf.md#leftbearing)
* [lineSpacing](qfontmetricsf.md#linespacing)
* [lineWidth](qfontmetricsf.md#linewidth)
* [maxWidth](qfontmetricsf.md#maxwidth)
* [minLeftBearing](qfontmetricsf.md#minleftbearing)
* [minRightBearing](qfontmetricsf.md#minrightbearing)
* [overlinePos](qfontmetricsf.md#overlinepos)
* [rightBearing](qfontmetricsf.md#rightbearing)
* [size](qfontmetricsf.md#size)
* [strikeOutPos](qfontmetricsf.md#strikeoutpos)
* [swap](qfontmetricsf.md#swap)
* [tightBoundingRect](qfontmetricsf.md#tightboundingrect)
* [underlinePos](qfontmetricsf.md#underlinepos)
* [xHeight](qfontmetricsf.md#xheight)

## Constructors

###  constructor

\+ **new QFontMetricsF**(`native`: [NativeElement](../globals.md#nativeelement)): *[QFontMetricsF](qfontmetricsf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QFontMetricsF](qfontmetricsf.md)*

\+ **new QFontMetricsF**(`qfont`: [QFont](qfont.md)): *[QFontMetricsF](qfontmetricsf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`qfont` | [QFont](qfont.md) |

**Returns:** *[QFontMetricsF](qfontmetricsf.md)*

\+ **new QFontMetricsF**(`qfontmetricsf`: [QFontMetricsF](qfontmetricsf.md)): *[QFontMetricsF](qfontmetricsf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`qfontmetricsf` | [QFontMetricsF](qfontmetricsf.md) |

**Returns:** *[QFontMetricsF](qfontmetricsf.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  ascent

▸ **ascent**(): *number*

Returns the ascent of the font

**Returns:** *number*

___

###  averageCharWidth

▸ **averageCharWidth**(): *number*

Returns the average width of glyphs in the font

**Returns:** *number*

___

###  boundingRect

▸ **boundingRect**(`text`: string): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *[QRect](qrect.md)*

___

###  capHeight

▸ **capHeight**(): *number*

Returns the cap height of the font

**Returns:** *number*

___

###  descent

▸ **descent**(): *number*

Returns the descent of the font

**Returns:** *number*

___

###  elidedText

▸ **elidedText**(`text`: string, `mode`: [TextElideMode](../enums/textelidemode.md), `width`: number, `flags`: number): *string*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`text` | string | - |
`mode` | [TextElideMode](../enums/textelidemode.md) | - |
`width` | number | - |
`flags` | number | 0 |

**Returns:** *string*

___

###  fontDpi

▸ **fontDpi**(): *number*

Returns the font DPI

**Returns:** *number*

___

###  height

▸ **height**(): *number*

Returns the height of the font

**Returns:** *number*

___

###  horizontalAdvance

▸ **horizontalAdvance**(`text`: string, `len`: number): *number*

Returns the horizontal advance in pixels of the first len characters of text. If len is negative (the default), the entire string is used

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`text` | string | - |
`len` | number | -1 |

**Returns:** *number*

___

###  inFont

▸ **inFont**(`text`: string): *number*

Returns true if character ch is a valid character in the font; otherwise returns false

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *number*

___

###  inFontUcs4

▸ **inFontUcs4**(`ucs4`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`ucs4` | number |

**Returns:** *boolean*

___

###  leading

▸ **leading**(): *number*

Returns the leading of the font

**Returns:** *number*

___

###  leftBearing

▸ **leftBearing**(`text`: string): *number*

Returns the left bearing of character ch in the font

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *number*

___

###  lineSpacing

▸ **lineSpacing**(): *number*

Returns the distance from one base line to the next

**Returns:** *number*

___

###  lineWidth

▸ **lineWidth**(): *number*

Returns the width of the underline and strikeout lines, adjusted for the point size of the font

**Returns:** *number*

___

###  maxWidth

▸ **maxWidth**(): *number*

**Returns:** *number*

___

###  minLeftBearing

▸ **minLeftBearing**(): *number*

**Returns:** *number*

___

###  minRightBearing

▸ **minRightBearing**(): *number*

**Returns:** *number*

___

###  overlinePos

▸ **overlinePos**(): *number*

Returns the distance from the base line to where an overline should be drawn

**Returns:** *number*

___

###  rightBearing

▸ **rightBearing**(`text`: string): *number*

Returns the right bearing of character ch in the font

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *number*

___

###  size

▸ **size**(`flags`: [TextFlag](../enums/textflag.md), `text`: string, `tabStops`: number): *[QSize](qsize.md)*

Returns the size in pixels of text

See QtEnums::TextFlag for flags

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`flags` | [TextFlag](../enums/textflag.md) | - |
`text` | string | - |
`tabStops` | number | 0 |

**Returns:** *[QSize](qsize.md)*

___

###  strikeOutPos

▸ **strikeOutPos**(): *number*

Returns the distance from the base line to where the strikeout line should be drawn

**Returns:** *number*

___

###  swap

▸ **swap**(`other`: [QFontMetricsF](qfontmetricsf.md)): *void*

Swaps metrics other with this metrics. This operation is very fast and never fails

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QFontMetricsF](qfontmetricsf.md) |

**Returns:** *void*

___

###  tightBoundingRect

▸ **tightBoundingRect**(`text`: string): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *[QRect](qrect.md)*

___

###  underlinePos

▸ **underlinePos**(): *number*

Returns the distance from the base line to where an underscore should be drawn

**Returns:** *number*

___

###  xHeight

▸ **xHeight**(): *number*

Returns the 'x' height of the font. This is often but not always the same as the height of the character 'x'.

**Returns:** *number*
