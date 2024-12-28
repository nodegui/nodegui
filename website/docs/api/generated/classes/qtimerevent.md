---
id: "qtimerevent"
title: "QTimerEvent"
sidebar_label: "QTimerEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QTimerEvent**

## Index

### Constructors

* [constructor](qtimerevent.md#constructor)

### Properties

* [native](qtimerevent.md#native)

### Methods

* [accept](qtimerevent.md#accept)
* [ignore](qtimerevent.md#ignore)
* [isAccepted](qtimerevent.md#isaccepted)
* [setAccepted](qtimerevent.md#setaccepted)
* [spontaneous](qtimerevent.md#spontaneous)
* [timerId](qtimerevent.md#timerid)
* [type](qtimerevent.md#type)

## Constructors

###  constructor

\+ **new QTimerEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QTimerEvent](qtimerevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QTimerEvent](qtimerevent.md)*

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

###  timerId

▸ **timerId**(): *number*

**Returns:** *number*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type
