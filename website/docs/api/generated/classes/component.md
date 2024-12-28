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

  ↳ [EventWidget](eventwidget.md)

  ↳ [QRect](qrect.md)

  ↳ [QVariant](qvariant.md)

  ↳ [QSize](qsize.md)

  ↳ [QPoint](qpoint.md)

  ↳ [QColor](qcolor.md)

  ↳ [QImage](qimage.md)

  ↳ [QPixmap](qpixmap.md)

  ↳ [QFont](qfont.md)

  ↳ [QPainterPath](qpainterpath.md)

  ↳ [QBrush](qbrush.md)

  ↳ [QPen](qpen.md)

  ↳ [QPointF](qpointf.md)

  ↳ [QRectF](qrectf.md)

  ↳ [QPainter](qpainter.md)

  ↳ [QIcon](qicon.md)

  ↳ [QCursor](qcursor.md)

  ↳ [QKeySequence](qkeysequence.md)

  ↳ [QUrl](qurl.md)

  ↳ [QMimeData](qmimedata.md)

  ↳ [QPalette](qpalette.md)

  ↳ [QSizeF](qsizef.md)

  ↳ [QPicture](qpicture.md)

  ↳ [QFontDatabase](qfontdatabase.md)

  ↳ [QFontMetrics](qfontmetrics.md)

  ↳ [QFontMetricsF](qfontmetricsf.md)

  ↳ [QDrag](qdrag.md)

  ↳ [QModelIndex](qmodelindex.md)

  ↳ [QDate](qdate.md)

  ↳ [QTime](qtime.md)

  ↳ [QDateTime](qdatetime.md)

  ↳ [QStandardItem](qstandarditem.md)

  ↳ [QListWidgetItem](qlistwidgetitem.md)

  ↳ [QTableWidgetItem](qtablewidgetitem.md)

  ↳ [QTreeWidgetItem](qtreewidgetitem.md)

  ↳ [QSettings](qsettings.md)

  ↳ [QStyle](qstyle.md)

## Index

### Constructors

* [constructor](component.md#constructor)

### Properties

* [native](component.md#native)

## Constructors

###  constructor

\+ **new Component**(`native`: [NativeElement](../globals.md#nativeelement)): *[Component](component.md)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[Component](component.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*
