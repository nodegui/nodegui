---
id: "qresizeevent"
title: "QResizeEvent"
sidebar_label: "QResizeEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QResizeEvent**

## Index

### Constructors

* [constructor](qresizeevent.md#constructor)

### Properties

* [native](qresizeevent.md#native)

### Methods

* [accept](qresizeevent.md#accept)
* [ignore](qresizeevent.md#ignore)
* [isAccepted](qresizeevent.md#isaccepted)
* [oldSize](qresizeevent.md#oldsize)
* [setAccepted](qresizeevent.md#setaccepted)
* [size](qresizeevent.md#size)
* [spontaneous](qresizeevent.md#spontaneous)
* [type](qresizeevent.md#type)

## Constructors

###  constructor

\+ **new QResizeEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QResizeEvent](qresizeevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QResizeEvent](qresizeevent.md)*

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

###  oldSize

▸ **oldSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

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

###  size

▸ **size**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

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
