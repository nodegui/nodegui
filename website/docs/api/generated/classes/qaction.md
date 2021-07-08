---
id: "qaction"
title: "QAction"
sidebar_label: "QAction"
---

> The QAction class provides an abstract user interface action that can be inserted into widgets.

**This class is a JS wrapper around Qt's [QAction class](https://doc.qt.io/qt-5/qaction.html)**

### Example

```javascript
const { QAction, QMenu } = require("@nodegui/nodegui");

const menu = new QMenu();
const menuAction = new QAction();
menuAction.setText("subAction");
menuAction.addEventListener("triggered", () => {
console.log("Action clicked");
});
menu.addAction(menuAction);
```

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹[QActionSignals](../interfaces/qactionsignals.md)›

  ↳ **QAction**

## Index

### Constructors

* [constructor](qaction.md#constructor)

### Properties

* [icon](qaction.md#optional-icon)
* [menu](qaction.md#optional-menu)
* [native](qaction.md#native)
* [nodeChildren](qaction.md#nodechildren)
* [nodeParent](qaction.md#optional-nodeparent)

### Methods

* [addEventListener](qaction.md#addeventlistener)
* [data](qaction.md#data)
* [font](qaction.md#font)
* [inherits](qaction.md#inherits)
* [isCheckable](qaction.md#ischeckable)
* [isChecked](qaction.md#ischecked)
* [isSeparator](qaction.md#isseparator)
* [objectName](qaction.md#objectname)
* [property](qaction.md#property)
* [removeEventListener](qaction.md#removeeventlistener)
* [setCheckable](qaction.md#setcheckable)
* [setChecked](qaction.md#setchecked)
* [setData](qaction.md#setdata)
* [setEnabled](qaction.md#setenabled)
* [setFont](qaction.md#setfont)
* [setIcon](qaction.md#seticon)
* [setMenu](qaction.md#setmenu)
* [setNodeParent](qaction.md#setnodeparent)
* [setObjectName](qaction.md#setobjectname)
* [setProperty](qaction.md#setproperty)
* [setSeparator](qaction.md#setseparator)
* [setShortcut](qaction.md#setshortcut)
* [setShortcutContext](qaction.md#setshortcutcontext)
* [setText](qaction.md#settext)

## Constructors

###  constructor

\+ **new QAction**(): *[QAction](qaction.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QAction](qaction.md)*

\+ **new QAction**(`native`: [NativeElement](../globals.md#nativeelement)): *[QAction](qaction.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QAction](qaction.md)*

\+ **new QAction**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QAction](qaction.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QAction](qaction.md)*

## Properties

### `Optional` icon

• **icon**? : *[QIcon](qicon.md)*

___

### `Optional` menu

• **menu**? : *[QMenu](qmenu.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QActionSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QActionSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QActionSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  data

▸ **data**(): *[QVariant](qvariant.md)*

**Returns:** *[QVariant](qvariant.md)*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

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

###  isCheckable

▸ **isCheckable**(): *boolean*

**Returns:** *boolean*

___

###  isChecked

▸ **isChecked**(): *boolean*

**Returns:** *boolean*

___

###  isSeparator

▸ **isSeparator**(): *boolean*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QActionSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QActionSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QActionSignals[SignalType] |

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

###  setCheckable

▸ **setCheckable**(`isCheckable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isCheckable` | boolean |

**Returns:** *void*

___

###  setChecked

▸ **setChecked**(`isChecked`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isChecked` | boolean |

**Returns:** *void*

___

###  setData

▸ **setData**(`value`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | [QVariant](qvariant.md) |

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

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

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

###  setMenu

▸ **setMenu**(`menu`: [QMenu](qmenu.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`menu` | [QMenu](qmenu.md) |

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

###  setSeparator

▸ **setSeparator**(`isSeparator`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`isSeparator` | boolean |

**Returns:** *void*

___

###  setShortcut

▸ **setShortcut**(`keysequence`: [QKeySequence](qkeysequence.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`keysequence` | [QKeySequence](qkeysequence.md) |

**Returns:** *void*

___

###  setShortcutContext

▸ **setShortcutContext**(`shortcutContext`: [ShortcutContext](../enums/shortcutcontext.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`shortcutContext` | [ShortcutContext](../enums/shortcutcontext.md) |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*
