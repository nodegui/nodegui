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
* [columnCount](qgridlayout.md#columncount)
* [columnMinimumWidth](qgridlayout.md#columnminimumwidth)
* [columnStretch](qgridlayout.md#columnstretch)
* [horizontalSpacing](qgridlayout.md#horizontalspacing)
* [inherits](qgridlayout.md#inherits)
* [invalidate](qgridlayout.md#invalidate)
* [isEnabled](qgridlayout.md#isenabled)
* [objectName](qgridlayout.md#objectname)
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
* [setHorizontalSpacing](qgridlayout.md#sethorizontalspacing)
* [setNodeParent](qgridlayout.md#setnodeparent)
* [setObjectName](qgridlayout.md#setobjectname)
* [setProperty](qgridlayout.md#setproperty)
* [setRowMinimumHeight](qgridlayout.md#setrowminimumheight)
* [setRowStretch](qgridlayout.md#setrowstretch)
* [setSizeConstraint](qgridlayout.md#setsizeconstraint)
* [setSpacing](qgridlayout.md#setspacing)
* [setVerticalSpacing](qgridlayout.md#setverticalspacing)
* [sizeConstraint](qgridlayout.md#sizeconstraint)
* [spacing](qgridlayout.md#spacing)
* [update](qgridlayout.md#update)
* [verticalSpacing](qgridlayout.md#verticalspacing)

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGridLayoutSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QGridLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

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

###  horizontalSpacing

▸ **horizontalSpacing**(): *number*

**Returns:** *number*

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

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [NodeLayout](nodelayout.md).[isEnabled](nodelayout.md#isenabled)*

**Returns:** *boolean*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGridLayoutSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGridLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QGridLayoutSignals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

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

*Inherited from [NodeLayout](nodelayout.md).[setContentsMargins](nodelayout.md#setcontentsmargins)*

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

*Inherited from [NodeLayout](nodelayout.md).[setEnabled](nodelayout.md#setenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

*Inherited from [NodeLayout](nodelayout.md).[setSizeConstraint](nodelayout.md#setsizeconstraint)*

**Parameters:**

Name | Type |
------ | ------ |
`constraint` | [SizeConstraint](../enums/sizeconstraint.md) |

**Returns:** *void*

___

###  setSpacing

▸ **setSpacing**(`spacing`: number): *void*

*Inherited from [NodeLayout](nodelayout.md).[setSpacing](nodelayout.md#setspacing)*

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

*Inherited from [NodeLayout](nodelayout.md).[sizeConstraint](nodelayout.md#sizeconstraint)*

**Returns:** *[SizeConstraint](../enums/sizeconstraint.md)*

___

###  spacing

▸ **spacing**(): *number*

*Inherited from [NodeLayout](nodelayout.md).[spacing](nodelayout.md#spacing)*

**Returns:** *number*

___

###  update

▸ **update**(): *void*

*Inherited from [NodeLayout](nodelayout.md).[update](nodelayout.md#update)*

**Returns:** *void*

___

###  verticalSpacing

▸ **verticalSpacing**(): *number*

**Returns:** *number*
