---
id: "qdragenterevent"
title: "QDragEnterEvent"
sidebar_label: "QDragEnterEvent"
---

## Hierarchy

  ↳ [QDragMoveEvent](qdragmoveevent.md)

  ↳ **QDragEnterEvent**

## Index

### Constructors

* [constructor](qdragenterevent.md#constructor)

### Properties

* [native](qdragenterevent.md#native)

### Methods

* [accept](qdragenterevent.md#accept)
* [acceptProposedAction](qdragenterevent.md#acceptproposedaction)
* [answerRect](qdragenterevent.md#answerrect)
* [dropAction](qdragenterevent.md#dropaction)
* [ignore](qdragenterevent.md#ignore)
* [isAccepted](qdragenterevent.md#isaccepted)
* [keyboardModifiers](qdragenterevent.md#keyboardmodifiers)
* [mimeData](qdragenterevent.md#mimedata)
* [mouseButtons](qdragenterevent.md#mousebuttons)
* [pos](qdragenterevent.md#pos)
* [posF](qdragenterevent.md#posf)
* [possibleActions](qdragenterevent.md#possibleactions)
* [proposedAction](qdragenterevent.md#proposedaction)
* [setAccepted](qdragenterevent.md#setaccepted)
* [setDropAction](qdragenterevent.md#setdropaction)
* [spontaneous](qdragenterevent.md#spontaneous)
* [type](qdragenterevent.md#type)

## Constructors

###  constructor

\+ **new QDragEnterEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QDragEnterEvent](qdragenterevent.md)*

*Overrides [QDragMoveEvent](qdragmoveevent.md).[constructor](qdragmoveevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QDragEnterEvent](qdragenterevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

## Methods

###  accept

▸ **accept**(`x?`: number, `y?`: number, `width?`: number, `height?`: number): *void*

*Inherited from [QDragMoveEvent](qdragmoveevent.md).[accept](qdragmoveevent.md#accept)*

*Overrides [QEvent](qevent.md).[accept](qevent.md#accept)*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

If the rectangle is provided, also notifies that future moves will also be acceptable if they remain within the rectangle given on the widget.
This can improve performance, but may also be ignored by the underlying system.
If the rectangle is empty, drag move events will be sent continuously. This is useful if the source is scrolling in a timer event.

**Parameters:**

Name | Type |
------ | ------ |
`x?` | number |
`y?` | number |
`width?` | number |
`height?` | number |

**Returns:** *void*

___

###  acceptProposedAction

▸ **acceptProposedAction**(): *void*

*Inherited from [QDropEvent](qdropevent.md).[acceptProposedAction](qdropevent.md#acceptproposedaction)*

Sets the drop action to be the proposed action

**Returns:** *void*

___

###  answerRect

▸ **answerRect**(): *object*

*Inherited from [QDragMoveEvent](qdragmoveevent.md).[answerRect](qdragmoveevent.md#answerrect)*

**Returns:** *object*

* **height**: *number*

* **width**: *number*

* **x**: *number*

* **y**: *number*

___

###  dropAction

▸ **dropAction**(): *[DropAction](../enums/dropaction.md)*

*Inherited from [QDropEvent](qdropevent.md).[dropAction](qdropevent.md#dropaction)*

Returns the action to be performed on the data by the target.
This may be different from the action supplied in proposedAction()
if you have called setDropAction() to explicitly choose a drop action

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  ignore

▸ **ignore**(`x?`: number, `y?`: number, `width?`: number, `height?`: number): *void*

*Inherited from [QDragMoveEvent](qdragmoveevent.md).[ignore](qdragmoveevent.md#ignore)*

*Overrides [QEvent](qevent.md).[ignore](qevent.md#ignore)*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Parameters:**

Name | Type |
------ | ------ |
`x?` | number |
`y?` | number |
`width?` | number |
`height?` | number |

**Returns:** *void*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

**Returns:** *boolean*

___

###  keyboardModifiers

▸ **keyboardModifiers**(): *number*

*Inherited from [QDropEvent](qdropevent.md).[keyboardModifiers](qdropevent.md#keyboardmodifiers)*

Returns the modifier keys that are pressed

see Qt::KeyboardModifier for flags

**Returns:** *number*

___

###  mimeData

▸ **mimeData**(): *[QMimeData](qmimedata.md)*

*Inherited from [QDropEvent](qdropevent.md).[mimeData](qdropevent.md#mimedata)*

Returns the data that was dropped on the widget and its associated MIME type information

**Returns:** *[QMimeData](qmimedata.md)*

___

###  mouseButtons

▸ **mouseButtons**(): *number*

*Inherited from [QDropEvent](qdropevent.md).[mouseButtons](qdropevent.md#mousebuttons)*

Returns the mouse buttons that are pressed

See Qt::MouseButton for flags

**Returns:** *number*

___

###  pos

▸ **pos**(): *object*

*Inherited from [QDropEvent](qdropevent.md).[pos](qdropevent.md#pos)*

Returns the position where the drop was made

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  posF

▸ **posF**(): *object*

*Inherited from [QDropEvent](qdropevent.md).[posF](qdropevent.md#posf)*

Returns the position where the drop was made

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  possibleActions

▸ **possibleActions**(): *number*

*Inherited from [QDropEvent](qdropevent.md).[possibleActions](qdropevent.md#possibleactions)*

Returns an OR-combination of possible drop actions.

See Qt::DropAction for flags

**Returns:** *number*

___

###  proposedAction

▸ **proposedAction**(): *[DropAction](../enums/dropaction.md)*

*Inherited from [QDropEvent](qdropevent.md).[proposedAction](qdropevent.md#proposedaction)*

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

*Inherited from [QDropEvent](qdropevent.md).[setDropAction](qdropevent.md#setdropaction)*

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
