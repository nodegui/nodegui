---
id: "qclipboard"
title: "QClipboard"
sidebar_label: "QClipboard"
---

> The QClipboard class provides access to the window system clipboard.

**This class is a JS wrapper around Qt's [QClipboard class](https://doc.qt.io/qt-5/QClipboard.html)**

### Example

```javascript
const {
QClipboard,
QClipboardMode,
QApplication
} = require("@nodegui/nodegui");

const clipboard = QApplication.clipboard();
const text = clipboard.text(QClipboardMode.Clipboard);
```

## Hierarchy

  ↳ [QObject](qobject.md)‹[QClipboardSignals](../interfaces/qclipboardsignals.md)›

  ↳ **QClipboard**

## Index

### Constructors

* [constructor](qclipboard.md#constructor)

### Properties

* [native](qclipboard.md#native)

### Methods

* [_id](qclipboard.md#_id)
* [addEventListener](qclipboard.md#addeventlistener)
* [children](qclipboard.md#children)
* [clear](qclipboard.md#clear)
* [delete](qclipboard.md#delete)
* [deleteLater](qclipboard.md#deletelater)
* [dumpObjectInfo](qclipboard.md#dumpobjectinfo)
* [dumpObjectTree](qclipboard.md#dumpobjecttree)
* [eventProcessed](qclipboard.md#eventprocessed)
* [inherits](qclipboard.md#inherits)
* [killTimer](qclipboard.md#killtimer)
* [mimeData](qclipboard.md#mimedata)
* [objectName](qclipboard.md#objectname)
* [parent](qclipboard.md#parent)
* [pixmap](qclipboard.md#pixmap)
* [property](qclipboard.md#property)
* [removeEventListener](qclipboard.md#removeeventlistener)
* [setEventProcessed](qclipboard.md#seteventprocessed)
* [setMimeData](qclipboard.md#setmimedata)
* [setObjectName](qclipboard.md#setobjectname)
* [setParent](qclipboard.md#setparent)
* [setPixmap](qclipboard.md#setpixmap)
* [setProperty](qclipboard.md#setproperty)
* [setText](qclipboard.md#settext)
* [startTimer](qclipboard.md#starttimer)
* [text](qclipboard.md#text)

## Constructors

###  constructor

\+ **new QClipboard**(`native`: [NativeElement](../globals.md#nativeelement)): *[QClipboard](qclipboard.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QClipboard](qclipboard.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QClipboardSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QClipboardSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QClipboardSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  clear

▸ **clear**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

**Returns:** *void*

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

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

*Inherited from [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  mimeData

▸ **mimeData**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *[QMimeData](qmimedata.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

**Returns:** *[QMimeData](qmimedata.md)*

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

###  pixmap

▸ **pixmap**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *[QPixmap](qpixmap.md)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QClipboardSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QClipboardSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QClipboardSignals[SignalType] |
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

###  setMimeData

▸ **setMimeData**(`src`: [QMimeData](qmimedata.md), `mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`src` | [QMimeData](qmimedata.md) | - |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

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

###  setPixmap

▸ **setPixmap**(`pixmap`: [QPixmap](qpixmap.md), `mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) | - |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

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

###  setText

▸ **setText**(`text`: string, `mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`text` | string | - |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

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

###  text

▸ **text**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *string*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) | QClipboardMode.Clipboard |

**Returns:** *string*
