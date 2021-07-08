---
id: "qstatusbarsignals"
title: "QStatusBarSignals"
sidebar_label: "QStatusBarSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QStatusBarSignals**

## Index

### Properties

* [customContextMenuRequested](qstatusbarsignals.md#customcontextmenurequested)
* [messageChanged](qstatusbarsignals.md#messagechanged)
* [objectNameChanged](qstatusbarsignals.md#objectnamechanged)
* [windowIconChanged](qstatusbarsignals.md#windowiconchanged)
* [windowTitleChanged](qstatusbarsignals.md#windowtitlechanged)

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

###  messageChanged

• **messageChanged**: *function*

#### Type declaration:

▸ (`message`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`message` | string |

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
