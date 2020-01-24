---
id: "qtoolbuttonsignals"
title: "QToolButtonSignals"
sidebar_label: "QToolButtonSignals"
---

## Hierarchy

  ↳ [QAbstractButtonSignals](qabstractbuttonsignals.md)

  ↳ **QToolButtonSignals**

## Index

### Properties

* [clicked](qtoolbuttonsignals.md#clicked)
* [customContextMenuRequested](qtoolbuttonsignals.md#customcontextmenurequested)
* [objectNameChanged](qtoolbuttonsignals.md#objectnamechanged)
* [pressed](qtoolbuttonsignals.md#pressed)
* [released](qtoolbuttonsignals.md#released)
* [toggled](qtoolbuttonsignals.md#toggled)
* [triggered](qtoolbuttonsignals.md#triggered)
* [windowIconChanged](qtoolbuttonsignals.md#windowiconchanged)
* [windowTitleChanged](qtoolbuttonsignals.md#windowtitlechanged)

## Properties

###  clicked

• **clicked**: *function*

*Inherited from [QAbstractButtonSignals](qabstractbuttonsignals.md).[clicked](qabstractbuttonsignals.md#clicked)*

#### Type declaration:

▸ (`checked`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`checked` | boolean |

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

*Inherited from [QAbstractButtonSignals](qabstractbuttonsignals.md).[pressed](qabstractbuttonsignals.md#pressed)*

#### Type declaration:

▸ (): *void*

___

###  released

• **released**: *function*

*Inherited from [QAbstractButtonSignals](qabstractbuttonsignals.md).[released](qabstractbuttonsignals.md#released)*

#### Type declaration:

▸ (): *void*

___

###  toggled

• **toggled**: *function*

*Inherited from [QAbstractButtonSignals](qabstractbuttonsignals.md).[toggled](qabstractbuttonsignals.md#toggled)*

#### Type declaration:

▸ (`checked`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`checked` | boolean |

___

###  triggered

• **triggered**: *function*

#### Type declaration:

▸ (`nativeAction`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`nativeAction` | [NativeElement](../globals.md#nativeelement) |

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
