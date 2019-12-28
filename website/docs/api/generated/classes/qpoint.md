---
id: "qpoint"
title: "QPoint"
sidebar_label: "QPoint"
---

## Hierarchy

* [Component](component.md)

  ↳ **QPoint**

## Index

### Constructors

* [constructor](qpoint.md#constructor)

### Properties

* [native](qpoint.md#native)
* [nodeChildren](qpoint.md#nodechildren)
* [nodeParent](qpoint.md#optional-nodeparent)

### Methods

* [setNodeParent](qpoint.md#setnodeparent)
* [setX](qpoint.md#setx)
* [setY](qpoint.md#sety)
* [x](qpoint.md#x)
* [y](qpoint.md#y)
* [fromQVariant](qpoint.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QPoint**(): *[QPoint](qpoint.md)*

**Returns:** *[QPoint](qpoint.md)*

\+ **new QPoint**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QPoint](qpoint.md)*

\+ **new QPoint**(`x?`: undefined | number, `y?`: undefined | number): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`x?` | undefined &#124; number |
`y?` | undefined &#124; number |

**Returns:** *[QPoint](qpoint.md)*

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

###  setX

▸ **setX**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setY

▸ **setY**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  x

▸ **x**(): *number*

**Returns:** *number*

___

###  y

▸ **y**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QPoint](qpoint.md)*
