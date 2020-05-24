---
id: "qgraphicsblureffect"
title: "QGraphicsBlurEffect"
sidebar_label: "QGraphicsBlurEffect"
---

> The QGraphicsBlurEffect class provides a blur effect.

**This class is a JS wrapper around Qt's [QGraphicsBlurEffect class](https://doc.qt.io/qt-5/qgraphicsblureffect.html)**

A blur effect blurs the source. This effect is useful for reducing details, such as when the source loses focus and you want to draw attention to other elements.

### Example

```javascript
const { QGraphicsBlurEffect } = require("@nodegui/nodegui");

const blur = new QGraphicsBlurEffect();
blur.setBlurRadius(8);
```

## Hierarchy

  ↳ [QGraphicsEffect](qgraphicseffect.md)‹[QGraphicsBlurEffectSignals](../interfaces/qgraphicsblureffectsignals.md)›

  ↳ **QGraphicsBlurEffect**

## Index

### Constructors

* [constructor](qgraphicsblureffect.md#constructor)

### Properties

* [native](qgraphicsblureffect.md#native)
* [nodeChildren](qgraphicsblureffect.md#nodechildren)
* [nodeParent](qgraphicsblureffect.md#optional-nodeparent)

### Methods

* [addEventListener](qgraphicsblureffect.md#addeventlistener)
* [blurHints](qgraphicsblureffect.md#blurhints)
* [blurRadius](qgraphicsblureffect.md#blurradius)
* [inherits](qgraphicsblureffect.md#inherits)
* [isEnabled](qgraphicsblureffect.md#isenabled)
* [objectName](qgraphicsblureffect.md#objectname)
* [property](qgraphicsblureffect.md#property)
* [removeEventListener](qgraphicsblureffect.md#removeeventlistener)
* [setBlurHints](qgraphicsblureffect.md#setblurhints)
* [setBlurRadius](qgraphicsblureffect.md#setblurradius)
* [setEnabled](qgraphicsblureffect.md#setenabled)
* [setNodeParent](qgraphicsblureffect.md#setnodeparent)
* [setObjectName](qgraphicsblureffect.md#setobjectname)
* [setProperty](qgraphicsblureffect.md#setproperty)

## Constructors

###  constructor

\+ **new QGraphicsBlurEffect**(): *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

\+ **new QGraphicsBlurEffect**(`native`: [NativeElement](../globals.md#nativeelement)): *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

\+ **new QGraphicsBlurEffect**(`parent`: [NodeObject](nodeobject.md)‹any›): *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeObject](nodeobject.md)‹any› |

**Returns:** *[QGraphicsBlurEffect](qgraphicsblureffect.md)*

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

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QGraphicsBlurEffectSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsBlurEffectSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QGraphicsBlurEffectSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  blurHints

▸ **blurHints**(): *[BlurHint](../enums/blurhint.md)*

**Returns:** *[BlurHint](../enums/blurhint.md)*

___

###  blurRadius

▸ **blurRadius**(): *number*

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

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QGraphicsEffect](qgraphicseffect.md).[isEnabled](qgraphicseffect.md#isenabled)*

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

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QGraphicsBlurEffectSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsBlurEffectSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QGraphicsBlurEffectSignals[SignalType] |

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

###  setBlurHints

▸ **setBlurHints**(`hints`: [BlurHint](../enums/blurhint.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hints` | [BlurHint](../enums/blurhint.md) |

**Returns:** *void*

___

###  setBlurRadius

▸ **setBlurRadius**(`blurRadius`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`blurRadius` | number |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enable`: boolean): *void*

*Inherited from [QGraphicsEffect](qgraphicseffect.md).[setEnabled](qgraphicseffect.md#setenabled)*

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
