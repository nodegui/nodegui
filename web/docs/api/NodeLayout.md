---
sidebar_label: NodeLayout
title: NodeLayout
---

> Abstract class to add functionalities common to all Layout.

**This class implements all methods, properties of Qt's [QLayout class](https://doc.qt.io/qt-5/qlayout.html) so that it can be inherited by all layouts**

`NodeLayout` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all layout's easily. Additionally it helps in typechecking process.

**NodeLayout is the base class for all layouts. It inherits from another abstract class [Component](api/Component.md)**

### Example

```javascript
const {
  NodeLayout,
  NodeWidget,
  FlexLayout,
  GridLayout,
  QPushButton,
  QWidget
} = require("@nodegui/nodegui");

// addChildToLayout can accept any layout since it expects NodeLayout
const addChildToLayout = (layout: NodeLayout, widget: NodeWidget) => {
  layout.addWidget(widget);
};

addChildToLayout(new FlexLayout(), new QPushButton());
addChildToLayout(new GridLayout(), new QWidget());
```

NodeLayout will list all methods and properties that are common to all layouts in the NodeGui world.

## Static Methods

NodeLayout can access all the static methods defined in [Component](api/Component.md)

## Instance Properties

NodeLayout can access all the instance properties defined in [Component](api/Component.md)

Additionally it also has the following instance properties:

### `layout.type`

This will return the string `layout` for all layouts.

## Instance Methods

NodeLayout can access all the instance methods defined in [Component](api/Component.md)

Additionally it also has the following instance methods:

### `layout.addWidget(childWidget, ...args)`

This is an abstract method in NodeLayout class. All Layouts inheriting from NodeLayout should implement this method.

- `childWidget` NodeWidget - Any widget in the NodeGui world.
- `...args` any[] - Additional params as required by the layout.

### `layout.activate()`

Redoes the layout for parent widget of this layout if necessary. Returns true if the layout was redone.

### `layout.invalidate()`

Invalidates any cached information in this layout.

### `layout.update()`

Updates the layout for parent widget of this layout. You should generally not need to call this because it is automatically called at the most appropriate times.
