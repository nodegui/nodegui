---
id: "qmoveevent"
title: "QMoveEvent"
sidebar_label: "QMoveEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QMoveEvent**

## Index

### Constructors

* [constructor](qmoveevent.md#constructor)

### Properties

* [native](qmoveevent.md#native)

### Methods

* [accept](qmoveevent.md#accept)
* [ignore](qmoveevent.md#ignore)
* [isAccepted](qmoveevent.md#isaccepted)
* [oldPos](qmoveevent.md#oldpos)
* [pos](qmoveevent.md#pos)
* [setAccepted](qmoveevent.md#setaccepted)
* [spontaneous](qmoveevent.md#spontaneous)
* [type](qmoveevent.md#type)

## Constructors

###  constructor

\+ **new QMoveEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QMoveEvent](qmoveevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QMoveEvent](qmoveevent.md)*

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

###  oldPos

▸ **oldPos**(): *[QPoint](qpoint.md)*

**Returns:** *[QPoint](qpoint.md)*

___

###  pos

▸ **pos**(): *[QPoint](qpoint.md)*

**Returns:** *[QPoint](qpoint.md)*

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
