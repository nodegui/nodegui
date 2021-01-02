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

* [background](qtablewidgetitem.md#background)
* [checkState](qtablewidgetitem.md#checkstate)
* [column](qtablewidgetitem.md#column)
* [data](qtablewidgetitem.md#data)
* [flags](qtablewidgetitem.md#flags)
* [font](qtablewidgetitem.md#font)
* [foreground](qtablewidgetitem.md#foreground)
* [icon](qtablewidgetitem.md#icon)
* [isSelected](qtablewidgetitem.md#isselected)
* [row](qtablewidgetitem.md#row)
* [setBackground](qtablewidgetitem.md#setbackground)
* [setCheckState](qtablewidgetitem.md#setcheckstate)
* [setData](qtablewidgetitem.md#setdata)
* [setFlags](qtablewidgetitem.md#setflags)
* [setFont](qtablewidgetitem.md#setfont)
* [setForeground](qtablewidgetitem.md#setforeground)
* [setIcon](qtablewidgetitem.md#seticon)
* [setNodeParent](qtablewidgetitem.md#setnodeparent)
* [setSelected](qtablewidgetitem.md#setselected)
* [setSizeHint](qtablewidgetitem.md#setsizehint)
* [setStatusTip](qtablewidgetitem.md#setstatustip)
* [setText](qtablewidgetitem.md#settext)
* [setTextAlignment](qtablewidgetitem.md#settextalignment)
* [setToolTip](qtablewidgetitem.md#settooltip)
* [setWhatsThis](qtablewidgetitem.md#setwhatsthis)
* [sizeHint](qtablewidgetitem.md#sizehint)
* [statusTip](qtablewidgetitem.md#statustip)
* [text](qtablewidgetitem.md#text)
* [textAlignment](qtablewidgetitem.md#textalignment)
* [toolTip](qtablewidgetitem.md#tooltip)
* [type](qtablewidgetitem.md#type)
* [whatsThis](qtablewidgetitem.md#whatsthis)

## Constructors

###  constructor

\+ **new QTableWidgetItem**(): *[QTableWidgetItem](qtablewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

\+ **new QTableWidgetItem**(`other`: [QTableWidgetItem](qtablewidgetitem.md)): *[QTableWidgetItem](qtablewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

\+ **new QTableWidgetItem**(`native`: [NativeElement](../globals.md#nativeelement)): *[QTableWidgetItem](qtablewidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

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

###  background

▸ **background**(): *[QBrush](qbrush.md)*

**Returns:** *[QBrush](qbrush.md)*

___

###  checkState

▸ **checkState**(): *[CheckState](../enums/checkstate.md)*

**Returns:** *[CheckState](../enums/checkstate.md)*

___

###  column

▸ **column**(): *number*

**Returns:** *number*

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

###  isSelected

▸ **isSelected**(): *boolean*

**Returns:** *boolean*

___

###  row

▸ **row**(): *number*

**Returns:** *number*

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

▸ **setTextAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) |

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

▸ **textAlignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

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
