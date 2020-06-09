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

* [addRect](qpainterpath.md#addrect)
* [closeSubpath](qpainterpath.md#closesubpath)
* [cubicTo](qpainterpath.md#cubicto)
* [lineTo](qpainterpath.md#lineto)
* [moveTo](qpainterpath.md#moveto)
* [quadTo](qpainterpath.md#quadto)
* [setNodeParent](qpainterpath.md#setnodeparent)

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

###  closeSubpath

▸ **closeSubpath**(): *void*

**Returns:** *void*

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*
