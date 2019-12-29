---
id: "qurl"
title: "QUrl"
sidebar_label: "QUrl"
---

## Hierarchy

* [Component](component.md)

  ↳ **QUrl**

## Index

### Constructors

* [constructor](qurl.md#constructor)

### Properties

* [native](qurl.md#native)
* [nodeChildren](qurl.md#nodechildren)
* [nodeParent](qurl.md#optional-nodeparent)

### Methods

* [setNodeParent](qurl.md#setnodeparent)
* [setUrl](qurl.md#seturl)
* [toString](qurl.md#tostring)
* [fromQVariant](qurl.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QUrl**(): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QUrl](qurl.md)*

\+ **new QUrl**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QUrl](qurl.md)*

\+ **new QUrl**(`url`: string, `parsingMode?`: [ParsingMode](../enums/parsingmode.md)): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`url` | string |
`parsingMode?` | [ParsingMode](../enums/parsingmode.md) |

**Returns:** *[QUrl](qurl.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setUrl

▸ **setUrl**(`url`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`url` | string |

**Returns:** *void*

___

###  toString

▸ **toString**(): *string*

**Returns:** *string*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QUrl](qurl.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QUrl](qurl.md)*
