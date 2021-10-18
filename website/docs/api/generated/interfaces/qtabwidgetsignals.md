---
id: "qtabwidgetsignals"
title: "QTabWidgetSignals"
sidebar_label: "QTabWidgetSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QTabWidgetSignals**

## Index

### Properties

* [currentChanged](qtabwidgetsignals.md#currentchanged)
* [customContextMenuRequested](qtabwidgetsignals.md#customcontextmenurequested)
* [objectNameChanged](qtabwidgetsignals.md#objectnamechanged)
* [tabBarClicked](qtabwidgetsignals.md#tabbarclicked)
* [tabBarDoubleClicked](qtabwidgetsignals.md#tabbardoubleclicked)
* [tabCloseRequested](qtabwidgetsignals.md#tabcloserequested)
* [windowIconChanged](qtabwidgetsignals.md#windowiconchanged)
* [windowTitleChanged](qtabwidgetsignals.md#windowtitlechanged)

## Properties

###  currentChanged

• **currentChanged**: *function*

#### Type declaration:

▸ (`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

###  tabBarClicked

• **tabBarClicked**: *function*

#### Type declaration:

▸ (`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

___

###  tabBarDoubleClicked

• **tabBarDoubleClicked**: *function*

#### Type declaration:

▸ (`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

___

###  tabCloseRequested

• **tabCloseRequested**: *function*

#### Type declaration:

▸ (`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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
