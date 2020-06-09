---
id: "qgraphicsdropshadoweffect"
title: "QGraphicsDropShadowEffect"
sidebar_label: "QGraphicsDropShadowEffect"
---

> The QGraphicsDropShadowEffect class provides a drop shadow effect.

**This class is a JS wrapper around Qt's [QGraphicsDropShadowEffect class](https://doc.qt.io/qt-5/qgraphicsdropshadoweffect.html)**

A drop shadow effect renders the source with a drop shadow.

### Example

```javascript
const { QGraphicsDropShadowEffect } = require("@nodegui/nodegui");

const shadow = new QGraphicsDropShadowEffect();
shadow.setBlurRadius(8);
```

## Hierarchy

  ↳ [QGraphicsEffect](qgraphicseffect.md)‹[QGraphicsDropShadowEffectSignals](../interfaces/qgraphicsdropshadoweffectsignals.md)›

  ↳ **QGraphicsDropShadowEffect**

## Index

### Constructors

* [constructor](qgraphicsdropshadoweffect.md#constructor)

### Properties

* [native](qgraphicsdropshadoweffect.md#native)
* [nodeChildren](qgraphicsdropshadoweffect.md#nodechildren)
* [nodeParent](qgraphicsdropshadoweffect.md#optional-nodeparent)

### Methods

* [addEventListener](qgraphicsdropshadoweffect.md#addeventlistener)
* [blurRadius](qgraphicsdropshadoweffect.md#blurradius)
* [color](qgraphicsdropshadoweffect.md#color)
* [inherits](qgraphicsdropshadoweffect.md#inherits)
* [isEnabled](qgraphicsdropshadoweffect.md#isenabled)
* [objectName](qgraphicsdropshadoweffect.md#objectname)
* [property](qgraphicsdropshadoweffect.md#property)
* [removeEventListener](qgraphicsdropshadoweffect.md#removeeventlistener)
* [setBlurRadius](qgraphicsdropshadoweffect.md#setblurradius)
* [setColor](qgraphicsdropshadoweffect.md#setcolor)
* [setEnabled](qgraphicsdropshadoweffect.md#setenabled)
* [setNodeParent](qgraphicsdropshadoweffect.md#setnodeparent)
* [setObjectName](qgraphicsdropshadoweffect.md#setobjectname)
* [setProperty](qgraphicsdropshadoweffect.md#setproperty)
* [setXOffset](qgraphicsdropshadoweffect.md#setxoffset)
* [setYOffset](qgraphicsdropshadoweffect.md#setyoffset)
* [xOffset](qgraphicsdropshadoweffect.md#xoffset)
* [yOffset](qgraphicsdropshadoweffect.md#yoffset)

## Constructors

###  constructor

\+ **new QGraphicsDropShadowEffect**(): *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

\+ **new QGraphicsDropShadowEffect**(`native`: [NativeElement](../globals.md#nativeelement)): *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

\+ **new QGraphicsDropShadowEffect**(`parent`: [NodeObject](nodeobject.md)‹any›): *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeObject](nodeobject.md)‹any› |

**Returns:** *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGraphicsDropShadowEffectSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsDropShadowEffectSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QGraphicsDropShadowEffectSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  blurRadius

▸ **blurRadius**(): *number*

**Returns:** *number*

___

###  color

▸ **color**(): *[QColor](qcolor.md)*

**Returns:** *[QColor](qcolor.md)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGraphicsDropShadowEffectSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsDropShadowEffectSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QGraphicsDropShadowEffectSignals[SignalType] |

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

###  setBlurRadius

▸ **setBlurRadius**(`blurRadius`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`blurRadius` | number |

**Returns:** *void*

___

###  setColor

▸ **setColor**(`color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

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

___

###  setXOffset

▸ **setXOffset**(`dx`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`dx` | number |

**Returns:** *void*

___

###  setYOffset

▸ **setYOffset**(`dy`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`dy` | number |

**Returns:** *void*

___

###  xOffset

▸ **xOffset**(): *number*

**Returns:** *number*

___

###  yOffset

▸ **yOffset**(): *number*

**Returns:** *number*
