---
id: "qpicture"
title: "QPicture"
sidebar_label: "QPicture"
---

> The QPicture class is a paint device that records and replays QPainter commands.

**This class is a JS wrapper around Qt's [QPicture class](https://doc.qt.io/qt-5/qpicture.html)**

### Example

```javascript
const { QPicture } = require("@nodegui/nodegui");

const picture = new QPicture();
```

## Hierarchy

* [Component](component.md)

  ↳ **QPicture**

## Index

### Constructors

* [constructor](qpicture.md#constructor)

### Properties

* [native](qpicture.md#native)

### Methods

* [boundingRect](qpicture.md#boundingrect)
* [isNull](qpicture.md#isnull)
* [load](qpicture.md#load)
* [save](qpicture.md#save)
* [setBoundingRect](qpicture.md#setboundingrect)
* [size](qpicture.md#size)

## Constructors

###  constructor

\+ **new QPicture**(): *[QPicture](qpicture.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPicture](qpicture.md)*

\+ **new QPicture**(`native`: [NativeElement](../globals.md#nativeelement)): *[QPicture](qpicture.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QPicture](qpicture.md)*

\+ **new QPicture**(`formatVersion`: number): *[QPicture](qpicture.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`formatVersion` | number |

**Returns:** *[QPicture](qpicture.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  boundingRect

▸ **boundingRect**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  isNull

▸ **isNull**(): *boolean*

**Returns:** *boolean*

___

###  load

▸ **load**(`fileName`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`fileName` | string |

**Returns:** *boolean*

___

###  save

▸ **save**(`fileName`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`fileName` | string |

**Returns:** *boolean*

___

###  setBoundingRect

▸ **setBoundingRect**(`r`: [QRect](qrect.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`r` | [QRect](qrect.md) |

**Returns:** *void*

___

###  size

▸ **size**(): *number*

**Returns:** *number*
