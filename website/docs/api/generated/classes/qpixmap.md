---
id: "qpixmap"
title: "QPixmap"
sidebar_label: "QPixmap"
---

> The QPixmap class helps hold an image in the form of off-screen image representation.

**This class is a JS wrapper around Qt's [QPixmap class](https://doc.qt.io/qt-5/qpixmap.html)**

A `QPixmap` provides ability to store an image in the memory.

### Example

```javascript
const { QPixmap } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const pixMap = new QPixmap(imageUrl);
```

## Hierarchy

* [Component](component.md)

  ↳ **QPixmap**

## Index

### Constructors

* [constructor](qpixmap.md#constructor)

### Properties

* [native](qpixmap.md#native)
* [nodeChildren](qpixmap.md#nodechildren)
* [nodeParent](qpixmap.md#optional-nodeparent)

### Methods

* [height](qpixmap.md#height)
* [load](qpixmap.md#load)
* [loadFromData](qpixmap.md#loadfromdata)
* [save](qpixmap.md#save)
* [scaled](qpixmap.md#scaled)
* [setNodeParent](qpixmap.md#setnodeparent)
* [width](qpixmap.md#width)
* [fromQVariant](qpixmap.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QPixmap**(): *[QPixmap](qpixmap.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPixmap](qpixmap.md)*

\+ **new QPixmap**(`native`: [NativeElement](../globals.md#nativeelement)): *[QPixmap](qpixmap.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QPixmap](qpixmap.md)*

\+ **new QPixmap**(`filePath`: string): *[QPixmap](qpixmap.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`filePath` | string |

**Returns:** *[QPixmap](qpixmap.md)*

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

###  height

▸ **height**(): *number*

**Returns:** *number*

___

###  load

▸ **load**(`imagePath`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`imagePath` | string |

**Returns:** *boolean*

___

###  loadFromData

▸ **loadFromData**(`buffer`: Buffer, `format?`: [ImageFormats](../globals.md#imageformats)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`buffer` | Buffer |
`format?` | [ImageFormats](../globals.md#imageformats) |

**Returns:** *boolean*

___

###  save

▸ **save**(`fileName`: string, `format?`: [ImageFormats](../globals.md#imageformats)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`fileName` | string |
`format?` | [ImageFormats](../globals.md#imageformats) |

**Returns:** *boolean*

___

###  scaled

▸ **scaled**(`width`: number, `height`: number, `aspectRatioMode?`: [AspectRatioMode](../enums/aspectratiomode.md), `transformationMode?`: [TransformationMode](../enums/transformationmode.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`aspectRatioMode?` | [AspectRatioMode](../enums/aspectratiomode.md) |
`transformationMode?` | [TransformationMode](../enums/transformationmode.md) |

**Returns:** *[QPixmap](qpixmap.md)*

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

###  width

▸ **width**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QPixmap](qpixmap.md)*
