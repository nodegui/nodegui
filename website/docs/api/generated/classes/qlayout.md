---
id: "qlayout"
title: "QLayout"
sidebar_label: "QLayout"
---

> Abstract class to add functionalities common to all Layout.

*This class implements all methods, properties of Qt's [QLayout class](https://doc.qt.io/qt-5/qlayout.html) so that it can be inherited by all layouts**

`QLayout` is an abstract class and hence no instances of the same should be created.

### Example

```javascript
const {
QLayout,
FlexLayout,
GridLayout,
QPushButton,
QWidget
} = require("@nodegui/nodegui");

// addChildToLayout can accept any layout since it expects QLayout
const addChildToLayout = (layout: QLayout, widget: QWidget) => {
layout.addWidget(widget);
};

addChildToLayout(new FlexLayout(), new QPushButton());
addChildToLayout(new GridLayout(), new QWidget());
```

## Type parameters

▪ **Signals**: *[QLayoutSignals](../globals.md#qlayoutsignals)*

## Hierarchy

  ↳ [QObject](qobject.md)‹Signals›

  ↳ **QLayout**

  ↳ [FlexLayout](flexlayout.md)

  ↳ [QStackedLayout](qstackedlayout.md)

  ↳ [QBoxLayout](qboxlayout.md)

  ↳ [QGridLayout](qgridlayout.md)

## Index

### Constructors

* [constructor](qlayout.md#constructor)

### Properties

* [native](qlayout.md#native)
* [type](qlayout.md#type)

### Methods

* [_id](qlayout.md#_id)
* [activate](qlayout.md#activate)
* [addEventListener](qlayout.md#addeventlistener)
* [addWidget](qlayout.md#abstract-addwidget)
* [children](qlayout.md#children)
* [delete](qlayout.md#delete)
* [deleteLater](qlayout.md#deletelater)
* [dumpObjectInfo](qlayout.md#dumpobjectinfo)
* [dumpObjectTree](qlayout.md#dumpobjecttree)
* [eventProcessed](qlayout.md#eventprocessed)
* [inherits](qlayout.md#inherits)
* [invalidate](qlayout.md#invalidate)
* [isEnabled](qlayout.md#isenabled)
* [killTimer](qlayout.md#killtimer)
* [objectName](qlayout.md#objectname)
* [parent](qlayout.md#parent)
* [property](qlayout.md#property)
* [removeEventListener](qlayout.md#removeeventlistener)
* [removeWidget](qlayout.md#abstract-removewidget)
* [setContentsMargins](qlayout.md#setcontentsmargins)
* [setEnabled](qlayout.md#setenabled)
* [setEventProcessed](qlayout.md#seteventprocessed)
* [setObjectName](qlayout.md#setobjectname)
* [setParent](qlayout.md#setparent)
* [setProperty](qlayout.md#setproperty)
* [setSizeConstraint](qlayout.md#setsizeconstraint)
* [setSpacing](qlayout.md#setspacing)
* [sizeConstraint](qlayout.md#sizeconstraint)
* [spacing](qlayout.md#spacing)
* [startTimer](qlayout.md#starttimer)
* [update](qlayout.md#update)

## Constructors

###  constructor

\+ **new QLayout**(`nativeElementOrParent?`: [NativeElement](../globals.md#nativeelement) | [QObject](qobject.md)): *[QLayout](qlayout.md)*

*Inherited from [QObject](qobject.md).[constructor](qobject.md#constructor)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElementOrParent?` | [NativeElement](../globals.md#nativeelement) &#124; [QObject](qobject.md) |

**Returns:** *[QLayout](qlayout.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

___

###  type

• **type**: *string* = "layout"

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

###  activate

▸ **activate**(): *boolean*

**Returns:** *boolean*

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

### `Abstract` addWidget

▸ **addWidget**(`childWidget`: [QWidget](qwidget.md), ...`args`: any[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |
`...args` | any[] |

**Returns:** *void*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [QObject](qobject.md).[inherits](qobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  invalidate

▸ **invalidate**(): *void*

**Returns:** *void*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

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

### `Abstract` removeWidget

▸ **removeWidget**(`childWidget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setContentsMargins

▸ **setContentsMargins**(`left`: number, `top`: number, `right`: number, `bottom`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`left` | number |
`top` | number |
`right` | number |
`bottom` | number |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

###  setSizeConstraint

▸ **setSizeConstraint**(`constraint`: [SizeConstraint](../enums/sizeconstraint.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`constraint` | [SizeConstraint](../enums/sizeconstraint.md) |

**Returns:** *void*

___

###  setSpacing

▸ **setSpacing**(`spacing`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`spacing` | number |

**Returns:** *void*

___

###  sizeConstraint

▸ **sizeConstraint**(): *[SizeConstraint](../enums/sizeconstraint.md)*

**Returns:** *[SizeConstraint](../enums/sizeconstraint.md)*

___

###  spacing

▸ **spacing**(): *number*

**Returns:** *number*

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

___

###  update

▸ **update**(): *void*

**Returns:** *void*
