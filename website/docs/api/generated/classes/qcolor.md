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

### Methods

* [alpha](qcolor.md#alpha)
* [blue](qcolor.md#blue)
* [green](qcolor.md#green)
* [red](qcolor.md#red)
* [rgb](qcolor.md#rgb)
* [rgba](qcolor.md#rgba)
* [setAlpha](qcolor.md#setalpha)
* [setBlue](qcolor.md#setblue)
* [setGreen](qcolor.md#setgreen)
* [setRed](qcolor.md#setred)
* [fromCmyk](qcolor.md#static-fromcmyk)
* [fromCmykF](qcolor.md#static-fromcmykf)
* [fromHsl](qcolor.md#static-fromhsl)
* [fromHslF](qcolor.md#static-fromhslf)
* [fromHsv](qcolor.md#static-fromhsv)
* [fromHsvF](qcolor.md#static-fromhsvf)
* [fromQVariant](qcolor.md#static-fromqvariant)
* [fromRgb](qcolor.md#static-fromrgb)
* [fromRgbF](qcolor.md#static-fromrgbf)

## Constructors

###  constructor

\+ **new QColor**(): *[QColor](qcolor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QColor](qcolor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`colorString`: string): *[QColor](qcolor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`colorString` | string |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`color`: [GlobalColor](../enums/globalcolor.md)): *[QColor](qcolor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [GlobalColor](../enums/globalcolor.md) |

**Returns:** *[QColor](qcolor.md)*

\+ **new QColor**(`r?`: number, `g?`: number, `b?`: number, `a?`: number): *[QColor](qcolor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`r?` | number |
`g?` | number |
`b?` | number |
`a?` | number |

**Returns:** *[QColor](qcolor.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

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

###  rgb

▸ **rgb**(): *number*

Returns the color as a number in ARGB32 format.

**Returns:** *number*

___

###  rgba

▸ **rgba**(): *number*

Returns the color as a number in ARGB32 format.

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

###  setRed

▸ **setRed**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

### `Static` fromCmyk

▸ **fromCmyk**(`c`: number, `m`: number, `y`: number, `k`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`c` | number | - |
`m` | number | - |
`y` | number | - |
`k` | number | - |
`a` | number | 255 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromCmykF

▸ **fromCmykF**(`c`: number, `m`: number, `y`: number, `k`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`c` | number | - |
`m` | number | - |
`y` | number | - |
`k` | number | - |
`a` | number | 1 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromHsl

▸ **fromHsl**(`h`: number, `s`: number, `l`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`s` | number | - |
`l` | number | - |
`a` | number | 255 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromHslF

▸ **fromHslF**(`h`: number, `s`: number, `l`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`s` | number | - |
`l` | number | - |
`a` | number | 1 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromHsv

▸ **fromHsv**(`h`: number, `s`: number, `v`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`s` | number | - |
`v` | number | - |
`a` | number | 255 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromHsvF

▸ **fromHsvF**(`h`: number, `s`: number, `v`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`s` | number | - |
`v` | number | - |
`a` | number | 1 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromRgb

▸ **fromRgb**(`r`: number, `g`: number, `b`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`r` | number | - |
`g` | number | - |
`b` | number | - |
`a` | number | 255 |

**Returns:** *[QColor](qcolor.md)*

___

### `Static` fromRgbF

▸ **fromRgbF**(`r`: number, `g`: number, `b`: number, `a`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`r` | number | - |
`g` | number | - |
`b` | number | - |
`a` | number | 1 |

**Returns:** *[QColor](qcolor.md)*
