---
id: "qlistwidgetitem"
title: "QListWidgetItem"
sidebar_label: "QListWidgetItem"
---

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

* [checkState](qlistwidgetitem.md#checkstate)
* [data](qlistwidgetitem.md#data)
* [flags](qlistwidgetitem.md#flags)
* [icon](qlistwidgetitem.md#icon)
* [isHidden](qlistwidgetitem.md#ishidden)
* [isSelected](qlistwidgetitem.md#isselected)
* [setCheckState](qlistwidgetitem.md#setcheckstate)
* [setFlags](qlistwidgetitem.md#setflags)
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
* [whatsThis](qlistwidgetitem.md#whatsthis)

## Constructors

###  constructor

\+ **new QListWidgetItem**(`arg?`: arg): *[QListWidgetItem](qlistwidgetitem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | arg |

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

###  setCheckState

▸ **setCheckState**(`state`: [CheckState](../enums/checkstate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [CheckState](../enums/checkstate.md) |

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

###  whatsThis

▸ **whatsThis**(): *string*

**Returns:** *string*
