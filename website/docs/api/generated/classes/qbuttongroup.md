---
id: "qbuttongroup"
title: "QButtonGroup"
sidebar_label: "QButtonGroup"
---

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹any›

  ↳ **QButtonGroup**

## Index

### Constructors

* [constructor](qbuttongroup.md#constructor)

### Properties

* [native](qbuttongroup.md#native)
* [nodeChildren](qbuttongroup.md#nodechildren)
* [nodeParent](qbuttongroup.md#optional-nodeparent)

### Methods

* [addButton](qbuttongroup.md#addbutton)
* [addEventListener](qbuttongroup.md#addeventlistener)
* [button](qbuttongroup.md#button)
* [buttons](qbuttongroup.md#buttons)
* [checkedButton](qbuttongroup.md#checkedbutton)
* [checkedId](qbuttongroup.md#checkedid)
* [exclusive](qbuttongroup.md#exclusive)
* [id](qbuttongroup.md#id)
* [inherits](qbuttongroup.md#inherits)
* [objectName](qbuttongroup.md#objectname)
* [property](qbuttongroup.md#property)
* [removeButton](qbuttongroup.md#removebutton)
* [removeEventListener](qbuttongroup.md#removeeventlistener)
* [setExclusive](qbuttongroup.md#setexclusive)
* [setId](qbuttongroup.md#setid)
* [setNodeParent](qbuttongroup.md#setnodeparent)
* [setObjectName](qbuttongroup.md#setobjectname)
* [setProperty](qbuttongroup.md#setproperty)

## Constructors

###  constructor

\+ **new QButtonGroup**(): *[QButtonGroup](qbuttongroup.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QButtonGroup](qbuttongroup.md)*

\+ **new QButtonGroup**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QButtonGroup](qbuttongroup.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QButtonGroup](qbuttongroup.md)*

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

## Methods

###  addButton

▸ **addButton**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›, `id`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› | - |
`id` | number | -1 |

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: any[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof any*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | any[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  button

▸ **button**(`id`: number): *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

___

###  buttons

▸ **buttons**(): *[QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›[]*

**Returns:** *[QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›[]*

___

###  checkedButton

▸ **checkedButton**(): *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

**Returns:** *[NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›*

___

###  checkedId

▸ **checkedId**(): *number*

**Returns:** *number*

___

###  exclusive

▸ **exclusive**(): *boolean*

**Returns:** *boolean*

___

###  id

▸ **id**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›): *number*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |

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

###  removeButton

▸ **removeButton**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: any[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof any*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | any[SignalType] |

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

###  setExclusive

▸ **setExclusive**(`exculsive`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`exculsive` | boolean |

**Returns:** *void*

___

###  setId

▸ **setId**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›, `id`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› |
`id` | number |

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
