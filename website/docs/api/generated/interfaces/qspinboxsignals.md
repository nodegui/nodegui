---
id: "qspinboxsignals"
title: "QSpinBoxSignals"
sidebar_label: "QSpinBoxSignals"
---

## Hierarchy

  ↳ [QAbstractSpinBoxSignals](qabstractspinboxsignals.md)

  ↳ **QSpinBoxSignals**

## Index

### Properties

* [customContextMenuRequested](qspinboxsignals.md#customcontextmenurequested)
* [editingFinished](qspinboxsignals.md#editingfinished)
* [objectNameChanged](qspinboxsignals.md#objectnamechanged)
* [valueChanged](qspinboxsignals.md#valuechanged)
* [windowIconChanged](qspinboxsignals.md#windowiconchanged)
* [windowTitleChanged](qspinboxsignals.md#windowtitlechanged)

## Properties

###  customContextMenuRequested

• **customContextMenuRequested**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[customContextMenuRequested](qwidgetsignals.md#customcontextmenurequested)*

#### Type declaration:

▸ (`pos`: object): *void*

**Parameters:**

▪ **pos**: *object*

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

___

###  editingFinished

• **editingFinished**: *function*

*Inherited from [QAbstractSpinBoxSignals](qabstractspinboxsignals.md).[editingFinished](qabstractspinboxsignals.md#editingfinished)*

#### Type declaration:

▸ (): *void*

___

###  objectNameChanged

• **objectNameChanged**: *function*

*Inherited from [QObjectSignals](qobjectsignals.md).[objectNameChanged](qobjectsignals.md#objectnamechanged)*

#### Type declaration:

▸ (`objectName`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

___

###  valueChanged

• **valueChanged**: *function*

#### Type declaration:

▸ (`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

___

###  windowIconChanged

• **windowIconChanged**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[windowIconChanged](qwidgetsignals.md#windowiconchanged)*

#### Type declaration:

▸ (`iconNative`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`iconNative` | [NativeElement](../globals.md#nativeelement) |

___

###  windowTitleChanged

• **windowTitleChanged**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[windowTitleChanged](qwidgetsignals.md#windowtitlechanged)*

#### Type declaration:

▸ (`title`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |
