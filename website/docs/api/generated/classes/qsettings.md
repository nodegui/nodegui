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

### Methods

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

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

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
