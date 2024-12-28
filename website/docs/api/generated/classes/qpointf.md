---
id: "qpointf"
title: "QPointF"
sidebar_label: "QPointF"
---

The QPointF class defines a point in the plane using floating point precision

A point is specified by a x coordinate and an y coordinate which can be accessed using the x() and y() functions. The coordinates of the point are specified using floating point numbers for accuracy. The isNull() function returns true if both x and y are set to 0.0. The coordinates can be set (or altered) using the setX() and setY() functions

In addition, the QPointF class provides a constructor converting a QPoint object into a QPointF object, and a corresponding toPoint() function which returns a QPoint copy of this point.

## Hierarchy

* [Component](component.md)

  ↳ **QPointF**

## Index

### Constructors

* [constructor](qpointf.md#constructor)

### Properties

* [native](qpointf.md#native)

### Methods

* [isNull](qpointf.md#isnull)
* [manhattanLength](qpointf.md#manhattanlength)
* [setX](qpointf.md#setx)
* [setY](qpointf.md#sety)
* [toPoint](qpointf.md#topoint)
* [transposed](qpointf.md#transposed)
* [x](qpointf.md#x)
* [y](qpointf.md#y)
* [dotProduct](qpointf.md#static-dotproduct)

## Constructors

###  constructor

\+ **new QPointF**(`nativeOrXOrQPoint?`: [NativeElement](../globals.md#nativeelement) | number | [QPoint](qpoint.md), `y`: number): *[QPointF](qpointf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`nativeOrXOrQPoint?` | [NativeElement](../globals.md#nativeelement) &#124; number &#124; [QPoint](qpoint.md) | - |
`y` | number | 0 |

**Returns:** *[QPointF](qpointf.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  isNull

▸ **isNull**(): *boolean*

Returns true if both the x and y coordinates are set to 0.0 (ignoring the sign); otherwise returns false.

**Returns:** *boolean*

___

###  manhattanLength

▸ **manhattanLength**(): *number*

Returns the sum of the absolute values of x() and y(), traditionally known as the "Manhattan length" of the vector from the origin to the point.

**Returns:** *number*

___

###  setX

▸ **setX**(`value`: number): *void*

Sets the x coordinate of this point to the given x coordinate.

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setY

▸ **setY**(`value`: number): *void*

Sets the y coordinate of this point to the given y coordinate.

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  toPoint

▸ **toPoint**(): *[QPoint](qpoint.md)*

Rounds the coordinates of this point to the nearest integer, and returns a QPoint object with the rounded coordinates.

**Returns:** *[QPoint](qpoint.md)*

___

###  transposed

▸ **transposed**(): *[QPointF](qpointf.md)*

Returns a point with x and y coordinates exchanged

**Returns:** *[QPointF](qpointf.md)*

___

###  x

▸ **x**(): *number*

Returns the x coordinate of this point

**Returns:** *number*

___

###  y

▸ **y**(): *number*

Returns the y coordinate of this point

**Returns:** *number*

___

### `Static` dotProduct

▸ **dotProduct**(`p1`: [QPointF](qpointf.md), `p2`: [QPointF](qpointf.md)): *number*

Returns the dot product of p1 and p2

**Parameters:**

Name | Type |
------ | ------ |
`p1` | [QPointF](qpointf.md) |
`p2` | [QPointF](qpointf.md) |

**Returns:** *number*
