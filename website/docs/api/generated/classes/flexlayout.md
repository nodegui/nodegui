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

  ↳ [NodeLayout](nodelayout.md)‹[FlexLayoutSignals](../globals.md#flexlayoutsignals)›

  ↳ **FlexLayout**

## Index

### Constructors

* [constructor](flexlayout.md#constructor)

### Properties

* [native](flexlayout.md#native)
* [nodeChildren](flexlayout.md#nodechildren)
* [nodeParent](flexlayout.md#optional-nodeparent)
* [type](flexlayout.md#type)

### Methods

* [activate](flexlayout.md#activate)
* [addEventListener](flexlayout.md#addeventlistener)
* [addWidget](flexlayout.md#addwidget)
* [inherits](flexlayout.md#inherits)
* [insertChildBefore](flexlayout.md#insertchildbefore)
* [invalidate](flexlayout.md#invalidate)
* [objectName](flexlayout.md#objectname)
* [property](flexlayout.md#property)
* [removeEventListener](flexlayout.md#removeeventlistener)
* [removeWidget](flexlayout.md#removewidget)
* [setFlexNode](flexlayout.md#setflexnode)
* [setNodeParent](flexlayout.md#setnodeparent)
* [setObjectName](flexlayout.md#setobjectname)
* [setProperty](flexlayout.md#setproperty)
* [update](flexlayout.md#update)

## Constructors

###  constructor

\+ **new FlexLayout**(): *[FlexLayout](flexlayout.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[FlexLayout](flexlayout.md)*

\+ **new FlexLayout**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[FlexLayout](flexlayout.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[FlexLayout](flexlayout.md)*

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

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: FlexLayoutSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof FlexLayoutSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | FlexLayoutSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

▸ **addWidget**(`childWidget`: [NodeWidget](nodewidget.md)‹any›, `childFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

*Overrides [NodeLayout](nodelayout.md).[addWidget](nodelayout.md#abstract-addwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [NodeWidget](nodewidget.md)‹any› |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |

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

###  insertChildBefore

▸ **insertChildBefore**(`childWidget`: [NodeWidget](nodewidget.md)‹any›, `beforeChildWidget`: [NodeWidget](nodewidget.md)‹any›, `childFlexNode?`: [FlexNode](../globals.md#flexnode), `beforeChildFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [NodeWidget](nodewidget.md)‹any› |
`beforeChildWidget` | [NodeWidget](nodewidget.md)‹any› |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |
`beforeChildFlexNode?` | [FlexNode](../globals.md#flexnode) |

**Returns:** *void*

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

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: FlexLayoutSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof FlexLayoutSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | FlexLayoutSignals[SignalType] |

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

▸ **removeWidget**(`childWidget`: [NodeWidget](nodewidget.md)‹any›, `childFlexNode?`: [FlexNode](../globals.md#flexnode)): *void*

*Overrides [NodeLayout](nodelayout.md).[removeWidget](nodelayout.md#abstract-removewidget)*

**Parameters:**

Name | Type |
------ | ------ |
`childWidget` | [NodeWidget](nodewidget.md)‹any› |
`childFlexNode?` | [FlexNode](../globals.md#flexnode) |

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
