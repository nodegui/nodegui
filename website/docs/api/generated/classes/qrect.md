---
id: "qrect"
title: "QRect"
sidebar_label: "QRect"
---

## Hierarchy

* [Component](component.md)

  ↳ **QRect**

## Index

### Constructors

* [constructor](qrect.md#constructor)

### Properties

* [native](qrect.md#native)
* [nodeChildren](qrect.md#nodechildren)
* [nodeParent](qrect.md#optional-nodeparent)

### Methods

* [height](qrect.md#height)
* [left](qrect.md#left)
* [setHeight](qrect.md#setheight)
* [setLeft](qrect.md#setleft)
* [setNodeParent](qrect.md#setnodeparent)
* [setTop](qrect.md#settop)
* [setWidth](qrect.md#setwidth)
* [top](qrect.md#top)
* [width](qrect.md#width)
* [fromQVariant](qrect.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QRect**(): *[QRect](qrect.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QRect](qrect.md)*

\+ **new QRect**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QRect](qrect.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QRect](qrect.md)*

\+ **new QRect**(`x?`: undefined | number, `y?`: undefined | number, `width?`: undefined | number, `height?`: undefined | number): *[QRect](qrect.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`x?` | undefined &#124; number |
`y?` | undefined &#124; number |
`width?` | undefined &#124; number |
`height?` | undefined &#124; number |

**Returns:** *[QRect](qrect.md)*

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

###  height

▸ **height**(): *number*

**Returns:** *number*

___

###  left

▸ **left**(): *number*

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

###  setLeft

▸ **setLeft**(`height`: number): *void*

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

###  setTop

▸ **setTop**(`height`: number): *void*

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

###  top

▸ **top**(): *number*

**Returns:** *number*

___

###  width

▸ **width**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QRect](qrect.md)*
