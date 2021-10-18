---
id: "qkeyevent"
title: "QKeyEvent"
sidebar_label: "QKeyEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QKeyEvent**

## Index

### Constructors

* [constructor](qkeyevent.md#constructor)

### Properties

* [native](qkeyevent.md#native)

### Methods

* [accept](qkeyevent.md#accept)
* [count](qkeyevent.md#count)
* [ignore](qkeyevent.md#ignore)
* [isAccepted](qkeyevent.md#isaccepted)
* [isAutoRepeat](qkeyevent.md#isautorepeat)
* [key](qkeyevent.md#key)
* [modifiers](qkeyevent.md#modifiers)
* [setAccepted](qkeyevent.md#setaccepted)
* [spontaneous](qkeyevent.md#spontaneous)
* [text](qkeyevent.md#text)
* [type](qkeyevent.md#type)

## Constructors

###  constructor

\+ **new QKeyEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QKeyEvent](qkeyevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QKeyEvent](qkeyevent.md)*

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

###  count

▸ **count**(): *number*

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

###  isAutoRepeat

▸ **isAutoRepeat**(): *boolean*

**Returns:** *boolean*

___

###  key

▸ **key**(): *number*

**Returns:** *number*

___

###  modifiers

▸ **modifiers**(): *number*

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

###  text

▸ **text**(): *string*

**Returns:** *string*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type
