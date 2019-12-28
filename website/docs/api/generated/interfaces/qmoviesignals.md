---
id: "qmoviesignals"
title: "QMovieSignals"
sidebar_label: "QMovieSignals"
---

## Hierarchy

* [QObjectSignals](qobjectsignals.md)

  ↳ **QMovieSignals**

## Index

### Properties

* [error](qmoviesignals.md#error)
* [finished](qmoviesignals.md#finished)
* [frameChanged](qmoviesignals.md#framechanged)
* [objectNameChanged](qmoviesignals.md#objectnamechanged)
* [resized](qmoviesignals.md#resized)
* [started](qmoviesignals.md#started)
* [stateChanged](qmoviesignals.md#statechanged)
* [updated](qmoviesignals.md#updated)

## Properties

###  error

• **error**: *function*

#### Type declaration:

▸ (`error`: [ImageReaderError](../enums/imagereadererror.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`error` | [ImageReaderError](../enums/imagereadererror.md) |

___

###  finished

• **finished**: *function*

#### Type declaration:

▸ (): *void*

___

###  frameChanged

• **frameChanged**: *function*

#### Type declaration:

▸ (`frameNumber?`: undefined | number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`frameNumber?` | undefined &#124; number |

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

###  resized

• **resized**: *function*

#### Type declaration:

▸ (`qSizeNative?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`qSizeNative?` | [NativeElement](../globals.md#nativeelement) |

___

###  started

• **started**: *function*

#### Type declaration:

▸ (): *void*

___

###  stateChanged

• **stateChanged**: *function*

#### Type declaration:

▸ (`state`: [MovieState](../enums/moviestate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [MovieState](../enums/moviestate.md) |

___

###  updated

• **updated**: *function*

#### Type declaration:

▸ (`qRectNative`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`qRectNative` | [NativeElement](../globals.md#nativeelement) |
