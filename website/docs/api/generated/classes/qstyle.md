---
id: "qstyle"
title: "QStyle"
sidebar_label: "QStyle"
---

## Hierarchy

* [Component](component.md)

  ↳ **QStyle**

## Index

### Constructors

* [constructor](qstyle.md#constructor)

### Properties

* [native](qstyle.md#native)
* [nodeChildren](qstyle.md#nodechildren)
* [nodeParent](qstyle.md#optional-nodeparent)

### Methods

* [pixelMetric](qstyle.md#pixelmetric)
* [setNodeParent](qstyle.md#setnodeparent)

## Constructors

###  constructor

\+ **new QStyle**(`native`: [NativeElement](../globals.md#nativeelement)): *[QStyle](qstyle.md)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QStyle](qstyle.md)*

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

###  pixelMetric

▸ **pixelMetric**(`metric`: [QStylePixelMetric](../enums/qstylepixelmetric.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`metric` | [QStylePixelMetric](../enums/qstylepixelmetric.md) |

**Returns:** *number*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*
