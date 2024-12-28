---
id: "qinputmethodqueryevent"
title: "QInputMethodQueryEvent"
sidebar_label: "QInputMethodQueryEvent"
---

Note: Qt performs some default processing for `QInputMethodQueryEvents`.
When attaching an event listener via `addEventListener()` use the
options object to specify that you want to run after the default
processing, otherwise your `setValue()` calls will be overwritten.

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QInputMethodQueryEvent**

## Index

### Constructors

* [constructor](qinputmethodqueryevent.md#constructor)

### Properties

* [native](qinputmethodqueryevent.md#native)

### Methods

* [accept](qinputmethodqueryevent.md#accept)
* [ignore](qinputmethodqueryevent.md#ignore)
* [isAccepted](qinputmethodqueryevent.md#isaccepted)
* [queries](qinputmethodqueryevent.md#queries)
* [setAccepted](qinputmethodqueryevent.md#setaccepted)
* [setValue](qinputmethodqueryevent.md#setvalue)
* [spontaneous](qinputmethodqueryevent.md#spontaneous)
* [type](qinputmethodqueryevent.md#type)
* [value](qinputmethodqueryevent.md#value)

## Constructors

###  constructor

\+ **new QInputMethodQueryEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QInputMethodQueryEvent](qinputmethodqueryevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QInputMethodQueryEvent](qinputmethodqueryevent.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [QEvent](qevent.md).[native](qevent.md#native)*

## Methods

###  accept

▸ **accept**(): *void*

*Inherited from [QEvent](qevent.md).[accept](qevent.md#accept)*

Sets the accept flag of the event object, the equivalent of calling setAccepted(true).
Setting the accept parameter indicates that the event receiver wants the event. Unwanted events might be propagated to the parent widget

**Returns:** *void*

___

###  ignore

▸ **ignore**(): *void*

*Inherited from [QEvent](qevent.md).[ignore](qevent.md#ignore)*

Clears the accept flag parameter of the event object, the equivalent of calling setAccepted(false).
Clearing the accept parameter indicates that the event receiver does not want the event.
Unwanted events might be propagated to the parent widget.

**Returns:** *void*

___

###  isAccepted

▸ **isAccepted**(): *boolean*

*Inherited from [QEvent](qevent.md).[isAccepted](qevent.md#isaccepted)*

**Returns:** *boolean*

___

###  queries

▸ **queries**(): *number*

**Returns:** *number*

___

###  setAccepted

▸ **setAccepted**(`accepted`: boolean): *void*

*Inherited from [QEvent](qevent.md).[setAccepted](qevent.md#setaccepted)*

Sets the accept flag of the event object

**Parameters:**

Name | Type |
------ | ------ |
`accepted` | boolean |

**Returns:** *void*

___

###  setValue

▸ **setValue**(`query`: number, `value`: [QVariantType](../globals.md#qvarianttype)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`query` | number |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *void*

___

###  spontaneous

▸ **spontaneous**(): *boolean*

*Inherited from [QEvent](qevent.md).[spontaneous](qevent.md#spontaneous)*

Returns true if the event originated outside the application (a system event); otherwise returns false.

The return value of this function is not defined for paint events.

**Returns:** *boolean*

___

###  type

▸ **type**(): *number*

*Inherited from [QEvent](qevent.md).[type](qevent.md#type)*

Returns the event type

**Returns:** *number*

This is QEvent::Type

___

###  value

▸ **value**(`query`: number): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`query` | number |

**Returns:** *[QVariant](qvariant.md)*
