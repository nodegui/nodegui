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

  ↳ [NodeLayout](nodelayout.md)‹[QGridLayoutSignals](../globals.md#qgridlayoutsignals)›

  ↳ **QGridLayout**

## Index

### Constructors

* [constructor](qgridlayout.md#constructor)

### Properties

* [native](qgridlayout.md#native)
* [nodeChildren](qgridlayout.md#nodechildren)
* [nodeParent](qgridlayout.md#optional-nodeparent)
* [type](qgridlayout.md#type)

### Methods

* [activate](qgridlayout.md#activate)
* [addEventListener](qgridlayout.md#addeventlistener)
* [addWidget](qgridlayout.md#addwidget)
* [inherits](qgridlayout.md#inherits)
* [invalidate](qgridlayout.md#invalidate)
* [objectName](qgridlayout.md#objectname)
* [property](qgridlayout.md#property)
* [removeEventListener](qgridlayout.md#removeeventlistener)
* [removeWidget](qgridlayout.md#removewidget)
* [setNodeParent](qgridlayout.md#setnodeparent)
* [setObjectName](qgridlayout.md#setobjectname)
* [setProperty](qgridlayout.md#setproperty)
* [update](qgridlayout.md#update)

## Constructors

###  constructor

\+ **new QGridLayout**(): *[QGridLayout](qgridlayout.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QGridLayout](qgridlayout.md)*

\+ **new QGridLayout**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QGridLayout](qgridlayout.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QGridLayout](qgridlayout.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

___

###  type

• **type**: *string* = "layout"

*Inherited from [NodeLayout](nodelayout.md).[type](nodelayout.md#type)*

## Methods

###  activate

▸ **activate**(): *boolean*

*Inherited from [NodeLayout](nodelayout.md).[activate](nodelayout.md#activate)*

**Returns:** *boolean*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  addWidget

▸ **addWidget**(`widget`: [NodeWidget](nodewidget.md)‹any›, `row`: number, `col`: number, `rowSpan`: number, `colSpan`: number): *void*

*Overrides [NodeLayout](nodelayout.md).[addWidget](nodelayout.md#abstract-addwidget)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`widget` | [NodeWidget](nodewidget.md)‹any› | - |
`row` | number | 0 |
`col` | number | 0 |
`rowSpan` | number | 1 |
`colSpan` | number | 1 |

**Returns:** *void*

___

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  invalidate

▸ **invalidate**(): *void*

*Inherited from [NodeLayout](nodelayout.md).[invalidate](nodelayout.md#invalidate)*

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

**Returns:** *string*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [NodeObject](nodeobject.md).[property](nodeobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  removeWidget

▸ **removeWidget**(`widget`: [NodeWidget](nodewidget.md)‹any›): *void*

*Overrides [NodeLayout](nodelayout.md).[removeWidget](nodelayout.md#abstract-removewidget)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *void*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [NodeObject](nodeobject.md).[setObjectName](nodeobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [NodeObject](nodeobject.md).[setProperty](nodeobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  update

▸ **update**(): *void*

*Inherited from [NodeLayout](nodelayout.md).[update](nodelayout.md#update)*

**Returns:** *void*
