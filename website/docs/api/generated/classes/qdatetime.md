---
id: "qdatetime"
title: "QDateTime"
sidebar_label: "QDateTime"
---

## Hierarchy

* [Component](component.md)

  ↳ **QDateTime**

## Index

### Constructors

* [constructor](qdatetime.md#constructor)

### Properties

* [native](qdatetime.md#native)
* [nodeChildren](qdatetime.md#nodechildren)
* [nodeParent](qdatetime.md#optional-nodeparent)

### Methods

* [addDays](qdatetime.md#adddays)
* [addMSecs](qdatetime.md#addmsecs)
* [addMonths](qdatetime.md#addmonths)
* [addSecs](qdatetime.md#addsecs)
* [addYears](qdatetime.md#addyears)
* [date](qdatetime.md#date)
* [daysTo](qdatetime.md#daysto)
* [isDaylightTime](qdatetime.md#isdaylighttime)
* [isNull](qdatetime.md#isnull)
* [isValid](qdatetime.md#isvalid)
* [msecsTo](qdatetime.md#msecsto)
* [offsetFromUtc](qdatetime.md#offsetfromutc)
* [secsTo](qdatetime.md#secsto)
* [setDate](qdatetime.md#setdate)
* [setMSecsSinceEpoch](qdatetime.md#setmsecssinceepoch)
* [setNodeParent](qdatetime.md#setnodeparent)
* [setOffsetFromUtc](qdatetime.md#setoffsetfromutc)
* [setSecsSinceEpoch](qdatetime.md#setsecssinceepoch)
* [setTime](qdatetime.md#settime)
* [setTimeSpec](qdatetime.md#settimespec)
* [time](qdatetime.md#time)
* [timeSpec](qdatetime.md#timespec)
* [toLocalTime](qdatetime.md#tolocaltime)
* [toMSecsSinceEpoch](qdatetime.md#tomsecssinceepoch)
* [toOffsetFromUtc](qdatetime.md#tooffsetfromutc)
* [toSecsSinceEpoch](qdatetime.md#tosecssinceepoch)
* [toString](qdatetime.md#tostring)
* [toTimeSpec](qdatetime.md#totimespec)
* [toUTC](qdatetime.md#toutc)
* [currentDateTime](qdatetime.md#static-currentdatetime)
* [currentDateTimeUtc](qdatetime.md#static-currentdatetimeutc)
* [currentMSecsSinceEpoch](qdatetime.md#static-currentmsecssinceepoch)
* [currentSecsSinceEpoch](qdatetime.md#static-currentsecssinceepoch)
* [fromQVariant](qdatetime.md#static-fromqvariant)
* [fromString](qdatetime.md#static-fromstring)

## Constructors

###  constructor

\+ **new QDateTime**(`arg?`: [NativeElement](../globals.md#nativeelement), `time?`: [NativeElement](../globals.md#nativeelement)): *[QDateTime](qdatetime.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) |
`time?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QDateTime](qdatetime.md)*

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

###  addDays

▸ **addDays**(`ndays`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`ndays` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  addMSecs

▸ **addMSecs**(`msecs`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`msecs` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  addMonths

▸ **addMonths**(`nmonths`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nmonths` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  addSecs

▸ **addSecs**(`s`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`s` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  addYears

▸ **addYears**(`nyears`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nyears` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  date

▸ **date**(): *[QDate](qdate.md)*

**Returns:** *[QDate](qdate.md)*

___

###  daysTo

▸ **daysTo**(`other`: [QDateTime](qdatetime.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QDateTime](qdatetime.md) |

**Returns:** *number*

___

###  isDaylightTime

▸ **isDaylightTime**(): *boolean*

**Returns:** *boolean*

___

###  isNull

▸ **isNull**(): *boolean*

**Returns:** *boolean*

___

###  isValid

▸ **isValid**(): *boolean*

**Returns:** *boolean*

___

###  msecsTo

▸ **msecsTo**(`other`: [QDateTime](qdatetime.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QDateTime](qdatetime.md) |

**Returns:** *number*

___

###  offsetFromUtc

▸ **offsetFromUtc**(): *number*

**Returns:** *number*

___

###  secsTo

▸ **secsTo**(`other`: [QDateTime](qdatetime.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QDateTime](qdatetime.md) |

**Returns:** *number*

___

###  setDate

▸ **setDate**(`date`: [QDate](qdate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`date` | [QDate](qdate.md) |

**Returns:** *void*

___

###  setMSecsSinceEpoch

▸ **setMSecsSinceEpoch**(`msecs`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`msecs` | number |

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

###  setOffsetFromUtc

▸ **setOffsetFromUtc**(`offsetSeconds`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`offsetSeconds` | number |

**Returns:** *void*

___

###  setSecsSinceEpoch

▸ **setSecsSinceEpoch**(`secs`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`secs` | number |

**Returns:** *void*

___

###  setTime

▸ **setTime**(`time`: [QTime](qtime.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`time` | [QTime](qtime.md) |

**Returns:** *void*

___

###  setTimeSpec

▸ **setTimeSpec**(`spec`: [TimeSpec](../enums/timespec.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`spec` | [TimeSpec](../enums/timespec.md) |

**Returns:** *void*

___

###  time

▸ **time**(): *[QTime](qtime.md)*

**Returns:** *[QTime](qtime.md)*

___

###  timeSpec

▸ **timeSpec**(): *[TimeSpec](../enums/timespec.md)*

**Returns:** *[TimeSpec](../enums/timespec.md)*

___

###  toLocalTime

▸ **toLocalTime**(): *[QDateTime](qdatetime.md)*

**Returns:** *[QDateTime](qdatetime.md)*

___

###  toMSecsSinceEpoch

▸ **toMSecsSinceEpoch**(): *number*

**Returns:** *number*

___

###  toOffsetFromUtc

▸ **toOffsetFromUtc**(`offsetSeconds`: number): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`offsetSeconds` | number |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  toSecsSinceEpoch

▸ **toSecsSinceEpoch**(): *number*

**Returns:** *number*

___

###  toString

▸ **toString**(`format`: string | [DateFormat](../enums/dateformat.md)): *string*

**Parameters:**

Name | Type |
------ | ------ |
`format` | string &#124; [DateFormat](../enums/dateformat.md) |

**Returns:** *string*

___

###  toTimeSpec

▸ **toTimeSpec**(`spec`: [TimeSpec](../enums/timespec.md)): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`spec` | [TimeSpec](../enums/timespec.md) |

**Returns:** *[QDateTime](qdatetime.md)*

___

###  toUTC

▸ **toUTC**(): *[QDateTime](qdatetime.md)*

**Returns:** *[QDateTime](qdatetime.md)*

___

### `Static` currentDateTime

▸ **currentDateTime**(): *[QDateTime](qdatetime.md)*

**Returns:** *[QDateTime](qdatetime.md)*

___

### `Static` currentDateTimeUtc

▸ **currentDateTimeUtc**(): *[QDateTime](qdatetime.md)*

**Returns:** *[QDateTime](qdatetime.md)*

___

### `Static` currentMSecsSinceEpoch

▸ **currentMSecsSinceEpoch**(): *number*

**Returns:** *number*

___

### `Static` currentSecsSinceEpoch

▸ **currentSecsSinceEpoch**(): *number*

**Returns:** *number*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QDateTime](qdatetime.md)*

___

### `Static` fromString

▸ **fromString**(`dateTimeString`: string, `format`: string | [DateFormat](../enums/dateformat.md)): *[QDateTime](qdatetime.md)*

**Parameters:**

Name | Type |
------ | ------ |
`dateTimeString` | string |
`format` | string &#124; [DateFormat](../enums/dateformat.md) |

**Returns:** *[QDateTime](qdatetime.md)*
