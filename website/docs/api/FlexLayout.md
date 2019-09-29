---
sidebar_label: FlexLayout
title: FlexLayout
---

> Custom layout to help layout child widgets using flex layout.

**This class is a JS wrapper around custom Qt layout implemented using [Yoga](https://github.com/facebook/yoga)**

A `FlexLayout` can be used to layout all child NodeGui widgets using flex.

**FlexLayout inherits from [NodeLayout](api/NodeLayout.md)**

### Example

```javascript
const { FlexLayout, QWidget, QLabel } = require("@nodegui/nodegui");

const view = new QWidget();
const layout = new FlexLayout();
view.setLayout(layout);

const label = new QLabel();
label.setText("label1");
const label2 = new QLabel();
label2.setText("label2");

layout.addWidget(label);
layout.addWidget(label2);
```

## Static Methods

FlexLayout can access all the static methods defined in [NodeLayout](api/NodeLayout.md)

## Instance Properties

FlexLayout can access all the instance properties defined in [NodeLayout](api/NodeLayout.md)

## Instance Methods

FlexLayout can access all the instance methods defined in [NodeLayout](api/NodeLayout.md)

Additionally it also has the following instance methods:

### `layout.addWidget(childWidget, childFlexNode?)`

Adds the childWidget to the layout. It calls the native method of custom FlexLayout.

- `childWidget` NodeWidget - child widget that needs to be added to the layout.
- `childFlexNode` flexNode ref (_Optional_) - flexNode reference of the child widget. You can get this by calling `childWidget.getFlexNode()`.

### `layout.insertChildBefore(childWidget, beforeChildWidget, childFlexNode?, beforeChildFlexNode?)`

Adds the childWidget before another already set childWidget in the layout. It calls the native method of custom FlexLayout.

- `childWidget` NodeWidget - child widget that needs to be added to the layout.
- `beforeChildWidget` NodeWidget - the widget before which the `childWidget` needs to be added in the layout.
- `childFlexNode` flexNode ref (_Optional_) - flexNode reference of the child widget. You can get this by calling `childWidget.getFlexNode()`.
- `beforeChildFlexNode` flexNode ref (_Optional_) - flexNode reference of the before child widget. You can get this by calling `beforeChildWidget.getFlexNode()`.

### `layout.removeWidget(childWidget, childFlexNode?)`

Removes the childWidget from the layout. It calls the native method of custom FlexLayout.

- `childWidget` NodeWidget - child widget that needs to be added to the layout.
- `childFlexNode` flexNode ref (_Optional_) - flexNode reference of the child widget. You can get this by calling `childWidget.getFlexNode()`.

### `layout.setFlexNode(flexNode)`

A layout doesnt have its own flexNode. This method sets the flex Node to use for calculating position of the child widgets. Hence this should be always equal to the flex node of widget for which this layout is set. This is called internally by `widget.setLayout`.

- `flexNode` flexNode ref - flexNode reference of the widget for which this layout is set. You can get this by calling `widget.getFlexNode()`.
