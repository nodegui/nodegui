---
id: "qprogressdialogsignals"
title: "QProgressDialogSignals"
sidebar_label: "QProgressDialogSignals"
---

## Hierarchy

  ↳ [QDialogSignals](qdialogsignals.md)

  ↳ **QProgressDialogSignals**

## Index

### Properties

* [accepted](qprogressdialogsignals.md#accepted)
* [canceled](qprogressdialogsignals.md#canceled)
* [customContextMenuRequested](qprogressdialogsignals.md#customcontextmenurequested)
* [finished](qprogressdialogsignals.md#finished)
* [objectNameChanged](qprogressdialogsignals.md#objectnamechanged)
* [rejected](qprogressdialogsignals.md#rejected)
* [windowIconChanged](qprogressdialogsignals.md#windowiconchanged)
* [windowTitleChanged](qprogressdialogsignals.md#windowtitlechanged)

## Properties

###  accepted

• **accepted**: *function*

*Inherited from [QDialogSignals](qdialogsignals.md).[accepted](qdialogsignals.md#accepted)*

#### Type declaration:

▸ (): *void*

___

###  canceled

• **canceled**: *function*

#### Type declaration:

▸ (): *void*

___

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
