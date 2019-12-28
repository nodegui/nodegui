---
id: "qcolor"
title: "QColor"
sidebar_label: "QColor"
---

## Hierarchy

* [Component](component.md)

  ↳ **QColor**

## Index

### Constructors

* [constructor](qcolor.md#constructor)

### Properties

* [native](qcolor.md#native)
* [nodeChildren](qcolor.md#nodechildren)
* [nodeParent](qcolor.md#optional-nodeparent)

### Methods

* [alpha](qcolor.md#alpha)
* [blue](qcolor.md#blue)
* [green](qcolor.md#green)
* [red](qcolor.md#red)
* [setAlpha](qcolor.md#setalpha)
* [setBlue](qcolor.md#setblue)
* [setGreen](qcolor.md#setgreen)
* [setNodeParent](qcolor.md#setnodeparent)
* [setRed](qcolor.md#setred)
* [fromQVariant](qcolor.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QColor**(): *[QColor](qcolor.md)*

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`colorString`: string): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`colorString` | string |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`color`: [GlobalColor](../enums/globalcolor.md)): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [GlobalColor](../enums/globalcolor.md) |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`r?`: undefined | number, `g?`: undefined | number, `b?`: undefined | number, `a?`: undefined | number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`r?` | undefined &#124; number |
`g?` | undefined &#124; number |
`b?` | undefined &#124; number |
`a?` | undefined &#124; number |

**Returns:** *[QColor](qcolor.md)*

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

###  alpha

▸ **alpha**(): *number*

**Returns:** *number*

___

###  blue

▸ **blue**(): *number*

**Returns:** *number*

___

###  green

▸ **green**(): *number*

**Returns:** *number*

___

###  red

▸ **red**(): *number*

**Returns:** *number*

___

###  setAlpha

▸ **setAlpha**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setBlue

▸ **setBlue**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setGreen

▸ **setGreen**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

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

###  setRed

▸ **setRed**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QColor](qcolor.md)*
