---
id: "qshortcut"
title: "QShortcut"
sidebar_label: "QShortcut"
---

> The QShortcut class is used to create keyboard shortcuts.

**This class is a JS wrapper around Qt's [QShortcut class](https://doc.qt.io/qt-5/qshortcut.html)**

### Example

```javascript
const { QShortcut, QKeySequence, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();
const shortcut = new QShortcut(win);
shortcut.setKey(new QKeySequence("Ctrl+M"));
shortcut.setEnabled(true);
shortcut.addEventListener(QShortcutEvents.activated, () => {
console.log("Shortcut Activated");
});

win.show();
global.win = win;
global.shortcut = shortcut;
```

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹[QShortcutSignals](../interfaces/qshortcutsignals.md)›

  ↳ **QShortcut**

## Index

### Constructors

* [constructor](qshortcut.md#constructor)

### Properties

* [native](qshortcut.md#native)
* [nodeChildren](qshortcut.md#nodechildren)
* [nodeParent](qshortcut.md#optional-nodeparent)

### Methods

* [addEventListener](qshortcut.md#addeventlistener)
* [inherits](qshortcut.md#inherits)
* [objectName](qshortcut.md#objectname)
* [property](qshortcut.md#property)
* [removeEventListener](qshortcut.md#removeeventlistener)
* [setAutoRepeat](qshortcut.md#setautorepeat)
* [setContext](qshortcut.md#setcontext)
* [setEnabled](qshortcut.md#setenabled)
* [setKey](qshortcut.md#setkey)
* [setNodeParent](qshortcut.md#setnodeparent)
* [setObjectName](qshortcut.md#setobjectname)
* [setProperty](qshortcut.md#setproperty)

## Constructors

###  constructor

\+ **new QShortcut**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QShortcut](qshortcut.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QShortcut](qshortcut.md)*

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

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QShortcutSignals*

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

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QShortcutSignals*

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

###  setAutoRepeat

▸ **setAutoRepeat**(`on`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

**Returns:** *void*

___

###  setContext

▸ **setContext**(`shortcutContext`: [ShortcutContext](../enums/shortcutcontext.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`shortcutContext` | [ShortcutContext](../enums/shortcutcontext.md) |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setKey

▸ **setKey**(`keysequence`: [QKeySequence](qkeysequence.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`keysequence` | [QKeySequence](qkeysequence.md) |

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
