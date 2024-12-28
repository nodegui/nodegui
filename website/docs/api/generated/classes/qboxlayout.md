---
id: "qboxlayout"
title: "QBoxLayout"
sidebar_label: "QBoxLayout"
---

> Lines up child widgets horizontally or vertically.

**This class is a JS wrapper around Qt's [QBoxLayout class](https://doc.qt.io/qt-5/qboxlayout.html)**

### Example

```javascript
// This example arranges two calendars horizontally.

const { QBoxLayout, QCalendarWidget } = require("@nodegui/nodegui");

const centralWidget = new QWidget();
const boxLayout = new QBoxLayout(0);

boxLayout.addWidget(new QCalendarWidget());
boxLayout.addWidget(new QCalendarWidget());
centralWidget.setLayout(boxLayout);
```

## Hierarchy

  ↳ [QLayout](qlayout.md)‹[QBoxLayoutSignals](../globals.md#qboxlayoutsignals)›

  ↳ **QBoxLayout**

## Index

### Constructors

* [constructor](qboxlayout.md#constructor)

### Properties

* [native](qboxlayout.md#native)
* [type](qboxlayout.md#type)

### Methods

* [_id](qboxlayout.md#_id)
* [activate](qboxlayout.md#activate)
* [addEventListener](qboxlayout.md#addeventlistener)
* [addLayout](qboxlayout.md#addlayout)
* [addSpacing](qboxlayout.md#addspacing)
* [addStretch](qboxlayout.md#addstretch)
* [addStrut](qboxlayout.md#addstrut)
* [addWidget](qboxlayout.md#addwidget)
* [children](qboxlayout.md#children)
* [count](qboxlayout.md#count)
* [delete](qboxlayout.md#delete)
* [deleteLater](qboxlayout.md#deletelater)
* [direction](qboxlayout.md#direction)
* [dumpObjectInfo](qboxlayout.md#dumpobjectinfo)
* [dumpObjectTree](qboxlayout.md#dumpobjecttree)
* [eventProcessed](qboxlayout.md#eventprocessed)
* [inherits](qboxlayout.md#inherits)
* [insertLayout](qboxlayout.md#insertlayout)
* [insertSpacing](qboxlayout.md#insertspacing)
* [insertStretch](qboxlayout.md#insertstretch)
* [insertWidget](qboxlayout.md#insertwidget)
* [invalidate](qboxlayout.md#invalidate)
* [isEnabled](qboxlayout.md#isenabled)
* [killTimer](qboxlayout.md#killtimer)
* [objectName](qboxlayout.md#objectname)
* [parent](qboxlayout.md#parent)
* [property](qboxlayout.md#property)
* [removeEventListener](qboxlayout.md#removeeventlistener)
* [removeWidget](qboxlayout.md#removewidget)
* [setContentsMargins](qboxlayout.md#setcontentsmargins)
* [setDirection](qboxlayout.md#setdirection)
* [setEnabled](qboxlayout.md#setenabled)
* [setEventProcessed](qboxlayout.md#seteventprocessed)
* [setObjectName](qboxlayout.md#setobjectname)
* [setParent](qboxlayout.md#setparent)
* [setProperty](qboxlayout.md#setproperty)
* [setSizeConstraint](qboxlayout.md#setsizeconstraint)
* [setSpacing](qboxlayout.md#setspacing)
* [setStretch](qboxlayout.md#setstretch)
* [sizeConstraint](qboxlayout.md#sizeconstraint)
* [spacing](qboxlayout.md#spacing)
* [startTimer](qboxlayout.md#starttimer)
* [update](qboxlayout.md#update)

## Constructors

###  constructor

\+ **new QBoxLayout**(`arg`: [NativeElement](../globals.md#nativeelement) | [Direction](../enums/direction.md), `parent?`: [QWidget](qwidget.md)): *[QBoxLayout](qboxlayout.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg` | [NativeElement](../globals.md#nativeelement) &#124; [Direction](../enums/direction.md) |
`parent?` | [QWidget](qwidget.md) |

**Returns:** *[QBoxLayout](qboxlayout.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

___

###  type

• **type**: *string* = "layout"

*Inherited from [QLayout](qlayout.md).[type](qlayout.md#type)*

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

*Inherited from [QLayout](qlayout.md).[activate](qlayout.md#activate)*

**Returns:** *boolean*

___

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QBoxLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QBoxLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QBoxLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  addLayout

▸ **addLayout**(`layout`: [QLayout](qlayout.md), `stretch`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`layout` | [QLayout](qlayout.md) | - |
`stretch` | number | 0 |

**Returns:** *void*

___

###  addSpacing

▸ **addSpacing**(`size`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | number |

**Returns:** *void*

___

###  addStretch

▸ **addStretch**(`stretch`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`stretch` | number | 0 |

**Returns:** *void*

___

###  addStrut

▸ **addStrut**(`size`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | number |

**Returns:** *void*

___

###  addWidget

▸ **addWidget**(`widget`: [QWidget](qwidget.md), `stretch`: number, `alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

*Overrides [QLayout](qlayout.md).[addWidget](qlayout.md#abstract-addwidget)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`widget` | [QWidget](qwidget.md) | - |
`stretch` | number | 0 |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) | 0 |

**Returns:** *void*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  count

▸ **count**(): *number*

**Returns:** *number*

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

###  direction

▸ **direction**(): *[Direction](../enums/direction.md)*

**Returns:** *[Direction](../enums/direction.md)*

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

###  insertLayout

▸ **insertLayout**(`index`: number, `layout`: [QLayout](qlayout.md), `stretch`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | number | - |
`layout` | [QLayout](qlayout.md) | - |
`stretch` | number | 0 |

**Returns:** *void*

___

###  insertSpacing

▸ **insertSpacing**(`index`: number, `size`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`size` | number |

**Returns:** *void*

___

###  insertStretch

▸ **insertStretch**(`index`: number, `stretch`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | number | - |
`stretch` | number | 0 |

**Returns:** *void*

___

###  insertWidget

▸ **insertWidget**(`index`: number, `widget`: [QWidget](qwidget.md), `stretch`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | number | - |
`widget` | [QWidget](qwidget.md) | - |
`stretch` | number | 0 |

**Returns:** *void*

___

###  invalidate

▸ **invalidate**(): *void*

*Inherited from [QLayout](qlayout.md).[invalidate](qlayout.md#invalidate)*

**Returns:** *void*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QLayout](qlayout.md).[isEnabled](qlayout.md#isenabled)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QBoxLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QBoxLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QBoxLayoutSignals[SignalType] |
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

###  removeWidget

▸ **removeWidget**(`widget`: [QWidget](qwidget.md)): *void*

*Overrides [QLayout](qlayout.md).[removeWidget](qlayout.md#abstract-removewidget)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setContentsMargins

▸ **setContentsMargins**(`left`: number, `top`: number, `right`: number, `bottom`: number): *void*

*Inherited from [QLayout](qlayout.md).[setContentsMargins](qlayout.md#setcontentsmargins)*

**Parameters:**

Name | Type |
------ | ------ |
`left` | number |
`top` | number |
`right` | number |
`bottom` | number |

**Returns:** *void*

___

###  setDirection

▸ **setDirection**(`dir`: [Direction](../enums/direction.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`dir` | [Direction](../enums/direction.md) |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enable`: boolean): *void*

*Inherited from [QLayout](qlayout.md).[setEnabled](qlayout.md#setenabled)*

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

*Inherited from [QLayout](qlayout.md).[setSizeConstraint](qlayout.md#setsizeconstraint)*

**Parameters:**

Name | Type |
------ | ------ |
`constraint` | [SizeConstraint](../enums/sizeconstraint.md) |

**Returns:** *void*

___

###  setSpacing

▸ **setSpacing**(`spacing`: number): *void*

*Inherited from [QLayout](qlayout.md).[setSpacing](qlayout.md#setspacing)*

**Parameters:**

Name | Type |
------ | ------ |
`spacing` | number |

**Returns:** *void*

___

###  setStretch

▸ **setStretch**(`index`: number, `stretch`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`stretch` | number |

**Returns:** *void*

___

###  sizeConstraint

▸ **sizeConstraint**(): *[SizeConstraint](../enums/sizeconstraint.md)*

*Inherited from [QLayout](qlayout.md).[sizeConstraint](qlayout.md#sizeconstraint)*

**Returns:** *[SizeConstraint](../enums/sizeconstraint.md)*

___

###  spacing

▸ **spacing**(): *number*

*Inherited from [QLayout](qlayout.md).[spacing](qlayout.md#spacing)*

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

*Inherited from [QLayout](qlayout.md).[update](qlayout.md#update)*

**Returns:** *void*
