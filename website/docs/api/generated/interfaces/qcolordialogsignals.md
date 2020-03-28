---
id: "qcolordialogsignals"
title: "QColorDialogSignals"
sidebar_label: "QColorDialogSignals"
---

## Hierarchy

  ↳ [QDialogSignals](qdialogsignals.md)

  ↳ **QColorDialogSignals**

## Index

### Properties

* [accepted](qcolordialogsignals.md#accepted)
* [colorSelected](qcolordialogsignals.md#colorselected)
* [currentColorChanged](qcolordialogsignals.md#currentcolorchanged)
* [customContextMenuRequested](qcolordialogsignals.md#customcontextmenurequested)
* [finished](qcolordialogsignals.md#finished)
* [objectNameChanged](qcolordialogsignals.md#objectnamechanged)
* [rejected](qcolordialogsignals.md#rejected)
* [windowIconChanged](qcolordialogsignals.md#windowiconchanged)
* [windowTitleChanged](qcolordialogsignals.md#windowtitlechanged)

## Properties

###  accepted

• **accepted**: *function*

*Inherited from [QDialogSignals](qdialogsignals.md).[accepted](qdialogsignals.md#accepted)*

#### Type declaration:

▸ (): *void*

___

###  colorSelected

• **colorSelected**: *function*

#### Type declaration:

▸ (`color`: [QColor](../classes/qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](../classes/qcolor.md) |

___

###  currentColorChanged

• **currentColorChanged**: *function*

#### Type declaration:

▸ (`color`: [QColor](../classes/qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](../classes/qcolor.md) |

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
