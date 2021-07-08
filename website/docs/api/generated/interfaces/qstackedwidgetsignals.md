---
id: "qstackedwidgetsignals"
title: "QStackedWidgetSignals"
sidebar_label: "QStackedWidgetSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QStackedWidgetSignals**

## Index

### Properties

* [currentChanged](qstackedwidgetsignals.md#currentchanged)
* [customContextMenuRequested](qstackedwidgetsignals.md#customcontextmenurequested)
* [objectNameChanged](qstackedwidgetsignals.md#objectnamechanged)
* [windowIconChanged](qstackedwidgetsignals.md#windowiconchanged)
* [windowTitleChanged](qstackedwidgetsignals.md#windowtitlechanged)

## Properties

###  currentChanged

• **currentChanged**: *function*

#### Type declaration:

▸ (`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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
