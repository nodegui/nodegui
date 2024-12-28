---
id: "qitemselectionmodel"
title: "QItemSelectionModel"
sidebar_label: "QItemSelectionModel"
---

## Hierarchy

  ↳ [QObject](qobject.md)‹[QItemSelectionModelSignals](../globals.md#qitemselectionmodelsignals)›

  ↳ **QItemSelectionModel**

## Index

### Constructors

* [constructor](qitemselectionmodel.md#constructor)

### Properties

* [native](qitemselectionmodel.md#native)

### Methods

* [_id](qitemselectionmodel.md#_id)
* [addEventListener](qitemselectionmodel.md#addeventlistener)
* [children](qitemselectionmodel.md#children)
* [clear](qitemselectionmodel.md#clear)
* [clearCurrentIndex](qitemselectionmodel.md#clearcurrentindex)
* [clearSelection](qitemselectionmodel.md#clearselection)
* [columnIntersectsSelection](qitemselectionmodel.md#columnintersectsselection)
* [currentIndex](qitemselectionmodel.md#currentindex)
* [delete](qitemselectionmodel.md#delete)
* [deleteLater](qitemselectionmodel.md#deletelater)
* [dumpObjectInfo](qitemselectionmodel.md#dumpobjectinfo)
* [dumpObjectTree](qitemselectionmodel.md#dumpobjecttree)
* [eventProcessed](qitemselectionmodel.md#eventprocessed)
* [hasSelection](qitemselectionmodel.md#hasselection)
* [inherits](qitemselectionmodel.md#inherits)
* [isColumnSelected](qitemselectionmodel.md#iscolumnselected)
* [isRowSelected](qitemselectionmodel.md#isrowselected)
* [isSelected](qitemselectionmodel.md#isselected)
* [killTimer](qitemselectionmodel.md#killtimer)
* [objectName](qitemselectionmodel.md#objectname)
* [parent](qitemselectionmodel.md#parent)
* [property](qitemselectionmodel.md#property)
* [removeEventListener](qitemselectionmodel.md#removeeventlistener)
* [reset](qitemselectionmodel.md#reset)
* [rowIntersectsSelection](qitemselectionmodel.md#rowintersectsselection)
* [select](qitemselectionmodel.md#select)
* [selectedColumns](qitemselectionmodel.md#selectedcolumns)
* [selectedIndexes](qitemselectionmodel.md#selectedindexes)
* [selectedRows](qitemselectionmodel.md#selectedrows)
* [setCurrentIndex](qitemselectionmodel.md#setcurrentindex)
* [setEventProcessed](qitemselectionmodel.md#seteventprocessed)
* [setObjectName](qitemselectionmodel.md#setobjectname)
* [setParent](qitemselectionmodel.md#setparent)
* [setProperty](qitemselectionmodel.md#setproperty)
* [startTimer](qitemselectionmodel.md#starttimer)

## Constructors

###  constructor

\+ **new QItemSelectionModel**(`arg?`: [NativeElement](../globals.md#nativeelement)): *[QItemSelectionModel](qitemselectionmodel.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QItemSelectionModel](qitemselectionmodel.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QItemSelectionModelSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QItemSelectionModelSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QItemSelectionModelSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  clearCurrentIndex

▸ **clearCurrentIndex**(): *void*

**Returns:** *void*

___

###  clearSelection

▸ **clearSelection**(): *void*

**Returns:** *void*

___

###  columnIntersectsSelection

▸ **columnIntersectsSelection**(`column`: number, `parent`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`column` | number | - |
`parent` | [QModelIndex](qmodelindex.md) | new QModelIndex() |

**Returns:** *boolean*

___

###  currentIndex

▸ **currentIndex**(): *[QModelIndex](qmodelindex.md)*

**Returns:** *[QModelIndex](qmodelindex.md)*

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

###  eventProcessed

▸ **eventProcessed**(): *boolean*

*Inherited from [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

Get the state of the event processed flag

See `setEventProcessed()`.

**Returns:** *boolean*

boolean True if the current event is flagged as processed.

___

###  hasSelection

▸ **hasSelection**(): *boolean*

**Returns:** *boolean*

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

###  isColumnSelected

▸ **isColumnSelected**(`column`: number, `parent`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`column` | number | - |
`parent` | [QModelIndex](qmodelindex.md) | new QModelIndex() |

**Returns:** *boolean*

___

###  isRowSelected

▸ **isRowSelected**(`row`: number, `parent`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | - |
`parent` | [QModelIndex](qmodelindex.md) | new QModelIndex() |

**Returns:** *boolean*

___

###  isSelected

▸ **isSelected**(`index`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QItemSelectionModelSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QItemSelectionModelSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QItemSelectionModelSignals[SignalType] |
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

###  reset

▸ **reset**(): *void*

**Returns:** *void*

___

###  rowIntersectsSelection

▸ **rowIntersectsSelection**(`row`: number, `parent`: [QModelIndex](qmodelindex.md)): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | - |
`parent` | [QModelIndex](qmodelindex.md) | new QModelIndex() |

**Returns:** *boolean*

___

###  select

▸ **select**(`index`: [QModelIndex](qmodelindex.md), `command`: [SelectionFlag](../enums/selectionflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |
`command` | [SelectionFlag](../enums/selectionflag.md) |

**Returns:** *void*

___

###  selectedColumns

▸ **selectedColumns**(`row`: number): *[QModelIndex](qmodelindex.md)[]*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |

**Returns:** *[QModelIndex](qmodelindex.md)[]*

___

###  selectedIndexes

▸ **selectedIndexes**(): *[QModelIndex](qmodelindex.md)[]*

**Returns:** *[QModelIndex](qmodelindex.md)[]*

___

###  selectedRows

▸ **selectedRows**(`column`: number): *[QModelIndex](qmodelindex.md)[]*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`column` | number | 0 |

**Returns:** *[QModelIndex](qmodelindex.md)[]*

___

###  setCurrentIndex

▸ **setCurrentIndex**(`index`: [QModelIndex](qmodelindex.md), `command`: [SelectionFlag](../enums/selectionflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |
`command` | [SelectionFlag](../enums/selectionflag.md) |

**Returns:** *void*

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
