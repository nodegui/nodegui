---
id: "qsystemtrayicon"
title: "QSystemTrayIcon"
sidebar_label: "QSystemTrayIcon"
---

> Create and control system tray icon.

**This class is a JS wrapper around Qt's [QSystemTrayIcon class](https://doc.qt.io/qt-5/qsystemtrayicon.html)**

A `QSystemTrayIcon` provides ability to add and manipulate native system tray icon.

### Example

```javascript
const { QSystemTrayIcon, QIcon } = require("@nodegui/nodegui");
const trayIcon = new QIcon(
resolve(__dirname, "some/image/file.png");
);
const tray = new QSystemTrayIcon();
tray.show();

global.tray = tray; // prevents garbage collection of tray
```

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹[QSystemTrayIconSignals](../interfaces/qsystemtrayiconsignals.md)›

  ↳ **QSystemTrayIcon**

## Index

### Constructors

* [constructor](qsystemtrayicon.md#constructor)

### Properties

* [contextMenu](qsystemtrayicon.md#optional-contextmenu)
* [native](qsystemtrayicon.md#native)
* [nodeChildren](qsystemtrayicon.md#nodechildren)
* [nodeParent](qsystemtrayicon.md#optional-nodeparent)

### Methods

* [addEventListener](qsystemtrayicon.md#addeventlistener)
* [hide](qsystemtrayicon.md#hide)
* [inherits](qsystemtrayicon.md#inherits)
* [isVisible](qsystemtrayicon.md#isvisible)
* [objectName](qsystemtrayicon.md#objectname)
* [property](qsystemtrayicon.md#property)
* [removeEventListener](qsystemtrayicon.md#removeeventlistener)
* [setContextMenu](qsystemtrayicon.md#setcontextmenu)
* [setIcon](qsystemtrayicon.md#seticon)
* [setNodeParent](qsystemtrayicon.md#setnodeparent)
* [setObjectName](qsystemtrayicon.md#setobjectname)
* [setProperty](qsystemtrayicon.md#setproperty)
* [setToolTip](qsystemtrayicon.md#settooltip)
* [show](qsystemtrayicon.md#show)
* [showMessage](qsystemtrayicon.md#showmessage)

## Constructors

###  constructor

\+ **new QSystemTrayIcon**(): *[QSystemTrayIcon](qsystemtrayicon.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QSystemTrayIcon](qsystemtrayicon.md)*

\+ **new QSystemTrayIcon**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QSystemTrayIcon](qsystemtrayicon.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QSystemTrayIcon](qsystemtrayicon.md)*

## Properties

### `Optional` contextMenu

• **contextMenu**? : *[QMenu](qmenu.md)*

___

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

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QSystemTrayIconSignals*

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

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  hide

▸ **hide**(): *void*

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

###  isVisible

▸ **isVisible**(): *boolean*

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

▪ **SignalType**: *keyof QSystemTrayIconSignals*

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

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  setContextMenu

▸ **setContextMenu**(`menu`: [QMenu](qmenu.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`menu` | [QMenu](qmenu.md) |

**Returns:** *void*

___

###  setIcon

▸ **setIcon**(`icon`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

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

###  setToolTip

▸ **setToolTip**(`tooltip`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`tooltip` | string |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

**Returns:** *void*

___

###  showMessage

▸ **showMessage**(`title`: string, `message`: string, `icon`: [QIcon](qicon.md), `millisecondsTimeoutHint`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`title` | string | "" |
`message` | string | "" |
`icon` | [QIcon](qicon.md) |  new QIcon() |
`millisecondsTimeoutHint` | number | 10000 |

**Returns:** *void*
