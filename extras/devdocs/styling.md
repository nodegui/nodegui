# How styling works?

There are two parts to styling.

1. Layout
2. Painting : Colors, text color, etc

## Painting

The regular styles such as text color, font-size, font weight etc are achieved using Qt's stylesheet.
We just call Qt's setStyleSheet method on the native widget and pass in the styles as a string.

This method is implemented as part of `QWIDGET_WRAPPED_METHODS_DECLARATION` in `qwidget_macro.h`.
So all widgets using this macro will get the setStyleSheet method.

## Layout

Layouting is basically positioning widgets on the screen. It takes into account everything from margins, paddings, positions etc. Our main focus will be Flex layouting. For flex layout we are using yoga library from facebook. This is the same library used by React Native. Before looking at flaxlayout in this libarary I recommend browsing Yoga's C API doc here: `deps/yoga/doc.md`

In case `nodegui`. I have implemented a custom Qt layout by extending `QLayout`, hence Qt is able to take over automagically when window is resized or any other layouting event occurs.
You can find the implementation at `src/cpp/core/FlexLayout/flexlayout.h`.

The c++ api provided by this custom layout looks like this:

```cpp
    // FlexLayout is a custom Layout built for QT. This layout will be used to layout qt widgets using facebook's yoga library.
    // Thus giving ability to layout Qt Widgets using Flexbox.
    // Usage:
    QWidget *container = new QWidget();
    YGNodeRef root = YGNodeNew();
    YGNodeRef child1 = YGNodeNew();
    YGNodeRef child2 = YGNodeNew();
    FlexLayout * flayout = new FlexLayout(container,root);
// or  FlexLayout * flayout = new FlexLayout(container);
// or  FlexLayout *flayout = new FlexLayout();

    flayout->addWidget(btn1, child1);
    flayout->addWidget(btn2, child2);

```

This layout is exported to Javascript side via `src/cpp/core/FlexLayout/flexlayout_wrap.h`

The JS Api looks like this:

```js
const view = new QWidget(rootView);

const flayout = new FlexLayout(); // Create layout
flayout.setFlexNode(view.getFlexNode()); // Set widget's flex as layout's flex node.

view.setLayout(flayout); // set layout as view's layout

const label = new QLabel(view);
label.setText("Hello12321");

const label2 = new QLabel(view);
label2.setText("SECOND LABEL");

flayout.addWidget(label2, label2.getFlexNode()); // Add child to layout
flayout.addWidget(label, label.getFlexNode()); // Add child to layout
```

### Implementation

1. Every widget that wants to use flex layout should extend from `flexItem` found at `src/cpp/core/FlexLayout/flexitem.h`.
   For example, see `nlabel.h` at `src/cpp/QtWidgets/QLabel/nlabel.h`

   NLabel inherits from `NodeWidget` which inherits from `YogaWidget` which inturn inherits from `FlexItem`

   - `FlexItem` adds a YogaNode to every widget.
   - `YogaWidget` adds Yoga specific q-properties to the widget, which is useful to assign yoga properties via qstylesheet. More on this below.
   - `NodeWidget` adds layout support via `YogaWidget` and event handling support via `EventWidget`

#### FlexItem

FlexItem : `src/cpp/core/FlexLayout/flexitem.h` add flexnode to each widget.
FlexItem adds methods like getFlexNode.

#### YogaWidget

Qt StyleSheet allows you to specify  style properties just like in web. You could specify font-size, margin, padding, etc. Qt StyleSheet also allows custom style properties via Qt's q-property system.

So in order to enable yoga based properties like alignItems, justifyContent, flex, etc via qt's stylesheet we
declare and define q properties for each of those custom properties we want.
This allows us to use something like:

```js
view.setStyleSheet(`
    background-color:green;
    qproperty-flex: 1;
    qproperty-alignItems: 'center';
`);
```

Notice `qproperty-` prefix? These are the custom q-properties we defined in `YogaWidget.h`

#### NodeWidget

Every widget we implement should inherit from NodeWidget. This helps us add all the properties we want in the widgets via a single class. NodeWidget is the class that contains properties and methods shared by all widgets. This class allows us to add features to all widgets easily.
