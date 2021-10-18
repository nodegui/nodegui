---
id: "qabstractspinboxsignals"
title: "QAbstractSpinBoxSignals"
sidebar_label: "QAbstractSpinBoxSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QAbstractSpinBoxSignals**

  ↳ [QDateTimeEditSignals](qdatetimeeditsignals.md)

  ↳ [QDoubleSpinBoxSignals](qdoublespinboxsignals.md)

  ↳ [QSpinBoxSignals](qspinboxsignals.md)

## Index

### Properties

* [customContextMenuRequested](qabstractspinboxsignals.md#customcontextmenurequested)
* [editingFinished](qabstractspinboxsignals.md#editingfinished)
* [objectNameChanged](qabstractspinboxsignals.md#objectnamechanged)
* [windowIconChanged](qabstractspinboxsignals.md#windowiconchanged)
* [windowTitleChanged](qabstractspinboxsignals.md#windowtitlechanged)

## Properties

###  customContextMenuRequested

• **customContextMenuRequested**: *function*

*Inherited from [QMenuSignals](qmenusignals.md).[customContextMenuRequested](qmenusignals.md#customcontextmenurequested)*

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

###  windowIconChanged

• **windowIconChanged**: *function*

*Inherited from [QMenuSignals](qmenusignals.md).[windowIconChanged](qmenusignals.md#windowiconchanged)*

#### Type declaration:

▸ (`iconNative`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`iconNative` | [NativeElement](../globals.md#nativeelement) |

___

###  windowTitleChanged

• **windowTitleChanged**: *function*

*Inherited from [QMenuSignals](qmenusignals.md).[windowTitleChanged](qmenusignals.md#windowtitlechanged)*

#### Type declaration:

▸ (`title`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |
