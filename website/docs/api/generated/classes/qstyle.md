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

### Methods

* [pixelMetric](qstyle.md#pixelmetric)
* [polish](qstyle.md#polish)
* [unpolish](qstyle.md#unpolish)

## Constructors

###  constructor

\+ **new QStyle**(`native`: [NativeElement](../globals.md#nativeelement)): *[QStyle](qstyle.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QStyle](qstyle.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  pixelMetric

▸ **pixelMetric**(`metric`: [QStylePixelMetric](../enums/qstylepixelmetric.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`metric` | [QStylePixelMetric](../enums/qstylepixelmetric.md) |

**Returns:** *number*

___

###  polish

▸ **polish**(`widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  unpolish

▸ **unpolish**(`widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*
