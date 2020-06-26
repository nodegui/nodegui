---
id: "qpainterpath"
title: "QPainterPath"
sidebar_label: "QPainterPath"
---

> Lets you paint paths on widgets.

**This class is a JS wrapper around Qt's [QPainterPath class](https://doc.qt.io/qt-5/qpainterpath.html)**

## Hierarchy

* [Component](component.md)

  ↳ **QPainterPath**

## Index

### Constructors

* [constructor](qpainterpath.md#constructor)

### Properties

* [native](qpainterpath.md#native)
* [nodeChildren](qpainterpath.md#nodechildren)
* [nodeParent](qpainterpath.md#optional-nodeparent)

### Methods

* [addEllipse](qpainterpath.md#addellipse)
* [addPath](qpainterpath.md#addpath)
* [addRect](qpainterpath.md#addrect)
* [addRoundedRect](qpainterpath.md#addroundedrect)
* [addText](qpainterpath.md#addtext)
* [angleAtPercent](qpainterpath.md#angleatpercent)
* [arcMoveTo](qpainterpath.md#arcmoveto)
* [arcTo](qpainterpath.md#arcto)
* [boundingRect](qpainterpath.md#boundingrect)
* [capacity](qpainterpath.md#capacity)
* [clear](qpainterpath.md#clear)
* [closeSubpath](qpainterpath.md#closesubpath)
* [connectPath](qpainterpath.md#connectpath)
* [controlPointRect](qpainterpath.md#controlpointrect)
* [cubicTo](qpainterpath.md#cubicto)
* [currentPosition](qpainterpath.md#currentposition)
* [elementCount](qpainterpath.md#elementcount)
* [fillRule](qpainterpath.md#fillrule)
* [intersects](qpainterpath.md#intersects)
* [isEmpty](qpainterpath.md#isempty)
* [length](qpainterpath.md#length)
* [lineTo](qpainterpath.md#lineto)
* [moveTo](qpainterpath.md#moveto)
* [percentAtLength](qpainterpath.md#percentatlength)
* [pointAtPercent](qpainterpath.md#pointatpercent)
* [quadTo](qpainterpath.md#quadto)
* [reserve](qpainterpath.md#reserve)
* [setElementPositionAt](qpainterpath.md#setelementpositionat)
* [setFillRule](qpainterpath.md#setfillrule)
* [setNodeParent](qpainterpath.md#setnodeparent)
* [slopeAtPercent](qpainterpath.md#slopeatpercent)
* [swap](qpainterpath.md#swap)
* [translate](qpainterpath.md#translate)

## Constructors

###  constructor

\+ **new QPainterPath**(): *[QPainterPath](qpainterpath.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPainterPath](qpainterpath.md)*

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

###  addEllipse

▸ **addEllipse**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  addPath

▸ **addPath**(`path`: [QPainterPath](qpainterpath.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |

**Returns:** *void*

___

###  addRect

▸ **addRect**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  addRoundedRect

▸ **addRoundedRect**(`x`: number, `y`: number, `width`: number, `height`: number, `xRadius`: number, `yRadius`: number, `mode`: [SizeMode](../enums/sizemode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`width` | number | - |
`height` | number | - |
`xRadius` | number | - |
`yRadius` | number | - |
`mode` | [SizeMode](../enums/sizemode.md) | SizeMode.AbsoluteSize |

**Returns:** *void*

___

###  addText

▸ **addText**(`x`: number, `y`: number, `font`: [QFont](qfont.md), `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`font` | [QFont](qfont.md) |
`text` | string |

**Returns:** *void*

___

###  angleAtPercent

▸ **angleAtPercent**(`t`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`t` | number |

**Returns:** *number*

___

###  arcMoveTo

▸ **arcMoveTo**(`x`: number, `y`: number, `width`: number, `height`: number, `angle`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`angle` | number |

**Returns:** *void*

___

###  arcTo

▸ **arcTo**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `sweepLength`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`sweepLength` | number |

**Returns:** *void*

___

###  boundingRect

▸ **boundingRect**(): *object*

**Returns:** *object*

* **height**: *number*

* **width**: *number*

* **x**: *number*

* **y**: *number*

___

###  capacity

▸ **capacity**(): *number*

**Returns:** *number*

___

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  closeSubpath

▸ **closeSubpath**(): *void*

**Returns:** *void*

___

###  connectPath

▸ **connectPath**(`path`: [QPainterPath](qpainterpath.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |

**Returns:** *void*

___

###  controlPointRect

▸ **controlPointRect**(): *object*

**Returns:** *object*

* **height**: *number*

* **width**: *number*

* **x**: *number*

* **y**: *number*

___

###  cubicTo

▸ **cubicTo**(`c1X`: number, `c1Y`: number, `c2X`: number, `c2Y`: number, `endPointX`: number, `endPointY`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`c1X` | number |
`c1Y` | number |
`c2X` | number |
`c2Y` | number |
`endPointX` | number |
`endPointY` | number |

**Returns:** *boolean*

___

###  currentPosition

▸ **currentPosition**(): *object*

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  elementCount

▸ **elementCount**(): *number*

**Returns:** *number*

___

###  fillRule

▸ **fillRule**(): *[FillRule](../enums/fillrule.md)*

**Returns:** *[FillRule](../enums/fillrule.md)*

___

###  intersects

▸ **intersects**(`path`: [QPainterPath](qpainterpath.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |

**Returns:** *boolean*

___

###  isEmpty

▸ **isEmpty**(): *boolean*

**Returns:** *boolean*

___

###  length

▸ **length**(): *number*

**Returns:** *number*

___

###  lineTo

▸ **lineTo**(`x`: number, `y`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *boolean*

___

###  moveTo

▸ **moveTo**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  percentAtLength

▸ **percentAtLength**(`len`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`len` | number |

**Returns:** *number*

___

###  pointAtPercent

▸ **pointAtPercent**(`p`: number): *object*

**Parameters:**

Name | Type |
------ | ------ |
`p` | number |

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  quadTo

▸ **quadTo**(`cx`: number, `cy`: number, `endPointX`: number, `endPointY`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`cx` | number |
`cy` | number |
`endPointX` | number |
`endPointY` | number |

**Returns:** *boolean*

___

###  reserve

▸ **reserve**(`size`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | number |

**Returns:** *void*

___

###  setElementPositionAt

▸ **setElementPositionAt**(`index`: number, `x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  setFillRule

▸ **setFillRule**(`fillRule`: [FillRule](../enums/fillrule.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`fillRule` | [FillRule](../enums/fillrule.md) |

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

###  slopeAtPercent

▸ **slopeAtPercent**(`p`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`p` | number |

**Returns:** *number*

___

###  swap

▸ **swap**(`other`: [QPainterPath](qpainterpath.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QPainterPath](qpainterpath.md) |

**Returns:** *void*

___

###  translate

▸ **translate**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*
