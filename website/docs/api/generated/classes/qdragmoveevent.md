---
id: "qdragmoveevent"
title: "QDragMoveEvent"
sidebar_label: "QDragMoveEvent"
---

## Hierarchy

  ↳ [QDropEvent](qdropevent.md)

  ↳ **QDragMoveEvent**

  ↳ [QDragEnterEvent](qdragenterevent.md)

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

\+ **new QDragMoveEvent**(`arg`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› | [NativeElement](../globals.md#nativeelement)): *[QDragMoveEvent](qdragmoveevent.md)*

*Overrides [QDropEvent](qdropevent.md).[constructor](qdropevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QDragMoveEvent](qdragmoveevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

## Methods

###  accept

▸ **accept**(`x?`: number, `y?`: number, `width?`: number, `height?`: number): *void*

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
