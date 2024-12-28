---
id: "qdate"
title: "QDate"
sidebar_label: "QDate"
---

## Hierarchy

* [Component](component.md)

  ↳ **QDate**

## Index

### Constructors

* [constructor](qdate.md#constructor)

### Properties

* [native](qdate.md#native)

### Methods

* [addDays](qdate.md#adddays)
* [addMonths](qdate.md#addmonths)
* [addYears](qdate.md#addyears)
* [day](qdate.md#day)
* [dayOfWeek](qdate.md#dayofweek)
* [dayOfYear](qdate.md#dayofyear)
* [daysInMonth](qdate.md#daysinmonth)
* [daysInYear](qdate.md#daysinyear)
* [daysTo](qdate.md#daysto)
* [isNull](qdate.md#isnull)
* [isValid](qdate.md#isvalid)
* [month](qdate.md#month)
* [setDate](qdate.md#setdate)
* [toJulianDay](qdate.md#tojulianday)
* [toString](qdate.md#tostring)
* [year](qdate.md#year)
* [currentDate](qdate.md#static-currentdate)
* [fromJulianDay](qdate.md#static-fromjulianday)
* [fromQVariant](qdate.md#static-fromqvariant)
* [fromString](qdate.md#static-fromstring)
* [isLeapYear](qdate.md#static-isleapyear)
* [isValid](qdate.md#static-isvalid)

## Constructors

###  constructor

\+ **new QDate**(`arg?`: [NativeElement](../globals.md#nativeelement) | number, `month?`: number, `day?`: number): *[QDate](qdate.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [NativeElement](../globals.md#nativeelement) &#124; number |
`month?` | number |
`day?` | number |

**Returns:** *[QDate](qdate.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  addDays

▸ **addDays**(`ndays`: number): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`ndays` | number |

**Returns:** *[QDate](qdate.md)*

___

###  addMonths

▸ **addMonths**(`nmonths`: number): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nmonths` | number |

**Returns:** *[QDate](qdate.md)*

___

###  addYears

▸ **addYears**(`nyears`: number): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`nyears` | number |

**Returns:** *[QDate](qdate.md)*

___

###  day

▸ **day**(): *number*

**Returns:** *number*

___

###  dayOfWeek

▸ **dayOfWeek**(): *number*

**Returns:** *number*

___

###  dayOfYear

▸ **dayOfYear**(): *number*

**Returns:** *number*

___

###  daysInMonth

▸ **daysInMonth**(): *number*

**Returns:** *number*

___

###  daysInYear

▸ **daysInYear**(): *number*

**Returns:** *number*

___

###  daysTo

▸ **daysTo**(`d`: [QDate](qdate.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`d` | [QDate](qdate.md) |

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

###  month

▸ **month**(): *number*

**Returns:** *number*

___

###  setDate

▸ **setDate**(`year`: number, `month`: number, `day`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`year` | number |
`month` | number |
`day` | number |

**Returns:** *boolean*

___

###  toJulianDay

▸ **toJulianDay**(): *number*

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

###  year

▸ **year**(): *number*

**Returns:** *number*

___

### `Static` currentDate

▸ **currentDate**(): *[QDate](qdate.md)*

**Returns:** *[QDate](qdate.md)*

___

### `Static` fromJulianDay

▸ **fromJulianDay**(`jd`: number): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`jd` | number |

**Returns:** *[QDate](qdate.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QDate](qdate.md)*

___

### `Static` fromString

▸ **fromString**(`dateString`: string, `format`: string | [DateFormat](../enums/dateformat.md)): *[QDate](qdate.md)*

**Parameters:**

Name | Type |
------ | ------ |
`dateString` | string |
`format` | string &#124; [DateFormat](../enums/dateformat.md) |

**Returns:** *[QDate](qdate.md)*

___

### `Static` isLeapYear

▸ **isLeapYear**(`year`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`year` | number |

**Returns:** *boolean*

___

### `Static` isValid

▸ **isValid**(`year`: number, `month`: number, `day`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`year` | number |
`month` | number |
`day` | number |

**Returns:** *boolean*
