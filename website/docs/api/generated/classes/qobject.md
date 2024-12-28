---
id: "qobject"
title: "QObject"
sidebar_label: "QObject"
---

## Type parameters

▪ **Signals**: *[QObjectSignals](../interfaces/qobjectsignals.md)*

## Hierarchy

  ↳ [EventWidget](eventwidget.md)‹Signals›

  ↳ **QObject**

  ↳ [QLayout](qlayout.md)

  ↳ [YogaWidget](yogawidget.md)

  ↳ [QAction](qaction.md)

  ↳ [QGraphicsEffect](qgraphicseffect.md)

  ↳ [QClipboard](qclipboard.md)

  ↳ [QScreen](qscreen.md)

  ↳ [QApplication](qapplication.md)

  ↳ [QMovie](qmovie.md)

  ↳ [QWindow](qwindow.md)

  ↳ [QAbstractItemModel](qabstractitemmodel.md)

  ↳ [QItemSelectionModel](qitemselectionmodel.md)

  ↳ [QAbstractItemDelegate](qabstractitemdelegate.md)

  ↳ [QStandardItemModel](qstandarditemmodel.md)

  ↳ [QButtonGroup](qbuttongroup.md)

  ↳ [QSystemTrayIcon](qsystemtrayicon.md)

  ↳ [QShortcut](qshortcut.md)

  ↳ [CacheTestQObject](cachetestqobject.md)

## Index

### Constructors

* [constructor](qobject.md#constructor)

### Properties

* [native](qobject.md#native)

### Methods

* [_id](qobject.md#_id)
* [addEventListener](qobject.md#addeventlistener)
* [children](qobject.md#children)
* [delete](qobject.md#delete)
* [deleteLater](qobject.md#deletelater)
* [dumpObjectInfo](qobject.md#dumpobjectinfo)
* [dumpObjectTree](qobject.md#dumpobjecttree)
* [eventProcessed](qobject.md#eventprocessed)
* [inherits](qobject.md#inherits)
* [killTimer](qobject.md#killtimer)
* [objectName](qobject.md#objectname)
* [parent](qobject.md#parent)
* [property](qobject.md#property)
* [removeEventListener](qobject.md#removeeventlistener)
* [setEventProcessed](qobject.md#seteventprocessed)
* [setObjectName](qobject.md#setobjectname)
* [setParent](qobject.md#setparent)
* [setProperty](qobject.md#setproperty)
* [startTimer](qobject.md#starttimer)

## Constructors

###  constructor

\+ **new QObject**(`nativeElementOrParent?`: [NativeElement](../globals.md#nativeelement) | [QObject](qobject.md)): *[QObject](qobject.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElementOrParent?` | [NativeElement](../globals.md#nativeelement) &#124; [QObject](qobject.md) |

**Returns:** *[QObject](qobject.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  _id

▸ **_id**(): *number*

Get an ID identifying the underlying C++ object.

This can be useful when debugging memory problems with help from
`setLogCreateQObject()` and `setLogDestroyQObject()`. The number is
hash of the memory address of the C++ object.

**Returns:** *number*

a unique number which is valid for the lifetime of the C++ object.

___

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

**Returns:** *[QObject](qobject.md)[]*

___

###  delete

▸ **delete**(): *void*

**Returns:** *void*

___

###  deleteLater

▸ **deleteLater**(): *void*

**Returns:** *void*

___

###  dumpObjectInfo

▸ **dumpObjectInfo**(): *void*

**Returns:** *void*

___

###  dumpObjectTree

▸ **dumpObjectTree**(): *void*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

**Returns:** *string*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

**Returns:** *[QObject](qobject.md)*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |
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

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setParent

▸ **setParent**(`parent`: [QObject](qobject.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QObject](qobject.md) |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  startTimer

▸ **startTimer**(`intervalMS`: number, `timerType`: [TimerType](../enums/timertype.md)): *number*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`intervalMS` | number | - |
`timerType` | [TimerType](../enums/timertype.md) | TimerType.CoarseTimer |

**Returns:** *number*
