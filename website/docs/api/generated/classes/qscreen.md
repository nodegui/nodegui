---
id: "qscreen"
title: "QScreen"
sidebar_label: "QScreen"
---

## Hierarchy

  ↳ [QObject](qobject.md)‹[QScreenSignals](../interfaces/qscreensignals.md)›

  ↳ **QScreen**

## Index

### Constructors

* [constructor](qscreen.md#constructor)

### Properties

* [native](qscreen.md#native)

### Methods

* [_id](qscreen.md#_id)
* [addEventListener](qscreen.md#addeventlistener)
* [availableGeometry](qscreen.md#availablegeometry)
* [availableSize](qscreen.md#availablesize)
* [availableVirtualGeometry](qscreen.md#availablevirtualgeometry)
* [availableVirtualSize](qscreen.md#availablevirtualsize)
* [children](qscreen.md#children)
* [delete](qscreen.md#delete)
* [deleteLater](qscreen.md#deletelater)
* [depth](qscreen.md#depth)
* [devicePixelRatio](qscreen.md#devicepixelratio)
* [dumpObjectInfo](qscreen.md#dumpobjectinfo)
* [dumpObjectTree](qscreen.md#dumpobjecttree)
* [eventProcessed](qscreen.md#eventprocessed)
* [geometry](qscreen.md#geometry)
* [grabWindow](qscreen.md#grabwindow)
* [inherits](qscreen.md#inherits)
* [killTimer](qscreen.md#killtimer)
* [logicalDotsPerInch](qscreen.md#logicaldotsperinch)
* [logicalDotsPerInchX](qscreen.md#logicaldotsperinchx)
* [logicalDotsPerInchY](qscreen.md#logicaldotsperinchy)
* [manufacturer](qscreen.md#manufacturer)
* [model](qscreen.md#model)
* [name](qscreen.md#name)
* [nativeOrientation](qscreen.md#nativeorientation)
* [objectName](qscreen.md#objectname)
* [orientation](qscreen.md#orientation)
* [parent](qscreen.md#parent)
* [physicalDotsPerInch](qscreen.md#physicaldotsperinch)
* [physicalDotsPerInchX](qscreen.md#physicaldotsperinchx)
* [physicalDotsPerInchY](qscreen.md#physicaldotsperinchy)
* [physicalSize](qscreen.md#physicalsize)
* [primaryOrientation](qscreen.md#primaryorientation)
* [property](qscreen.md#property)
* [refreshRate](qscreen.md#refreshrate)
* [removeEventListener](qscreen.md#removeeventlistener)
* [serialNumber](qscreen.md#serialnumber)
* [setEventProcessed](qscreen.md#seteventprocessed)
* [setObjectName](qscreen.md#setobjectname)
* [setParent](qscreen.md#setparent)
* [setProperty](qscreen.md#setproperty)
* [size](qscreen.md#size)
* [startTimer](qscreen.md#starttimer)
* [virtualGeometry](qscreen.md#virtualgeometry)
* [virtualSize](qscreen.md#virtualsize)

## Constructors

###  constructor

\+ **new QScreen**(`native`: [NativeElement](../globals.md#nativeelement)): *[QScreen](qscreen.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QScreen](qscreen.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QScreenSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QScreenSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QScreenSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  availableGeometry

▸ **availableGeometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  availableSize

▸ **availableSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  availableVirtualGeometry

▸ **availableVirtualGeometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  availableVirtualSize

▸ **availableVirtualSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

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

###  depth

▸ **depth**(): *number*

**Returns:** *number*

___

###  devicePixelRatio

▸ **devicePixelRatio**(): *number*

**Returns:** *number*

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

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  grabWindow

▸ **grabWindow**(`window`: number, `x`: number, `y`: number, `width`: number, `height`: number): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`window` | number | - |
`x` | number | 0 |
`y` | number | 0 |
`width` | number | -1 |
`height` | number | -1 |

**Returns:** *[QPixmap](qpixmap.md)*

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

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

*Inherited from [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  logicalDotsPerInch

▸ **logicalDotsPerInch**(): *number*

**Returns:** *number*

___

###  logicalDotsPerInchX

▸ **logicalDotsPerInchX**(): *number*

**Returns:** *number*

___

###  logicalDotsPerInchY

▸ **logicalDotsPerInchY**(): *number*

**Returns:** *number*

___

###  manufacturer

▸ **manufacturer**(): *string*

**Returns:** *string*

___

###  model

▸ **model**(): *string*

**Returns:** *string*

___

###  name

▸ **name**(): *string*

**Returns:** *string*

___

###  nativeOrientation

▸ **nativeOrientation**(): *[ScreenOrientation](../enums/screenorientation.md)*

**Returns:** *[ScreenOrientation](../enums/screenorientation.md)*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  orientation

▸ **orientation**(): *[ScreenOrientation](../enums/screenorientation.md)*

**Returns:** *[ScreenOrientation](../enums/screenorientation.md)*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  physicalDotsPerInch

▸ **physicalDotsPerInch**(): *number*

**Returns:** *number*

___

###  physicalDotsPerInchX

▸ **physicalDotsPerInchX**(): *number*

**Returns:** *number*

___

###  physicalDotsPerInchY

▸ **physicalDotsPerInchY**(): *number*

**Returns:** *number*

___

###  physicalSize

▸ **physicalSize**(): *[QSizeF](qsizef.md)*

**Returns:** *[QSizeF](qsizef.md)*

___

###  primaryOrientation

▸ **primaryOrientation**(): *[ScreenOrientation](../enums/screenorientation.md)*

**Returns:** *[ScreenOrientation](../enums/screenorientation.md)*

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

###  refreshRate

▸ **refreshRate**(): *number*

**Returns:** *number*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QScreenSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QScreenSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QScreenSignals[SignalType] |
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

###  serialNumber

▸ **serialNumber**(): *string*

**Returns:** *string*

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

###  size

▸ **size**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

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

###  virtualGeometry

▸ **virtualGeometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  virtualSize

▸ **virtualSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*
