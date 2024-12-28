---
id: "qinputevent"
title: "QInputEvent"
sidebar_label: "QInputEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QInputEvent**

  ↳ [QKeyEvent](qkeyevent.md)

  ↳ [QMouseEvent](qmouseevent.md)

  ↳ [QWheelEvent](qwheelevent.md)

  ↳ [QNativeGestureEvent](qnativegestureevent.md)

  ↳ [QTabletEvent](qtabletevent.md)

## Index

### Constructors

* [constructor](qinputevent.md#constructor)

### Properties

* [native](qinputevent.md#native)

### Methods

* [accept](qinputevent.md#accept)
* [ignore](qinputevent.md#ignore)
* [isAccepted](qinputevent.md#isaccepted)
* [modifiers](qinputevent.md#modifiers)
* [setAccepted](qinputevent.md#setaccepted)
* [spontaneous](qinputevent.md#spontaneous)
* [timestamp](qinputevent.md#timestamp)
* [type](qinputevent.md#type)

## Constructors

###  constructor

\+ **new QInputEvent**(`native`: [NativeElement](../globals.md#nativeelement)): *[QInputEvent](qinputevent.md)*

*Inherited from [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QInputEvent](qinputevent.md)*

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

###  modifiers

▸ **modifiers**(): *[KeyboardModifier](../enums/keyboardmodifier.md)*

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

**Returns:** *number*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type
