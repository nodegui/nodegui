---
id: "qdatetimeeditsignals"
title: "QDateTimeEditSignals"
sidebar_label: "QDateTimeEditSignals"
---

## Hierarchy

  ↳ [QAbstractSpinBoxSignals](qabstractspinboxsignals.md)

  ↳ **QDateTimeEditSignals**

## Index

### Properties

* [customContextMenuRequested](qdatetimeeditsignals.md#customcontextmenurequested)
* [dateChanged](qdatetimeeditsignals.md#datechanged)
* [dateTimeChanged](qdatetimeeditsignals.md#datetimechanged)
* [editingFinished](qdatetimeeditsignals.md#editingfinished)
* [objectNameChanged](qdatetimeeditsignals.md#objectnamechanged)
* [timeChanged](qdatetimeeditsignals.md#timechanged)
* [windowIconChanged](qdatetimeeditsignals.md#windowiconchanged)
* [windowTitleChanged](qdatetimeeditsignals.md#windowtitlechanged)

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

###  dateChanged

• **dateChanged**: *function*

#### Type declaration:

▸ (`date`: [QDate](../classes/qdate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`date` | [QDate](../classes/qdate.md) |

___

###  dateTimeChanged

• **dateTimeChanged**: *function*

#### Type declaration:

▸ (`datetime`: [QDateTime](../classes/qdatetime.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`datetime` | [QDateTime](../classes/qdatetime.md) |

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

###  timeChanged

• **timeChanged**: *function*

#### Type declaration:

▸ (`time`: [QTime](../classes/qtime.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`time` | [QTime](../classes/qtime.md) |

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
