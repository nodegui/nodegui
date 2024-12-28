---
id: "flexlayout"
title: "FlexLayout"
sidebar_label: "FlexLayout"
---

> Custom layout to help layout child widgets using flex layout.

**This class is a JS wrapper around custom Qt layout implemented using [Yoga](https://github.com/facebook/yoga)**

A `FlexLayout` can be used to layout all child NodeGui widgets using flex.

### Example

```javascript
const { FlexLayout, QWidget, QLabel } = require("@nodegui/nodegui");

const view = new QWidget();
const layout = new FlexLayout();
view.setLayout(layout);

const label = new QLabel();
label.setText("label1");
const label2 = new QLabel();
label2.setText("label2");

layout.addWidget(label);
layout.addWidget(label2);
```

## Hierarchy

  ↳ [QLayout](qlayout.md)‹[FlexLayoutSignals](../globals.md#flexlayoutsignals)›

  ↳ **FlexLayout**

## Index

### Constructors

* [constructor](flexlayout.md#constructor)

### Properties

* [native](flexlayout.md#native)
* [type](flexlayout.md#type)

### Methods

* [_id](flexlayout.md#_id)
* [activate](flexlayout.md#activate)
* [addEventListener](flexlayout.md#addeventlistener)
* [addWidget](flexlayout.md#addwidget)
* [children](flexlayout.md#children)
* [delete](flexlayout.md#delete)
* [deleteLater](flexlayout.md#deletelater)
* [dumpObjectInfo](flexlayout.md#dumpobjectinfo)
* [dumpObjectTree](flexlayout.md#dumpobjecttree)
* [eventProcessed](flexlayout.md#eventprocessed)
* [getChildIndex](flexlayout.md#getchildindex)
* [getNextSibling](flexlayout.md#getnextsibling)
* [inherits](flexlayout.md#inherits)
* [insertChildBefore](flexlayout.md#insertchildbefore)
* [invalidate](flexlayout.md#invalidate)
* [isEnabled](flexlayout.md#isenabled)
* [killTimer](flexlayout.md#killtimer)
* [objectName](flexlayout.md#objectname)
* [parent](flexlayout.md#parent)
* [property](flexlayout.md#property)
* [removeEventListener](flexlayout.md#removeeventlistener)
* [removeWidget](flexlayout.md#removewidget)
* [setContentsMargins](flexlayout.md#setcontentsmargins)
* [setEnabled](flexlayout.md#setenabled)
* [setEventProcessed](flexlayout.md#seteventprocessed)
* [setFlexNode](flexlayout.md#setflexnode)
* [setObjectName](flexlayout.md#setobjectname)
* [setParent](flexlayout.md#setparent)
* [setProperty](flexlayout.md#setproperty)
* [setSizeConstraint](flexlayout.md#setsizeconstraint)
* [setSpacing](flexlayout.md#setspacing)
* [sizeConstraint](flexlayout.md#sizeconstraint)
* [spacing](flexlayout.md#spacing)
* [startTimer](flexlayout.md#starttimer)
* [update](flexlayout.md#update)

## Constructors

###  constructor

\+ **new FlexLayout**(`parent?`: [QWidget](qwidget.md)): *[FlexLayout](flexlayout.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [QWidget](qwidget.md) |

**Returns:** *[FlexLayout](flexlayout.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: FlexLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof FlexLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | FlexLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  addWidget

▸ **addWidget**(`childWidget`: [QWidget](qwidget.md), `childFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

*Overrides [QLayout](qlayout.md).[addWidget](qlayout.md#abstract-addwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |

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

###  getChildIndex

▸ **getChildIndex**(`childWidget`: [QWidget](qwidget.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |

**Returns:** *number*

___

###  getNextSibling

▸ **getNextSibling**(`childWidget`: [QWidget](qwidget.md)): *[QWidget](qwidget.md) | null*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |

**Returns:** *[QWidget](qwidget.md) | null*

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

###  insertChildBefore

▸ **insertChildBefore**(`childWidget`: [QWidget](qwidget.md), `beforeChildWidget`: [QWidget](qwidget.md), `childFlexNode?`: [FlexNode](../globals.md#flexnode), `beforeChildFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |
`beforeChildWidget` | [QWidget](qwidget.md) |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |
`beforeChildFlexNode?` | [FlexNode](../globals.md#flexnode) |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: FlexLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof FlexLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | FlexLayoutSignals[SignalType] |
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

▸ **removeWidget**(`childWidget`: [QWidget](qwidget.md), `childFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

*Overrides [QLayout](qlayout.md).[removeWidget](qlayout.md#abstract-removewidget)*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [QWidget](qwidget.md) |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |

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

###  setFlexNode

▸ **setFlexNode**(`flexNode`: [FlexNode](../globals.md#flexnode)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`flexNode` | [FlexNode](../globals.md#flexnode) |

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
