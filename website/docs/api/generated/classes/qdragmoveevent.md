---
id: "qdragmoveevent"
title: "QDragMoveEvent"
sidebar_label: "QDragMoveEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QDragMoveEvent**

## Index

### Constructors

* [constructor](qdragmoveevent.md#constructor)

### Properties

* [native](qdragmoveevent.md#native)

### Methods

* [accept](qdragmoveevent.md#accept)
* [acceptProposedAction](qdragmoveevent.md#acceptproposedaction)
* [answerRect](qdragmoveevent.md#answerrect)
* [dropAction](qdragmoveevent.md#dropaction)
* [ignore](qdragmoveevent.md#ignore)
* [isAccepted](qdragmoveevent.md#isaccepted)
* [keyboardModifiers](qdragmoveevent.md#keyboardmodifiers)
* [mimeData](qdragmoveevent.md#mimedata)
* [mouseButtons](qdragmoveevent.md#mousebuttons)
* [pos](qdragmoveevent.md#pos)
* [posF](qdragmoveevent.md#posf)
* [possibleActions](qdragmoveevent.md#possibleactions)
* [proposedAction](qdragmoveevent.md#proposedaction)
* [setAccepted](qdragmoveevent.md#setaccepted)
* [setDropAction](qdragmoveevent.md#setdropaction)
* [spontaneous](qdragmoveevent.md#spontaneous)
* [type](qdragmoveevent.md#type)

## Constructors

###  constructor

\+ **new QDragMoveEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QDragMoveEvent](qdragmoveevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QDragMoveEvent](qdragmoveevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

## Methods

###  accept

▸ **accept**(`x?`: undefined | number, `y?`: undefined | number, `width?`: undefined | number, `height?`: undefined | number): *void*

*Overrides [QEvent](qevent.md).[accept](qevent.md#accept)*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

If the rectangle is provided, also notifies that future moves will also be acceptable if they remain within the rectangle given on the widget.
This can improve performance, but may also be ignored by the underlying system.
If the rectangle is empty, drag move events will be sent continuously. This is useful if the source is scrolling in a timer event.

**Parameters:**

Name | Type |
------ | ------ |
`x?` | undefined &#124; number |
`y?` | undefined &#124; number |
`width?` | undefined &#124; number |
`height?` | undefined &#124; number |

**Returns:** *void*

___

###  acceptProposedAction

▸ **acceptProposedAction**(): *void*

Sets the drop action to be the proposed action

**Returns:** *void*

___

###  answerRect

▸ **answerRect**(): *object*

**Returns:** *object*

* **height**: *number*

* **width**: *number*

* **x**: *number*

* **y**: *number*

___

###  dropAction

▸ **dropAction**(): *[DropAction](../enums/dropaction.md)*

Returns the action to be performed on the data by the target.
This may be different from the action supplied in proposedAction()
if you have called setDropAction() to explicitly choose a drop action

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  ignore

▸ **ignore**(`x?`: undefined | number, `y?`: undefined | number, `width?`: undefined | number, `height?`: undefined | number): *void*

*Overrides [QEvent](qevent.md).[ignore](qevent.md#ignore)*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Parameters:**

Name | Type |
------ | ------ |
`x?` | undefined &#124; number |
`y?` | undefined &#124; number |
`width?` | undefined &#124; number |
`height?` | undefined &#124; number |

**Returns:** *void*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

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

*Inherited from [QEvent](qevent.md).[setAccepted](qevent.md#setaccepted)*

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
