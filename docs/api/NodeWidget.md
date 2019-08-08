## Class: NodeWidget

> Abstract class to add functionalities common to all Widgets.

**This class implements all methods, properties of Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html) so that it can be inherited by all widgets**

`NodeWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all widget's easily. Additionally it helps in typechecking process. If you wish to create a `div` like widget use [QWidget](api/QWidget.md) instead.

**NodeWidget is the base class for all widgets. It inherits from another abstract class [EventWidget](api/EventWidget.md)**

### Example

```javascript
const {
  NodeWidget,
  QPushButton,
  QWidget,
  QRadioButton
} = require("@nodegui/nodegui");

// showWidget can accept any widget since it expects NodeWidget
const showWidget = (widget: NodeWidget) => {
  widget.show();
};

showWidget(new QPushButton());
showWidget(new QWidget());
showWidget(new QRadioButton());
```

NodeWidget will list all methods and properties that are common to all widgets in the NodeGui world.

### Static Methods

NodeWidget can access all the static methods defined in [EventWidget](api/EventWidget.md)

### Instance Properties

NodeWidget can access all the instance properties defined in [EventWidget](api/EventWidget.md)

Additionally it also has the following instance properties:

#### `widget.layout`

A `NodeLayout` representing current layout that is set on the widget.

#### `widget.type`

This will return the string `widget` for all widgets.

### Instance Methods

NodeWidget can access all the instance methods defined in [EventWidget](api/EventWidget.md)

Additionally it also has the following instance methods:

#### `widget.show()`

Shows the widget and its children. It calls the native method [QWidget: show](https://doc.qt.io/qt-5/qwidget.html#show).

#### `widget.resize(width, height)`

Resizes the widget. It calls the native method [QWidget: resize](https://doc.qt.io/qt-5/qwidget.html#resize-1).

- `width` number - Pixels.
- `height` number - Pixels.

#### `widget.close()`

Closes this widget. It calls the native method [QWidget: close](https://doc.qt.io/qt-5/qwidget.html#close).
Returns true if the widget was closed; otherwise returns false.

#### `widget.setLayout(layout)`

Sets the layout manager for this widget to layout. It calls the native method [QWidget: setLayout](https://doc.qt.io/qt-5/qwidget.html#setLayout).

- `layout` NodeLayout - Any layout that inherits from NodeLayout class.

#### `widget.setStyleSheet(styleSheet)`

Sets the property that holds the widget's style sheet. It calls the native method [QWidget: styleSheet](https://doc.qt.io/qt-5/qwidget.html#styleSheet-prop).

- `styleSheet` string - String which holds the widget's style sheet.

#### `widget.hide()`

Hides the widget and its children. It calls the native method [QWidget: hide](https://doc.qt.io/qt-5/qwidget.html#hide).

#### `widget.setObjectName(objectName)`

Sets the object name of the widget in Qt. It calls the native method [QObject: setObjectName](https://doc.qt.io/qt-5/qobject.html#objectName-prop). Object name can be analogous to `id` of an element in the web world. Using the objectName of the widget one can reference it in the Qt's stylesheet much like what we do with id in the web world.

- `objectName` string - String which holds the widget's object name.

#### `widget.setMouseTracking(isMouseTracked)`

Sets the property that tells whether mouseTracking is enabled for the widget. It calls the native method [QWidget: mouseTracking](https://doc.qt.io/qt-5/qwidget.html#mouseTracking-prop).

- `isMouseTracked` boolean - Set it to true to enable mouse tracking.

#### `widget.setEnabled(enabled)`

Sets the property that tells whether the widget is enabled. It calls the native method [QWidget: enabled](https://doc.qt.io/qt-5/qwidget.html#enabled-prop). In general an enabled widget handles keyboard and mouse events; a disabled widget does not.

- `enabled` boolean - Set it to true to enable the widget.

#### `widget.setFixedSize(width, height)`

Sets both the minimum and maximum sizes of the widget. It calls the native method [QWidget: setFixedSize](https://doc.qt.io/qt-5/qwidget.html#setFixedSize).

- `width` number - Pixels.
- `height` number - Pixels.

#### `widget.setMaximumSize(width, height)`

Sets the maximum size of the widget. It calls the native method [QWidget: setMaximumSize](https://doc.qt.io/qt-5/qwidget.html#setMaximumSize-1).

- `width` number - Pixels.
- `height` number - Pixels.

#### `widget.setMinimumSize(width, height)`

Sets the minimum size of the widget. It calls the native method [QWidget: setMinimumSize](https://doc.qt.io/qt-5/qwidget.html#setMinimumSize-1).

- `width` number - Pixels.
- `height` number - Pixels.

#### `widget.repaint()`

Repaints the widget. It calls the native method [QWidget: repaint](https://doc.qt.io/qt-5/qwidget.html#repaint).

#### `widget.update()`

Updates the widget. It calls the native method [QWidget: update](https://doc.qt.io/qt-5/qwidget.html#update).

#### `widget.size()`

returns the current widget size. It calls the native method [QWidget: size](https://doc.qt.io/qt-5/qwidget.html#size-prop). The returned size object contains width and height in pixels.

#### `widget.updateGeometry()`

Notifies the layout system that this widget has changed and may need to change geometry.
