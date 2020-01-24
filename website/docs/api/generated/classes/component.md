---
id: "component"
title: "Component"
sidebar_label: "Component"
---

> Abstract class that is root most base class for all widgets and layouts in the NodeGui World.

*This class is used to add core properties to all widgets, layouts etc in NodeGui world.
Currently it helps us maintain references to the native C++ instance of the widget or layout.
It also helps in preventing gc of child elements of a layout or widget**

`Component` is an abstract class and hence no instances of the same should be created.
It exists so that we can add core functionalities to all widgets and layouts easily. This is an internal class.

Its the root base class in NodeGui world.

## Hierarchy

* **Component**

  ↳ [QClipboard](qclipboard.md)

  ↳ [QStyle](qstyle.md)

  ↳ [QApplication](qapplication.md)

  ↳ [QVariant](qvariant.md)

  ↳ [QKeySequence](qkeysequence.md)

  ↳ [QPixmap](qpixmap.md)

  ↳ [QIcon](qicon.md)

  ↳ [QFont](qfont.md)

  ↳ [EventWidget](eventwidget.md)

  ↳ [QSize](qsize.md)

  ↳ [QCursor](qcursor.md)

  ↳ [QFontDatabase](qfontdatabase.md)

  ↳ [QRect](qrect.md)

  ↳ [QPoint](qpoint.md)

  ↳ [QModelIndex](qmodelindex.md)

  ↳ [QDate](qdate.md)

  ↳ [QTime](qtime.md)

  ↳ [QDateTime](qdatetime.md)

  ↳ [QListWidgetItem](qlistwidgetitem.md)

  ↳ [QTableWidgetItem](qtablewidgetitem.md)

  ↳ [QTreeWidgetItem](qtreewidgetitem.md)

  ↳ [QColor](qcolor.md)

  ↳ [QPainter](qpainter.md)

  ↳ [QUrl](qurl.md)

## Index

### Constructors

* [constructor](component.md#constructor)

### Properties

* [native](component.md#abstract-native)
* [nodeChildren](component.md#nodechildren)
* [nodeParent](component.md#optional-nodeparent)

### Methods

* [setNodeParent](component.md#setnodeparent)

## Constructors

###  constructor

\+ **new Component**(): *[Component](component.md)*

**Returns:** *[Component](component.md)*

## Properties

### `Abstract` native

• **native**: *[NativeElement](../globals.md#nativeelement)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

## Methods

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*
