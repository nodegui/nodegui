---
id: "eventwidget"
title: "EventWidget"
sidebar_label: "EventWidget"
---

> Abstract class that adds event handling support to all widgets.

*This class implements an event emitter and merges it with Qt's event and signal system. It allows us to register and unregister event and signal listener at will from javascript**

`EventWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add event handling functionalities to all widget's easily. This is an internal class.

### Example

```javascript
const { QWidget, QWidgetSignals, WidgetEventTypes } = require("@nodegui/nodegui");

const view = new QWidget();
// You either listen for a widget's signal
view.addEventListener('windowTitleChanged', () => {
console.log("window title changed");
});

// or you can listen for an event

view.addEventListener(WidgetEventTypes.MouseMove, () => {
console.log("mouse moved");
});
```

## Type parameters

▪ **Signals**: *unknown*

## Hierarchy

* [Component](component.md)

  ↳ **EventWidget**

  ↳ [NodeObject](nodeobject.md)

## Index

### Constructors

* [constructor](eventwidget.md#constructor)

### Properties

* [native](eventwidget.md#abstract-native)
* [nodeChildren](eventwidget.md#nodechildren)
* [nodeParent](eventwidget.md#optional-nodeparent)

### Methods

* [addEventListener](eventwidget.md#addeventlistener)
* [removeEventListener](eventwidget.md#removeeventlistener)
* [setNodeParent](eventwidget.md#setnodeparent)

## Constructors

###  constructor

\+ **new EventWidget**(`native`: [NativeElement](../globals.md#nativeelement)): *[EventWidget](eventwidget.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[EventWidget](eventwidget.md)*

## Properties

### `Abstract` native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

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
