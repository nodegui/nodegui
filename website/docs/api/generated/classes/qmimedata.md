---
id: "qmimedata"
title: "QMimeData"
sidebar_label: "QMimeData"
---

description

## Hierarchy

* [Component](component.md)

  ↳ **QMimeData**

## Index

### Constructors

* [constructor](qmimedata.md#constructor)

### Properties

* [native](qmimedata.md#native)
* [nodeChildren](qmimedata.md#nodechildren)
* [nodeParent](qmimedata.md#optional-nodeparent)

### Methods

* [clear](qmimedata.md#clear)
* [hasColor](qmimedata.md#hascolor)
* [hasHtml](qmimedata.md#hashtml)
* [hasImage](qmimedata.md#hasimage)
* [hasText](qmimedata.md#hastext)
* [hasUrls](qmimedata.md#hasurls)
* [html](qmimedata.md#html)
* [removeFormat](qmimedata.md#removeformat)
* [setHtml](qmimedata.md#sethtml)
* [setNodeParent](qmimedata.md#setnodeparent)
* [setText](qmimedata.md#settext)
* [setUrls](qmimedata.md#seturls)
* [text](qmimedata.md#text)
* [urls](qmimedata.md#urls)

## Constructors

###  constructor

\+ **new QMimeData**(`arg?`: [NativeElement](../globals.md#nativeelement)): *[QMimeData](qmimedata.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QMimeData](qmimedata.md)*

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

▸ **clear**(): *void*

Removes all the MIME type and data entries in the object.

**Returns:** *void*

___

###  hasColor

▸ **hasColor**(): *boolean*

Returns true if the object can return a color (MIME type application/x-color); otherwise returns false.

**Returns:** *boolean*

___

###  hasHtml

▸ **hasHtml**(): *boolean*

Returns true if the object can return HTML (MIME type text/html); otherwise returns false.

**Returns:** *boolean*

___

###  hasImage

▸ **hasImage**(): *boolean*

Returns true if the object can return an image; otherwise returns false.

**Returns:** *boolean*

___

###  hasText

▸ **hasText**(): *boolean*

Returns true if the object can return plain text (MIME type text/plain); otherwise returns false.

**Returns:** *boolean*

___

###  hasUrls

▸ **hasUrls**(): *boolean*

Returns true if the object can return a list of urls; otherwise returns false.

**Returns:** *boolean*

___

###  html

▸ **html**(): *string*

Returns a string if the data stored in the object is HTML (MIME type text/html); otherwise returns an empty string.

**Returns:** *string*

___

###  removeFormat

▸ **removeFormat**(`mimeType`: string): *void*

Removes the data entry for mimeType in the object.

**Parameters:**

Name | Type |
------ | ------ |
`mimeType` | string |

**Returns:** *void*

___

###  setHtml

▸ **setHtml**(`html`: string): *void*

Sets html as the HTML (MIME type text/html) used to represent the data.

**Parameters:**

Name | Type |
------ | ------ |
`html` | string |

**Returns:** *void*

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

###  setText

▸ **setText**(`text`: string): *void*

Sets text as the plain text (MIME type text/plain) used to represent the data.

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setUrls

▸ **setUrls**(`urls`: []): *void*

Sets the URLs stored in the MIME data object to those specified by urls.

**Parameters:**

Name | Type |
------ | ------ |
`urls` | [] |

**Returns:** *void*

___

###  text

▸ **text**(): *string*

Returns a plain text (MIME type text/plain) representation of the data.

**Returns:** *string*

___

###  urls

▸ **urls**(): *[]*

Returns a list of URLs contained within the MIME data object.

URLs correspond to the MIME type text/uri-list.

**Returns:** *[]*
