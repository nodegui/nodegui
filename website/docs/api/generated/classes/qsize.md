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
* [nodeChildren](qsize.md#nodechildren)
* [nodeParent](qsize.md#optional-nodeparent)

### Methods

* [height](qsize.md#height)
* [setHeight](qsize.md#setheight)
* [setNodeParent](qsize.md#setnodeparent)
* [setWidth](qsize.md#setwidth)
* [width](qsize.md#width)
* [fromQVariant](qsize.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

\+ **new QSize**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QSize](qsize.md)*

\+ **new QSize**(`width?`: undefined | number, `height?`: undefined | number): *[QSize](qsize.md)*

**Parameters:**

Name | Type |
------ | ------ |
`width?` | undefined &#124; number |
`height?` | undefined &#124; number |

**Returns:** *[QSize](qsize.md)*

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

###  height

▸ **height**(): *number*

**Returns:** *number*

___

###  setHeight

▸ **setHeight**(`height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`height` | number |

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

___

###  setWidth

▸ **setWidth**(`width`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

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
