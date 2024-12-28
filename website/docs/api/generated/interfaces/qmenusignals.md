---
id: "qmenusignals"
title: "QMenuSignals"
sidebar_label: "QMenuSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QMenuSignals**

## Index

### Properties

* [aboutToHide](qmenusignals.md#abouttohide)
* [aboutToShow](qmenusignals.md#abouttoshow)
* [customContextMenuRequested](qmenusignals.md#customcontextmenurequested)
* [hovered](qmenusignals.md#hovered)
* [objectNameChanged](qmenusignals.md#objectnamechanged)
* [triggered](qmenusignals.md#triggered)
* [windowIconChanged](qmenusignals.md#windowiconchanged)
* [windowTitleChanged](qmenusignals.md#windowtitlechanged)

## Properties

###  aboutToHide

• **aboutToHide**: *function*

#### Type declaration:

▸ (): *void*

___

###  aboutToShow

• **aboutToShow**: *function*

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

###  hovered

• **hovered**: *function*

#### Type declaration:

▸ (`action`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [NativeElement](../globals.md#nativeelement) |

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

###  triggered

• **triggered**: *function*

#### Type declaration:

▸ (`action`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [NativeElement](../globals.md#nativeelement) |

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
