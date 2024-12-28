---
id: "qabstractitemviewsignals"
title: "QAbstractItemViewSignals"
sidebar_label: "QAbstractItemViewSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QAbstractItemViewSignals**

  ↳ [QListWidgetSignals](qlistwidgetsignals.md)

  ↳ [QTableWidgetSignals](qtablewidgetsignals.md)

## Index

### Properties

* [activated](qabstractitemviewsignals.md#activated)
* [clicked](qabstractitemviewsignals.md#clicked)
* [customContextMenuRequested](qabstractitemviewsignals.md#customcontextmenurequested)
* [doubleClicked](qabstractitemviewsignals.md#doubleclicked)
* [entered](qabstractitemviewsignals.md#entered)
* [iconSizeChanged](qabstractitemviewsignals.md#iconsizechanged)
* [objectNameChanged](qabstractitemviewsignals.md#objectnamechanged)
* [pressed](qabstractitemviewsignals.md#pressed)
* [viewportEntered](qabstractitemviewsignals.md#viewportentered)
* [windowIconChanged](qabstractitemviewsignals.md#windowiconchanged)
* [windowTitleChanged](qabstractitemviewsignals.md#windowtitlechanged)

## Properties

###  activated

• **activated**: *function*

#### Type declaration:

▸ (`index`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [NativeElement](../globals.md#nativeelement) |

___

###  clicked

• **clicked**: *function*

#### Type declaration:

▸ (`index`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [NativeElement](../globals.md#nativeelement) |

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

###  doubleClicked

• **doubleClicked**: *function*

#### Type declaration:

▸ (`index`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [NativeElement](../globals.md#nativeelement) |

___

###  entered

• **entered**: *function*

#### Type declaration:

▸ (`index`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [NativeElement](../globals.md#nativeelement) |

___

###  iconSizeChanged

• **iconSizeChanged**: *function*

#### Type declaration:

▸ (`size`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [NativeElement](../globals.md#nativeelement) |

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

###  pressed

• **pressed**: *function*

#### Type declaration:

▸ (`index`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [NativeElement](../globals.md#nativeelement) |

___

###  viewportEntered

• **viewportEntered**: *function*

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
