---
id: "wrappercache"
title: "WrapperCache"
sidebar_label: "WrapperCache"
---

JS side cache for wrapper objects.

This is mainly used for caching wrappers of Qt objects which are not
directly created by our Nodejs application. The purpose of the cache
is to keep "alive" wrapper objects and their underlying C++ wrappers
which may be connected to Qt signals from the real Qt object.
This makes it easier for application to grab one of these objects,
set up event handlers, and then let the object go and *not* have the
wrapper automatically and unexpectedly garbage collected.

## Hierarchy

* **WrapperCache**

## Index

### Constructors

* [constructor](wrappercache.md#constructor)

### Properties

* [logCreateQObject](wrappercache.md#logcreateqobject)
* [logDestoryQObject](wrappercache.md#logdestoryqobject)

### Methods

* [_flush](wrappercache.md#_flush)
* [get](wrappercache.md#get)
* [getWrapper](wrappercache.md#getwrapper)
* [registerWrapper](wrappercache.md#registerwrapper)
* [store](wrappercache.md#store)

## Constructors

###  constructor

\+ **new WrapperCache**(): *[WrapperCache](wrappercache.md)*

**Returns:** *[WrapperCache](wrappercache.md)*

## Properties

###  logCreateQObject

• **logCreateQObject**: *boolean* = false

___

###  logDestoryQObject

• **logDestoryQObject**: *boolean* = false

## Methods

###  _flush

▸ **_flush**(): *void*

**Returns:** *void*

___

###  get

▸ **get**‹**T**›(`wrapperConstructor`: object, `native`: [NativeElement](../globals.md#nativeelement)): *T*

**Type parameters:**

▪ **T**: *[QObject](qobject.md)*

**Parameters:**

▪ **wrapperConstructor**: *object*

Name | Type |
------ | ------ |
`constructor` |  |

▪ **native**: *[NativeElement](../globals.md#nativeelement)*

**Returns:** *T*

___

###  getWrapper

▸ **getWrapper**(`native`: any): *[QObject](qobject.md) | null*

**Parameters:**

Name | Type |
------ | ------ |
`native` | any |

**Returns:** *[QObject](qobject.md) | null*

___

###  registerWrapper

▸ **registerWrapper**(`qobjectClassName`: string, `wrapperConstructor`: object): *void*

**Parameters:**

▪ **qobjectClassName**: *string*

▪ **wrapperConstructor**: *object*

Name | Type |
------ | ------ |
`constructor` |  |

**Returns:** *void*

___

###  store

▸ **store**(`wrapper`: [QObject](qobject.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`wrapper` | [QObject](qobject.md) |

**Returns:** *void*
