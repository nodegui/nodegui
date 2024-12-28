---
id: "qbuttongroup"
title: "QButtonGroup"
sidebar_label: "QButtonGroup"
---

## Hierarchy

  ↳ [QObject](qobject.md)‹any›

  ↳ **QButtonGroup**

## Index

### Constructors

* [constructor](qbuttongroup.md#constructor)

### Properties

* [native](qbuttongroup.md#native)

### Methods

* [_id](qbuttongroup.md#_id)
* [addButton](qbuttongroup.md#addbutton)
* [addEventListener](qbuttongroup.md#addeventlistener)
* [button](qbuttongroup.md#button)
* [buttons](qbuttongroup.md#buttons)
* [checkedButton](qbuttongroup.md#checkedbutton)
* [checkedId](qbuttongroup.md#checkedid)
* [children](qbuttongroup.md#children)
* [delete](qbuttongroup.md#delete)
* [deleteLater](qbuttongroup.md#deletelater)
* [dumpObjectInfo](qbuttongroup.md#dumpobjectinfo)
* [dumpObjectTree](qbuttongroup.md#dumpobjecttree)
* [eventProcessed](qbuttongroup.md#eventprocessed)
* [exclusive](qbuttongroup.md#exclusive)
* [id](qbuttongroup.md#id)
* [inherits](qbuttongroup.md#inherits)
* [killTimer](qbuttongroup.md#killtimer)
* [objectName](qbuttongroup.md#objectname)
* [parent](qbuttongroup.md#parent)
* [property](qbuttongroup.md#property)
* [removeButton](qbuttongroup.md#removebutton)
* [removeEventListener](qbuttongroup.md#removeeventlistener)
* [setEventProcessed](qbuttongroup.md#seteventprocessed)
* [setExclusive](qbuttongroup.md#setexclusive)
* [setId](qbuttongroup.md#setid)
* [setObjectName](qbuttongroup.md#setobjectname)
* [setParent](qbuttongroup.md#setparent)
* [setProperty](qbuttongroup.md#setproperty)
* [startTimer](qbuttongroup.md#starttimer)

## Constructors

###  constructor

\+ **new QButtonGroup**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QButtonGroup](qbuttongroup.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QButtonGroup](qbuttongroup.md)*

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

###  addButton

▸ **addButton**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›, `id`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› | - |
`id` | number | -1 |

**Returns:** *void*

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

###  button

▸ **button**(`id`: number): *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

___

###  buttons

▸ **buttons**(): *[QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›[]*

**Returns:** *[QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›[]*

___

###  checkedButton

▸ **checkedButton**(): *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

**Returns:** *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

___

###  checkedId

▸ **checkedId**(): *number*

**Returns:** *number*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

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

###  exclusive

▸ **exclusive**(): *boolean*

**Returns:** *boolean*

___

###  id

▸ **id**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›): *number*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |

**Returns:** *number*

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

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [QObject](qobject.md).[property](qobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  removeButton

▸ **removeButton**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |

**Returns:** *void*

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

###  setExclusive

▸ **setExclusive**(`exculsive`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`exculsive` | boolean |

**Returns:** *void*

___

###  setId

▸ **setId**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›, `id`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |
`id` | number |

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
