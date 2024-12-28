---
id: "qicon"
title: "QIcon"
sidebar_label: "QIcon"
---

> The QIcon class provides scalable icons in different modes and states.

**This class is a JS wrapper around Qt's [QIcon class](https://doc.qt.io/qt-5/qicon.html)**

### Example

```javascript
const { QIcon } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const icon = new QIcon(imageUrl);
```

## Hierarchy

* [Component](component.md)

  ↳ **QIcon**

## Index

### Constructors

* [constructor](qicon.md#constructor)

### Properties

* [native](qicon.md#native)

### Methods

* [actualSize](qicon.md#actualsize)
* [addFile](qicon.md#addfile)
* [addPixmap](qicon.md#addpixmap)
* [availableSizes](qicon.md#availablesizes)
* [cacheKey](qicon.md#cachekey)
* [isMask](qicon.md#ismask)
* [isNull](qicon.md#isnull)
* [name](qicon.md#name)
* [paint](qicon.md#paint)
* [pixmap](qicon.md#pixmap)
* [setIsMask](qicon.md#setismask)
* [swap](qicon.md#swap)
* [fromQVariant](qicon.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QIcon**(): *[QIcon](qicon.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QIcon](qicon.md)*

\+ **new QIcon**(`native`: [NativeElement](../globals.md#nativeelement)): *[QIcon](qicon.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QIcon](qicon.md)*

\+ **new QIcon**(`filePath`: string): *[QIcon](qicon.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`filePath` | string |

**Returns:** *[QIcon](qicon.md)*

\+ **new QIcon**(`pixmap`: [QPixmap](qpixmap.md)): *[QIcon](qicon.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) |

**Returns:** *[QIcon](qicon.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  actualSize

▸ **actualSize**(`size`: [QSize](qsize.md), `mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *[QSize](qsize.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`size` | [QSize](qsize.md) | null |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *[QSize](qsize.md)*

___

###  addFile

▸ **addFile**(`fileName`: string, `size`: [QSize](qsize.md), `mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`fileName` | string | - |
`size` | [QSize](qsize.md) | null |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *void*

___

###  addPixmap

▸ **addPixmap**(`pixmap`: [QPixmap](qpixmap.md), `mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) | - |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *void*

___

###  availableSizes

▸ **availableSizes**(`mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *[QSize](qsize.md)[]*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *[QSize](qsize.md)[]*

___

###  cacheKey

▸ **cacheKey**(): *number*

**Returns:** *number*

___

###  isMask

▸ **isMask**(): *boolean*

**Returns:** *boolean*

___

###  isNull

▸ **isNull**(): *boolean*

**Returns:** *boolean*

___

###  name

▸ **name**(): *string*

**Returns:** *string*

___

###  paint

▸ **paint**(`painter`: [QPainter](qpainter.md), `x`: number, `y`: number, `w`: number, `h`: number, `alignment`: [AlignmentFlag](../enums/alignmentflag.md), `mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`painter` | [QPainter](qpainter.md) | - |
`x` | number | - |
`y` | number | - |
`w` | number | - |
`h` | number | - |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) | AlignmentFlag.AlignCenter |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *void*

___

###  pixmap

▸ **pixmap**(`width`: number, `height`: number, `mode`: [QIconMode](../enums/qiconmode.md), `state`: [QIconState](../enums/qiconstate.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`width` | number | - |
`height` | number | - |
`mode` | [QIconMode](../enums/qiconmode.md) | QIconMode.Normal |
`state` | [QIconState](../enums/qiconstate.md) | QIconState.Off |

**Returns:** *[QPixmap](qpixmap.md)*

___

###  setIsMask

▸ **setIsMask**(`isMask`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isMask` | boolean |

**Returns:** *void*

___

###  swap

▸ **swap**(`other`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QIcon](qicon.md) |

**Returns:** *void*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QIcon](qicon.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QIcon](qicon.md)*
