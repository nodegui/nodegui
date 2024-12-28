---
id: "qmouseevent"
title: "QMouseEvent"
sidebar_label: "QMouseEvent"
---

## Hierarchy

  ↳ [QInputEvent](qinputevent.md)

  ↳ **QMouseEvent**

## Index

### Constructors

* [constructor](qmouseevent.md#constructor)

### Properties

* [native](qmouseevent.md#native)

### Methods

* [accept](qmouseevent.md#accept)
* [button](qmouseevent.md#button)
* [buttons](qmouseevent.md#buttons)
* [globalX](qmouseevent.md#globalx)
* [globalY](qmouseevent.md#globaly)
* [ignore](qmouseevent.md#ignore)
* [isAccepted](qmouseevent.md#isaccepted)
* [modifiers](qmouseevent.md#modifiers)
* [setAccepted](qmouseevent.md#setaccepted)
* [spontaneous](qmouseevent.md#spontaneous)
* [timestamp](qmouseevent.md#timestamp)
* [type](qmouseevent.md#type)
* [x](qmouseevent.md#x)
* [y](qmouseevent.md#y)

## Constructors

###  constructor

\+ **new QMouseEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QMouseEvent](qmouseevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QMouseEvent](qmouseevent.md)*

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

###  button

▸ **button**(): *number*

**Returns:** *number*

___

###  buttons

▸ **buttons**(): *number*

**Returns:** *number*

___

###  globalX

▸ **globalX**(): *number*

**Returns:** *number*

___

###  globalY

▸ **globalY**(): *number*

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

###  modifiers

▸ **modifiers**(): *[KeyboardModifier](../enums/keyboardmodifier.md)*

*Inherited from [QInputEvent](qinputevent.md).[modifiers](qinputevent.md#modifiers)*

**Returns:** *[KeyboardModifier](../enums/keyboardmodifier.md)*

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

___

###  x

▸ **x**(): *number*

**Returns:** *number*

___

###  y

▸ **y**(): *number*

**Returns:** *number*
