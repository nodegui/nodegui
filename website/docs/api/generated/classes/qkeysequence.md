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
* [setNodeParent](qkeysequence.md#setnodeparent)

## Constructors

###  constructor

\+ **new QKeySequence**(): *[QKeySequence](qkeysequence.md)*

**Returns:** *[QKeySequence](qkeysequence.md)*

\+ **new QKeySequence**(`keySequence`: string): *[QKeySequence](qkeysequence.md)*

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

• **nodeChildren**: *Set‹unknown›* =  new Set()

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

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*
