---
id: "qpoint"
title: "QPoint"
sidebar_label: "QPoint"
---

The QPoint class defines a point in the plane using integer precision.

## Hierarchy

* [Component](component.md)

  ↳ **QPoint**

## Index

### Constructors

* [constructor](qpoint.md#constructor)

### Properties

* [native](qpoint.md#native)

### Methods

* [isNull](qpoint.md#isnull)
* [manhattanLength](qpoint.md#manhattanlength)
* [setX](qpoint.md#setx)
* [setY](qpoint.md#sety)
* [transposed](qpoint.md#transposed)
* [x](qpoint.md#x)
* [y](qpoint.md#y)
* [fromQVariant](qpoint.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QPoint**(): *[QPoint](qpoint.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPoint](qpoint.md)*

\+ **new QPoint**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QPoint](qpoint.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QPoint](qpoint.md)*

\+ **new QPoint**(`x?`: number, `y?`: number): *[QPoint](qpoint.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`x?` | number |
`y?` | number |

**Returns:** *[QPoint](qpoint.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  isNull

▸ **isNull**(): *boolean*

Returns true if both the x and y coordinates are set to 0.0 (ignoring the sign); otherwise returns false.

**Returns:** *boolean*

___

###  manhattanLength

▸ **manhattanLength**(): *number*

Returns the sum of the absolute values of x() and y(), traditionally known as the "Manhattan length" of the vector from the origin to the point.

**Returns:** *number*

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

###  transposed

▸ **transposed**(): *[QPoint](qpoint.md)*

Returns a point with x and y coordinates exchanged

**Returns:** *[QPoint](qpoint.md)*

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
