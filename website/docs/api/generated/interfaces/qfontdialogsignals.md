---
id: "qfontdialogsignals"
title: "QFontDialogSignals"
sidebar_label: "QFontDialogSignals"
---

## Hierarchy

  ↳ [QDialogSignals](qdialogsignals.md)

  ↳ **QFontDialogSignals**

## Index

### Properties

* [accepted](qfontdialogsignals.md#accepted)
* [currentFontChanged](qfontdialogsignals.md#currentfontchanged)
* [customContextMenuRequested](qfontdialogsignals.md#customcontextmenurequested)
* [finished](qfontdialogsignals.md#finished)
* [fontSelected](qfontdialogsignals.md#fontselected)
* [objectNameChanged](qfontdialogsignals.md#objectnamechanged)
* [rejected](qfontdialogsignals.md#rejected)
* [windowIconChanged](qfontdialogsignals.md#windowiconchanged)
* [windowTitleChanged](qfontdialogsignals.md#windowtitlechanged)

## Properties

###  accepted

• **accepted**: *function*

*Inherited from [QDialogSignals](qdialogsignals.md).[accepted](qdialogsignals.md#accepted)*

#### Type declaration:

▸ (): *void*

___

###  currentFontChanged

• **currentFontChanged**: *function*

#### Type declaration:

▸ (`font`: [QFont](../classes/qfont.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](../classes/qfont.md) |

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

###  fontSelected

• **fontSelected**: *function*

#### Type declaration:

▸ (`font`: [QFont](../classes/qfont.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](../classes/qfont.md) |

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
