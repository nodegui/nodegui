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

* [items](qtreewidgetitem.md#items)
* [native](qtreewidgetitem.md#native)
* [nodeChildren](qtreewidgetitem.md#nodechildren)
* [nodeParent](qtreewidgetitem.md#optional-nodeparent)

### Methods

* [addChild](qtreewidgetitem.md#addchild)
* [child](qtreewidgetitem.md#child)
* [childCount](qtreewidgetitem.md#childcount)
* [data](qtreewidgetitem.md#data)
* [flags](qtreewidgetitem.md#flags)
* [isHidden](qtreewidgetitem.md#ishidden)
* [parent](qtreewidgetitem.md#parent)
* [setCheckState](qtreewidgetitem.md#setcheckstate)
* [setData](qtreewidgetitem.md#setdata)
* [setExpanded](qtreewidgetitem.md#setexpanded)
* [setFlags](qtreewidgetitem.md#setflags)
* [setHidden](qtreewidgetitem.md#sethidden)
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

###  items

• **items**: *Set‹[NativeElement](../globals.md#nativeelement) | [Component](component.md)›*

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

###  addChild

▸ **addChild**(`childItem`: [QTreeWidgetItem](qtreewidgetitem.md)): *void*

Adds the specified child to this QTreeWidgetItem.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`childItem` | [QTreeWidgetItem](qtreewidgetitem.md) | The child to add.  |

**Returns:** *void*

___

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

###  data

▸ **data**(`column`: number, `role`: [ItemDataRole](../enums/itemdatarole.md)): *[QVariant](qvariant.md)*

Returns the value for the item's column and role.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`column` | number | The column. |
`role` | [ItemDataRole](../enums/itemdatarole.md) | The role.  |

**Returns:** *[QVariant](qvariant.md)*

___

###  flags

▸ **flags**(): *[ItemFlag](../enums/itemflag.md)*

Returns the flags used to describe the item. These determine whether the item can be checked, edited, and selected.

**Returns:** *[ItemFlag](../enums/itemflag.md)*

___

###  isHidden

▸ **isHidden**(): *boolean*

**Returns:** *boolean*

___

###  parent

▸ **parent**(): *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md) | undefined*

___

###  setCheckState

▸ **setCheckState**(`column`: number, `state`: [CheckState](../enums/checkstate.md)): *void*

Sets the item in the given column check state to be state.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`column` | number | The column. |
`state` | [CheckState](../enums/checkstate.md) | The check state.  |

**Returns:** *void*

___

###  setData

▸ **setData**(`column`: number, `role`: [ItemDataRole](../enums/itemdatarole.md), `value`: [QVariantType](../globals.md#qvarianttype)): *void*

Sets the value for the item's column and role to the given value.
The role describes the type of data specified by value, and is defined by the ItemDataRole enum.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`column` | number | The column. |
`role` | [ItemDataRole](../enums/itemdatarole.md) | The role. |
`value` | [QVariantType](../globals.md#qvarianttype) | The value.  |

**Returns:** *void*

___

###  setExpanded

▸ **setExpanded**(`expanded`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`expanded` | boolean |

**Returns:** *void*

___

###  setFlags

▸ **setFlags**(`flags`: [ItemFlag](../enums/itemflag.md)): *void*

Sets the flags for the item to the given flags. These determine whether the item can be selected or modified.
This is often used to disable an item.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`flags` | [ItemFlag](../enums/itemflag.md) | The flags.  |

**Returns:** *void*

___

###  setHidden

▸ **setHidden**(`hide`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hide` | boolean |

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
