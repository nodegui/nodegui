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
* [nodeChildren](qbrush.md#nodechildren)
* [nodeParent](qbrush.md#optional-nodeparent)

### Methods

* [color](qbrush.md#color)
* [isOpaque](qbrush.md#isopaque)
* [setColor](qbrush.md#setcolor)
* [setNodeParent](qbrush.md#setnodeparent)
* [setStyle](qbrush.md#setstyle)
* [setTexture](qbrush.md#settexture)
* [style](qbrush.md#style)
* [texture](qbrush.md#texture)
* [fromQVariant](qbrush.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QBrush**(): *[QBrush](qbrush.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QBrush](qbrush.md)*

\+ **new QBrush**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QBrush](qbrush.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QBrush](qbrush.md)*

\+ **new QBrush**(`color`: [GlobalColor](../enums/globalcolor.md), `style`: [BrushStyle](../enums/brushstyle.md)): *[QBrush](qbrush.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [GlobalColor](../enums/globalcolor.md) |
`style` | [BrushStyle](../enums/brushstyle.md) |

**Returns:** *[QBrush](qbrush.md)*

\+ **new QBrush**(`color`: [QColor](qcolor.md), `style`: [BrushStyle](../enums/brushstyle.md)): *[QBrush](qbrush.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |
`style` | [BrushStyle](../enums/brushstyle.md) |

**Returns:** *[QBrush](qbrush.md)*

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

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
