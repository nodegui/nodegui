---
id: "qstandarditem"
title: "QStandardItem"
sidebar_label: "QStandardItem"
---

## Hierarchy

* [Component](component.md)

  ↳ **QStandardItem**

## Index

### Constructors

* [constructor](qstandarditem.md#constructor)

### Properties

* [native](qstandarditem.md#native)
* [nodeChildren](qstandarditem.md#nodechildren)
* [nodeParent](qstandarditem.md#optional-nodeparent)

### Methods

* [checkState](qstandarditem.md#checkstate)
* [setCheckState](qstandarditem.md#setcheckstate)
* [setData](qstandarditem.md#setdata)
* [setFlags](qstandarditem.md#setflags)
* [setNodeParent](qstandarditem.md#setnodeparent)

## Constructors

###  constructor

\+ **new QStandardItem**(): *[QStandardItem](qstandarditem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QStandardItem](qstandarditem.md)*

\+ **new QStandardItem**(`parent`: [QStandardItem](qstandarditem.md), `text?`: undefined | string): *[QStandardItem](qstandarditem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QStandardItem](qstandarditem.md) |
`text?` | undefined &#124; string |

**Returns:** *[QStandardItem](qstandarditem.md)*

\+ **new QStandardItem**(`native`: [NativeElement](../globals.md#nativeelement)): *[QStandardItem](qstandarditem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QStandardItem](qstandarditem.md)*

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

###  setCheckState

▸ **setCheckState**(`state`: [CheckState](../enums/checkstate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [CheckState](../enums/checkstate.md) |

**Returns:** *void*

___

###  setData

▸ **setData**(`value`: number, `role`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |
`role` | number |

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*
