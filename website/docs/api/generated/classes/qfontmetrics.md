---
id: "qfontmetrics"
title: "QFontMetrics"
sidebar_label: "QFontMetrics"
---

## Hierarchy

* [Component](component.md)

  ↳ **QFontMetrics**

## Index

### Constructors

* [constructor](qfontmetrics.md#constructor)

### Properties

* [native](qfontmetrics.md#native)

### Methods

* [ascent](qfontmetrics.md#ascent)
* [averageCharWidth](qfontmetrics.md#averagecharwidth)
* [boundingRect](qfontmetrics.md#boundingrect)
* [capHeight](qfontmetrics.md#capheight)
* [descent](qfontmetrics.md#descent)
* [elidedText](qfontmetrics.md#elidedtext)
* [fontDpi](qfontmetrics.md#fontdpi)
* [height](qfontmetrics.md#height)
* [horizontalAdvance](qfontmetrics.md#horizontaladvance)
* [inFont](qfontmetrics.md#infont)
* [inFontUcs4](qfontmetrics.md#infontucs4)
* [leading](qfontmetrics.md#leading)
* [leftBearing](qfontmetrics.md#leftbearing)
* [lineSpacing](qfontmetrics.md#linespacing)
* [lineWidth](qfontmetrics.md#linewidth)
* [maxWidth](qfontmetrics.md#maxwidth)
* [minLeftBearing](qfontmetrics.md#minleftbearing)
* [minRightBearing](qfontmetrics.md#minrightbearing)
* [overlinePos](qfontmetrics.md#overlinepos)
* [rightBearing](qfontmetrics.md#rightbearing)
* [size](qfontmetrics.md#size)
* [strikeOutPos](qfontmetrics.md#strikeoutpos)
* [swap](qfontmetrics.md#swap)
* [tightBoundingRect](qfontmetrics.md#tightboundingrect)
* [underlinePos](qfontmetrics.md#underlinepos)
* [xHeight](qfontmetrics.md#xheight)

## Constructors

###  constructor

\+ **new QFontMetrics**(`native`: [NativeElement](../globals.md#nativeelement)): *[QFontMetrics](qfontmetrics.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QFontMetrics](qfontmetrics.md)*

\+ **new QFontMetrics**(`qfont`: [QFont](qfont.md)): *[QFontMetrics](qfontmetrics.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`qfont` | [QFont](qfont.md) |

**Returns:** *[QFontMetrics](qfontmetrics.md)*

\+ **new QFontMetrics**(`qfontmetrics`: [QFontMetrics](qfontmetrics.md)): *[QFontMetrics](qfontmetrics.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`qfontmetrics` | [QFontMetrics](qfontmetrics.md) |

**Returns:** *[QFontMetrics](qfontmetrics.md)*

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

▸ **swap**(`other`: [QFontMetrics](qfontmetrics.md)): *void*

Swaps metrics other with this metrics. This operation is very fast and never fails

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QFontMetrics](qfontmetrics.md) |

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
