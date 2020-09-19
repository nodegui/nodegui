---
id: "qdragleaveevent"
title: "QDragLeaveEvent"
sidebar_label: "QDragLeaveEvent"
---

## Hierarchy

* **QDragLeaveEvent**

## Index

### Constructors

* [constructor](qdragleaveevent.md#constructor)

### Properties

* [native](qdragleaveevent.md#native)

### Methods

* [accept](qdragleaveevent.md#accept)
* [ignore](qdragleaveevent.md#ignore)
* [isAccepted](qdragleaveevent.md#isaccepted)
* [setAccepted](qdragleaveevent.md#setaccepted)
* [spontaneous](qdragleaveevent.md#spontaneous)
* [type](qdragleaveevent.md#type)

## Constructors

###  constructor

\+ **new QDragLeaveEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QDragLeaveEvent](qdragleaveevent.md)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QDragLeaveEvent](qdragleaveevent.md)*

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
