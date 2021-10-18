---
id: "qevent"
title: "QEvent"
sidebar_label: "QEvent"
---

## Hierarchy

* **QEvent**

  ↳ [QKeyEvent](qkeyevent.md)

  ↳ [QMouseEvent](qmouseevent.md)

  ↳ [QWheelEvent](qwheelevent.md)

  ↳ [QNativeGestureEvent](qnativegestureevent.md)

  ↳ [QTabletEvent](qtabletevent.md)

  ↳ [QDropEvent](qdropevent.md)

  ↳ [QDragMoveEvent](qdragmoveevent.md)

  ↳ [QDragLeaveEvent](qdragleaveevent.md)

  ↳ [QPaintEvent](qpaintevent.md)

## Index

### Constructors

* [constructor](qevent.md#constructor)

### Properties

* [native](qevent.md#native)

### Methods

* [accept](qevent.md#accept)
* [ignore](qevent.md#ignore)
* [isAccepted](qevent.md#isaccepted)
* [setAccepted](qevent.md#setaccepted)
* [spontaneous](qevent.md#spontaneous)
* [type](qevent.md#type)

## Constructors

###  constructor

\+ **new QEvent**(`native`: [NativeElement](../globals.md#nativeelement)): *[QEvent](qevent.md)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QEvent](qevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

## Methods

###  accept

▸ **accept**(): *void*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

**Returns:** *void*

___

###  ignore

▸ **ignore**(): *void*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Returns:** *void*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

**Returns:** *boolean*

___

###  setAccepted

▸ **setAccepted**(`accepted`: boolean): *void*

Sets the accept flag of the event object

**Parameters:**

Name | Type |
------ | ------ |
`accepted` | boolean |

**Returns:** *void*

___

###  spontaneous

▸ **spontaneous**(): *boolean*

Returns true if the event originated outside the application (a system event); otherwise returns false.

The return value of this function is not defined for paint events.

**Returns:** *boolean*

___

###  type

▸ **type**(): *number*

Returns the event type

**Returns:** *number*

This is QEvent::Type
