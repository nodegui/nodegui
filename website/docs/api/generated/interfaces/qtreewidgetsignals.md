---
id: "qtreewidgetsignals"
title: "QTreeWidgetSignals"
sidebar_label: "QTreeWidgetSignals"
---

## Hierarchy

  ↳ [QWidgetSignals](qwidgetsignals.md)

  ↳ **QTreeWidgetSignals**

## Index

### Properties

* [currentItemChanged](qtreewidgetsignals.md#currentitemchanged)
* [customContextMenuRequested](qtreewidgetsignals.md#customcontextmenurequested)
* [itemActivated](qtreewidgetsignals.md#itemactivated)
* [itemChanged](qtreewidgetsignals.md#itemchanged)
* [itemClicked](qtreewidgetsignals.md#itemclicked)
* [itemCollapsed](qtreewidgetsignals.md#itemcollapsed)
* [itemDoubleClicked](qtreewidgetsignals.md#itemdoubleclicked)
* [itemEntered](qtreewidgetsignals.md#itementered)
* [itemExpanded](qtreewidgetsignals.md#itemexpanded)
* [itemPressed](qtreewidgetsignals.md#itempressed)
* [itemSelectionChanged](qtreewidgetsignals.md#itemselectionchanged)
* [objectNameChanged](qtreewidgetsignals.md#objectnamechanged)
* [windowIconChanged](qtreewidgetsignals.md#windowiconchanged)
* [windowTitleChanged](qtreewidgetsignals.md#windowtitlechanged)

## Properties

###  currentItemChanged

• **currentItemChanged**: *function*

#### Type declaration:

▸ (`current`: [QTreeWidgetItem](../classes/qtreewidgetitem.md), `previous`: [QTreeWidgetItem](../classes/qtreewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`current` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |
`previous` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |

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

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md) | null, `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) &#124; null |
`column` | number |

___

###  itemChanged

• **itemChanged**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md), `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |
`column` | number |

___

###  itemClicked

• **itemClicked**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md), `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |
`column` | number |

___

###  itemCollapsed

• **itemCollapsed**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |

___

###  itemDoubleClicked

• **itemDoubleClicked**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md) | null, `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) &#124; null |
`column` | number |

___

###  itemEntered

• **itemEntered**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md), `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |
`column` | number |

___

###  itemExpanded

• **itemExpanded**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) |

___

###  itemPressed

• **itemPressed**: *function*

#### Type declaration:

▸ (`item`: [QTreeWidgetItem](../classes/qtreewidgetitem.md) | null, `column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](../classes/qtreewidgetitem.md) &#124; null |
`column` | number |

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
