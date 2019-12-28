---
id: "qvariant"
title: "QVariant"
sidebar_label: "QVariant"
---

## Hierarchy

* [Component](component.md)

  ↳ **QVariant**

## Index

### Constructors

* [constructor](qvariant.md#constructor)

### Properties

* [native](qvariant.md#native)
* [nodeChildren](qvariant.md#nodechildren)
* [nodeParent](qvariant.md#optional-nodeparent)

### Methods

* [setNodeParent](qvariant.md#setnodeparent)
* [toBool](qvariant.md#tobool)
* [toDouble](qvariant.md#todouble)
* [toInt](qvariant.md#toint)
* [toString](qvariant.md#tostring)

## Constructors

###  constructor

\+ **new QVariant**(): *[QVariant](qvariant.md)*

**Returns:** *[QVariant](qvariant.md)*

\+ **new QVariant**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QVariant](qvariant.md)*

\+ **new QVariant**(`variant`: [QVariantType](../globals.md#qvarianttype)): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *[QVariant](qvariant.md)*

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  toBool

▸ **toBool**(): *boolean*

**Returns:** *boolean*

___

###  toDouble

▸ **toDouble**(): *number*

**Returns:** *number*

___

###  toInt

▸ **toInt**(): *number*

**Returns:** *number*

___

###  toString

▸ **toString**(): *string*

**Returns:** *string*
