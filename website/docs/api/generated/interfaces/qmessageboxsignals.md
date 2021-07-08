---
id: "qmessageboxsignals"
title: "QMessageBoxSignals"
sidebar_label: "QMessageBoxSignals"
---

## Hierarchy

  ↳ [QDialogSignals](qdialogsignals.md)

  ↳ **QMessageBoxSignals**

## Index

### Properties

* [accepted](qmessageboxsignals.md#accepted)
* [buttonClicked](qmessageboxsignals.md#buttonclicked)
* [customContextMenuRequested](qmessageboxsignals.md#customcontextmenurequested)
* [finished](qmessageboxsignals.md#finished)
* [objectNameChanged](qmessageboxsignals.md#objectnamechanged)
* [rejected](qmessageboxsignals.md#rejected)
* [windowIconChanged](qmessageboxsignals.md#windowiconchanged)
* [windowTitleChanged](qmessageboxsignals.md#windowtitlechanged)

## Properties

###  accepted

• **accepted**: *function*

*Inherited from [QDialogSignals](qdialogsignals.md).[accepted](qdialogsignals.md#accepted)*

#### Type declaration:

▸ (): *void*

___

###  buttonClicked

• **buttonClicked**: *function*

#### Type declaration:

▸ (`buttonRawPointer`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`buttonRawPointer` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QAbstractButton*"› |

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

*Inherited from [QDialogSignals](qdialogsignals.md).[finished](qdialogsignals.md#finished)*

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

*Inherited from [QDialogSignals](qdialogsignals.md).[rejected](qdialogsignals.md#rejected)*

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
