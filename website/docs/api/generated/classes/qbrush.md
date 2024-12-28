---
id: "qbrush"
title: "QBrush"
sidebar_label: "QBrush"
---

> The QBrush class defines the fill pattern of shapes drawn by QPainter.

**This class is a JS wrapper around Qt's [QBrush class](https://doc.qt.io/qt-5/qbrush.html)**

### Example

```javascript
const { QBrush } = require("@nodegui/nodegui");

const brush = new QBrush();
```

## Hierarchy

* [Component](component.md)

  ↳ **QBrush**

## Index

### Constructors

* [constructor](qbrush.md#constructor)

### Properties

* [native](qbrush.md#native)

### Methods

* [color](qbrush.md#color)
* [isOpaque](qbrush.md#isopaque)
* [setColor](qbrush.md#setcolor)
* [setStyle](qbrush.md#setstyle)
* [setTexture](qbrush.md#settexture)
* [style](qbrush.md#style)
* [texture](qbrush.md#texture)
* [fromQVariant](qbrush.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QBrush**(`nativeOrGlobalColor?`: [NativeElement](../globals.md#nativeelement) | [GlobalColor](../enums/globalcolor.md) | [QColor](qcolor.md), `style`: [BrushStyle](../enums/brushstyle.md)): *[QBrush](qbrush.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`nativeOrGlobalColor?` | [NativeElement](../globals.md#nativeelement) &#124; [GlobalColor](../enums/globalcolor.md) &#124; [QColor](qcolor.md) | - |
`style` | [BrushStyle](../enums/brushstyle.md) | BrushStyle.SolidPattern |

**Returns:** *[QBrush](qbrush.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  color

▸ **color**(): *[QColor](qcolor.md)*

**Returns:** *[QColor](qcolor.md)*

___

###  isOpaque

▸ **isOpaque**(): *boolean*

**Returns:** *boolean*

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

▸ **setStyle**(`style`: [BrushStyle](../enums/brushstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [BrushStyle](../enums/brushstyle.md) |

**Returns:** *void*

___

###  setTexture

▸ **setTexture**(`pixmap`: [QPixmap](qpixmap.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) |

**Returns:** *void*

___

###  style

▸ **style**(): *[BrushStyle](../enums/brushstyle.md)*

**Returns:** *[BrushStyle](../enums/brushstyle.md)*

___

###  texture

▸ **texture**(): *[QPixmap](qpixmap.md)*

**Returns:** *[QPixmap](qpixmap.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QBrush](qbrush.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QBrush](qbrush.md)*
