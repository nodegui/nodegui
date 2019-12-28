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

* [Component](component.md)

  ↳ **QApplication**

## Index

### Constructors

* [constructor](qapplication.md#constructor)

### Properties

* [native](qapplication.md#native)
* [nodeChildren](qapplication.md#nodechildren)
* [nodeParent](qapplication.md#optional-nodeparent)

### Methods

* [exec](qapplication.md#exec)
* [exit](qapplication.md#exit)
* [processEvents](qapplication.md#processevents)
* [quit](qapplication.md#quit)
* [quitOnLastWindowClosed](qapplication.md#quitonlastwindowclosed)
* [setNodeParent](qapplication.md#setnodeparent)
* [setQuitOnLastWindowClosed](qapplication.md#setquitonlastwindowclosed)
* [clipboard](qapplication.md#static-clipboard)
* [instance](qapplication.md#static-instance)
* [style](qapplication.md#static-style)

## Constructors

###  constructor

\+ **new QApplication**(): *[QApplication](qapplication.md)*

**Returns:** *[QApplication](qapplication.md)*

\+ **new QApplication**(`native`: [NativeElement](../globals.md#nativeelement)): *[QApplication](qapplication.md)*

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

• **nodeChildren**: *Set‹unknown›* =  new Set()

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

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

###  processEvents

▸ **processEvents**(): *void*

**Returns:** *void*

___

###  quit

▸ **quit**(): *number*

**Returns:** *number*

___

###  quitOnLastWindowClosed

▸ **quitOnLastWindowClosed**(): *boolean*

**Returns:** *boolean*

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

### `Static` instance

▸ **instance**(): *[QApplication](qapplication.md)*

**Returns:** *[QApplication](qapplication.md)*

___

### `Static` style

▸ **style**(): *[QStyle](qstyle.md)*

**Returns:** *[QStyle](qstyle.md)*
