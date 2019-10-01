---
sidebar_label: Styling
title: Styling
---

With NodeGui, you can style a widget to your needs. If you are familiar with CSS in the web world you would feel right at home. All widgets have a method `setInlineStyle` for setting inline styles for the respective widget. The style names and values usually match how CSS works on the web.

Here's an example:

```js
const { QLabel, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();

const label = new QLabel(win);
label.setText("Hello world");
label.setInlineStyle("color: green; background-color: white;");

win.show();
global.win = win;
```

## Overview

NodeGui makes use of [Qt's stylesheet](https://doc.qt.io/qt-5/stylesheet-syntax.html) for styling. Qt Style Sheet terminology and syntactic rules are almost identical to those of HTML CSS. Additionally, NodeGui adds support for layout using flex properties like align-items, justify-content, etc. Flexbox layout support is added using [facebook's yoga library](https://github.com/facebook/yoga).

You would write your style properties in a string and pass it to the NodeGui widgets either via global styles or inline styles (similar to how it works in the web).

## Global styles

Lets take a look at an example:

```js
const { QLabel, FlexLayout, QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("rootView");
view.setLayout(new FlexLayout());

const label = new QLabel();
label.setObjectName("helloLabel");
label.setText("Hello");

const label2 = new QLabel();
label2.setObjectName("worldLabel");
label2.setText("World");

view.layout.addWidget(label);
view.layout.addWidget(label2);

view.setStyleSheet(`
  #helloLabel {
    color: red;
    padding: 10px;
  }
  #worldLabel {
    color: green;
    padding: 10px;
  }
  #rootView {
    background-color: black;
  }
`);
view.show();
(global as any).view = view;

```

In the case of global stylesheet you can define all your style properties in a stylesheet string and the tell the root view or window to set it as a stylsheet for it and its child widgets. The only difference here from web is that you can set a stylesheet on a widget at any level in the whole tree of widgets, the stylesheet will affect the widget and its children.

In the above example, in order to reference a widget in a stylesheet we will assign it a `objectName` using setObjectName instance method. Think of objectName as something similar to an `id` in the case of web. Now using the objectName you could reference the widget in the stylesheet and set style properties on them. Do not worry about the layout stuff that is going on here, that will be covered in the next section.

Global stylesheet really becomes powerful when you use things like pseudo-selectors (hover, checked, etc). It also has helps in implementing cascaded styles which allow you to style a group of widgets at once. We will see more about these features below.

> More details on all the features and the syntax can be found here: https://doc.qt.io/qt-5/stylesheet-syntax.html

## Inline styles

Lets look at this example again:

```js
const { QLabel, QMainWindow } = require("@nodegui/nodegui");

const win = new QMainWindow();

const label = new QLabel(win);
label.setText("Hello world");
label.setInlineStyle("color: green; background-color: white;");

win.show();
global.win = win;
```

In most cases it would be easier to style the widgets inline. NodeGui supports inline styling using `setInlineStyle` instance method. Inline styles will only affect the widget to which the style is applied to and is often easier to understand and manage. All properties you use in the global stylesheet are available in inline styles as well.

## Selectors

NodeGui style sheets support all the selectors defined in CSS2.
Some examples include:

```css
* {
  color: blue;
}

QPushButton {
  padding: 10px;
}

#okButton {
  margin: 10px;
}

#mainView > QPushButton {
  margin: 10px;
}
```

To see a complete list of selectors see here: https://doc.qt.io/qt-5/stylesheet-syntax.html#selector-types

## Pseudo states

Like in the web, you can style your widget based on its state. An example would be, you might want the color of the button text to be red when its hovered upon. These are possible with pseudo states. Pseudo-states appear at the end of the selector, with a colon (:) in between.

```css
#okButton:hover {
  color: red;
}
```

> More details here : https://doc.qt.io/qt-5/stylesheet-syntax.html#pseudo-states

## Cascading

Style sheets can be set on the parent widgets and on child widgets. An arbitrary widget's effective style sheet is obtained by merging the style sheets set on the widget's ancestors (parent, grandparent, etc.).

When conflicts arise, the widget's own inline style sheet is always preferred to any inherited style sheet, irrespective of the specificity of the conflicting rules. Likewise, the parent widget's style sheet is preferred to the grandparent's, etc.

The behaviour is similar to what we see on the web.

> For more in depth examples see here: https://doc.qt.io/qt-5/stylesheet-syntax.html#cascading

## Properties

NodeGui style sheets is a css string.

For example:

```
const textStyle = `
  color: 'green';
  padding: 12;
  height: '100%';
`;

```

Here if you look carefully, you would notice that there are some differences in the way we write style properties as compared to web.
The quotes you see around `'green'` and `'100%'` are necessary so that Qt doesnt interpret them as numbers.
So the rule of thumb is that any integer based property like margin, border, etc can be written without quotes while any string property, it is better to surround them with quotes. PS: Qt does recognise some string based properties without quotes also.

## Supported properties

Since we are not running inside a web browser, there are few differences in the properties you could use in NodeGui vs in web.

The complete list is detailed here: https://doc.qt.io/qt-5/stylesheet-reference.html#list-of-properties

Apart from the properties listed in the link, NodeGui also supports layout properties related to Flex. You can use all flex properties such as align-items, justify-content, flex, etc on all widgets. [The layout styling will be coverted in more detail in the section: Layout.](layout.md)

## Advanced usage (Setting QObject Properties)

In Qt, every widget has certain properties set on them using something called as [Q_PROPERTY](https://doc.qt.io/qt-5/qobject.html#Q_PROPERTY). There are many q-properties that are defined on each widget already. You can also define custom qproperties in the native C++ code yourself too. What does it have to do with styling ? The thing is some of these properties can be altered using qt stylesheet. In Qt's terminology, these properties are called designable properties.

For example:

```css
MyLabel {
  qproperty-alignment: AlignCenter;
}
MyGroupBox {
  qproperty-titlecolor: rgb(100, 200, 100);
}
QPushButton {
  qproperty-iconsize: 20px 20px;
}
```

You can discover these properties by following Qt's documentation or by running a simple google search like "center text in QLabel using stylesheet in Qt". These are advanced properties and in practice will come in use rarely but its good to know.

> More details : https://doc.qt.io/qt-5/stylesheet-syntax.html#setting-qobject-properties

---

In this section, we mostly covered the paint properties in the NodeGui stylesheet. The next section would cover on how you can use flex to layout your widgets with stylesheet.
