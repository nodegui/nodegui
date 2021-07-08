---
id: "qtabletevent"
title: "QTabletEvent"
sidebar_label: "QTabletEvent"
---

The QTabletEvent class contains parameters that describe a Tablet event

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QTabletEvent**

## Index

### Constructors

* [constructor](qtabletevent.md#constructor)

### Properties

* [PointerType](qtabletevent.md#readonly-pointertype)
* [TabletDevice](qtabletevent.md#readonly-tabletdevice)
* [native](qtabletevent.md#native)
* [PointerType](qtabletevent.md#static-readonly-pointertype)
* [TabletDevice](qtabletevent.md#static-readonly-tabletdevice)

### Methods

* [accept](qtabletevent.md#accept)
* [button](qtabletevent.md#button)
* [buttons](qtabletevent.md#buttons)
* [globalPos](qtabletevent.md#globalpos)
* [globalPosF](qtabletevent.md#globalposf)
* [globalX](qtabletevent.md#globalx)
* [globalY](qtabletevent.md#globaly)
* [ignore](qtabletevent.md#ignore)
* [isAccepted](qtabletevent.md#isaccepted)
* [pointerType](qtabletevent.md#pointertype)
* [pos](qtabletevent.md#pos)
* [posF](qtabletevent.md#posf)
* [pressure](qtabletevent.md#pressure)
* [rotation](qtabletevent.md#rotation)
* [setAccepted](qtabletevent.md#setaccepted)
* [spontaneous](qtabletevent.md#spontaneous)
* [tangentialPressure](qtabletevent.md#tangentialpressure)
* [type](qtabletevent.md#type)
* [uniqueId](qtabletevent.md#uniqueid)
* [x](qtabletevent.md#x)
* [xTilt](qtabletevent.md#xtilt)
* [y](qtabletevent.md#y)
* [yTilt](qtabletevent.md#ytilt)
* [z](qtabletevent.md#z)

## Constructors

###  constructor

\+ **new QTabletEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QTabletEvent](qtabletevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QTabletEvent](qtabletevent.md)*

## Properties

### `Readonly` PointerType

• **PointerType**: *[PointerType](../enums/pointertype.md)* = PointerType

___

### `Readonly` TabletDevice

• **TabletDevice**: *[TabletDevice](../enums/tabletdevice.md)* = TabletDevice

___

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

___

### `Static` `Readonly` PointerType

▪ **PointerType**: *[PointerType](../enums/pointertype.md)* = PointerType

___

### `Static` `Readonly` TabletDevice

▪ **TabletDevice**: *[TabletDevice](../enums/tabletdevice.md)* = TabletDevice

## Methods

###  accept

▸ **accept**(): *void*

*Inherited from [QEvent](qevent.md).[accept](qevent.md#accept)*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

**Returns:** *void*

___

###  button

▸ **button**(): *number*

Returns the button that caused the event.
Note that the returned value is always Qt::NoButton for TabletMove,
TabletEnterProximity and TabletLeaveProximity events

**Returns:** *number*

___

###  buttons

▸ **buttons**(): *number*

Returns the button state when the event was generated.
The button state is a combination of buttons from the Qt::MouseButton enum using the OR operator.
For TabletMove events, this is all buttons that are pressed down.
For TabletPress events this includes the button that caused the event.
For TabletRelease events this excludes the button that caused the event.

**Returns:** *number*

___

###  globalPos

▸ **globalPos**(): *object*

Returns the global position of the device at the time of the event.

This is important on asynchronous windows systems like X11;
whenever you move your widgets around in response to mouse events,
globalPos() can differ significantly from the current position QCursor::pos().

use globalPosF for Floating point (more precise)

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  globalPosF

▸ **globalPosF**(): *object*

Returns the global position of the device at the time of the event.

This is important on asynchronous windows systems like X11;
whenever you move your widgets around in response to mouse events,
globalPosF() can differ significantly from the current position QCursor::pos().

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  globalX

▸ **globalX**(): *number*

Returns the global x position of the mouse pointer at the time of the event

**Returns:** *number*

___

###  globalY

▸ **globalY**(): *number*

Returns the global y position of the mouse pointer at the time of the event

**Returns:** *number*

___

###  ignore

▸ **ignore**(): *void*

*Inherited from [QEvent](qevent.md).[ignore](qevent.md#ignore)*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Returns:** *void*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

**Returns:** *boolean*

___

###  pointerType

▸ **pointerType**(): *[PointerType](../enums/pointertype.md)*

Returns the type of point that generated the event.
(See QTabletEvent::PointerType)

**Returns:** *[PointerType](../enums/pointertype.md)*

___

###  pos

▸ **pos**(): *object*

Returns the position of the device, relative to the widget that received the event.

If you move widgets around in response to mouse events, use globalPos() instead of this function.

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  posF

▸ **posF**(): *object*

Returns the position of the device, relative to the widget that received the event.

If you move widgets around in response to mouse events, use globalPosF() instead of this function.

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  pressure

▸ **pressure**(): *number*

Returns the pressure for the device. 0.0 indicates that the stylus is not on the tablet,
1.0 indicates the maximum amount of pressure for the stylus

**Returns:** *number*

___

###  rotation

▸ **rotation**(): *number*

Returns the rotation of the current tool in degrees, where zero means the
tip of the stylus is pointing towards the top of the tablet,
a positive value means it's turned to the right, and a negative value means it's turned to the left.

This can be given by a 4D Mouse or a rotation-capable stylus (such as the Wacom Art Pen or the Apple Pencil).

If the device does not support rotation, this value is always 0.0.

**Returns:** *number*

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

###  tangentialPressure

▸ **tangentialPressure**(): *number*

Returns the tangential pressure for the device.
This is typically given by a finger wheel on an airbrush tool.
The range is from -1.0 to 1.0. 0.0 indicates a neutral position.
Current airbrushes can only move in the positive direction from the neutrual position.
If the device does not support tangential pressure, this value is always 0.0.

**Returns:** *number*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type

___

###  uniqueId

▸ **uniqueId**(): *number*

Returns a unique ID for the current device,
making it possible to differentiate between multiple devices being used at the same time on the tablet.

Support of this feature is dependent on the tablet.

Values for the same device may vary from OS to OS.

**Returns:** *number*

___

###  x

▸ **x**(): *number*

Returns the x position of the device, relative to the widget that received the event

**Returns:** *number*

___

###  xTilt

▸ **xTilt**(): *number*

Returns the angle between the device (a pen, for example) and the
perpendicular in the direction of the x axis.
Positive values are towards the tablet's physical right.
The angle is in the range -60 to +60 degrees.

**Returns:** *number*

___

###  y

▸ **y**(): *number*

Returns the y position of the device, relative to the widget that received the event.

**Returns:** *number*

___

###  yTilt

▸ **yTilt**(): *number*

Returns the angle between the device (a pen, for example) and
the perpendicular in the direction of the y axis.
Positive values are towards the bottom of the tablet.
The angle is within the range -60 to +60 degrees.

**Returns:** *number*

___

###  z

▸ **z**(): *number*

Returns the z position of the device.
Typically this is represented by a wheel on a 4D Mouse. If the device does not support a Z-axis, this value is always zero.
This is not the same as pressure.

**Returns:** *number*
