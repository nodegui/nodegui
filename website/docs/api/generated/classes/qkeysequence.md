---
id: "qkeysequence"
title: "QKeySequence"
sidebar_label: "QKeySequence"
---

> The QKeySequence class encapsulates a key sequence as used by shortcuts. .

**This class is a JS wrapper around Qt's [QKeySequence class](https://doc.qt.io/qt-5/qkeysequence.html)**

### Example

```javascript
const { QKeySequence } = require("@nodegui/nodegui");

const keySequence = new QKeySequence(`Ctrl+L`);
```

## Hierarchy

* [Component](component.md)

  ↳ **QKeySequence**

## Index

### Constructors

* [constructor](qkeysequence.md#constructor)

### Properties

* [native](qkeysequence.md#native)
* [nodeChildren](qkeysequence.md#nodechildren)
* [nodeParent](qkeysequence.md#optional-nodeparent)

### Methods

* [count](qkeysequence.md#count)
* [isEmpty](qkeysequence.md#isempty)
* [matches](qkeysequence.md#matches)
* [setNodeParent](qkeysequence.md#setnodeparent)
* [toString](qkeysequence.md#tostring)
* [fromQVariant](qkeysequence.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QKeySequence**(): *[QKeySequence](qkeysequence.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QKeySequence](qkeysequence.md)*

\+ **new QKeySequence**(`native`: [NativeElement](../globals.md#nativeelement)): *[QKeySequence](qkeysequence.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QKeySequence](qkeysequence.md)*

\+ **new QKeySequence**(`keySequence`: string): *[QKeySequence](qkeysequence.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`keySequence` | string |

**Returns:** *[QKeySequence](qkeysequence.md)*

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

###  count

▸ **count**(): *number*

**Returns:** *number*

___

###  isEmpty

▸ **isEmpty**(): *boolean*

**Returns:** *boolean*

___

###  matches

▸ **matches**(`seq`: [QKeySequence](qkeysequence.md)): *[SequenceMatch](../enums/sequencematch.md)*

**Parameters:**

Name | Type |
------ | ------ |
`seq` | [QKeySequence](qkeysequence.md) |

**Returns:** *[SequenceMatch](../enums/sequencematch.md)*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  toString

▸ **toString**(`format`: [SequenceFormat](../enums/sequenceformat.md)): *string*

**Parameters:**

Name | Type |
------ | ------ |
`format` | [SequenceFormat](../enums/sequenceformat.md) |

**Returns:** *string*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QKeySequence](qkeysequence.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QKeySequence](qkeysequence.md)*
