---
id: "qmodelindex"
title: "QModelIndex"
sidebar_label: "QModelIndex"
---

## Hierarchy

* [Component](component.md)

  ↳ **QModelIndex**

## Index

### Constructors

* [constructor](qmodelindex.md#constructor)

### Properties

* [native](qmodelindex.md#native)
* [nodeChildren](qmodelindex.md#nodechildren)
* [nodeParent](qmodelindex.md#optional-nodeparent)

### Methods

* [column](qmodelindex.md#column)
* [data](qmodelindex.md#data)
* [flags](qmodelindex.md#flags)
* [isValid](qmodelindex.md#isvalid)
* [parent](qmodelindex.md#parent)
* [row](qmodelindex.md#row)
* [setNodeParent](qmodelindex.md#setnodeparent)
* [sibling](qmodelindex.md#sibling)
* [siblingAtColumn](qmodelindex.md#siblingatcolumn)
* [siblingAtRow](qmodelindex.md#siblingatrow)
* [fromQVariant](qmodelindex.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QModelIndex**(): *[QModelIndex](qmodelindex.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QModelIndex](qmodelindex.md)*

\+ **new QModelIndex**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QModelIndex](qmodelindex.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QModelIndex](qmodelindex.md)*

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

###  column

▸ **column**(): *number*

**Returns:** *number*

___

###  data

▸ **data**(`role`: [ItemDataRole](../enums/itemdatarole.md)): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`role` | [ItemDataRole](../enums/itemdatarole.md) |  ItemDataRole.DisplayRole |

**Returns:** *[QVariant](qvariant.md)*

___

###  flags

▸ **flags**(): *[ItemFlag](../enums/itemflag.md)*

**Returns:** *[ItemFlag](../enums/itemflag.md)*

___

###  isValid

▸ **isValid**(): *boolean*

**Returns:** *boolean*

___

###  parent

▸ **parent**(): *[QModelIndex](qmodelindex.md)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  row

▸ **row**(): *number*

**Returns:** *number*

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

###  sibling

▸ **sibling**(`row`: number, `column`: number): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  siblingAtColumn

▸ **siblingAtColumn**(`column`: number): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  siblingAtRow

▸ **siblingAtRow**(`row`: number): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *[QModelIndex](qmodelindex.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QModelIndex](qmodelindex.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*
