---
id: "qabstractitemmodel"
title: "QAbstractItemModel"
sidebar_label: "QAbstractItemModel"
---

## Hierarchy

  ↳ [QObject](qobject.md)‹any›

  ↳ **QAbstractItemModel**

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

## Index

### Constructors

* [constructor](qabstractitemmodel.md#constructor)

### Properties

* [native](qabstractitemmodel.md#native)

### Methods

* [_id](qabstractitemmodel.md#_id)
* [addEventListener](qabstractitemmodel.md#addeventlistener)
* [beginInsertColumns](qabstractitemmodel.md#begininsertcolumns)
* [beginInsertRows](qabstractitemmodel.md#begininsertrows)
* [beginMoveColumns](qabstractitemmodel.md#beginmovecolumns)
* [beginMoveRows](qabstractitemmodel.md#beginmoverows)
* [beginRemoveColumns](qabstractitemmodel.md#beginremovecolumns)
* [beginRemoveRows](qabstractitemmodel.md#beginremoverows)
* [beginResetModel](qabstractitemmodel.md#beginresetmodel)
* [buddy](qabstractitemmodel.md#buddy)
* [checkIndex](qabstractitemmodel.md#checkindex)
* [children](qabstractitemmodel.md#children)
* [columnCount](qabstractitemmodel.md#columncount)
* [createIndex](qabstractitemmodel.md#createindex)
* [data](qabstractitemmodel.md#data)
* [delete](qabstractitemmodel.md#delete)
* [deleteLater](qabstractitemmodel.md#deletelater)
* [dumpObjectInfo](qabstractitemmodel.md#dumpobjectinfo)
* [dumpObjectTree](qabstractitemmodel.md#dumpobjecttree)
* [emitDataChanged](qabstractitemmodel.md#emitdatachanged)
* [endInsertColumns](qabstractitemmodel.md#endinsertcolumns)
* [endInsertRows](qabstractitemmodel.md#endinsertrows)
* [endMoveColumns](qabstractitemmodel.md#endmovecolumns)
* [endMoveRows](qabstractitemmodel.md#endmoverows)
* [endRemoveColumns](qabstractitemmodel.md#endremovecolumns)
* [endRemoveRows](qabstractitemmodel.md#endremoverows)
* [endResetModel](qabstractitemmodel.md#endresetmodel)
* [eventProcessed](qabstractitemmodel.md#eventprocessed)
* [flags](qabstractitemmodel.md#flags)
* [hasIndex](qabstractitemmodel.md#hasindex)
* [headerData](qabstractitemmodel.md#headerdata)
* [index](qabstractitemmodel.md#index)
* [inherits](qabstractitemmodel.md#inherits)
* [killTimer](qabstractitemmodel.md#killtimer)
* [objectName](qabstractitemmodel.md#objectname)
* [parent](qabstractitemmodel.md#parent)
* [parentModelIndex](qabstractitemmodel.md#parentmodelindex)
* [property](qabstractitemmodel.md#property)
* [removeEventListener](qabstractitemmodel.md#removeeventlistener)
* [rowCount](qabstractitemmodel.md#rowcount)
* [setData](qabstractitemmodel.md#setdata)
* [setEventProcessed](qabstractitemmodel.md#seteventprocessed)
* [setObjectName](qabstractitemmodel.md#setobjectname)
* [setParent](qabstractitemmodel.md#setparent)
* [setProperty](qabstractitemmodel.md#setproperty)
* [startTimer](qabstractitemmodel.md#starttimer)

## Constructors

###  constructor

\+ **new QAbstractItemModel**(): *[QAbstractItemModel](qabstractitemmodel.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Returns:** *[QAbstractItemModel](qabstractitemmodel.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  _id

▸ **_id**(): *number*

*Inherited from [QObject](qobject.md).[_id](qobject.md#_id)*

Get an ID identifying the underlying C++ object.

This can be useful when debugging memory problems with help from
`setLogCreateQObject()` and `setLogDestroyQObject()`. The number is
hash of the memory address of the C++ object.

**Returns:** *number*

a unique number which is valid for the lifetime of the C++ object.

___

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: any[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof any*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | any[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
`options?` | [EventListenerOptions](../interfaces/eventlisteneroptions.md) | Extra optional options controlling how this event listener is added. |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function, `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

▪`Optional`  **options**: *[EventListenerOptions](../interfaces/eventlisteneroptions.md)*

Extra optional options controlling how this event listener is added.

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

**Returns:** *void*

___

###  beginInsertColumns

▸ **beginInsertColumns**(`parent`: [QModelIndex](qmodelindex.md), `first`: number, `last`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QModelIndex](qmodelindex.md) |
`first` | number |
`last` | number |

**Returns:** *void*

___

###  beginInsertRows

▸ **beginInsertRows**(`parent`: [QModelIndex](qmodelindex.md), `first`: number, `last`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QModelIndex](qmodelindex.md) |
`first` | number |
`last` | number |

**Returns:** *void*

___

###  beginMoveColumns

▸ **beginMoveColumns**(`sourceParent`: [QModelIndex](qmodelindex.md), `sourceFirst`: number, `sourceLast`: number, `destinationParent`: [QModelIndex](qmodelindex.md), `destinationChild`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`sourceParent` | [QModelIndex](qmodelindex.md) |
`sourceFirst` | number |
`sourceLast` | number |
`destinationParent` | [QModelIndex](qmodelindex.md) |
`destinationChild` | number |

**Returns:** *boolean*

___

###  beginMoveRows

▸ **beginMoveRows**(`sourceParent`: [QModelIndex](qmodelindex.md), `sourceFirst`: number, `sourceLast`: number, `destinationParent`: [QModelIndex](qmodelindex.md), `destinationChild`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`sourceParent` | [QModelIndex](qmodelindex.md) |
`sourceFirst` | number |
`sourceLast` | number |
`destinationParent` | [QModelIndex](qmodelindex.md) |
`destinationChild` | number |

**Returns:** *boolean*

___

###  beginRemoveColumns

▸ **beginRemoveColumns**(`parent`: [QModelIndex](qmodelindex.md), `first`: number, `last`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QModelIndex](qmodelindex.md) |
`first` | number |
`last` | number |

**Returns:** *void*

___

###  beginRemoveRows

▸ **beginRemoveRows**(`parent`: [QModelIndex](qmodelindex.md), `first`: number, `last`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QModelIndex](qmodelindex.md) |
`first` | number |
`last` | number |

**Returns:** *void*

___

###  beginResetModel

▸ **beginResetModel**(): *void*

**Returns:** *void*

___

###  buddy

▸ **buddy**(`child`: [QModelIndex](qmodelindex.md)): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  checkIndex

▸ **checkIndex**(`index`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *boolean*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  columnCount

▸ **columnCount**(`parent`: [QModelIndex](qmodelindex.md)‹›): *number*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *number*

___

###  createIndex

▸ **createIndex**(`row`: number, `column`: number): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  data

▸ **data**(`index`: [QModelIndex](qmodelindex.md), `role`: [ItemDataRole](../enums/itemdatarole.md)): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | [QModelIndex](qmodelindex.md) | - |
`role` | [ItemDataRole](../enums/itemdatarole.md) | ItemDataRole.DisplayRole |

**Returns:** *[QVariant](qvariant.md)*

___

###  delete

▸ **delete**(): *void*

*Inherited from [QObject](qobject.md).[delete](qobject.md#delete)*

**Returns:** *void*

___

###  deleteLater

▸ **deleteLater**(): *void*

*Inherited from [QObject](qobject.md).[deleteLater](qobject.md#deletelater)*

**Returns:** *void*

___

###  dumpObjectInfo

▸ **dumpObjectInfo**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectInfo](qobject.md#dumpobjectinfo)*

**Returns:** *void*

___

###  dumpObjectTree

▸ **dumpObjectTree**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectTree](qobject.md#dumpobjecttree)*

**Returns:** *void*

___

###  emitDataChanged

▸ **emitDataChanged**(`topLeft`: [QModelIndex](qmodelindex.md), `bottomRight`: [QModelIndex](qmodelindex.md), `roles`: [ItemDataRole](../enums/itemdatarole.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`topLeft` | [QModelIndex](qmodelindex.md) |
`bottomRight` | [QModelIndex](qmodelindex.md) |
`roles` | [ItemDataRole](../enums/itemdatarole.md)[] |

**Returns:** *void*

___

###  endInsertColumns

▸ **endInsertColumns**(): *void*

**Returns:** *void*

___

###  endInsertRows

▸ **endInsertRows**(): *void*

**Returns:** *void*

___

###  endMoveColumns

▸ **endMoveColumns**(): *void*

**Returns:** *void*

___

###  endMoveRows

▸ **endMoveRows**(): *void*

**Returns:** *void*

___

###  endRemoveColumns

▸ **endRemoveColumns**(): *void*

**Returns:** *void*

___

###  endRemoveRows

▸ **endRemoveRows**(): *void*

**Returns:** *void*

___

###  endResetModel

▸ **endResetModel**(): *void*

**Returns:** *void*

___

###  eventProcessed

▸ **eventProcessed**(): *boolean*

*Inherited from [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

Get the state of the event processed flag

See `setEventProcessed()`.

**Returns:** *boolean*

boolean True if the current event is flagged as processed.

___

###  flags

▸ **flags**(`index`: [QModelIndex](qmodelindex.md)): *[ItemFlag](../enums/itemflag.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[ItemFlag](../enums/itemflag.md)*

___

###  hasIndex

▸ **hasIndex**(`row`: number, `column`: number, `parent`: [QModelIndex](qmodelindex.md)‹›): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | - |
`column` | number | - |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *boolean*

___

###  headerData

▸ **headerData**(`section`: number, `orientation`: [Orientation](../enums/orientation.md), `role`: number): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`section` | number |
`orientation` | [Orientation](../enums/orientation.md) |
`role` | number |

**Returns:** *[QVariant](qvariant.md)*

___

###  index

▸ **index**(`row`: number, `column`: number, `parent`: [QModelIndex](qmodelindex.md)‹›): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | - |
`column` | number | - |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [QObject](qobject.md).[inherits](qobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

*Inherited from [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  parentModelIndex

▸ **parentModelIndex**(`child`: [QModelIndex](qmodelindex.md)): *[QModelIndex](qmodelindex.md)*

Note: This corresponds to `QAbstractItemModel::parent(QModelIndex)`. It has been given a different name in TS.

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [QObject](qobject.md).[property](qobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: any[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof any*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | any[SignalType] |
`options?` | [EventListenerOptions](../interfaces/eventlisteneroptions.md) |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function, `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

▪`Optional`  **options**: *[EventListenerOptions](../interfaces/eventlisteneroptions.md)*

**Returns:** *void*

___

###  rowCount

▸ **rowCount**(`parent`: [QModelIndex](qmodelindex.md)‹›): *number*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *number*

___

###  setData

▸ **setData**(`index`: [QModelIndex](qmodelindex.md), `value`: [QVariant](qvariant.md), `role`: [ItemDataRole](../enums/itemdatarole.md)): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | [QModelIndex](qmodelindex.md) | - |
`value` | [QVariant](qvariant.md) | - |
`role` | [ItemDataRole](../enums/itemdatarole.md) | ItemDataRole.EditRole |

**Returns:** *boolean*

___

###  setEventProcessed

▸ **setEventProcessed**(`isProcessed`: boolean): *void*

*Inherited from [EventWidget](eventwidget.md).[setEventProcessed](eventwidget.md#seteventprocessed)*

Mark the current event as having been processed

This method is used to indicate that the currently dispatched event
has been processed and no further processing by superclasses is
required. It only makes sense to call this method from an event
handler.

When set, this flag will cause NodeGui's `QObject::event()` method to
return true and not call the superclass `event()`, effectively preventing
any further processing on this event.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`isProcessed` | boolean | true if the event has been processed.  |

**Returns:** *void*

___

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [QObject](qobject.md).[setObjectName](qobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setParent

▸ **setParent**(`parent`: [QObject](qobject.md)): *void*

*Inherited from [QObject](qobject.md).[setParent](qobject.md#setparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QObject](qobject.md) |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [QObject](qobject.md).[setProperty](qobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  startTimer

▸ **startTimer**(`intervalMS`: number, `timerType`: [TimerType](../enums/timertype.md)): *number*

*Inherited from [QObject](qobject.md).[startTimer](qobject.md#starttimer)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`intervalMS` | number | - |
`timerType` | [TimerType](../enums/timertype.md) | TimerType.CoarseTimer |

**Returns:** *number*
