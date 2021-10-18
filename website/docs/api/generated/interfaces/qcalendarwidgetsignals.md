---
id: "qcalendarwidgetsignals"
title: "QCalendarWidgetSignals"
sidebar_label: "QCalendarWidgetSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QCalendarWidgetSignals**

## Index

### Properties

* [activated](qcalendarwidgetsignals.md#activated)
* [clicked](qcalendarwidgetsignals.md#clicked)
* [currentPageChanged](qcalendarwidgetsignals.md#currentpagechanged)
* [customContextMenuRequested](qcalendarwidgetsignals.md#customcontextmenurequested)
* [objectNameChanged](qcalendarwidgetsignals.md#objectnamechanged)
* [selectionChanged](qcalendarwidgetsignals.md#selectionchanged)
* [windowIconChanged](qcalendarwidgetsignals.md#windowiconchanged)
* [windowTitleChanged](qcalendarwidgetsignals.md#windowtitlechanged)

## Properties

###  activated

• **activated**: *function*

#### Type declaration:

▸ (`date`: [QDate](../classes/qdate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`date` | [QDate](../classes/qdate.md) |

___

###  clicked

• **clicked**: *function*

#### Type declaration:

▸ (`date`: [QDate](../classes/qdate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`date` | [QDate](../classes/qdate.md) |

___

###  currentPageChanged

• **currentPageChanged**: *function*

#### Type declaration:

▸ (`year`: number, `month`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`year` | number |
`month` | number |

___

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

###  selectionChanged

• **selectionChanged**: *function*

#### Type declaration:

▸ (): *void*

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
