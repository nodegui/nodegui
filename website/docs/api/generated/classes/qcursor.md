---
id: "qcursor"
title: "QCursor"
sidebar_label: "QCursor"
---

> The QCursor class provides scalable icons in different modes and states.

**This class is a JS wrapper around Qt's [QCursor class](https://doc.qt.io/qt-5/qcursor.html)**

### Example

```javascript
const { QCursor } = require("@nodegui/nodegui");

const cursor = new QCursor();
```

## Hierarchy

* [Component](component.md)

  ↳ **QCursor**

## Index

### Constructors

* [constructor](qcursor.md#constructor)

### Properties

* [native](qcursor.md#native)
* [nodeChildren](qcursor.md#nodechildren)
* [nodeParent](qcursor.md#optional-nodeparent)

### Methods

* [pos](qcursor.md#pos)
* [setNodeParent](qcursor.md#setnodeparent)
* [setPos](qcursor.md#setpos)

## Constructors

###  constructor

\+ **new QCursor**(): *[QCursor](qcursor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QCursor](qcursor.md)*

\+ **new QCursor**(`native`: [NativeElement](../globals.md#nativeelement)): *[QCursor](qcursor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QCursor](qcursor.md)*

\+ **new QCursor**(`shape`: [CursorShape](../enums/cursorshape.md)): *[QCursor](qcursor.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`shape` | [CursorShape](../enums/cursorshape.md) |

**Returns:** *[QCursor](qcursor.md)*

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

###  pos

▸ **pos**(): *object*

**Returns:** *object*

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

###  setPos

▸ **setPos**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*
