---
sidebar_label: EventWidget
title: EventWidget
---

> Abstract class that adds event handling support to all widgets.

**This class implements an event emitter and merges it with Qt's event and signal system. It allows us to register and unregister event and signal listener at will from javascript**

`EventWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add event handling functionalities to all widget's easily. This is an internal class.

**EventWidget is the base class for NodeWidget which means all widgets inherit it aswell. It inherits from another abstract class [YogaWidget](api/YogaWidget.md)**

### Example

```javascript
const { QWidget, QWidgetEvents } = require("@nodegui/nodegui");

const view = new QWidget();
// addEventListener is a method from EventWidget
view.addEventListener("MouseMove", () => {
  console.log("mouse moved");
});

or;

// addEventListener is a method from EventWidget
view.addEventListener(QWidgetEvents.MouseMove, () => {
  console.log("mouse moved");
});
```

EventWidget will contain all methods and properties that are useful to handle events and signals of widgets in the NodeGui world.

## Static Methods

EventWidget can access all the static methods defined in [YogaWidget](api/YogaWidget.md)

## Instance Properties

EventWidget can access all the instance properties defined in [YogaWidget](api/YogaWidget.md)

## Instance Methods

EventWidget can access all the instance methods defined in [YogaWidget](api/YogaWidget.md)

Additionally it also has the following instance methods:

### `widget.addEventListener(eventType, callback)`

Adds an event listener to the widget to listen to events that occur on a widget.

- `eventType` string - The event or signal you wish to listen to for the widget. Every widget exports its own enum of all possible events and signal types it can take. For example: `QWidget` exports `QWidgetEvents`, `QPushButton` exports `QPushButtonEvents`.

- `callback` (payload?: NativeEvent | any) => void - A callback function to invoke when an event occurs. Usually you receive a nativeEvent or a string as argument.

### `widget.removeEventListener(eventType, callback?)`

Removes the specified event listener from the widget.

- `eventType` string - The event or signal for which you wish to remove the listener.

- `callback` Function (_Optional_) - If specified the removeEventListener will remove the specified listener only, otherwise all eventlisteners of the eventType on the widget will be removed.
