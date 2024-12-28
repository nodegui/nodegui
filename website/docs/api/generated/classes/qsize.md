---
id: "qsize"
title: "QSize"
sidebar_label: "QSize"
---

## Hierarchy

* [Component](component.md)

  ↳ **QSize**

## Index

### Constructors

* [constructor](qsize.md#constructor)

### Properties

* [native](qsize.md#native)

### Methods

* [boundedTo](qsize.md#boundedto)
* [expandedTo](qsize.md#expandedto)
* [height](qsize.md#height)
* [isEmpty](qsize.md#isempty)
* [isNull](qsize.md#isnull)
* [isValid](qsize.md#isvalid)
* [scale](qsize.md#scale)
* [scaled](qsize.md#scaled)
* [setHeight](qsize.md#setheight)
* [setWidth](qsize.md#setwidth)
* [transpose](qsize.md#transpose)
* [transposed](qsize.md#transposed)
* [width](qsize.md#width)
* [fromQVariant](qsize.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QSize**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QSize](qsize.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QSize](qsize.md)*

\+ **new QSize**(`width?`: number, `height?`: number): *[QSize](qsize.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`width?` | number |
`height?` | number |

**Returns:** *[QSize](qsize.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  boundedTo

▸ **boundedTo**(`otherSize`: [QSize](qsize.md)): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`otherSize` | [QSize](qsize.md) |

**Returns:** *[QSize](qsize.md)*

___

###  expandedTo

▸ **expandedTo**(`otherSize`: [QSize](qsize.md)): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`otherSize` | [QSize](qsize.md) |

**Returns:** *[QSize](qsize.md)*

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

▸ **scaled**(`width`: number, `height`: number, `mode`: [AspectRatioMode](../enums/aspectratiomode.md)): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`mode` | [AspectRatioMode](../enums/aspectratiomode.md) |

**Returns:** *[QSize](qsize.md)*

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

###  transpose

▸ **transpose**(): *void*

**Returns:** *void*

___

###  transposed

▸ **transposed**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  width

▸ **width**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QSize](qsize.md)*
