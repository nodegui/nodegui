---
sidebar_label: YogaWidget
title: YogaWidget
---

> Abstract class to add common functionality related to Flex layout to all Widgets.

**This class implements methods related to flex layout required to be present in all widgets**

`YogaWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities related to flex layout to all widget's easily. We implement flex layout using a library called [Yoga](https://github.com/facebook/yoga). As part of yoga every widget needs to store its own flex properties such as alignItems, flexDirection etc. This is done with the help of YogaWidget.

**YogaWidget is the base class for EventWidget which means all widgets inherit it aswell. It inherits from another abstract class [Component](api/Component.md)**

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
// getFlexNode is a method from YogaWidget
const flexNode = view.getFlexNode();
```

YogaWidget helps in storing all flex properties of a widget.

## Static Methods

YogaWidget can access all the static methods defined in [Component](api/Component.md)

## Instance Properties

YogaWidget can access all the instance properties defined in [Component](api/Component.md)

## Instance Methods

YogaWidget can access all the instance methods defined in [Component](api/Component.md)

Additionally it also has the following instance methods:

### `widget.getFlexNode()`

Returns a native reference to the flex node used in c++ instance for the widget. This is not a regular javascript object and hence no methods or properties can be accessed from it. It exists so that we pass around a widgets flex node to layouts, etc.
