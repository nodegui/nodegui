---
id: "qstackedlayout"
title: "QStackedLayout"
sidebar_label: "QStackedLayout"
---

> The QStackedLayout class provides a stack of widgets where only one widget is visible at a time

**This class is a JS wrapper around Qt's [QStackedLayout](https://doc.qt.io/qt-5/qstackedlayout.html)**

### Example

```javascript
const { QStackedLayout, QWidget, QLabel, QBoxLayout, QCombobox } = require("@nodegui/nodegui");

const centralWidget = new QWidget();
centralWidget.setObjectName('myroot');
const rootLayout = new QBoxLayout(Direction.TopToBottom);
centralWidget.setLayout(rootLayout);

const stackedLayout = new QStackedLayout()

const page1 = new QWidget();
const page1_layout = new FlexLayout();
page1.setLayout(page1_layout)
const label1 = new QLabel();
label1.setText("This is page 1")
page1_layout.addWidget(label1);

const page2 = new QWidget();
const page2_layout = new FlexLayout();
page2.setLayout(page2_layout)
const label2 = new QLabel();
label2.setText("This is page 2")
page2_layout.addWidget(label2);

const page3 = new QWidget();
const page3_layout = new FlexLayout();
page3.setLayout(page3_layout)
const label3 = new QLabel();
label3.setText("This is page 3")
page3_layout.addWidget(label3);

stackedLayout.addWidget(page1)
stackedLayout.addWidget(page2)
stackedLayout.addWidget(page3)

const combobox = new QComboBox()
combobox.addItems(["Page 1", "Page 2", "Page 3"])

combobox.addEventListener("currentIndexChanged", (index) => stackedLayout.setCurrentIndex(index));

rootLayout.addWidget(combobox);

const currentIndexLabel = new QLabel()
currentIndexLabel.setText(`Current Index: ${stackedLayout.currentIndex()}`)

stackedLayout.addEventListener("currentChanged", (index) => {
currentIndexLabel.setText(`Current Index: ${index}`)
});

rootLayout.addWidget(currentIndexLabel);

rootLayout.addLayout(stackedLayout);

## Hierarchy

  ↳ [QLayout](qlayout.md)‹[QStackedLayoutSignals](../interfaces/qstackedlayoutsignals.md)›

  ↳ **QStackedLayout**

## Index

### Constructors

* [constructor](qstackedlayout.md#constructor)

### Properties

* [native](qstackedlayout.md#native)
* [type](qstackedlayout.md#type)

### Methods

* [_id](qstackedlayout.md#_id)
* [activate](qstackedlayout.md#activate)
* [addEventListener](qstackedlayout.md#addeventlistener)
* [addWidget](qstackedlayout.md#addwidget)
* [children](qstackedlayout.md#children)
* [count](qstackedlayout.md#count)
* [currentIndex](qstackedlayout.md#currentindex)
* [currentWidget](qstackedlayout.md#currentwidget)
* [delete](qstackedlayout.md#delete)
* [deleteLater](qstackedlayout.md#deletelater)
* [dumpObjectInfo](qstackedlayout.md#dumpobjectinfo)
* [dumpObjectTree](qstackedlayout.md#dumpobjecttree)
* [eventProcessed](qstackedlayout.md#eventprocessed)
* [indexOf](qstackedlayout.md#indexof)
* [inherits](qstackedlayout.md#inherits)
* [insertWidget](qstackedlayout.md#insertwidget)
* [invalidate](qstackedlayout.md#invalidate)
* [isEnabled](qstackedlayout.md#isenabled)
* [killTimer](qstackedlayout.md#killtimer)
* [objectName](qstackedlayout.md#objectname)
* [parent](qstackedlayout.md#parent)
* [property](qstackedlayout.md#property)
* [removeEventListener](qstackedlayout.md#removeeventlistener)
* [removeWidget](qstackedlayout.md#removewidget)
* [setContentsMargins](qstackedlayout.md#setcontentsmargins)
* [setCurrentIndex](qstackedlayout.md#setcurrentindex)
* [setCurrentWidget](qstackedlayout.md#setcurrentwidget)
* [setEnabled](qstackedlayout.md#setenabled)
* [setEventProcessed](qstackedlayout.md#seteventprocessed)
* [setObjectName](qstackedlayout.md#setobjectname)
* [setParent](qstackedlayout.md#setparent)
* [setProperty](qstackedlayout.md#setproperty)
* [setSizeConstraint](qstackedlayout.md#setsizeconstraint)
* [setSpacing](qstackedlayout.md#setspacing)
* [setStackingMode](qstackedlayout.md#setstackingmode)
* [sizeConstraint](qstackedlayout.md#sizeconstraint)
* [spacing](qstackedlayout.md#spacing)
* [stackingMode](qstackedlayout.md#stackingmode)
* [startTimer](qstackedlayout.md#starttimer)
* [update](qstackedlayout.md#update)
* [widget](qstackedlayout.md#widget)

## Constructors

###  constructor

\+ **new QStackedLayout**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QStackedLayout](qstackedlayout.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QStackedLayout](qstackedlayout.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QStackedLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QStackedLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QStackedLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

▸ **addWidget**(`widget`: [QWidget](qwidget.md)): *void*

*Overrides [QLayout](qlayout.md).[addWidget](qlayout.md#abstract-addwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

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

###  currentIndex

▸ **currentIndex**(): *number*

**Returns:** *number*

___

###  currentWidget

▸ **currentWidget**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

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

###  indexOf

▸ **indexOf**(`widget`: [QWidget](qwidget.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

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

###  insertWidget

▸ **insertWidget**(`index`: number, `widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`widget` | [QWidget](qwidget.md) |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QStackedLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QStackedLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QStackedLayoutSignals[SignalType] |
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

###  setCurrentIndex

▸ **setCurrentIndex**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *void*

___

###  setCurrentWidget

▸ **setCurrentWidget**(`widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

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

###  setStackingMode

▸ **setStackingMode**(`stackingMode`: [StackingMode](../enums/stackingmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`stackingMode` | [StackingMode](../enums/stackingmode.md) |

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

###  stackingMode

▸ **stackingMode**(): *[StackingMode](../enums/stackingmode.md)*

**Returns:** *[StackingMode](../enums/stackingmode.md)*

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

___

###  widget

▸ **widget**(`index`: number): *[QWidget](qwidget.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QWidget](qwidget.md)*
