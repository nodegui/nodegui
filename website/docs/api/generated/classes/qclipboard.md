---
id: "qclipboard"
title: "QClipboard"
sidebar_label: "QClipboard"
---

> The QClipboard class provides access to the window system clipboard.

**This class is a JS wrapper around Qt's [QClipboard class](https://doc.qt.io/qt-5/QClipboard.html)**

### Example

```javascript
const {
QClipboard,
QClipboardMode,
QApplication
} = require("@nodegui/nodegui");

const clipboard = QApplication.clipboard();
const text = clipboard.text(QClipboardMode.Clipboard);
```

## Hierarchy

* [Component](component.md)

  ↳ **QClipboard**

## Index

### Constructors

* [constructor](qclipboard.md#constructor)

### Properties

* [native](qclipboard.md#native)
* [nodeChildren](qclipboard.md#nodechildren)
* [nodeParent](qclipboard.md#optional-nodeparent)

### Methods

* [clear](qclipboard.md#clear)
* [pixmap](qclipboard.md#pixmap)
* [setNodeParent](qclipboard.md#setnodeparent)
* [setPixmap](qclipboard.md#setpixmap)
* [setText](qclipboard.md#settext)
* [text](qclipboard.md#text)

## Constructors

###  constructor

\+ **new QClipboard**(`native`: [NativeElement](../globals.md#nativeelement)): *[QClipboard](qclipboard.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QClipboard](qclipboard.md)*

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

###  clear

▸ **clear**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *void*

___

###  pixmap

▸ **pixmap**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *[QPixmap](qpixmap.md)*

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

###  setPixmap

▸ **setPixmap**(`pixmap`: [QPixmap](qpixmap.md), `mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`pixmap` | [QPixmap](qpixmap.md) |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string, `mode`: [QClipboardMode](../enums/qclipboardmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *void*

___

###  text

▸ **text**(`mode`: [QClipboardMode](../enums/qclipboardmode.md)): *string*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QClipboardMode](../enums/qclipboardmode.md) |

**Returns:** *string*
