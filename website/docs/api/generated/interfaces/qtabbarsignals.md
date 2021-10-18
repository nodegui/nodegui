---
id: "qtabbarsignals"
title: "QTabBarSignals"
sidebar_label: "QTabBarSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QTabBarSignals**

## Index

### Properties

* [currentChanged](qtabbarsignals.md#currentchanged)
* [customContextMenuRequested](qtabbarsignals.md#customcontextmenurequested)
* [objectNameChanged](qtabbarsignals.md#objectnamechanged)
* [tabBarClicked](qtabbarsignals.md#tabbarclicked)
* [tabBarDoubleClicked](qtabbarsignals.md#tabbardoubleclicked)
* [tabCloseRequested](qtabbarsignals.md#tabcloserequested)
* [tabMoved](qtabbarsignals.md#tabmoved)
* [windowIconChanged](qtabbarsignals.md#windowiconchanged)
* [windowTitleChanged](qtabbarsignals.md#windowtitlechanged)

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

###  tabMoved

• **tabMoved**: *function*

#### Type declaration:

▸ (`from`: number, `to`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`from` | number |
`to` | number |

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
