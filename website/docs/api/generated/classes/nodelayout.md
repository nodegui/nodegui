---
id: "nodelayout"
title: "NodeLayout"
sidebar_label: "NodeLayout"
---

> Abstract class to add functionalities common to all Layout.

*This class implements all methods, properties of Qt's [QLayout class](https://doc.qt.io/qt-5/qlayout.html) so that it can be inherited by all layouts**

`NodeLayout` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all layout's easily. Additionally it helps in typechecking process.

### Example

```javascript
const {
NodeLayout,
NodeWidget,
FlexLayout,
GridLayout,
QPushButton,
QWidget
} = require("@nodegui/nodegui");

// addChildToLayout can accept any layout since it expects NodeLayout
const addChildToLayout = (layout: NodeLayout, widget: NodeWidget) => {
layout.addWidget(widget);
};

addChildToLayout(new FlexLayout(), new QPushButton());
addChildToLayout(new GridLayout(), new QWidget());
```

## Type parameters

▪ **Signals**: *[QLayoutSignals](../globals.md#qlayoutsignals)*

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹Signals›

  ↳ **NodeLayout**

  ↳ [FlexLayout](flexlayout.md)

  ↳ [QBoxLayout](qboxlayout.md)

  ↳ [QGridLayout](qgridlayout.md)

## Index

### Constructors

* [constructor](nodelayout.md#constructor)

### Properties

* [native](nodelayout.md#abstract-native)
* [nodeChildren](nodelayout.md#nodechildren)
* [nodeParent](nodelayout.md#optional-nodeparent)
* [type](nodelayout.md#type)

### Methods

* [activate](nodelayout.md#activate)
* [addEventListener](nodelayout.md#addeventlistener)
* [addWidget](nodelayout.md#abstract-addwidget)
* [inherits](nodelayout.md#inherits)
* [invalidate](nodelayout.md#invalidate)
* [isEnabled](nodelayout.md#isenabled)
* [objectName](nodelayout.md#objectname)
* [property](nodelayout.md#property)
* [removeEventListener](nodelayout.md#removeeventlistener)
* [removeWidget](nodelayout.md#abstract-removewidget)
* [setContentsMargins](nodelayout.md#setcontentsmargins)
* [setEnabled](nodelayout.md#setenabled)
* [setNodeParent](nodelayout.md#setnodeparent)
* [setObjectName](nodelayout.md#setobjectname)
* [setProperty](nodelayout.md#setproperty)
* [setSizeConstraint](nodelayout.md#setsizeconstraint)
* [setSpacing](nodelayout.md#setspacing)
* [sizeConstraint](nodelayout.md#sizeconstraint)
* [spacing](nodelayout.md#spacing)
* [update](nodelayout.md#update)

## Constructors

###  constructor

\+ **new NodeLayout**(`native`: [NativeElement](../globals.md#nativeelement)): *[NodeLayout](nodelayout.md)*

*Inherited from [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[NodeLayout](nodelayout.md)*

## Properties

### `Abstract` native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [Component](component.md).[native](component.md#abstract-native)*

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

## Methods

###  activate

▸ **activate**(): *boolean*

**Returns:** *boolean*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

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

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

### `Abstract` addWidget

▸ **addWidget**(`childWidget`: [NodeWidget](nodewidget.md)‹any›, ...`args`: any[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [NodeWidget](nodewidget.md)‹any› |
`...args` | any[] |

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

**Returns:** *void*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

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

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

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

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

### `Abstract` removeWidget

▸ **removeWidget**(`childWidget`: [NodeWidget](nodewidget.md)‹any›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [NodeWidget](nodewidget.md)‹any› |

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

###  update

▸ **update**(): *void*

**Returns:** *void*
