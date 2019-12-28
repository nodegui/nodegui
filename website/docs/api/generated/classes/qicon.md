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
* [nodeChildren](qicon.md#nodechildren)
* [nodeParent](qicon.md#optional-nodeparent)

### Methods

* [cacheKey](qicon.md#cachekey)
* [isMask](qicon.md#ismask)
* [pixmap](qicon.md#pixmap)
* [setIsMask](qicon.md#setismask)
* [setNodeParent](qicon.md#setnodeparent)
* [fromQVariant](qicon.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QIcon**(): *[QIcon](qicon.md)*

**Returns:** *[QIcon](qicon.md)*

\+ **new QIcon**(`native`: [NativeElement](../globals.md#nativeelement)): *[QIcon](qicon.md)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QIcon](qicon.md)*

\+ **new QIcon**(`filePath`: string): *[QIcon](qicon.md)*

**Parameters:**

Name | Type |
------ | ------ |
`filePath` | string |

**Returns:** *[QIcon](qicon.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹unknown›* =  new Set()

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

###  cacheKey

▸ **cacheKey**(): *number*

**Returns:** *number*

___

###  isMask

▸ **isMask**(): *boolean*

**Returns:** *boolean*

___

###  pixmap

▸ **pixmap**(`width`: number, `height`: number, `mode?`: [QIconMode](../enums/qiconmode.md), `state?`: [QIconState](../enums/qiconstate.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`mode?` | [QIconMode](../enums/qiconmode.md) |
`state?` | [QIconState](../enums/qiconstate.md) |

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QIcon](qicon.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QIcon](qicon.md)*
