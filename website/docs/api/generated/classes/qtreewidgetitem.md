---
id: "qtreewidgetitem"
title: "QTreeWidgetItem"
sidebar_label: "QTreeWidgetItem"
---

> Creates an item for QTreeWidget.

**This class is a JS wrapper around Qt's [QTreeWidgetItem class](https://doc.qt.io/qt-5/qtreewidgetitem.html)**

### Example

```javascript

const { QMainWindow, QTreeWidgetItem, QTreeWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();
const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem();
item1.setText(0, `item-1`);
const item2 = new QTreeWidgetItem();
item2.setText(0, `item-2`);
const item3 = new QTreeWidgetItem();
item3.setText(0, `item-3`);

tree.addTopLevelItem(item1);
tree.addTopLevelItem(item2);
tree.addTopLevelItem(item3);

// Add children to item1
const c1item1 = new QTreeWidgetItem(item1);
c1item1.setText(0, `c1item1`);
const c1item2 = new QTreeWidgetItem(item1);
c1item2.setText(0, `c1item1`);

win.setCentralWidget(tree);
win.show();
(global as any).win = win;

```

## Hierarchy

* [Component](component.md)

  ↳ **QTreeWidgetItem**

## Index

### Constructors

* [constructor](qtreewidgetitem.md#constructor)

### Properties

* [native](qtreewidgetitem.md#native)
* [nodeChildren](qtreewidgetitem.md#nodechildren)
* [nodeParent](qtreewidgetitem.md#optional-nodeparent)

### Methods

* [child](qtreewidgetitem.md#child)
* [childCount](qtreewidgetitem.md#childcount)
* [parent](qtreewidgetitem.md#parent)
* [setExpanded](qtreewidgetitem.md#setexpanded)
* [setNodeParent](qtreewidgetitem.md#setnodeparent)
* [setSelected](qtreewidgetitem.md#setselected)
* [setText](qtreewidgetitem.md#settext)
* [text](qtreewidgetitem.md#text)

## Constructors

###  constructor

\+ **new QTreeWidgetItem**(): *[QTreeWidgetItem](qtreewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`parent`: [QTreeWidgetItem](qtreewidgetitem.md), `strings?`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QTreeWidgetItem](qtreewidgetitem.md) |
`strings?` | string[] |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`parent`: [QTreeWidget](qtreewidget.md), `strings?`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QTreeWidget](qtreewidget.md) |
`strings?` | string[] |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`native`: [NativeElement](../globals.md#nativeelement)): *[QTreeWidgetItem](qtreewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`strings`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`strings` | string[] |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

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

###  child

▸ **child**(`index`: number): *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

___

###  childCount

▸ **childCount**(): *number*

**Returns:** *number*

___

###  parent

▸ **parent**(): *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

___

###  setExpanded

▸ **setExpanded**(`expanded`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`expanded` | boolean |

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

###  setSelected

▸ **setSelected**(`selected`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`selected` | boolean |

**Returns:** *void*

___

###  setText

▸ **setText**(`column`: number, `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`text` | string |

**Returns:** *void*

___

###  text

▸ **text**(`column`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *string*
