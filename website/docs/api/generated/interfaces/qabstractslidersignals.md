---
id: "qabstractslidersignals"
title: "QAbstractSliderSignals"
sidebar_label: "QAbstractSliderSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QAbstractSliderSignals**

## Index

### Properties

* [actionTriggered](qabstractslidersignals.md#actiontriggered)
* [customContextMenuRequested](qabstractslidersignals.md#customcontextmenurequested)
* [objectNameChanged](qabstractslidersignals.md#objectnamechanged)
* [rangeChanged](qabstractslidersignals.md#rangechanged)
* [sliderMoved](qabstractslidersignals.md#slidermoved)
* [sliderPressed](qabstractslidersignals.md#sliderpressed)
* [sliderReleased](qabstractslidersignals.md#sliderreleased)
* [valueChanged](qabstractslidersignals.md#valuechanged)
* [windowIconChanged](qabstractslidersignals.md#windowiconchanged)
* [windowTitleChanged](qabstractslidersignals.md#windowtitlechanged)

## Properties

###  actionTriggered

• **actionTriggered**: *function*

#### Type declaration:

▸ (`action`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`action` | number |

___

###  customContextMenuRequested

• **customContextMenuRequested**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[customContextMenuRequested](qwidgetsignals.md#customcontextmenurequested)*

#### Type declaration:

▸ (`pos`: object): *void*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | object |

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

###  rangeChanged

• **rangeChanged**: *function*

#### Type declaration:

▸ (`min`: number, `max`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`min` | number |
`max` | number |

___

###  sliderMoved

• **sliderMoved**: *function*

#### Type declaration:

▸ (`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

___

###  sliderPressed

• **sliderPressed**: *function*

#### Type declaration:

▸ (): *void*

___

###  sliderReleased

• **sliderReleased**: *function*

#### Type declaration:

▸ (): *void*

___

###  valueChanged

• **valueChanged**: *function*

#### Type declaration:

▸ (`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

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
