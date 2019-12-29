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
* [nodeChildren](qfont.md#nodechildren)
* [nodeParent](qfont.md#optional-nodeparent)

### Methods

* [capitalization](qfont.md#capitalization)
* [family](qfont.md#family)
* [italic](qfont.md#italic)
* [pointSize](qfont.md#pointsize)
* [setCapitalization](qfont.md#setcapitalization)
* [setFamily](qfont.md#setfamily)
* [setItalic](qfont.md#setitalic)
* [setNodeParent](qfont.md#setnodeparent)
* [setPointSize](qfont.md#setpointsize)
* [setStretch](qfont.md#setstretch)
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

\+ **new QFont**(`font?`: [QFont](qfont.md)): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`font?` | [QFont](qfont.md) |

**Returns:** *[QFont](qfont.md)*

\+ **new QFont**(`family?`: undefined | string, `pointSize?`: undefined | number, `weight?`: undefined | number, `italic?`: undefined | false | true): *[QFont](qfont.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`family?` | undefined &#124; string |
`pointSize?` | undefined &#124; number |
`weight?` | undefined &#124; number |
`italic?` | undefined &#124; false &#124; true |

**Returns:** *[QFont](qfont.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

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

###  pointSize

▸ **pointSize**(): *number*

**Returns:** *number*

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

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
