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

### Methods

* [checkState](qstandarditem.md#checkstate)
* [setCheckState](qstandarditem.md#setcheckstate)
* [setData](qstandarditem.md#setdata)
* [setFlags](qstandarditem.md#setflags)

## Constructors

###  constructor

\+ **new QStandardItem**(): *[QStandardItem](qstandarditem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QStandardItem](qstandarditem.md)*

\+ **new QStandardItem**(`parent`: [QStandardItem](qstandarditem.md), `text?`: string): *[QStandardItem](qstandarditem.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QStandardItem](qstandarditem.md) |
`text?` | string |

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

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

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
