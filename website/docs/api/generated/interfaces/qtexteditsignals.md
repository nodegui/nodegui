---
id: "qtexteditsignals"
title: "QTextEditSignals"
sidebar_label: "QTextEditSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QTextEditSignals**

  ↳ [QTextBrowserSignals](qtextbrowsersignals.md)

## Index

### Properties

* [copyAvailable](qtexteditsignals.md#copyavailable)
* [cursorPositionChanged](qtexteditsignals.md#cursorpositionchanged)
* [customContextMenuRequested](qtexteditsignals.md#customcontextmenurequested)
* [objectNameChanged](qtexteditsignals.md#objectnamechanged)
* [redoAvailable](qtexteditsignals.md#redoavailable)
* [selectionChanged](qtexteditsignals.md#selectionchanged)
* [textChanged](qtexteditsignals.md#textchanged)
* [undoAvailable](qtexteditsignals.md#undoavailable)
* [windowIconChanged](qtexteditsignals.md#windowiconchanged)
* [windowTitleChanged](qtexteditsignals.md#windowtitlechanged)

## Properties

###  copyAvailable

• **copyAvailable**: *function*

#### Type declaration:

▸ (`yes`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`yes` | boolean |

___

###  cursorPositionChanged

• **cursorPositionChanged**: *function*

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

###  redoAvailable

• **redoAvailable**: *function*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

___

###  selectionChanged

• **selectionChanged**: *function*

#### Type declaration:

▸ (): *void*

___

###  textChanged

• **textChanged**: *function*

#### Type declaration:

▸ (): *void*

___

###  undoAvailable

• **undoAvailable**: *function*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

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
