---
id: "qtablewidgetitem"
title: "QTableWidgetItem"
sidebar_label: "QTableWidgetItem"
---

> Creates an item for QTableWidget.

**This class is a JS wrapper around Qt's [QTableWidgetItem class](https://doc.qt.io/qt-5/qtablewidgetitem.html)**

### Example

```javascript
const { QTableWidget, QMainWindow, QTableWidgetItem } = require("@nodegui/nodegui");

const win = new QMainWindow();
const table = new QTableWidget(2, 3);
table.setHorizontalHeaderLabels(['first', 'second', 'third']);

const cell00 = new QTableWidgetItem('C00');
const cell01 = new QTableWidgetItem('C01');
const cell10 = new QTableWidgetItem('C10');
const cell11 = new QTableWidgetItem('C11');

table.setItem(0, 0, cell00);
table.setItem(0, 1, cell01);
table.setItem(1, 0, cell10);
table.setItem(1, 1, cell11);

win.setCentralWidget(table);
win.show();
(global as any).win = win;

```

## Hierarchy

* [Component](component.md)

  ↳ **QTableWidgetItem**

## Index

### Constructors

* [constructor](qtablewidgetitem.md#constructor)

### Properties

* [native](qtablewidgetitem.md#native)
* [nodeChildren](qtablewidgetitem.md#nodechildren)
* [nodeParent](qtablewidgetitem.md#optional-nodeparent)

### Methods

* [setNodeParent](qtablewidgetitem.md#setnodeparent)
* [setText](qtablewidgetitem.md#settext)
* [setTextAlignment](qtablewidgetitem.md#settextalignment)
* [setToolTip](qtablewidgetitem.md#settooltip)
* [text](qtablewidgetitem.md#text)
* [textAlignment](qtablewidgetitem.md#textalignment)
* [toolTip](qtablewidgetitem.md#tooltip)

## Constructors

###  constructor

\+ **new QTableWidgetItem**(): *[QTableWidgetItem](qtablewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

\+ **new QTableWidgetItem**(`text`: string): *[QTableWidgetItem](qtablewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setTextAlignment

▸ **setTextAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) |

**Returns:** *void*

___

###  setToolTip

▸ **setToolTip**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  text

▸ **text**(): *string*

**Returns:** *string*

___

###  textAlignment

▸ **textAlignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  toolTip

▸ **toolTip**(): *string*

**Returns:** *string*
