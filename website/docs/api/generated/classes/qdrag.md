---
id: "qdrag"
title: "QDrag"
sidebar_label: "QDrag"
---

description

## Hierarchy

* [Component](component.md)

  ↳ **QDrag**

## Index

### Constructors

* [constructor](qdrag.md#constructor)

### Properties

* [native](qdrag.md#native)

### Methods

* [defaultAction](qdrag.md#defaultaction)
* [dragCursor](qdrag.md#dragcursor)
* [exec](qdrag.md#exec)
* [hotSpot](qdrag.md#hotspot)
* [mimeData](qdrag.md#mimedata)
* [pixmap](qdrag.md#pixmap)
* [setDragCursor](qdrag.md#setdragcursor)
* [setHotSpot](qdrag.md#sethotspot)
* [setMimeData](qdrag.md#setmimedata)
* [setPixmap](qdrag.md#setpixmap)
* [supportedActions](qdrag.md#supportedactions)
* [cancel](qdrag.md#static-cancel)

## Constructors

###  constructor

\+ **new QDrag**(`arg?`: [NativeElement](../globals.md#nativeelement) | [QObject](qobject.md)): *[QDrag](qdrag.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) &#124; [QObject](qobject.md) |

**Returns:** *[QDrag](qdrag.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  defaultAction

▸ **defaultAction**(): *[DropAction](../enums/dropaction.md)*

Returns the default proposed drop action for this drag operation.

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  dragCursor

▸ **dragCursor**(`action`: [DropAction](../enums/dropaction.md)): *[QPixmap](qpixmap.md)*

Returns the drag cursor for the action.

**Parameters:**

Name | Type |
------ | ------ |
`action` | [DropAction](../enums/dropaction.md) |

**Returns:** *[QPixmap](qpixmap.md)*

___

###  exec

▸ **exec**(`supportedActions`: number, `defaultDropAction?`: [DropAction](../enums/dropaction.md)): *[DropAction](../enums/dropaction.md)*

Starts the drag and drop operation and returns a value indicating the requested drop action when it is completed. The drop actions that the user can choose from are specified in supportedActions. The default proposed action will be selected among the allowed actions in the following order: Move, Copy and Link.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`supportedActions` | number | DropAction.MoveAction |
`defaultDropAction?` | [DropAction](../enums/dropaction.md) | - |

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  hotSpot

▸ **hotSpot**(): *[QPoint](qpoint.md)*

Returns the position of the hot spot relative to the top-left corner of the cursor.

**Returns:** *[QPoint](qpoint.md)*

___

###  mimeData

▸ **mimeData**(): *[QMimeData](qmimedata.md)*

Returns the MIME data that is encapsulated by the drag object.

**Returns:** *[QMimeData](qmimedata.md)*

___

###  pixmap

▸ **pixmap**(): *[QPixmap](qpixmap.md)*

Returns the pixmap used to represent the data in a drag and drop operation.

**Returns:** *[QPixmap](qpixmap.md)*

___

###  setDragCursor

▸ **setDragCursor**(`cursor`: [QPixmap](qpixmap.md), `action`: [DropAction](../enums/dropaction.md)): *void*

Sets the drag cursor for the action. This allows you to override the default native cursors. To revert to using the native cursor for action pass in a null QPixmap as cursor.

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [QPixmap](qpixmap.md) |
`action` | [DropAction](../enums/dropaction.md) |

**Returns:** *void*

___

###  setHotSpot

▸ **setHotSpot**(`hotspot`: [QPoint](qpoint.md)): *void*

Sets the position of the hot spot relative to the top-left corner of the pixmap used to the point specified by hotspot.

**Parameters:**

Name | Type |
------ | ------ |
`hotspot` | [QPoint](qpoint.md) |

**Returns:** *void*

___

###  setMimeData

▸ **setMimeData**(`data`: [QMimeData](qmimedata.md)): *void*

Sets the data to be sent to the given MIME data.
Ownership of the data is transferred to the QDrag object.

**Parameters:**

Name | Type |
------ | ------ |
`data` | [QMimeData](qmimedata.md) |

**Returns:** *void*

___

###  setPixmap

▸ **setPixmap**(`pixmap`: [QPixmap](qpixmap.md)): *void*

Sets pixmap as the pixmap used to represent the data in a drag and drop operation. You can only set a pixmap before the drag is started.

**Parameters:**

Name | Type |
------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) |

**Returns:** *void*

___

###  supportedActions

▸ **supportedActions**(): *number*

Returns the set of possible drop actions for this drag operation.

**Returns:** *number*

___

### `Static` cancel

▸ **cancel**(): *void*

Cancels a drag operation initiated by Qt.

**Returns:** *void*
