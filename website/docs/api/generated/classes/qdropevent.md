---
id: "qdropevent"
title: "QDropEvent"
sidebar_label: "QDropEvent"
---

## Hierarchy

* **QDropEvent**

## Index

### Constructors

* [constructor](qdropevent.md#constructor)

### Properties

* [native](qdropevent.md#native)

### Methods

* [accept](qdropevent.md#accept)
* [acceptProposedAction](qdropevent.md#acceptproposedaction)
* [dropAction](qdropevent.md#dropaction)
* [ignore](qdropevent.md#ignore)
* [isAccepted](qdropevent.md#isaccepted)
* [keyboardModifiers](qdropevent.md#keyboardmodifiers)
* [mimeData](qdropevent.md#mimedata)
* [mouseButtons](qdropevent.md#mousebuttons)
* [pos](qdropevent.md#pos)
* [posF](qdropevent.md#posf)
* [possibleActions](qdropevent.md#possibleactions)
* [proposedAction](qdropevent.md#proposedaction)
* [setAccepted](qdropevent.md#setaccepted)
* [setDropAction](qdropevent.md#setdropaction)
* [spontaneous](qdropevent.md#spontaneous)
* [type](qdropevent.md#type)

## Constructors

###  constructor

\+ **new QDropEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QDropEvent](qdropevent.md)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QDropEvent](qdropevent.md)*

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

###  acceptProposedAction

▸ **acceptProposedAction**(): *void*

Sets the drop action to be the proposed action

**Returns:** *void*

___

###  dropAction

▸ **dropAction**(): *[DropAction](../enums/dropaction.md)*

Returns the action to be performed on the data by the target.
This may be different from the action supplied in proposedAction()
if you have called setDropAction() to explicitly choose a drop action

**Returns:** *[DropAction](../enums/dropaction.md)*

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

###  keyboardModifiers

▸ **keyboardModifiers**(): *number*

Returns the modifier keys that are pressed

see Qt::KeyboardModifier for flags

**Returns:** *number*

___

###  mimeData

▸ **mimeData**(): *[QMimeData](qmimedata.md)*

Returns the data that was dropped on the widget and its associated MIME type information

**Returns:** *[QMimeData](qmimedata.md)*

___

###  mouseButtons

▸ **mouseButtons**(): *number*

Returns the mouse buttons that are pressed

See Qt::MouseButton for flags

**Returns:** *number*

___

###  pos

▸ **pos**(): *object*

Returns the position where the drop was made

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  posF

▸ **posF**(): *object*

Returns the position where the drop was made

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  possibleActions

▸ **possibleActions**(): *number*

Returns an OR-combination of possible drop actions.

See Qt::DropAction for flags

**Returns:** *number*

___

###  proposedAction

▸ **proposedAction**(): *[DropAction](../enums/dropaction.md)*

Returns the proposed drop action

**Returns:** *[DropAction](../enums/dropaction.md)*

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

###  setDropAction

▸ **setDropAction**(`action`: [DropAction](../enums/dropaction.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [DropAction](../enums/dropaction.md) |

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
