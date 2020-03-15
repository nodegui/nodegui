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
* [nodeChildren](qfontdatabase.md#nodechildren)
* [nodeParent](qfontdatabase.md#optional-nodeparent)

### Methods

* [bold](qfontdatabase.md#bold)
* [families](qfontdatabase.md#families)
* [italic](qfontdatabase.md#italic)
* [setNodeParent](qfontdatabase.md#setnodeparent)
* [weight](qfontdatabase.md#weight)
* [addApplicationFont](qfontdatabase.md#static-addapplicationfont)
* [removeApplicationFont](qfontdatabase.md#static-removeapplicationfont)

## Constructors

###  constructor

\+ **new QFontDatabase**(): *[QFontDatabase](qfontdatabase.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QFontDatabase](qfontdatabase.md)*

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

###  italic

▸ **italic**(`family`: string, `style`: string): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |
`style` | string |

**Returns:** *boolean*

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

### `Static` removeApplicationFont

▸ **removeApplicationFont**(`id`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *boolean*
