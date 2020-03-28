---
id: "qlistwidgetsignals"
title: "QListWidgetSignals"
sidebar_label: "QListWidgetSignals"
---

## Hierarchy

  ↳ [QAbstractItemViewSignals](qabstractitemviewsignals.md)

  ↳ **QListWidgetSignals**

## Index

### Properties

* [currentItemChanged](qlistwidgetsignals.md#currentitemchanged)
* [currentRowChanged](qlistwidgetsignals.md#currentrowchanged)
* [currentTextChanged](qlistwidgetsignals.md#currenttextchanged)
* [customContextMenuRequested](qlistwidgetsignals.md#customcontextmenurequested)
* [itemActivated](qlistwidgetsignals.md#itemactivated)
* [itemChanged](qlistwidgetsignals.md#itemchanged)
* [itemClicked](qlistwidgetsignals.md#itemclicked)
* [itemDoubleClicked](qlistwidgetsignals.md#itemdoubleclicked)
* [itemEntered](qlistwidgetsignals.md#itementered)
* [itemPressed](qlistwidgetsignals.md#itempressed)
* [itemSelectionChanged](qlistwidgetsignals.md#itemselectionchanged)
* [objectNameChanged](qlistwidgetsignals.md#objectnamechanged)
* [viewportEntered](qlistwidgetsignals.md#viewportentered)
* [windowIconChanged](qlistwidgetsignals.md#windowiconchanged)
* [windowTitleChanged](qlistwidgetsignals.md#windowtitlechanged)

## Properties

###  currentItemChanged

• **currentItemChanged**: *function*

#### Type declaration:

▸ (`current`: [QListWidgetItem](../classes/qlistwidgetitem.md), `previous`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`current` | [QListWidgetItem](../classes/qlistwidgetitem.md) |
`previous` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  currentRowChanged

• **currentRowChanged**: *function*

#### Type declaration:

▸ (`currentRow`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`currentRow` | number |

___

###  currentTextChanged

• **currentTextChanged**: *function*

#### Type declaration:

▸ (`currentText`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`currentText` | string |

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

###  itemActivated

• **itemActivated**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemChanged

• **itemChanged**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemClicked

• **itemClicked**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemDoubleClicked

• **itemDoubleClicked**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemEntered

• **itemEntered**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemPressed

• **itemPressed**: *function*

#### Type declaration:

▸ (`item`: [QListWidgetItem](../classes/qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](../classes/qlistwidgetitem.md) |

___

###  itemSelectionChanged

• **itemSelectionChanged**: *function*

#### Type declaration:

▸ (): *void*

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

###  viewportEntered

• **viewportEntered**: *function*

*Inherited from [QAbstractItemViewSignals](qabstractitemviewsignals.md).[viewportEntered](qabstractitemviewsignals.md#viewportentered)*

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
