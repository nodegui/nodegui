---
id: "qsplittersignals"
title: "QSplitterSignals"
sidebar_label: "QSplitterSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QSplitterSignals**

## Index

### Properties

* [customContextMenuRequested](qsplittersignals.md#customcontextmenurequested)
* [objectNameChanged](qsplittersignals.md#objectnamechanged)
* [splitterMoved](qsplittersignals.md#splittermoved)
* [windowIconChanged](qsplittersignals.md#windowiconchanged)
* [windowTitleChanged](qsplittersignals.md#windowtitlechanged)

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

###  splitterMoved

• **splitterMoved**: *function*

#### Type declaration:

▸ (`pos`: number, `index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | number |
`index` | number |

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
