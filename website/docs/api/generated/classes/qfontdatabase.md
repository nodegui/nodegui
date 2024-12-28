---
id: "qfontdatabase"
title: "QFontDatabase"
sidebar_label: "QFontDatabase"
---

## Hierarchy

* [Component](component.md)

  ↳ **QFontDatabase**

## Index

### Constructors

* [constructor](qfontdatabase.md#constructor)

### Properties

* [native](qfontdatabase.md#native)

### Methods

* [bold](qfontdatabase.md#bold)
* [families](qfontdatabase.md#families)
* [isFixedPitch](qfontdatabase.md#isfixedpitch)
* [italic](qfontdatabase.md#italic)
* [styles](qfontdatabase.md#styles)
* [weight](qfontdatabase.md#weight)
* [addApplicationFont](qfontdatabase.md#static-addapplicationfont)
* [applicationFontFamilies](qfontdatabase.md#static-applicationfontfamilies)
* [removeApplicationFont](qfontdatabase.md#static-removeapplicationfont)

## Constructors

###  constructor

\+ **new QFontDatabase**(): *[QFontDatabase](qfontdatabase.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QFontDatabase](qfontdatabase.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  bold

▸ **bold**(`family`: string, `style`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |
`style` | string |

**Returns:** *boolean*

___

###  families

▸ **families**(`ws`: [WritingSystem](../enums/writingsystem.md)): *string[]*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`ws` | [WritingSystem](../enums/writingsystem.md) | WritingSystem.Any |

**Returns:** *string[]*

___

###  isFixedPitch

▸ **isFixedPitch**(`family`: string, `style`: string | null): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`family` | string | - |
`style` | string &#124; null | null |

**Returns:** *boolean*

___

###  italic

▸ **italic**(`family`: string, `style`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |
`style` | string |

**Returns:** *boolean*

___

###  styles

▸ **styles**(`family`: string): *string[]*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |

**Returns:** *string[]*

___

###  weight

▸ **weight**(`family`: string, `style`: string): *number*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |
`style` | string |

**Returns:** *number*

___

### `Static` addApplicationFont

▸ **addApplicationFont**(`fileName`: string): *number*

**Parameters:**

Name | Type |
------ | ------ |
`fileName` | string |

**Returns:** *number*

___

### `Static` applicationFontFamilies

▸ **applicationFontFamilies**(`id`: number): *string[]*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *string[]*

___

### `Static` removeApplicationFont

▸ **removeApplicationFont**(`id`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *boolean*
