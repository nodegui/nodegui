---
id: "qsizef"
title: "QSizeF"
sidebar_label: "QSizeF"
---

## Hierarchy

* [Component](component.md)

  ↳ **QSizeF**

## Index

### Constructors

* [constructor](qsizef.md#constructor)

### Properties

* [native](qsizef.md#native)

### Methods

* [boundedTo](qsizef.md#boundedto)
* [expandedTo](qsizef.md#expandedto)
* [height](qsizef.md#height)
* [isEmpty](qsizef.md#isempty)
* [isNull](qsizef.md#isnull)
* [isValid](qsizef.md#isvalid)
* [scale](qsizef.md#scale)
* [scaled](qsizef.md#scaled)
* [setHeight](qsizef.md#setheight)
* [setWidth](qsizef.md#setwidth)
* [toSize](qsizef.md#tosize)
* [transpose](qsizef.md#transpose)
* [transposed](qsizef.md#transposed)
* [width](qsizef.md#width)
* [fromQVariant](qsizef.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QSizeF**(`nativeOrWidth?`: number | [NativeElement](../globals.md#nativeelement), `height?`: number): *[QSizeF](qsizef.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeOrWidth?` | number &#124; [NativeElement](../globals.md#nativeelement) |
`height?` | number |

**Returns:** *[QSizeF](qsizef.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  boundedTo

▸ **boundedTo**(`otherSize`: [QSizeF](qsizef.md)): *[QSizeF](qsizef.md)*

**Parameters:**

Name | Type |
------ | ------ |
`otherSize` | [QSizeF](qsizef.md) |

**Returns:** *[QSizeF](qsizef.md)*

___

###  expandedTo

▸ **expandedTo**(`otherSize`: [QSizeF](qsizef.md)): *[QSizeF](qsizef.md)*

**Parameters:**

Name | Type |
------ | ------ |
`otherSize` | [QSizeF](qsizef.md) |

**Returns:** *[QSizeF](qsizef.md)*

___

###  height

▸ **height**(): *number*

**Returns:** *number*

___

###  isEmpty

▸ **isEmpty**(): *boolean*

**Returns:** *boolean*

___

###  isNull

▸ **isNull**(): *boolean*

**Returns:** *boolean*

___

###  isValid

▸ **isValid**(): *boolean*

**Returns:** *boolean*

___

###  scale

▸ **scale**(`width`: number, `height`: number, `mode`: [AspectRatioMode](../enums/aspectratiomode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`mode` | [AspectRatioMode](../enums/aspectratiomode.md) |

**Returns:** *void*

___

###  scaled

▸ **scaled**(`width`: number, `height`: number, `mode`: [AspectRatioMode](../enums/aspectratiomode.md)): *[QSizeF](qsizef.md)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`mode` | [AspectRatioMode](../enums/aspectratiomode.md) |

**Returns:** *[QSizeF](qsizef.md)*

___

###  setHeight

▸ **setHeight**(`height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`height` | number |

**Returns:** *void*

___

###  setWidth

▸ **setWidth**(`width`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  toSize

▸ **toSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  transpose

▸ **transpose**(): *void*

**Returns:** *void*

___

###  transposed

▸ **transposed**(): *[QSizeF](qsizef.md)*

**Returns:** *[QSizeF](qsizef.md)*

___

###  width

▸ **width**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QSizeF](qsizef.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QSizeF](qsizef.md)*
