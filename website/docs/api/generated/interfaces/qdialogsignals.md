---
id: "qdialogsignals"
title: "QDialogSignals"
sidebar_label: "QDialogSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QDialogSignals**

  ↳ [QColorDialogSignals](qcolordialogsignals.md)

  ↳ [QFileDialogSignals](qfiledialogsignals.md)

  ↳ [QFontDialogSignals](qfontdialogsignals.md)

  ↳ [QProgressDialogSignals](qprogressdialogsignals.md)

  ↳ [QMessageBoxSignals](qmessageboxsignals.md)

  ↳ [QInputDialogSignals](qinputdialogsignals.md)

## Index

### Properties

* [accepted](qdialogsignals.md#accepted)
* [customContextMenuRequested](qdialogsignals.md#customcontextmenurequested)
* [finished](qdialogsignals.md#finished)
* [objectNameChanged](qdialogsignals.md#objectnamechanged)
* [rejected](qdialogsignals.md#rejected)
* [windowIconChanged](qdialogsignals.md#windowiconchanged)
* [windowTitleChanged](qdialogsignals.md#windowtitlechanged)

## Properties

###  accepted

• **accepted**: *function*

#### Type declaration:

▸ (): *void*

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

###  finished

• **finished**: *function*

#### Type declaration:

▸ (`result`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`result` | number |

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

###  rejected

• **rejected**: *function*

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
