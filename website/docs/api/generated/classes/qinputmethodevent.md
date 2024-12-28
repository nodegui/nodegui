---
id: "qinputmethodevent"
title: "QInputMethodEvent"
sidebar_label: "QInputMethodEvent"
---

## Hierarchy

* [QEvent](qevent.md)

  ↳ **QInputMethodEvent**

## Index

### Constructors

* [constructor](qinputmethodevent.md#constructor)

### Properties

* [native](qinputmethodevent.md#native)

### Methods

* [accept](qinputmethodevent.md#accept)
* [commitString](qinputmethodevent.md#commitstring)
* [ignore](qinputmethodevent.md#ignore)
* [isAccepted](qinputmethodevent.md#isaccepted)
* [preeditString](qinputmethodevent.md#preeditstring)
* [replacementLength](qinputmethodevent.md#replacementlength)
* [replacementStart](qinputmethodevent.md#replacementstart)
* [setAccepted](qinputmethodevent.md#setaccepted)
* [setCommitString](qinputmethodevent.md#setcommitstring)
* [spontaneous](qinputmethodevent.md#spontaneous)
* [type](qinputmethodevent.md#type)

## Constructors

###  constructor

\+ **new QInputMethodEvent**(`event`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *[QInputMethodEvent](qinputmethodevent.md)*

*Overrides [QEvent](qevent.md).[constructor](qevent.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`event` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *[QInputMethodEvent](qinputmethodevent.md)*

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

###  commitString

▸ **commitString**(): *string*

**Returns:** *string*

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

###  preeditString

▸ **preeditString**(): *string*

**Returns:** *string*

___

###  replacementLength

▸ **replacementLength**(): *number*

**Returns:** *number*

___

###  replacementStart

▸ **replacementStart**(): *number*

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

###  setCommitString

▸ **setCommitString**(`commitString`: string, `replaceFrom`: number, `replaceLength`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`commitString` | string | - |
`replaceFrom` | number | 0 |
`replaceLength` | number | 0 |

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
