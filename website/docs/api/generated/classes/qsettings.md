---
id: "qsettings"
title: "QSettings"
sidebar_label: "QSettings"
---

## Hierarchy

* [Component](component.md)

  ↳ **QSettings**

## Index

### Constructors

* [constructor](qsettings.md#constructor)

### Properties

* [native](qsettings.md#native)
* [nodeChildren](qsettings.md#nodechildren)
* [nodeParent](qsettings.md#optional-nodeparent)

### Methods

* [setNodeParent](qsettings.md#setnodeparent)
* [setValue](qsettings.md#setvalue)
* [sync](qsettings.md#sync)
* [value](qsettings.md#value)

## Constructors

###  constructor

\+ **new QSettings**(`organization`: string, `application`: string): *[QSettings](qsettings.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`organization` | string |
`application` | string |

**Returns:** *[QSettings](qsettings.md)*

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

###  setValue

▸ **setValue**(`key`: string, `value`: number | string | boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`value` | number &#124; string &#124; boolean |

**Returns:** *void*

___

###  sync

▸ **sync**(): *void*

**Returns:** *void*

___

###  value

▸ **value**(`key`: string): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |

**Returns:** *[QVariant](qvariant.md)*
