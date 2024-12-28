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

### Methods

* [_id](qgraphicsdropshadoweffect.md#_id)
* [addEventListener](qgraphicsdropshadoweffect.md#addeventlistener)
* [blurRadius](qgraphicsdropshadoweffect.md#blurradius)
* [children](qgraphicsdropshadoweffect.md#children)
* [color](qgraphicsdropshadoweffect.md#color)
* [delete](qgraphicsdropshadoweffect.md#delete)
* [deleteLater](qgraphicsdropshadoweffect.md#deletelater)
* [dumpObjectInfo](qgraphicsdropshadoweffect.md#dumpobjectinfo)
* [dumpObjectTree](qgraphicsdropshadoweffect.md#dumpobjecttree)
* [eventProcessed](qgraphicsdropshadoweffect.md#eventprocessed)
* [inherits](qgraphicsdropshadoweffect.md#inherits)
* [isEnabled](qgraphicsdropshadoweffect.md#isenabled)
* [killTimer](qgraphicsdropshadoweffect.md#killtimer)
* [objectName](qgraphicsdropshadoweffect.md#objectname)
* [parent](qgraphicsdropshadoweffect.md#parent)
* [property](qgraphicsdropshadoweffect.md#property)
* [removeEventListener](qgraphicsdropshadoweffect.md#removeeventlistener)
* [setBlurRadius](qgraphicsdropshadoweffect.md#setblurradius)
* [setColor](qgraphicsdropshadoweffect.md#setcolor)
* [setEnabled](qgraphicsdropshadoweffect.md#setenabled)
* [setEventProcessed](qgraphicsdropshadoweffect.md#seteventprocessed)
* [setObjectName](qgraphicsdropshadoweffect.md#setobjectname)
* [setParent](qgraphicsdropshadoweffect.md#setparent)
* [setProperty](qgraphicsdropshadoweffect.md#setproperty)
* [setXOffset](qgraphicsdropshadoweffect.md#setxoffset)
* [setYOffset](qgraphicsdropshadoweffect.md#setyoffset)
* [startTimer](qgraphicsdropshadoweffect.md#starttimer)
* [xOffset](qgraphicsdropshadoweffect.md#xoffset)
* [yOffset](qgraphicsdropshadoweffect.md#yoffset)

## Constructors

###  constructor

\+ **new QGraphicsDropShadowEffect**(`arg?`: [QObject](qobject.md) | [NativeElement](../globals.md#nativeelement)): *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QObject](qobject.md) &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QGraphicsDropShadowEffect](qgraphicsdropshadoweffect.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

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

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGraphicsDropShadowEffectSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsDropShadowEffectSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QGraphicsDropShadowEffectSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  blurRadius

▸ **blurRadius**(): *number*

**Returns:** *number*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  color

▸ **color**(): *[QColor](qcolor.md)*

**Returns:** *[QColor](qcolor.md)*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [QObject](qobject.md).[inherits](qobject.md#inherits)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QGraphicsDropShadowEffectSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QGraphicsDropShadowEffectSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QGraphicsDropShadowEffectSignals[SignalType] |
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

###  xOffset

▸ **xOffset**(): *number*

**Returns:** *number*

___

###  yOffset

▸ **yOffset**(): *number*

**Returns:** *number*
