---
id: "mymodel"
title: "MyModel"
sidebar_label: "MyModel"
---

## Hierarchy

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ [QAbstractTableModel](qabstracttablemodel.md)

  ↳ **MyModel**

## Index

### Constructors

* [constructor](mymodel.md#constructor)

### Properties

* [native](mymodel.md#native)

### Methods

* [_id](mymodel.md#_id)
* [addEventListener](mymodel.md#addeventlistener)
* [beginInsertColumns](mymodel.md#begininsertcolumns)
* [beginInsertRows](mymodel.md#begininsertrows)
* [beginMoveColumns](mymodel.md#beginmovecolumns)
* [beginMoveRows](mymodel.md#beginmoverows)
* [beginRemoveColumns](mymodel.md#beginremovecolumns)
* [beginRemoveRows](mymodel.md#beginremoverows)
* [beginResetModel](mymodel.md#beginresetmodel)
* [buddy](mymodel.md#buddy)
* [checkIndex](mymodel.md#checkindex)
* [children](mymodel.md#children)
* [columnCount](mymodel.md#columncount)
* [createIndex](mymodel.md#createindex)
* [data](mymodel.md#data)
* [delete](mymodel.md#delete)
* [deleteLater](mymodel.md#deletelater)
* [dumpObjectInfo](mymodel.md#dumpobjectinfo)
* [dumpObjectTree](mymodel.md#dumpobjecttree)
* [emitDataChanged](mymodel.md#emitdatachanged)
* [endInsertColumns](mymodel.md#endinsertcolumns)
* [endInsertRows](mymodel.md#endinsertrows)
* [endMoveColumns](mymodel.md#endmovecolumns)
* [endMoveRows](mymodel.md#endmoverows)
* [endRemoveColumns](mymodel.md#endremovecolumns)
* [endRemoveRows](mymodel.md#endremoverows)
* [endResetModel](mymodel.md#endresetmodel)
* [eventProcessed](mymodel.md#eventprocessed)
* [flags](mymodel.md#flags)
* [hasChildren](mymodel.md#haschildren)
* [hasIndex](mymodel.md#hasindex)
* [headerData](mymodel.md#headerdata)
* [index](mymodel.md#index)
* [inherits](mymodel.md#inherits)
* [killTimer](mymodel.md#killtimer)
* [objectName](mymodel.md#objectname)
* [parent](mymodel.md#parent)
* [parentModelIndex](mymodel.md#parentmodelindex)
* [property](mymodel.md#property)
* [removeEventListener](mymodel.md#removeeventlistener)
* [rowCount](mymodel.md#rowcount)
* [setData](mymodel.md#setdata)
* [setEventProcessed](mymodel.md#seteventprocessed)
* [setObjectName](mymodel.md#setobjectname)
* [setParent](mymodel.md#setparent)
* [setProperty](mymodel.md#setproperty)
* [sibling](mymodel.md#sibling)
* [startTimer](mymodel.md#starttimer)
* [timerHit](mymodel.md#timerhit)

## Constructors

###  constructor

\+ **new MyModel**(): *[MyModel](mymodel.md)*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[constructor](qabstractitemmodel.md#constructor)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Returns:** *[MyModel](mymodel.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

*Overrides [Component](component.md).[native](component.md#native)*

## Methods

###  _id

▸ **_id**(): *number*

*Inherited from [QObject](qobject.md).[_id](qobject.md#_id)*

*Overrides [QObject](qobject.md).[_id](qobject.md#_id)*

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

*Overrides [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

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

*Overrides [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginInsertColumns](qabstractitemmodel.md#begininsertcolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginInsertColumns](qabstractitemmodel.md#begininsertcolumns)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginInsertRows](qabstractitemmodel.md#begininsertrows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginInsertRows](qabstractitemmodel.md#begininsertrows)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginMoveColumns](qabstractitemmodel.md#beginmovecolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginMoveColumns](qabstractitemmodel.md#beginmovecolumns)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginMoveRows](qabstractitemmodel.md#beginmoverows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginMoveRows](qabstractitemmodel.md#beginmoverows)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginRemoveColumns](qabstractitemmodel.md#beginremovecolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginRemoveColumns](qabstractitemmodel.md#beginremovecolumns)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginRemoveRows](qabstractitemmodel.md#beginremoverows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginRemoveRows](qabstractitemmodel.md#beginremoverows)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[beginResetModel](qabstractitemmodel.md#beginresetmodel)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[beginResetModel](qabstractitemmodel.md#beginresetmodel)*

**Returns:** *void*

___

###  buddy

▸ **buddy**(`child`: [QModelIndex](qmodelindex.md)): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[buddy](qabstractitemmodel.md#buddy)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[buddy](qabstractitemmodel.md#buddy)*

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  checkIndex

▸ **checkIndex**(`index`: [QModelIndex](qmodelindex.md)): *boolean*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[checkIndex](qabstractitemmodel.md#checkindex)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[checkIndex](qabstractitemmodel.md#checkindex)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *boolean*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

*Overrides [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  columnCount

▸ **columnCount**(`parent`: [QModelIndex](qmodelindex.md)‹›): *number*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[columnCount](qabstractitemmodel.md#columncount)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *number*

___

###  createIndex

▸ **createIndex**(`row`: number, `column`: number): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[createIndex](qabstractitemmodel.md#createindex)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[createIndex](qabstractitemmodel.md#createindex)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  data

▸ **data**(`index`: [QModelIndex](qmodelindex.md), `role`: [ItemDataRole](../enums/itemdatarole.md)): *[QVariant](qvariant.md)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[data](qabstractitemmodel.md#data)*

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

*Overrides [QObject](qobject.md).[delete](qobject.md#delete)*

**Returns:** *void*

___

###  deleteLater

▸ **deleteLater**(): *void*

*Inherited from [QObject](qobject.md).[deleteLater](qobject.md#deletelater)*

*Overrides [QObject](qobject.md).[deleteLater](qobject.md#deletelater)*

**Returns:** *void*

___

###  dumpObjectInfo

▸ **dumpObjectInfo**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectInfo](qobject.md#dumpobjectinfo)*

*Overrides [QObject](qobject.md).[dumpObjectInfo](qobject.md#dumpobjectinfo)*

**Returns:** *void*

___

###  dumpObjectTree

▸ **dumpObjectTree**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectTree](qobject.md#dumpobjecttree)*

*Overrides [QObject](qobject.md).[dumpObjectTree](qobject.md#dumpobjecttree)*

**Returns:** *void*

___

###  emitDataChanged

▸ **emitDataChanged**(`topLeft`: [QModelIndex](qmodelindex.md), `bottomRight`: [QModelIndex](qmodelindex.md), `roles`: [ItemDataRole](../enums/itemdatarole.md)[]): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[emitDataChanged](qabstractitemmodel.md#emitdatachanged)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[emitDataChanged](qabstractitemmodel.md#emitdatachanged)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endInsertColumns](qabstractitemmodel.md#endinsertcolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endInsertColumns](qabstractitemmodel.md#endinsertcolumns)*

**Returns:** *void*

___

###  endInsertRows

▸ **endInsertRows**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endInsertRows](qabstractitemmodel.md#endinsertrows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endInsertRows](qabstractitemmodel.md#endinsertrows)*

**Returns:** *void*

___

###  endMoveColumns

▸ **endMoveColumns**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endMoveColumns](qabstractitemmodel.md#endmovecolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endMoveColumns](qabstractitemmodel.md#endmovecolumns)*

**Returns:** *void*

___

###  endMoveRows

▸ **endMoveRows**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endMoveRows](qabstractitemmodel.md#endmoverows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endMoveRows](qabstractitemmodel.md#endmoverows)*

**Returns:** *void*

___

###  endRemoveColumns

▸ **endRemoveColumns**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endRemoveColumns](qabstractitemmodel.md#endremovecolumns)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endRemoveColumns](qabstractitemmodel.md#endremovecolumns)*

**Returns:** *void*

___

###  endRemoveRows

▸ **endRemoveRows**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endRemoveRows](qabstractitemmodel.md#endremoverows)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endRemoveRows](qabstractitemmodel.md#endremoverows)*

**Returns:** *void*

___

###  endResetModel

▸ **endResetModel**(): *void*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[endResetModel](qabstractitemmodel.md#endresetmodel)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[endResetModel](qabstractitemmodel.md#endresetmodel)*

**Returns:** *void*

___

###  eventProcessed

▸ **eventProcessed**(): *boolean*

*Inherited from [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

*Overrides [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

Get the state of the event processed flag

See `setEventProcessed()`.

**Returns:** *boolean*

boolean True if the current event is flagged as processed.

___

###  flags

▸ **flags**(`index`: [QModelIndex](qmodelindex.md)): *[ItemFlag](../enums/itemflag.md)*

*Inherited from [QAbstractTableModel](qabstracttablemodel.md).[flags](qabstracttablemodel.md#flags)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[flags](qabstractitemmodel.md#flags)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[ItemFlag](../enums/itemflag.md)*

___

###  hasChildren

▸ **hasChildren**(`parent`: [QModelIndex](qmodelindex.md)): *boolean*

*Inherited from [QAbstractTableModel](qabstracttablemodel.md).[hasChildren](qabstracttablemodel.md#haschildren)*

*Overrides [QAbstractTableModel](qabstracttablemodel.md).[hasChildren](qabstracttablemodel.md#haschildren)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QModelIndex](qmodelindex.md) |

**Returns:** *boolean*

___

###  hasIndex

▸ **hasIndex**(`row`: number, `column`: number, `parent`: [QModelIndex](qmodelindex.md)‹›): *boolean*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[hasIndex](qabstractitemmodel.md#hasindex)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[hasIndex](qabstractitemmodel.md#hasindex)*

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

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[headerData](qabstractitemmodel.md#headerdata)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[headerData](qabstractitemmodel.md#headerdata)*

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

*Inherited from [QAbstractTableModel](qabstracttablemodel.md).[index](qabstracttablemodel.md#index)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[index](qabstractitemmodel.md#index)*

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

*Overrides [QObject](qobject.md).[inherits](qobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

*Inherited from [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

*Overrides [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

*Overrides [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

*Overrides [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  parentModelIndex

▸ **parentModelIndex**(`child`: [QModelIndex](qmodelindex.md)): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractTableModel](qabstracttablemodel.md).[parentModelIndex](qabstracttablemodel.md#parentmodelindex)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[parentModelIndex](qabstractitemmodel.md#parentmodelindex)*

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [QObject](qobject.md).[property](qobject.md#property)*

*Overrides [QObject](qobject.md).[property](qobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: any[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

*Overrides [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

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

*Overrides [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

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

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[rowCount](qabstractitemmodel.md#rowcount)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`parent` | [QModelIndex](qmodelindex.md)‹› | new QModelIndex() |

**Returns:** *number*

___

###  setData

▸ **setData**(`index`: [QModelIndex](qmodelindex.md), `value`: [QVariant](qvariant.md), `role`: [ItemDataRole](../enums/itemdatarole.md)): *boolean*

*Inherited from [QAbstractItemModel](qabstractitemmodel.md).[setData](qabstractitemmodel.md#setdata)*

*Overrides [QAbstractItemModel](qabstractitemmodel.md).[setData](qabstractitemmodel.md#setdata)*

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

*Overrides [EventWidget](eventwidget.md).[setEventProcessed](eventwidget.md#seteventprocessed)*

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

*Overrides [QObject](qobject.md).[setObjectName](qobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setParent

▸ **setParent**(`parent`: [QObject](qobject.md)): *void*

*Inherited from [QObject](qobject.md).[setParent](qobject.md#setparent)*

*Overrides [QObject](qobject.md).[setParent](qobject.md#setparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QObject](qobject.md) |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [QObject](qobject.md).[setProperty](qobject.md#setproperty)*

*Overrides [QObject](qobject.md).[setProperty](qobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  sibling

▸ **sibling**(`row`: number, `column`: number, `index`: [QModelIndex](qmodelindex.md)): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractTableModel](qabstracttablemodel.md).[sibling](qabstracttablemodel.md#sibling)*

*Overrides [QAbstractTableModel](qabstracttablemodel.md).[sibling](qabstracttablemodel.md#sibling)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  startTimer

▸ **startTimer**(`intervalMS`: number, `timerType`: [TimerType](../enums/timertype.md)): *number*

*Inherited from [QObject](qobject.md).[startTimer](qobject.md#starttimer)*

*Overrides [QObject](qobject.md).[startTimer](qobject.md#starttimer)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`intervalMS` | number | - |
`timerType` | [TimerType](../enums/timertype.md) | TimerType.CoarseTimer |

**Returns:** *number*

___

###  timerHit

▸ **timerHit**(): *void*

**Returns:** *void*
