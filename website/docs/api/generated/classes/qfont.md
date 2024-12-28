---
id: "qfont"
title: "QFont"
sidebar_label: "QFont"
---

## Hierarchy

* [Component](component.md)

  ↳ **QFont**

## Index

### Constructors

* [constructor](qfont.md#constructor)

### Properties

* [native](qfont.md#native)

### Methods

* [bold](qfont.md#bold)
* [capitalization](qfont.md#capitalization)
* [family](qfont.md#family)
* [italic](qfont.md#italic)
* [pixelSize](qfont.md#pixelsize)
* [pointSize](qfont.md#pointsize)
* [setBold](qfont.md#setbold)
* [setCapitalization](qfont.md#setcapitalization)
* [setFamily](qfont.md#setfamily)
* [setItalic](qfont.md#setitalic)
* [setPixelSize](qfont.md#setpixelsize)
* [setPointSize](qfont.md#setpointsize)
* [setStretch](qfont.md#setstretch)
* [setStyleName](qfont.md#setstylename)
* [setWeight](qfont.md#setweight)
* [stretch](qfont.md#stretch)
* [toString](qfont.md#tostring)
* [weight](qfont.md#weight)
* [fromQVariant](qfont.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QFont**(): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QFont](qfont.md)*

\+ **new QFont**(`font`: [QFont](qfont.md)): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *[QFont](qfont.md)*

\+ **new QFont**(`native`: [NativeElement](../globals.md#nativeelement)): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QFont](qfont.md)*

\+ **new QFont**(`family`: string, `pointSize?`: number, `weight?`: [QFontWeight](../enums/qfontweight.md), `italic?`: boolean): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |
`pointSize?` | number |
`weight?` | [QFontWeight](../enums/qfontweight.md) |
`italic?` | boolean |

**Returns:** *[QFont](qfont.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  bold

▸ **bold**(): *boolean*

**Returns:** *boolean*

___

###  capitalization

▸ **capitalization**(): *[QFontCapitalization](../enums/qfontcapitalization.md)*

**Returns:** *[QFontCapitalization](../enums/qfontcapitalization.md)*

___

###  family

▸ **family**(): *string*

**Returns:** *string*

___

###  italic

▸ **italic**(): *boolean*

**Returns:** *boolean*

___

###  pixelSize

▸ **pixelSize**(): *number*

**Returns:** *number*

___

###  pointSize

▸ **pointSize**(): *number*

**Returns:** *number*

___

###  setBold

▸ **setBold**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setCapitalization

▸ **setCapitalization**(`caps`: [QFontCapitalization](../enums/qfontcapitalization.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`caps` | [QFontCapitalization](../enums/qfontcapitalization.md) |

**Returns:** *void*

___

###  setFamily

▸ **setFamily**(`family`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |

**Returns:** *void*

___

###  setItalic

▸ **setItalic**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setPixelSize

▸ **setPixelSize**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setPointSize

▸ **setPointSize**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setStretch

▸ **setStretch**(`factor`: [QFontStretch](../enums/qfontstretch.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`factor` | [QFontStretch](../enums/qfontstretch.md) |

**Returns:** *void*

___

###  setStyleName

▸ **setStyleName**(`style`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setWeight

▸ **setWeight**(`weight`: [QFontWeight](../enums/qfontweight.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`weight` | [QFontWeight](../enums/qfontweight.md) |

**Returns:** *void*

___

###  stretch

▸ **stretch**(): *[QFontStretch](../enums/qfontstretch.md)*

**Returns:** *[QFontStretch](../enums/qfontstretch.md)*

___

###  toString

▸ **toString**(): *string*

**Returns:** *string*

___

###  weight

▸ **weight**(): *[QFontWeight](../enums/qfontweight.md)*

**Returns:** *[QFontWeight](../enums/qfontweight.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QFont](qfont.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QFont](qfont.md)*
