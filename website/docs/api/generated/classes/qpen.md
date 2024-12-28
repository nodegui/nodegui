---
id: "qpen"
title: "QPen"
sidebar_label: "QPen"
---

> The QPen class defines the outline of shapes drawn by QPainter.

**This class is a JS wrapper around Qt's [QPen class](https://doc.qt.io/qt-5/qpen.html)**

### Example

```javascript
const { QPen } = require("@nodegui/nodegui");

const pen = new QPen();
```

## Hierarchy

* [Component](component.md)

  ↳ **QPen**

## Index

### Constructors

* [constructor](qpen.md#constructor)

### Properties

* [native](qpen.md#native)

### Methods

* [color](qpen.md#color)
* [setCapStyle](qpen.md#setcapstyle)
* [setColor](qpen.md#setcolor)
* [setStyle](qpen.md#setstyle)
* [setWidth](qpen.md#setwidth)
* [style](qpen.md#style)

## Constructors

###  constructor

\+ **new QPen**(): *[QPen](qpen.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPen](qpen.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  color

▸ **color**(): *[QColor](qcolor.md)*

**Returns:** *[QColor](qcolor.md)*

___

###  setCapStyle

▸ **setCapStyle**(`style`: [PenCapStyle](../enums/pencapstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [PenCapStyle](../enums/pencapstyle.md) |

**Returns:** *void*

___

###  setColor

▸ **setColor**(`color`: [QColor](qcolor.md) | [GlobalColor](../enums/globalcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) &#124; [GlobalColor](../enums/globalcolor.md) |

**Returns:** *void*

___

###  setStyle

▸ **setStyle**(`style`: [PenStyle](../enums/penstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [PenStyle](../enums/penstyle.md) |

**Returns:** *void*

___

###  setWidth

▸ **setWidth**(`width`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  style

▸ **style**(): *[PenStyle](../enums/penstyle.md)*

**Returns:** *[PenStyle](../enums/penstyle.md)*
