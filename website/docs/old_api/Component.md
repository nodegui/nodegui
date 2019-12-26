---
sidebar_label: Component
title: Component
---

> Abstract class that is root most base class for all widgets and layouts in the NodeGui World.

**This class is used to add core properties to all widgets, layouts etc in NodeGui world. Currently it helps us maintain references to the native C++ instance of the widget or layout. It also helps in preventing gc of child elements of a layout or widget**

`Component` is an abstract class and hence no instances of the same should be created. It exists so that we can add core functionalities to all widgets and layouts easily. This is an internal class.

**Component is the base class for YogaWidget and NodeLayout which means all widgets and layouts inherit it aswell. Its the root base class in NodeGui world**

To get a clearer picture you can take a look at the Component source code here: `src/lib/core/Component/index.ts`

## Static Methods

There are no public static methods for Component.

## Instance Properties

There are no public instance properties for Component.

## Instance Methods

There are no public instance methods for Component.
