---
id: "qnativegestureevent"
title: "QNativeGestureEvent"
sidebar_label: "QNativeGestureEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QNativeGestureEvent**

## Index

### Constructors

* [constructor](qnativegestureevent.md#constructor)

### Properties

* [native](qnativegestureevent.md#native)

### Methods

* [accept](qnativegestureevent.md#accept)
* [gestureType](qnativegestureevent.md#gesturetype)
* [globalPos](qnativegestureevent.md#globalpos)
* [ignore](qnativegestureevent.md#ignore)
* [isAccepted](qnativegestureevent.md#isaccepted)
* [localPos](qnativegestureevent.md#localpos)
* [pos](qnativegestureevent.md#pos)
* [screenPos](qnativegestureevent.md#screenpos)
* [setAccepted](qnativegestureevent.md#setaccepted)
* [spontaneous](qnativegestureevent.md#spontaneous)
* [type](qnativegestureevent.md#type)
* [value](qnativegestureevent.md#value)
* [windowPos](qnativegestureevent.md#windowpos)

## Constructors

###  constructor

\+ **new QNativeGestureEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QNativeGestureEvent](qnativegestureevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QNativeGestureEvent](qnativegestureevent.md)*

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

###  gestureType

▸ **gestureType**(): *[NativeGestureType](../enums/nativegesturetype.md)*

Returns the gesture type

**Returns:** *[NativeGestureType](../enums/nativegesturetype.md)*

___

###  globalPos

▸ **globalPos**(): *object*

Returns the position of the gesture as a QPointF in screen coordinates

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

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

**Returns:** *boolean*

___

###  localPos

▸ **localPos**(): *object*

Returns the position of the gesture as a QPointF,
relative to the widget or item that received the event

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  pos

▸ **pos**(): *object*

Returns the position of the mouse cursor,
relative to the widget or item that received the event

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  screenPos

▸ **screenPos**(): *object*

Returns the position of the gesture as a QPointF in screen coordinates

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

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type

___

###  value

▸ **value**(): *number*

Returns the gesture value.

The value should be interpreted based on the gesture type.
For example, a Zoom gesture provides a scale factor while a
Rotate gesture provides a rotation delta.

**Returns:** *number*

___

###  windowPos

▸ **windowPos**(): *object*

Returns the position of the gesture as a QPointF,
relative to the window that received the event.

**Returns:** *object*

* **x**: *number*

* **y**: *number*
