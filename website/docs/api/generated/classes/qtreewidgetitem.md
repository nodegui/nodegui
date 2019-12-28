---
id: "qtreewidgetitem"
title: "QTreeWidgetItem"
sidebar_label: "QTreeWidgetItem"
---

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

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`parent`: [QTreeWidgetItem](qtreewidgetitem.md), `strings?`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QTreeWidgetItem](qtreewidgetitem.md) |
`strings?` | string[] |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`parent`: [QTreeWidget](qtreewidget.md), `strings?`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QTreeWidget](qtreewidget.md) |
`strings?` | string[] |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`native`: [NativeElement](../globals.md#nativeelement)): *[QTreeWidgetItem](qtreewidgetitem.md)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)*

\+ **new QTreeWidgetItem**(`strings`: string[]): *[QTreeWidgetItem](qtreewidgetitem.md)*

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

• **nodeChildren**: *Set‹unknown›* =  new Set()

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
