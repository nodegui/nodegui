---
id: "qnativegestureevent"
title: "QNativeGestureEvent"
sidebar_label: "QNativeGestureEvent"
---

## Hierarchy

* **QNativeGestureEvent**

## Index

### Constructors

* [constructor](qnativegestureevent.md#constructor)

### Properties

* [native](qnativegestureevent.md#native)

### Methods

* [gestureType](qnativegestureevent.md#gesturetype)
* [globalPos](qnativegestureevent.md#globalpos)
* [localPos](qnativegestureevent.md#localpos)
* [pos](qnativegestureevent.md#pos)
* [screenPos](qnativegestureevent.md#screenpos)
* [value](qnativegestureevent.md#value)
* [windowPos](qnativegestureevent.md#windowpos)

## Constructors

###  constructor

\+ **new QNativeGestureEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QNativeGestureEvent](qnativegestureevent.md)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QNativeGestureEvent](qnativegestureevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

## Methods

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
