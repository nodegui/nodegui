---
id: "qlistwidgetitem"
title: "QListWidgetItem"
sidebar_label: "QListWidgetItem"
---

> Creates an item for QListWidget.

**This class is a JS wrapper around Qt's [QListWidgetItem class](https://doc.qt.io/qt-5/qlistwidgetitem.html)**

### Example

```javascript
const { QListWidget, QListWidgetItem } = require("@nodegui/nodegui");

const listWidget = new QListWidget();

for (let i = 0; i < 30; i++) {
let listWidgetItem = new QListWidgetItem();
listWidgetItem.setText('listWidgetItem ' + i);
if (i===3) {
listWidgetItem.setCheckState(2);
} else {
listWidgetItem.setCheckState(0);
}
listWidget.addItem(listWidgetItem);
}
```

## Hierarchy

* [Component](component.md)

  ↳ **QListWidgetItem**

## Index

### Constructors

* [constructor](qlistwidgetitem.md#constructor)

### Properties

* [native](qlistwidgetitem.md#native)
* [nodeChildren](qlistwidgetitem.md#nodechildren)
* [nodeParent](qlistwidgetitem.md#optional-nodeparent)

### Methods

* [background](qlistwidgetitem.md#background)
* [checkState](qlistwidgetitem.md#checkstate)
* [data](qlistwidgetitem.md#data)
* [flags](qlistwidgetitem.md#flags)
* [font](qlistwidgetitem.md#font)
* [foreground](qlistwidgetitem.md#foreground)
* [icon](qlistwidgetitem.md#icon)
* [isHidden](qlistwidgetitem.md#ishidden)
* [isSelected](qlistwidgetitem.md#isselected)
* [setBackground](qlistwidgetitem.md#setbackground)
* [setCheckState](qlistwidgetitem.md#setcheckstate)
* [setData](qlistwidgetitem.md#setdata)
* [setFlags](qlistwidgetitem.md#setflags)
* [setFont](qlistwidgetitem.md#setfont)
* [setForeground](qlistwidgetitem.md#setforeground)
* [setHidden](qlistwidgetitem.md#sethidden)
* [setIcon](qlistwidgetitem.md#seticon)
* [setNodeParent](qlistwidgetitem.md#setnodeparent)
* [setSelected](qlistwidgetitem.md#setselected)
* [setSizeHint](qlistwidgetitem.md#setsizehint)
* [setStatusTip](qlistwidgetitem.md#setstatustip)
* [setText](qlistwidgetitem.md#settext)
* [setTextAlignment](qlistwidgetitem.md#settextalignment)
* [setToolTip](qlistwidgetitem.md#settooltip)
* [setWhatsThis](qlistwidgetitem.md#setwhatsthis)
* [sizeHint](qlistwidgetitem.md#sizehint)
* [statusTip](qlistwidgetitem.md#statustip)
* [text](qlistwidgetitem.md#text)
* [textAlignment](qlistwidgetitem.md#textalignment)
* [toolTip](qlistwidgetitem.md#tooltip)
* [type](qlistwidgetitem.md#type)
* [whatsThis](qlistwidgetitem.md#whatsthis)

## Constructors

###  constructor

\+ **new QListWidgetItem**(): *[QListWidgetItem](qlistwidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

\+ **new QListWidgetItem**(`other`: [QListWidgetItem](qlistwidgetitem.md)): *[QListWidgetItem](qlistwidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

\+ **new QListWidgetItem**(`native`: [NativeElement](../globals.md#nativeelement)): *[QListWidgetItem](qlistwidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

\+ **new QListWidgetItem**(`text`: string): *[QListWidgetItem](qlistwidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

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

###  background

▸ **background**(): *[QBrush](qbrush.md)*

**Returns:** *[QBrush](qbrush.md)*

___

###  checkState

▸ **checkState**(): *[CheckState](../enums/checkstate.md)*

**Returns:** *[CheckState](../enums/checkstate.md)*

___

###  data

▸ **data**(`role`: number): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`role` | number |

**Returns:** *[QVariant](qvariant.md)*

___

###  flags

▸ **flags**(): *[ItemFlag](../enums/itemflag.md)*

**Returns:** *[ItemFlag](../enums/itemflag.md)*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

___

###  foreground

▸ **foreground**(): *[QBrush](qbrush.md)*

**Returns:** *[QBrush](qbrush.md)*

___

###  icon

▸ **icon**(): *[QIcon](qicon.md)*

**Returns:** *[QIcon](qicon.md)*

___

###  isHidden

▸ **isHidden**(): *boolean*

**Returns:** *boolean*

___

###  isSelected

▸ **isSelected**(): *boolean*

**Returns:** *boolean*

___

###  setBackground

▸ **setBackground**(`brush`: [QBrush](qbrush.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`brush` | [QBrush](qbrush.md) |

**Returns:** *void*

___

###  setCheckState

▸ **setCheckState**(`state`: [CheckState](../enums/checkstate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [CheckState](../enums/checkstate.md) |

**Returns:** *void*

___

###  setData

▸ **setData**(`role`: number, `value`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`role` | number |
`value` | [QVariant](qvariant.md) |

**Returns:** *void*

___

###  setFlags

▸ **setFlags**(`flags`: [ItemFlag](../enums/itemflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`flags` | [ItemFlag](../enums/itemflag.md) |

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

###  setForeground

▸ **setForeground**(`brush`: [QBrush](qbrush.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`brush` | [QBrush](qbrush.md) |

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

###  setSelected

▸ **setSelected**(`select`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`select` | boolean |

**Returns:** *void*

___

###  setSizeHint

▸ **setSizeHint**(`size`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setStatusTip

▸ **setStatusTip**(`statusTip`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`statusTip` | string |

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

▸ **setTextAlignment**(`alignment`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`alignment` | number |

**Returns:** *void*

___

###  setToolTip

▸ **setToolTip**(`toolTip`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`toolTip` | string |

**Returns:** *void*

___

###  setWhatsThis

▸ **setWhatsThis**(`whatsThis`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`whatsThis` | string |

**Returns:** *void*

___

###  sizeHint

▸ **sizeHint**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  statusTip

▸ **statusTip**(): *string*

**Returns:** *string*

___

###  text

▸ **text**(): *string*

**Returns:** *string*

___

###  textAlignment

▸ **textAlignment**(): *number*

**Returns:** *number*

___

###  toolTip

▸ **toolTip**(): *string*

**Returns:** *string*

___

###  type

▸ **type**(): *number*

**Returns:** *number*

___

###  whatsThis

▸ **whatsThis**(): *string*

**Returns:** *string*
