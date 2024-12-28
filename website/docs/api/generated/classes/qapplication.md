---
id: "qapplication"
title: "QApplication"
sidebar_label: "QApplication"
---

> QApplication is the root object for the entire application. It manages app level settings.

**This class is a JS wrapper around Qt's [QApplication class](https://doc.qt.io/qt-5/qapplication.html)**

The QApplication class manages the GUI application's control flow and main settings. In NodeGui you will never create an instance of it manually. NodeGui's internal runtime `Qode` does it for you on app start. You can access the initialised QApplication though if needed.

### Example

```js
const { QApplication } = require("@nodegui/nodegui");

const qApp = QApplication.instance();
qApp.quit();
```

## Hierarchy

  ↳ [QObject](qobject.md)‹[QApplicationSignals](../interfaces/qapplicationsignals.md)›

  ↳ **QApplication**

## Index

### Constructors

* [constructor](qapplication.md#constructor)

### Properties

* [native](qapplication.md#native)

### Methods

* [_id](qapplication.md#_id)
* [addEventListener](qapplication.md#addeventlistener)
* [children](qapplication.md#children)
* [delete](qapplication.md#delete)
* [deleteLater](qapplication.md#deletelater)
* [devicePixelRatio](qapplication.md#devicepixelratio)
* [dumpObjectInfo](qapplication.md#dumpobjectinfo)
* [dumpObjectTree](qapplication.md#dumpobjecttree)
* [eventProcessed](qapplication.md#eventprocessed)
* [exec](qapplication.md#exec)
* [exit](qapplication.md#exit)
* [inherits](qapplication.md#inherits)
* [killTimer](qapplication.md#killtimer)
* [objectName](qapplication.md#objectname)
* [palette](qapplication.md#palette)
* [parent](qapplication.md#parent)
* [processEvents](qapplication.md#processevents)
* [property](qapplication.md#property)
* [quit](qapplication.md#quit)
* [quitOnLastWindowClosed](qapplication.md#quitonlastwindowclosed)
* [removeEventListener](qapplication.md#removeeventlistener)
* [setEventProcessed](qapplication.md#seteventprocessed)
* [setObjectName](qapplication.md#setobjectname)
* [setParent](qapplication.md#setparent)
* [setProperty](qapplication.md#setproperty)
* [setQuitOnLastWindowClosed](qapplication.md#setquitonlastwindowclosed)
* [setStyleSheet](qapplication.md#setstylesheet)
* [startTimer](qapplication.md#starttimer)
* [applicationDisplayName](qapplication.md#static-applicationdisplayname)
* [clipboard](qapplication.md#static-clipboard)
* [desktopFileName](qapplication.md#static-desktopfilename)
* [desktopSettingsAware](qapplication.md#static-desktopsettingsaware)
* [instance](qapplication.md#static-instance)
* [platformName](qapplication.md#static-platformname)
* [primaryScreen](qapplication.md#static-primaryscreen)
* [screens](qapplication.md#static-screens)
* [setApplicationDisplayName](qapplication.md#static-setapplicationdisplayname)
* [setDesktopFileName](qapplication.md#static-setdesktopfilename)
* [setDesktopSettingsAware](qapplication.md#static-setdesktopsettingsaware)
* [setStyle](qapplication.md#static-setstyle)
* [setWindowIcon](qapplication.md#static-setwindowicon)
* [style](qapplication.md#static-style)
* [windowIcon](qapplication.md#static-windowicon)

## Constructors

###  constructor

\+ **new QApplication**(`arg?`: [QObject](qobject.md) | [NativeElement](../globals.md#nativeelement)): *[QApplication](qapplication.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QObject](qobject.md) &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QApplication](qapplication.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QApplicationSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QApplicationSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QApplicationSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  exec

▸ **exec**(): *number*

**Returns:** *number*

___

###  exit

▸ **exit**(`exitCode`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`exitCode` | number |

**Returns:** *number*

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

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  palette

▸ **palette**(): *[QPalette](qpalette.md)*

**Returns:** *[QPalette](qpalette.md)*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  processEvents

▸ **processEvents**(): *void*

**Returns:** *void*

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

###  quit

▸ **quit**(): *number*

**Returns:** *number*

___

###  quitOnLastWindowClosed

▸ **quitOnLastWindowClosed**(): *boolean*

**Returns:** *boolean*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QApplicationSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QApplicationSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QApplicationSignals[SignalType] |
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

###  setQuitOnLastWindowClosed

▸ **setQuitOnLastWindowClosed**(`quit`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`quit` | boolean |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string, `postprocess`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`styleSheet` | string | - |
`postprocess` | boolean | true |

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

### `Static` applicationDisplayName

▸ **applicationDisplayName**(): *string*

**Returns:** *string*

___

### `Static` clipboard

▸ **clipboard**(): *[QClipboard](qclipboard.md) | null*

**Returns:** *[QClipboard](qclipboard.md) | null*

___

### `Static` desktopFileName

▸ **desktopFileName**(): *string*

**Returns:** *string*

___

### `Static` desktopSettingsAware

▸ **desktopSettingsAware**(): *boolean*

**Returns:** *boolean*

___

### `Static` instance

▸ **instance**(): *[QApplication](qapplication.md)*

**Returns:** *[QApplication](qapplication.md)*

___

### `Static` platformName

▸ **platformName**(): *string*

**Returns:** *string*

___

### `Static` primaryScreen

▸ **primaryScreen**(): *[QScreen](qscreen.md) | null*

**Returns:** *[QScreen](qscreen.md) | null*

___

### `Static` screens

▸ **screens**(): *[QScreen](qscreen.md)[]*

**Returns:** *[QScreen](qscreen.md)[]*

___

### `Static` setApplicationDisplayName

▸ **setApplicationDisplayName**(`name`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *void*

___

### `Static` setDesktopFileName

▸ **setDesktopFileName**(`name`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *void*

___

### `Static` setDesktopSettingsAware

▸ **setDesktopSettingsAware**(`on`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

**Returns:** *void*

___

### `Static` setStyle

▸ **setStyle**(`style`: [QStyle](qstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [QStyle](qstyle.md) |

**Returns:** *void*

___

### `Static` setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

### `Static` style

▸ **style**(): *[QStyle](qstyle.md)*

**Returns:** *[QStyle](qstyle.md)*

___

### `Static` windowIcon

▸ **windowIcon**(): *[QIcon](qicon.md)*

**Returns:** *[QIcon](qicon.md)*
