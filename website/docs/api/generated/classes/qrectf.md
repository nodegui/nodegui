---
id: "qrectf"
title: "QRectF"
sidebar_label: "QRectF"
---

description

## Hierarchy

* [Component](component.md)

  ↳ **QRectF**

## Index

### Constructors

* [constructor](qrectf.md#constructor)

### Properties

* [native](qrectf.md#native)
* [nodeChildren](qrectf.md#nodechildren)
* [nodeParent](qrectf.md#optional-nodeparent)

### Methods

* [adjust](qrectf.md#adjust)
* [adjusted](qrectf.md#adjusted)
* [bottom](qrectf.md#bottom)
* [bottomLeft](qrectf.md#bottomleft)
* [bottomRight](qrectf.md#bottomright)
* [center](qrectf.md#center)
* [contains](qrectf.md#contains)
* [height](qrectf.md#height)
* [intersected](qrectf.md#intersected)
* [intersects](qrectf.md#intersects)
* [isEmpty](qrectf.md#isempty)
* [isNull](qrectf.md#isnull)
* [isValid](qrectf.md#isvalid)
* [left](qrectf.md#left)
* [moveBottom](qrectf.md#movebottom)
* [moveBottomLeft](qrectf.md#movebottomleft)
* [moveBottomRight](qrectf.md#movebottomright)
* [moveCenter](qrectf.md#movecenter)
* [moveLeft](qrectf.md#moveleft)
* [moveRight](qrectf.md#moveright)
* [moveTo](qrectf.md#moveto)
* [moveTop](qrectf.md#movetop)
* [moveTopLeft](qrectf.md#movetopleft)
* [moveTopRight](qrectf.md#movetopright)
* [normalized](qrectf.md#normalized)
* [right](qrectf.md#right)
* [setBottom](qrectf.md#setbottom)
* [setBottomLeft](qrectf.md#setbottomleft)
* [setBottomRight](qrectf.md#setbottomright)
* [setCoords](qrectf.md#setcoords)
* [setHeight](qrectf.md#setheight)
* [setLeft](qrectf.md#setleft)
* [setNodeParent](qrectf.md#setnodeparent)
* [setRect](qrectf.md#setrect)
* [setRight](qrectf.md#setright)
* [setTop](qrectf.md#settop)
* [setTopLeft](qrectf.md#settopleft)
* [setTopRight](qrectf.md#settopright)
* [setWidth](qrectf.md#setwidth)
* [setX](qrectf.md#setx)
* [setY](qrectf.md#sety)
* [toAlignedRect](qrectf.md#toalignedrect)
* [toRect](qrectf.md#torect)
* [top](qrectf.md#top)
* [topLeft](qrectf.md#topleft)
* [topRight](qrectf.md#topright)
* [translate](qrectf.md#translate)
* [translated](qrectf.md#translated)
* [transposed](qrectf.md#transposed)
* [united](qrectf.md#united)
* [width](qrectf.md#width)
* [x](qrectf.md#x)
* [y](qrectf.md#y)

## Constructors

###  constructor

\+ **new QRectF**(): *[QRectF](qrectf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QRectF](qrectf.md)*

\+ **new QRectF**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QRectF](qrectf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QRectF](qrectf.md)*

\+ **new QRectF**(`x?`: undefined | number, `y?`: undefined | number, `width?`: undefined | number, `height?`: undefined | number): *[QRectF](qrectf.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`x?` | undefined &#124; number |
`y?` | undefined &#124; number |
`width?` | undefined &#124; number |
`height?` | undefined &#124; number |

**Returns:** *[QRectF](qrectf.md)*

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

###  adjust

▸ **adjust**(`dx1`: number, `dy1`: number, `dx2`: number, `dy2`: number): *void*

Adds dx1, dy1, dx2 and dy2 respectively to the existing coordinates of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`dx1` | number |
`dy1` | number |
`dx2` | number |
`dy2` | number |

**Returns:** *void*

___

###  adjusted

▸ **adjusted**(`dx1`: number, `dy1`: number, `dx2`: number, `dy2`: number): *[QRectF](qrectf.md)*

Returns a new rectangle with dx1, dy1, dx2 and dy2 added respectively to the existing coordinates of this rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`dx1` | number |
`dy1` | number |
`dx2` | number |
`dy2` | number |

**Returns:** *[QRectF](qrectf.md)*

___

###  bottom

▸ **bottom**(): *number*

Returns the y-coordinate of the rectangle's bottom edge.

**Returns:** *number*

___

###  bottomLeft

▸ **bottomLeft**(): *[QPointF](qpointf.md)*

Returns the position of the rectangle's bottom-left corner.

**Returns:** *[QPointF](qpointf.md)*

___

###  bottomRight

▸ **bottomRight**(): *[QPointF](qpointf.md)*

Returns the position of the rectangle's bottom-right corner.

**Returns:** *[QPointF](qpointf.md)*

___

###  center

▸ **center**(): *[QPointF](qpointf.md)*

Returns the center point of the rectangle.

**Returns:** *[QPointF](qpointf.md)*

___

###  contains

▸ **contains**(`arg0`: [QRectF](qrectf.md) | number | [QPointF](qpointf.md), `y`: number): *boolean*

Returns true if the given point is inside or on the edge of the rectangle; otherwise returns false.

**Parameters:**

Name | Type |
------ | ------ |
`arg0` | [QRectF](qrectf.md) &#124; number &#124; [QPointF](qpointf.md) |
`y` | number |

**Returns:** *boolean*

___

###  height

▸ **height**(): *number*

Returns the height of the rectangle.

**Returns:** *number*

___

###  intersected

▸ **intersected**(`rectangle`: [QRectF](qrectf.md)): *[QRectF](qrectf.md)*

Returns the intersection of this rectangle and the given rectangle. Note that r.intersected(s) is equivalent to r & s.

**Parameters:**

Name | Type |
------ | ------ |
`rectangle` | [QRectF](qrectf.md) |

**Returns:** *[QRectF](qrectf.md)*

___

###  intersects

▸ **intersects**(`rectangle`: [QRectF](qrectf.md)): *boolean*

Returns true if this rectangle intersects with the given rectangle (i.e. there is a non-empty area of overlap between them), otherwise returns false.

**Parameters:**

Name | Type |
------ | ------ |
`rectangle` | [QRectF](qrectf.md) |

**Returns:** *boolean*

___

###  isEmpty

▸ **isEmpty**(): *boolean*

Returns true if the rectangle is empty, otherwise returns false.

**Returns:** *boolean*

___

###  isNull

▸ **isNull**(): *boolean*

Returns true if the rectangle is a null rectangle, otherwise returns false.

**Returns:** *boolean*

___

###  isValid

▸ **isValid**(): *boolean*

Returns true if the rectangle is valid, otherwise returns false.

**Returns:** *boolean*

___

###  left

▸ **left**(): *number*

Returns the x-coordinate of the rectangle's left edge. Equivalent to x().

**Returns:** *number*

___

###  moveBottom

▸ **moveBottom**(`y`: number): *void*

Moves the rectangle vertically, leaving the rectangle's bottom edge at the given y coordinate. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  moveBottomLeft

▸ **moveBottomLeft**(`position`: [QPointF](qpointf.md)): *void*

Moves the rectangle, leaving the bottom-left corner at the given position. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  moveBottomRight

▸ **moveBottomRight**(`position`: [QPointF](qpointf.md)): *void*

Moves the rectangle, leaving the bottom-right corner at the given position. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  moveCenter

▸ **moveCenter**(`position`: [QPointF](qpointf.md)): *void*

Moves the rectangle, leaving the center point at the given position. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  moveLeft

▸ **moveLeft**(`x`: number): *void*

Moves the rectangle horizontally, leaving the rectangle's left edge at the given x coordinate. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *void*

___

###  moveRight

▸ **moveRight**(`x`: number): *void*

Moves the rectangle horizontally, leaving the rectangle's right edge at the given x coordinate. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *void*

___

###  moveTo

▸ **moveTo**(`xOrPos`: number | [QPointF](qpointf.md), `y`: number): *void*

Moves the rectangle, leaving the top-left corner at the given position (x, y). The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`xOrPos` | number &#124; [QPointF](qpointf.md) |
`y` | number |

**Returns:** *void*

___

###  moveTop

▸ **moveTop**(`y`: number): *void*

Moves the rectangle vertically, leaving the rectangle's top line at the given y coordinate. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  moveTopLeft

▸ **moveTopLeft**(`position`: [QPointF](qpointf.md)): *void*

Moves the rectangle, leaving the top-left corner at the given position. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  moveTopRight

▸ **moveTopRight**(`position`: [QPointF](qpointf.md)): *void*

Moves the rectangle, leaving the top-right corner at the given position. The rectangle's size is unchanged.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  normalized

▸ **normalized**(): *[QRectF](qrectf.md)*

Returns a normalized rectangle; i.e., a rectangle that has a non-negative width and height.

**Returns:** *[QRectF](qrectf.md)*

___

###  right

▸ **right**(): *number*

Returns the x-coordinate of the rectangle's right edge.

**Returns:** *number*

___

###  setBottom

▸ **setBottom**(`y`: number): *void*

Sets the bottom edge of the rectangle to the given y coordinate. May change the height, but will never change the top edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  setBottomLeft

▸ **setBottomLeft**(`position`: [QPointF](qpointf.md)): *void*

Set the bottom-left corner of the rectangle to the given position. May change the size, but will never change the top-right corner of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  setBottomRight

▸ **setBottomRight**(`position`: [QPointF](qpointf.md)): *void*

Set the bottom-right corner of the rectangle to the given position. May change the size, but will never change the top-left corner of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  setCoords

▸ **setCoords**(`x1`: number, `y1`: number, `x2`: number, `y2`: number): *void*

Sets the coordinates of the rectangle's top-left corner to (x1, y1), and the coordinates of its bottom-right corner to (x2, y2).

**Parameters:**

Name | Type |
------ | ------ |
`x1` | number |
`y1` | number |
`x2` | number |
`y2` | number |

**Returns:** *void*

___

###  setHeight

▸ **setHeight**(`height`: number): *void*

Sets the height of the rectangle to the given height. The bottom edge is changed, but not the top one.

**Parameters:**

Name | Type |
------ | ------ |
`height` | number |

**Returns:** *void*

___

###  setLeft

▸ **setLeft**(`x`: number): *void*

Sets the left edge of the rectangle to the given x coordinate. May change the width, but will never change the right edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

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

###  setRect

▸ **setRect**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

Sets the coordinates of the rectangle's top-left corner to (x, y), and its size to the given width and height.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  setRight

▸ **setRight**(`x`: number): *void*

Sets the right edge of the rectangle to the given x coordinate. May change the width, but will never change the left edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *void*

___

###  setTop

▸ **setTop**(`y`: number): *void*

Sets the top edge of the rectangle to the given y coordinate. May change the height, but will never change the bottom edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  setTopLeft

▸ **setTopLeft**(`position`: [QPointF](qpointf.md)): *void*

Set the top-left corner of the rectangle to the given position. May change the size, but will never change the bottom-right corner of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  setTopRight

▸ **setTopRight**(`position`: [QPointF](qpointf.md)): *void*

Set the top-right corner of the rectangle to the given position. May change the size, but will never change the bottom-left corner of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPointF](qpointf.md) |

**Returns:** *void*

___

###  setWidth

▸ **setWidth**(`width`: number): *void*

Sets the width of the rectangle to the given width. The right edge is changed, but not the left one.

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setX

▸ **setX**(`x`: number): *void*

Sets the left edge of the rectangle to the given x coordinate. May change the width, but will never change the right edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *void*

___

###  setY

▸ **setY**(`y`: number): *void*

Sets the top edge of the rectangle to the given y coordinate. May change the height, but will never change the bottom edge of the rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  toAlignedRect

▸ **toAlignedRect**(): *[QRect](qrect.md)*

Returns a QRect based on the values of this rectangle that is the smallest possible integer rectangle that completely contains this rectangle.

**Returns:** *[QRect](qrect.md)*

___

###  toRect

▸ **toRect**(): *[QRect](qrect.md)*

Returns a QRect based on the values of this rectangle. Note that the coordinates in the returned rectangle are rounded to the nearest integer.

**Returns:** *[QRect](qrect.md)*

___

###  top

▸ **top**(): *number*

Returns the y-coordinate of the rectangle's top edge. Equivalent to y().

**Returns:** *number*

___

###  topLeft

▸ **topLeft**(): *[QPointF](qpointf.md)*

Returns the position of the rectangle's top-left corner.

**Returns:** *[QPointF](qpointf.md)*

___

###  topRight

▸ **topRight**(): *[QPointF](qpointf.md)*

Returns the position of the rectangle's top-right corner.

**Returns:** *[QPointF](qpointf.md)*

___

###  translate

▸ **translate**(`dxOrOffset`: number | [QPointF](qpointf.md), `dy`: number): *void*

Moves the rectangle dx along the x-axis and dy along the y-axis, relative to the current position. Positive values move the rectangle to the right and downwards.

**Parameters:**

Name | Type |
------ | ------ |
`dxOrOffset` | number &#124; [QPointF](qpointf.md) |
`dy` | number |

**Returns:** *void*

___

###  translated

▸ **translated**(`dxOrOffset`: number | [QPointF](qpointf.md), `dy`: number): *[QRectF](qrectf.md)*

Returns a copy of the rectangle that is translated dx along the x axis and dy along the y axis, relative to the current position. Positive values move the rectangle to the right and down.

**Parameters:**

Name | Type |
------ | ------ |
`dxOrOffset` | number &#124; [QPointF](qpointf.md) |
`dy` | number |

**Returns:** *[QRectF](qrectf.md)*

___

###  transposed

▸ **transposed**(): *[QRectF](qrectf.md)*

Returns a copy of the rectangle that has its width and height exchanged:

**Returns:** *[QRectF](qrectf.md)*

___

###  united

▸ **united**(`rectangle`: [QRectF](qrectf.md)): *[QRectF](qrectf.md)*

Returns the bounding rectangle of this rectangle and the given rectangle.

**Parameters:**

Name | Type |
------ | ------ |
`rectangle` | [QRectF](qrectf.md) |

**Returns:** *[QRectF](qrectf.md)*

___

###  width

▸ **width**(): *number*

Returns the width of the rectangle.

**Returns:** *number*

___

###  x

▸ **x**(): *number*

Returns the x-coordinate of the rectangle's left edge. Equivalent to left().

**Returns:** *number*

___

###  y

▸ **y**(): *number*

Returns the y-coordinate of the rectangle's top edge. Equivalent to top().

**Returns:** *number*
