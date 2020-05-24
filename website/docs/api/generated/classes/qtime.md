---
id: "qtime"
title: "QTime"
sidebar_label: "QTime"
---

## Hierarchy

* [Component](component.md)

  ↳ **QTime**

## Index

### Constructors

* [constructor](qtime.md#constructor)

### Properties

* [native](qtime.md#native)
* [nodeChildren](qtime.md#nodechildren)
* [nodeParent](qtime.md#optional-nodeparent)

### Methods

* [addMSecs](qtime.md#addmsecs)
* [addSecs](qtime.md#addsecs)
* [elapsed](qtime.md#elapsed)
* [hour](qtime.md#hour)
* [isNull](qtime.md#isnull)
* [isValid](qtime.md#isvalid)
* [minute](qtime.md#minute)
* [msec](qtime.md#msec)
* [msecsSinceStartOfDay](qtime.md#msecssincestartofday)
* [msecsTo](qtime.md#msecsto)
* [restart](qtime.md#restart)
* [second](qtime.md#second)
* [secsTo](qtime.md#secsto)
* [setHMS](qtime.md#sethms)
* [setNodeParent](qtime.md#setnodeparent)
* [start](qtime.md#start)
* [toString](qtime.md#tostring)
* [currentTime](qtime.md#static-currenttime)
* [fromMSecsSinceStartOfDay](qtime.md#static-frommsecssincestartofday)
* [fromQVariant](qtime.md#static-fromqvariant)
* [fromString](qtime.md#static-fromstring)
* [isValid](qtime.md#static-isvalid)

## Constructors

###  constructor

\+ **new QTime**(`arg?`: [NativeElement](../globals.md#nativeelement) | number, `m?`: undefined | number, `s`: number, `ms`: number): *[QTime](qtime.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) &#124; number | - |
`m?` | undefined &#124; number | - |
`s` | number | 0 |
`ms` | number | 0 |

**Returns:** *[QTime](qtime.md)*

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

###  addMSecs

▸ **addMSecs**(`ms`: number): *[QTime](qtime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`ms` | number |

**Returns:** *[QTime](qtime.md)*

___

###  addSecs

▸ **addSecs**(`s`: number): *[QTime](qtime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`s` | number |

**Returns:** *[QTime](qtime.md)*

___

###  elapsed

▸ **elapsed**(): *number*

**Returns:** *number*

___

###  hour

▸ **hour**(): *number*

**Returns:** *number*

___

###  isNull

▸ **isNull**(): *boolean*

**Returns:** *boolean*

___

###  isValid

▸ **isValid**(): *boolean*

**Returns:** *boolean*

___

###  minute

▸ **minute**(): *number*

**Returns:** *number*

___

###  msec

▸ **msec**(): *number*

**Returns:** *number*

___

###  msecsSinceStartOfDay

▸ **msecsSinceStartOfDay**(): *number*

**Returns:** *number*

___

###  msecsTo

▸ **msecsTo**(`t`: [QTime](qtime.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`t` | [QTime](qtime.md) |

**Returns:** *number*

___

###  restart

▸ **restart**(): *number*

**Returns:** *number*

___

###  second

▸ **second**(): *number*

**Returns:** *number*

___

###  secsTo

▸ **secsTo**(`t`: [QTime](qtime.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`t` | [QTime](qtime.md) |

**Returns:** *number*

___

###  setHMS

▸ **setHMS**(`h`: number, `m`: number, `s`: number, `ms`: number): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`m` | number | - |
`s` | number | - |
`ms` | number | 0 |

**Returns:** *boolean*

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

###  start

▸ **start**(): *void*

**Returns:** *void*

___

###  toString

▸ **toString**(`format`: string | [DateFormat](../enums/dateformat.md)): *string*

**Parameters:**

Name | Type |
------ | ------ |
`format` | string &#124; [DateFormat](../enums/dateformat.md) |

**Returns:** *string*

___

### `Static` currentTime

▸ **currentTime**(): *[QTime](qtime.md)*

**Returns:** *[QTime](qtime.md)*

___

### `Static` fromMSecsSinceStartOfDay

▸ **fromMSecsSinceStartOfDay**(`msecs`: number): *[QTime](qtime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`msecs` | number |

**Returns:** *[QTime](qtime.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QTime](qtime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QTime](qtime.md)*

___

### `Static` fromString

▸ **fromString**(`timeString`: string, `format`: string | [DateFormat](../enums/dateformat.md)): *[QTime](qtime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`timeString` | string |
`format` | string &#124; [DateFormat](../enums/dateformat.md) |

**Returns:** *[QTime](qtime.md)*

___

### `Static` isValid

▸ **isValid**(`h`: number, `m`: number, `s`: number, `ms`: number): *boolean*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`h` | number | - |
`m` | number | - |
`s` | number | - |
`ms` | number | 0 |

**Returns:** *boolean*
