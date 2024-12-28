---
id: "qwheelevent"
title: "QWheelEvent"
sidebar_label: "QWheelEvent"
---

## Hierarchy

  ↳ [QInputEvent](qinputevent.md)

  ↳ **QWheelEvent**

## Index

### Constructors

* [constructor](qwheelevent.md#constructor)

### Properties

* [native](qwheelevent.md#native)

### Methods

* [accept](qwheelevent.md#accept)
* [angleDelta](qwheelevent.md#angledelta)
* [buttons](qwheelevent.md#buttons)
* [globalPosition](qwheelevent.md#globalposition)
* [ignore](qwheelevent.md#ignore)
* [inverted](qwheelevent.md#inverted)
* [isAccepted](qwheelevent.md#isaccepted)
* [modifiers](qwheelevent.md#modifiers)
* [phase](qwheelevent.md#phase)
* [pixelDelta](qwheelevent.md#pixeldelta)
* [position](qwheelevent.md#position)
* [setAccepted](qwheelevent.md#setaccepted)
* [spontaneous](qwheelevent.md#spontaneous)
* [timestamp](qwheelevent.md#timestamp)
* [type](qwheelevent.md#type)

## Constructors

###  constructor

\+ **new QWheelEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QWheelEvent](qwheelevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QWheelEvent](qwheelevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

## Methods

###  accept

▸ **accept**(): *void*

*Inherited from [QEvent](qevent.md).[accept](qevent.md#accept)*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

**Returns:** *void*

___

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

###  ignore

▸ **ignore**(): *void*

*Inherited from [QEvent](qevent.md).[ignore](qevent.md#ignore)*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Returns:** *void*

___

###  inverted

▸ **inverted**(): *boolean*

Returns whether the delta values delivered with the event are inverted

**Returns:** *boolean*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

**Returns:** *boolean*

___

###  modifiers

▸ **modifiers**(): *[KeyboardModifier](../enums/keyboardmodifier.md)*

*Inherited from [QInputEvent](qinputevent.md).[modifiers](qinputevent.md#modifiers)*

**Returns:** *[KeyboardModifier](../enums/keyboardmodifier.md)*

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

___

###  setAccepted

▸ **setAccepted**(`accepted`: boolean): *void*

*Inherited from [QEvent](qevent.md).[setAccepted](qevent.md#setaccepted)*

Sets the accept flag of the event object

**Parameters:**

Name | Type |
------ | ------ |
`accepted` | boolean |

**Returns:** *void*

___

###  spontaneous

▸ **spontaneous**(): *boolean*

*Inherited from [QEvent](qevent.md).[spontaneous](qevent.md#spontaneous)*

Returns true if the event originated outside the application (a system event); otherwise returns false.

The return value of this function is not defined for paint events.

**Returns:** *boolean*

___

###  timestamp

▸ **timestamp**(): *number*

*Inherited from [QInputEvent](qinputevent.md).[timestamp](qinputevent.md#timestamp)*

**Returns:** *number*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type
