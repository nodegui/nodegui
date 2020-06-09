---
id: "qmovie"
title: "QMovie"
sidebar_label: "QMovie"
---

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹[QMovieSignals](../interfaces/qmoviesignals.md)›

  ↳ **QMovie**

## Index

### Constructors

* [constructor](qmovie.md#constructor)

### Properties

* [native](qmovie.md#native)
* [nodeChildren](qmovie.md#nodechildren)
* [nodeParent](qmovie.md#optional-nodeparent)

### Methods

* [addEventListener](qmovie.md#addeventlistener)
* [currentFrameNumber](qmovie.md#currentframenumber)
* [currentPixmap](qmovie.md#currentpixmap)
* [fileName](qmovie.md#filename)
* [format](qmovie.md#format)
* [frameCount](qmovie.md#framecount)
* [inherits](qmovie.md#inherits)
* [jumpToFrame](qmovie.md#jumptoframe)
* [jumpToNextFrame](qmovie.md#jumptonextframe)
* [loadFromData](qmovie.md#loadfromdata)
* [objectName](qmovie.md#objectname)
* [property](qmovie.md#property)
* [removeEventListener](qmovie.md#removeeventlistener)
* [setCacheMode](qmovie.md#setcachemode)
* [setFileName](qmovie.md#setfilename)
* [setFormat](qmovie.md#setformat)
* [setNodeParent](qmovie.md#setnodeparent)
* [setObjectName](qmovie.md#setobjectname)
* [setPaused](qmovie.md#setpaused)
* [setProperty](qmovie.md#setproperty)
* [setScaledSize](qmovie.md#setscaledsize)
* [setSpeed](qmovie.md#setspeed)
* [start](qmovie.md#start)
* [state](qmovie.md#state)
* [stop](qmovie.md#stop)

## Constructors

###  constructor

\+ **new QMovie**(): *[QMovie](qmovie.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QMovie](qmovie.md)*

\+ **new QMovie**(`native`: [NativeElement](../globals.md#nativeelement)): *[QMovie](qmovie.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QMovie](qmovie.md)*

\+ **new QMovie**(`parent`: [NodeObject](nodeobject.md)‹any›): *[QMovie](qmovie.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeObject](nodeobject.md)‹any› |

**Returns:** *[QMovie](qmovie.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QMovieSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QMovieSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QMovieSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  currentFrameNumber

▸ **currentFrameNumber**(): *number*

**Returns:** *number*

___

###  currentPixmap

▸ **currentPixmap**(): *[QPixmap](qpixmap.md)*

**Returns:** *[QPixmap](qpixmap.md)*

___

###  fileName

▸ **fileName**(): *string*

**Returns:** *string*

___

###  format

▸ **format**(): *string*

**Returns:** *string*

___

###  frameCount

▸ **frameCount**(): *number*

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

###  jumpToFrame

▸ **jumpToFrame**(`frame`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`frame` | number |

**Returns:** *boolean*

___

###  jumpToNextFrame

▸ **jumpToNextFrame**(): *boolean*

**Returns:** *boolean*

___

###  loadFromData

▸ **loadFromData**(`buffer`: Buffer): *void*

**Parameters:**

Name | Type |
------ | ------ |
`buffer` | Buffer |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QMovieSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QMovieSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QMovieSignals[SignalType] |

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

###  setCacheMode

▸ **setCacheMode**(`cacheMode`: [CacheMode](../enums/cachemode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`cacheMode` | [CacheMode](../enums/cachemode.md) |

**Returns:** *void*

___

###  setFileName

▸ **setFileName**(`fileName`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`fileName` | string |

**Returns:** *void*

___

###  setFormat

▸ **setFormat**(`formatName`: [SupportedFormats](../globals.md#supportedformats)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`formatName` | [SupportedFormats](../globals.md#supportedformats) |

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

###  setPaused

▸ **setPaused**(`paused`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`paused` | boolean |

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

###  setScaledSize

▸ **setScaledSize**(`size`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setSpeed

▸ **setSpeed**(`percentSpeed`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`percentSpeed` | number |

**Returns:** *void*

___

###  start

▸ **start**(): *void*

**Returns:** *void*

___

###  state

▸ **state**(): *[MovieState](../enums/moviestate.md)*

**Returns:** *[MovieState](../enums/moviestate.md)*

___

###  stop

▸ **stop**(): *void*

**Returns:** *void*
