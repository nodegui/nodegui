---
id: "qwheelevent"
title: "QWheelEvent"
sidebar_label: "QWheelEvent"
---

## Hierarchy

* **QWheelEvent**

## Index

### Constructors

* [constructor](qwheelevent.md#constructor)

### Properties

* [native](qwheelevent.md#native)

### Methods

* [angleDelta](qwheelevent.md#angledelta)
* [buttons](qwheelevent.md#buttons)
* [globalPosition](qwheelevent.md#globalposition)
* [inverted](qwheelevent.md#inverted)
* [phase](qwheelevent.md#phase)
* [pixelDelta](qwheelevent.md#pixeldelta)
* [position](qwheelevent.md#position)

## Constructors

###  constructor

\+ **new QWheelEvent**(`event`: [NativeElement](../globals.md#nativeelement)): *[QWheelEvent](qwheelevent.md)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QWheelEvent](qwheelevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

## Methods

###  angleDelta

▸ **angleDelta**(): *object*

Returns the relative amount that the wheel was rotated, in eighths of a degree.
A positive value indicates that the wheel was rotated forwards away from the user;
a negative value indicates that the wheel was rotated backwards toward the user.

angleDelta().y() provides the angle through which the common vertical mouse wheel was
rotated since the previous event.
angleDelta().x() provides the angle through which the horizontal mouse wheel was
rotated, if the mouse has a horizontal wheel; otherwise it stays at zero.

Some mice allow the user to tilt the wheel to perform horizontal scrolling,
and some touchpads support a horizontal scrolling gesture;
that will also appear in angleDelta().x().

Most mouse types work in steps of 15 degrees,
in which case the delta value is a multiple of 120; i.e.,
120 units * 1/8 = 15 degrees.

However, some mice have finer-resolution wheels and
send delta values that are less than 120 units (less than 15 degrees).
To support this possibility, you can either cumulatively add the delta
values from events until the value of 120 is reached,
then scroll the widget, or you can partially scroll the widget in
response to each wheel event.

But to provide a more native feel, you should prefer pixelDelta()
on platforms where it's available.

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  buttons

▸ **buttons**(): *number*

**Returns:** *number*

___

###  globalPosition

▸ **globalPosition**(): *object*

Returns the global position of the mouse pointer at the time of
the event. This is important on asynchronous window systems such
as X11; whenever you move your widgets around in response to mouse
events, globalPosition() can differ a lot from the current cursor
position returned by QCursor::pos().

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  inverted

▸ **inverted**(): *boolean*

Returns whether the delta values delivered with the event are inverted

**Returns:** *boolean*

___

###  phase

▸ **phase**(): *[ScrollPhase](../enums/scrollphase.md)*

**Returns:** *[ScrollPhase](../enums/scrollphase.md)*

___

###  pixelDelta

▸ **pixelDelta**(): *object*

Returns the scrolling distance in pixels on screen.
This value is provided on platforms that support
high-resolution pixel-based delta values, such as macOS.
The value should be used directly to scroll content on screen

Note:On X11 this value is driver specific and unreliable, use angleDelta() instead

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  position

▸ **position**(): *object*

Returns the position of the mouse cursor relative to the widget that received the event.
If you move your widgets around in response to mouse events, use globalPosition() instead of this function.
This function was introduced in Qt 5.14

**Returns:** *object*

* **x**: *number*

* **y**: *number*
