---
id: "qgridlayout"
title: "QGridLayout"
sidebar_label: "QGridLayout"
---

> The QGridLayout class lays out widgets in a grid.

**This class is a JS wrapper around Qt's [QGridLayout](https://doc.qt.io/qt-5/qgridlayout.html)**

### Example

```javascript
const { QGridLayout, QWidget, QLabel } = require("@nodegui/nodegui");

const view = new QWidget();
const layout = new QGridLayout();
view.setLayout(layout);

const label = new QLabel();
label.setText("label1");
const label2 = new QLabel();
label2.setText("label2");

layout.addWidget(label);
layout.addWidget(label2);
```

## Hierarchy

  ↳ [QLayout](qlayout.md)‹[QGridLayoutSignals](../globals.md#qgridlayoutsignals)›

  ↳ **QGridLayout**

## Index

### Constructors

* [constructor](qgridlayout.md#constructor)

### Properties

* [native](qgridlayout.md#native)
* [type](qgridlayout.md#type)

### Methods

* [_id](qgridlayout.md#_id)
* [activate](qgridlayout.md#activate)
* [addEventListener](qgridlayout.md#addeventlistener)
* [addLayout](qgridlayout.md#addlayout)
* [addWidget](qgridlayout.md#addwidget)
* [children](qgridlayout.md#children)
* [columnCount](qgridlayout.md#columncount)
* [columnMinimumWidth](qgridlayout.md#columnminimumwidth)
* [columnStretch](qgridlayout.md#columnstretch)
* [delete](qgridlayout.md#delete)
* [deleteLater](qgridlayout.md#deletelater)
* [dumpObjectInfo](qgridlayout.md#dumpobjectinfo)
* [dumpObjectTree](qgridlayout.md#dumpobjecttree)
* [eventProcessed](qgridlayout.md#eventprocessed)
* [horizontalSpacing](qgridlayout.md#horizontalspacing)
* [inherits](qgridlayout.md#inherits)
* [invalidate](qgridlayout.md#invalidate)
* [isEnabled](qgridlayout.md#isenabled)
* [killTimer](qgridlayout.md#killtimer)
* [objectName](qgridlayout.md#objectname)
* [parent](qgridlayout.md#parent)
* [property](qgridlayout.md#property)
* [removeEventListener](qgridlayout.md#removeeventlistener)
* [removeWidget](qgridlayout.md#removewidget)
* [rowCount](qgridlayout.md#rowcount)
* [rowMinimumHeight](qgridlayout.md#rowminimumheight)
* [rowStretch](qgridlayout.md#rowstretch)
* [setColumnMinimumWidth](qgridlayout.md#setcolumnminimumwidth)
* [setColumnStretch](qgridlayout.md#setcolumnstretch)
* [setContentsMargins](qgridlayout.md#setcontentsmargins)
* [setEnabled](qgridlayout.md#setenabled)
* [setEventProcessed](qgridlayout.md#seteventprocessed)
* [setHorizontalSpacing](qgridlayout.md#sethorizontalspacing)
* [setObjectName](qgridlayout.md#setobjectname)
* [setParent](qgridlayout.md#setparent)
* [setProperty](qgridlayout.md#setproperty)
* [setRowMinimumHeight](qgridlayout.md#setrowminimumheight)
* [setRowStretch](qgridlayout.md#setrowstretch)
* [setSizeConstraint](qgridlayout.md#setsizeconstraint)
* [setSpacing](qgridlayout.md#setspacing)
* [setVerticalSpacing](qgridlayout.md#setverticalspacing)
* [sizeConstraint](qgridlayout.md#sizeconstraint)
* [spacing](qgridlayout.md#spacing)
* [startTimer](qgridlayout.md#starttimer)
* [update](qgridlayout.md#update)
* [verticalSpacing](qgridlayout.md#verticalspacing)

## Constructors

###  constructor

\+ **new QGridLayout**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QGridLayout](qgridlayout.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QGridLayout](qgridlayout.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGridLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QGridLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

▸ **addLayout**(`layout`: [QLayout](qlayout.md), `row`: number, `column`: number, `rowSpan`: number, `columnSpan`: number, `alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`layout` | [QLayout](qlayout.md) | - |
`row` | number | - |
`column` | number | - |
`rowSpan` | number | 1 |
`columnSpan` | number | 1 |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) | 0 |

**Returns:** *void*

___

###  addWidget

▸ **addWidget**(`widget`: [QWidget](qwidget.md), `row`: number, `col`: number, `rowSpan`: number, `colSpan`: number, `alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

*Overrides [QLayout](qlayout.md).[addWidget](qlayout.md#abstract-addwidget)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`widget` | [QWidget](qwidget.md) | - |
`row` | number | 0 |
`col` | number | 0 |
`rowSpan` | number | 1 |
`colSpan` | number | 1 |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) | 0 |

**Returns:** *void*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  columnCount

▸ **columnCount**(): *number*

**Returns:** *number*

___

###  columnMinimumWidth

▸ **columnMinimumWidth**(`column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *number*

___

###  columnStretch

▸ **columnStretch**(`column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

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

###  horizontalSpacing

▸ **horizontalSpacing**(): *number*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGridLayoutSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QGridLayoutSignals[SignalType] |
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

###  rowCount

▸ **rowCount**(): *number*

**Returns:** *number*

___

###  rowMinimumHeight

▸ **rowMinimumHeight**(`row`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *number*

___

###  rowStretch

▸ **rowStretch**(`row`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *number*

___

###  setColumnMinimumWidth

▸ **setColumnMinimumWidth**(`column`: number, `minSize`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`minSize` | number |

**Returns:** *void*

___

###  setColumnStretch

▸ **setColumnStretch**(`column`: number, `stretch`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`stretch` | number |

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

###  setHorizontalSpacing

▸ **setHorizontalSpacing**(`spacing`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`spacing` | number |

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

###  setRowMinimumHeight

▸ **setRowMinimumHeight**(`row`: number, `minSize`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`minSize` | number |

**Returns:** *void*

___

###  setRowStretch

▸ **setRowStretch**(`row`: number, `stretch`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`stretch` | number |

**Returns:** *void*

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

###  setVerticalSpacing

▸ **setVerticalSpacing**(`spacing`: number): *void*

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

___

###  verticalSpacing

▸ **verticalSpacing**(): *number*

**Returns:** *number*
