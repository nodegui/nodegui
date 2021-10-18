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

  ↳ [NodeObject](nodeobject.md)‹[QApplicationSignals](../interfaces/qapplicationsignals.md)›

  ↳ **QApplication**

## Index

### Constructors

* [constructor](qapplication.md#constructor)

### Properties

* [native](qapplication.md#native)
* [nodeChildren](qapplication.md#nodechildren)
* [nodeParent](qapplication.md#optional-nodeparent)

### Methods

* [addEventListener](qapplication.md#addeventlistener)
* [exec](qapplication.md#exec)
* [exit](qapplication.md#exit)
* [inherits](qapplication.md#inherits)
* [objectName](qapplication.md#objectname)
* [processEvents](qapplication.md#processevents)
* [property](qapplication.md#property)
* [quit](qapplication.md#quit)
* [quitOnLastWindowClosed](qapplication.md#quitonlastwindowclosed)
* [removeEventListener](qapplication.md#removeeventlistener)
* [setNodeParent](qapplication.md#setnodeparent)
* [setObjectName](qapplication.md#setobjectname)
* [setProperty](qapplication.md#setproperty)
* [setQuitOnLastWindowClosed](qapplication.md#setquitonlastwindowclosed)
* [clipboard](qapplication.md#static-clipboard)
* [desktop](qapplication.md#static-desktop)
* [instance](qapplication.md#static-instance)
* [style](qapplication.md#static-style)

## Constructors

###  constructor

\+ **new QApplication**(): *[QApplication](qapplication.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QApplication](qapplication.md)*

\+ **new QApplication**(`native`: [NativeElement](../globals.md#nativeelement)): *[QApplication](qapplication.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QApplication](qapplication.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QApplicationSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QApplicationSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QApplicationSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  processEvents

▸ **processEvents**(): *void*

**Returns:** *void*

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

###  quit

▸ **quit**(): *number*

**Returns:** *number*

___

###  quitOnLastWindowClosed

▸ **quitOnLastWindowClosed**(): *boolean*

**Returns:** *boolean*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QApplicationSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QApplicationSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QApplicationSignals[SignalType] |

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

###  setQuitOnLastWindowClosed

▸ **setQuitOnLastWindowClosed**(`quit`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`quit` | boolean |

**Returns:** *void*

___

### `Static` clipboard

▸ **clipboard**(): *[QClipboard](qclipboard.md)*

**Returns:** *[QClipboard](qclipboard.md)*

___

### `Static` desktop

▸ **desktop**(): *[QDesktopWidget](qdesktopwidget.md)*

**Returns:** *[QDesktopWidget](qdesktopwidget.md)*

___

### `Static` instance

▸ **instance**(): *[QApplication](qapplication.md)*

**Returns:** *[QApplication](qapplication.md)*

___

### `Static` style

▸ **style**(): *[QStyle](qstyle.md)*

**Returns:** *[QStyle](qstyle.md)*
