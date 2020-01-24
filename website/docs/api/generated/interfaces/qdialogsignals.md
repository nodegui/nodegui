---
id: "qdialogsignals"
title: "QDialogSignals"
sidebar_label: "QDialogSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QDialogSignals**

  ↳ [QFileDialogSignals](qfiledialogsignals.md)

  ↳ [QMessageBoxSignals](qmessageboxsignals.md)

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
