---
id: "qaction"
title: "QAction"
sidebar_label: "QAction"
---

> The QAction class provides an abstract user interface action that can be inserted into widgets.

**This class is a JS wrapper around Qt's [QAction class](https://doc.qt.io/qt-5/qaction.html)**

### Example

```javascript
const { QAction, QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
const menuAction = new QAction();
menuAction.setText("subAction");
menuAction.addEventListener("triggered", () => {
console.log("Action clicked");
});
menu.addAction(menuAction);
```

## Hierarchy

  ↳ [QObject](qobject.md)‹[QActionSignals](../interfaces/qactionsignals.md)›

  ↳ **QAction**

## Index

### Constructors

* [constructor](qaction.md#constructor)

### Properties

* [native](qaction.md#native)

### Methods

* [_id](qaction.md#_id)
* [addEventListener](qaction.md#addeventlistener)
* [children](qaction.md#children)
* [data](qaction.md#data)
* [delete](qaction.md#delete)
* [deleteLater](qaction.md#deletelater)
* [dumpObjectInfo](qaction.md#dumpobjectinfo)
* [dumpObjectTree](qaction.md#dumpobjecttree)
* [eventProcessed](qaction.md#eventprocessed)
* [font](qaction.md#font)
* [inherits](qaction.md#inherits)
* [isCheckable](qaction.md#ischeckable)
* [isChecked](qaction.md#ischecked)
* [isSeparator](qaction.md#isseparator)
* [killTimer](qaction.md#killtimer)
* [objectName](qaction.md#objectname)
* [parent](qaction.md#parent)
* [property](qaction.md#property)
* [removeEventListener](qaction.md#removeeventlistener)
* [setCheckable](qaction.md#setcheckable)
* [setChecked](qaction.md#setchecked)
* [setData](qaction.md#setdata)
* [setEnabled](qaction.md#setenabled)
* [setEventProcessed](qaction.md#seteventprocessed)
* [setFont](qaction.md#setfont)
* [setIcon](qaction.md#seticon)
* [setMenu](qaction.md#setmenu)
* [setObjectName](qaction.md#setobjectname)
* [setParent](qaction.md#setparent)
* [setProperty](qaction.md#setproperty)
* [setSeparator](qaction.md#setseparator)
* [setShortcut](qaction.md#setshortcut)
* [setShortcutContext](qaction.md#setshortcutcontext)
* [setText](qaction.md#settext)
* [startTimer](qaction.md#starttimer)

## Constructors

###  constructor

\+ **new QAction**(): *[QAction](qaction.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Returns:** *[QAction](qaction.md)*

\+ **new QAction**(`native`: [NativeElement](../globals.md#nativeelement)): *[QAction](qaction.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QAction](qaction.md)*

\+ **new QAction**(`parent`: [QObject](qobject.md)): *[QAction](qaction.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QObject](qobject.md) |

**Returns:** *[QAction](qaction.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QActionSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QActionSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QActionSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  data

▸ **data**(): *[QVariant](qvariant.md)*

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

###  eventProcessed

▸ **eventProcessed**(): *boolean*

*Inherited from [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

Get the state of the event processed flag

See `setEventProcessed()`.

**Returns:** *boolean*

boolean True if the current event is flagged as processed.

___

###  font

▸ **font**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

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

###  isCheckable

▸ **isCheckable**(): *boolean*

**Returns:** *boolean*

___

###  isChecked

▸ **isChecked**(): *boolean*

**Returns:** *boolean*

___

###  isSeparator

▸ **isSeparator**(): *boolean*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QActionSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QActionSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QActionSignals[SignalType] |
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

###  setCheckable

▸ **setCheckable**(`isCheckable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isCheckable` | boolean |

**Returns:** *void*

___

###  setChecked

▸ **setChecked**(`isChecked`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isChecked` | boolean |

**Returns:** *void*

___

###  setData

▸ **setData**(`value`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | [QVariant](qvariant.md) |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

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

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setIcon

▸ **setIcon**(`icon`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setMenu

▸ **setMenu**(`menu`: [QMenu](qmenu.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`menu` | [QMenu](qmenu.md) |

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

###  setSeparator

▸ **setSeparator**(`isSeparator`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isSeparator` | boolean |

**Returns:** *void*

___

###  setShortcut

▸ **setShortcut**(`keysequence`: [QKeySequence](qkeysequence.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`keysequence` | [QKeySequence](qkeysequence.md) |

**Returns:** *void*

___

###  setShortcutContext

▸ **setShortcutContext**(`shortcutContext`: [ShortcutContext](../enums/shortcutcontext.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`shortcutContext` | [ShortcutContext](../enums/shortcutcontext.md) |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

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
