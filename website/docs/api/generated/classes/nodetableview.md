---
id: "nodetableview"
title: "NodeTableView"
sidebar_label: "NodeTableView"
---

> The QTableView class provides a default model/view implementation of a table view.

**This class is a JS wrapper around Qt's [QTableView class](https://doc.qt.io/qt-5/qtableview.html)**

### Example

```javascript
const { QTableView } = require("@nodegui/nodegui");

const tableview = new QTableView();

```

## Type parameters

▪ **Signals**: *[QTableViewSignals](../globals.md#qtableviewsignals)*

## Hierarchy

  ↳ [QAbstractItemView](qabstractitemview.md)‹Signals›

  ↳ **NodeTableView**

  ↳ [QTableView](qtableview.md)

## Index

### Constructors

* [constructor](nodetableview.md#constructor)

### Properties

* [_rawInlineStyle](nodetableview.md#_rawinlinestyle)
* [actions](nodetableview.md#actions)
* [layout](nodetableview.md#optional-layout)
* [native](nodetableview.md#abstract-native)
* [nodeChildren](nodetableview.md#nodechildren)
* [nodeParent](nodetableview.md#optional-nodeparent)
* [type](nodetableview.md#type)
* [viewportWidget](nodetableview.md#optional-viewportwidget)

### Methods

* [acceptDrops](nodetableview.md#acceptdrops)
* [activateWindow](nodetableview.md#activatewindow)
* [addAction](nodetableview.md#addaction)
* [addEventListener](nodetableview.md#addeventlistener)
* [adjustSize](nodetableview.md#adjustsize)
* [alternatingRowColors](nodetableview.md#alternatingrowcolors)
* [autoScrollMargin](nodetableview.md#autoscrollmargin)
* [clearSpans](nodetableview.md#clearspans)
* [close](nodetableview.md#close)
* [columnAt](nodetableview.md#columnat)
* [columnSpan](nodetableview.md#columnspan)
* [columnViewportPosition](nodetableview.md#columnviewportposition)
* [columnWidth](nodetableview.md#columnwidth)
* [currentIndex](nodetableview.md#currentindex)
* [defaultDropAction](nodetableview.md#defaultdropaction)
* [dragDropMode](nodetableview.md#dragdropmode)
* [dragDropOverwriteMode](nodetableview.md#dragdropoverwritemode)
* [dragEnabled](nodetableview.md#dragenabled)
* [editTriggers](nodetableview.md#edittriggers)
* [font](nodetableview.md#font)
* [frameRect](nodetableview.md#framerect)
* [frameShadow](nodetableview.md#frameshadow)
* [frameShape](nodetableview.md#frameshape)
* [frameStyle](nodetableview.md#framestyle)
* [frameWidth](nodetableview.md#framewidth)
* [geometry](nodetableview.md#geometry)
* [getFlexNode](nodetableview.md#getflexnode)
* [gridStyle](nodetableview.md#gridstyle)
* [hasAutoScroll](nodetableview.md#hasautoscroll)
* [hasMouseTracking](nodetableview.md#hasmousetracking)
* [hide](nodetableview.md#hide)
* [hideColumn](nodetableview.md#hidecolumn)
* [hideRow](nodetableview.md#hiderow)
* [horizontalScrollMode](nodetableview.md#horizontalscrollmode)
* [iconSize](nodetableview.md#iconsize)
* [indexWidget](nodetableview.md#indexwidget)
* [inherits](nodetableview.md#inherits)
* [isColumnHidden](nodetableview.md#iscolumnhidden)
* [isCornerButtonEnabled](nodetableview.md#iscornerbuttonenabled)
* [isEnabled](nodetableview.md#isenabled)
* [isRowHidden](nodetableview.md#isrowhidden)
* [isSortingEnabled](nodetableview.md#issortingenabled)
* [isVisible](nodetableview.md#isvisible)
* [lineWidth](nodetableview.md#linewidth)
* [lower](nodetableview.md#lower)
* [mapFromGlobal](nodetableview.md#mapfromglobal)
* [mapFromParent](nodetableview.md#mapfromparent)
* [mapToGlobal](nodetableview.md#maptoglobal)
* [mapToParent](nodetableview.md#maptoparent)
* [maximumSize](nodetableview.md#maximumsize)
* [midLineWidth](nodetableview.md#midlinewidth)
* [minimumSize](nodetableview.md#minimumsize)
* [move](nodetableview.md#move)
* [objectName](nodetableview.md#objectname)
* [pos](nodetableview.md#pos)
* [property](nodetableview.md#property)
* [raise](nodetableview.md#raise)
* [removeAction](nodetableview.md#removeaction)
* [removeEventListener](nodetableview.md#removeeventlistener)
* [repaint](nodetableview.md#repaint)
* [repolish](nodetableview.md#repolish)
* [resetHorizontalScrollMode](nodetableview.md#resethorizontalscrollmode)
* [resetVerticalScrollMode](nodetableview.md#resetverticalscrollmode)
* [resize](nodetableview.md#resize)
* [resizeColumnToContents](nodetableview.md#resizecolumntocontents)
* [resizeColumnsToContents](nodetableview.md#resizecolumnstocontents)
* [resizeRowToContents](nodetableview.md#resizerowtocontents)
* [resizeRowsToContents](nodetableview.md#resizerowstocontents)
* [rowAt](nodetableview.md#rowat)
* [rowHeight](nodetableview.md#rowheight)
* [rowSpan](nodetableview.md#rowspan)
* [rowViewportPosition](nodetableview.md#rowviewportposition)
* [scrollToBottom](nodetableview.md#scrolltobottom)
* [scrollToTop](nodetableview.md#scrolltotop)
* [selectColumn](nodetableview.md#selectcolumn)
* [selectRow](nodetableview.md#selectrow)
* [selectionBehavior](nodetableview.md#selectionbehavior)
* [selectionMode](nodetableview.md#selectionmode)
* [setAcceptDrops](nodetableview.md#setacceptdrops)
* [setAlternatingRowColors](nodetableview.md#setalternatingrowcolors)
* [setAttribute](nodetableview.md#setattribute)
* [setAutoScroll](nodetableview.md#setautoscroll)
* [setAutoScrollMargin](nodetableview.md#setautoscrollmargin)
* [setColumnHidden](nodetableview.md#setcolumnhidden)
* [setColumnWidth](nodetableview.md#setcolumnwidth)
* [setContextMenuPolicy](nodetableview.md#setcontextmenupolicy)
* [setCornerButtonEnabled](nodetableview.md#setcornerbuttonenabled)
* [setCurrentIndex](nodetableview.md#setcurrentindex)
* [setCursor](nodetableview.md#setcursor)
* [setDefaultDropAction](nodetableview.md#setdefaultdropaction)
* [setDragDropMode](nodetableview.md#setdragdropmode)
* [setDragDropOverwriteMode](nodetableview.md#setdragdropoverwritemode)
* [setDragEnabled](nodetableview.md#setdragenabled)
* [setDropIndicatorShown](nodetableview.md#setdropindicatorshown)
* [setEditTriggers](nodetableview.md#setedittriggers)
* [setEnabled](nodetableview.md#setenabled)
* [setFixedSize](nodetableview.md#setfixedsize)
* [setFlexNodeSizeControlled](nodetableview.md#setflexnodesizecontrolled)
* [setFocus](nodetableview.md#setfocus)
* [setFont](nodetableview.md#setfont)
* [setFrameRect](nodetableview.md#setframerect)
* [setFrameShadow](nodetableview.md#setframeshadow)
* [setFrameShape](nodetableview.md#setframeshape)
* [setFrameStyle](nodetableview.md#setframestyle)
* [setGeometry](nodetableview.md#setgeometry)
* [setGraphicsEffect](nodetableview.md#setgraphicseffect)
* [setGridStyle](nodetableview.md#setgridstyle)
* [setHorizontalScrollBarPolicy](nodetableview.md#sethorizontalscrollbarpolicy)
* [setHorizontalScrollMode](nodetableview.md#sethorizontalscrollmode)
* [setIconSize](nodetableview.md#seticonsize)
* [setIndexWidget](nodetableview.md#setindexwidget)
* [setInlineStyle](nodetableview.md#setinlinestyle)
* [setLayout](nodetableview.md#setlayout)
* [setLineWidth](nodetableview.md#setlinewidth)
* [setMaximumSize](nodetableview.md#setmaximumsize)
* [setMidLineWidth](nodetableview.md#setmidlinewidth)
* [setMinimumSize](nodetableview.md#setminimumsize)
* [setMouseTracking](nodetableview.md#setmousetracking)
* [setNodeParent](nodetableview.md#setnodeparent)
* [setObjectName](nodetableview.md#setobjectname)
* [setProperty](nodetableview.md#setproperty)
* [setRowHeight](nodetableview.md#setrowheight)
* [setRowHidden](nodetableview.md#setrowhidden)
* [setSelectionBehavior](nodetableview.md#setselectionbehavior)
* [setSelectionMode](nodetableview.md#setselectionmode)
* [setShowGrid](nodetableview.md#setshowgrid)
* [setSortingEnabled](nodetableview.md#setsortingenabled)
* [setSpan](nodetableview.md#setspan)
* [setStyleSheet](nodetableview.md#setstylesheet)
* [setTabKeyNavigation](nodetableview.md#settabkeynavigation)
* [setTextElideMode](nodetableview.md#settextelidemode)
* [setVerticalScrollBarPolicy](nodetableview.md#setverticalscrollbarpolicy)
* [setVerticalScrollMode](nodetableview.md#setverticalscrollmode)
* [setViewport](nodetableview.md#setviewport)
* [setWindowFlag](nodetableview.md#setwindowflag)
* [setWindowIcon](nodetableview.md#setwindowicon)
* [setWindowOpacity](nodetableview.md#setwindowopacity)
* [setWindowState](nodetableview.md#setwindowstate)
* [setWindowTitle](nodetableview.md#setwindowtitle)
* [setWordWrap](nodetableview.md#setwordwrap)
* [show](nodetableview.md#show)
* [showColumn](nodetableview.md#showcolumn)
* [showDropIndicator](nodetableview.md#showdropindicator)
* [showFullScreen](nodetableview.md#showfullscreen)
* [showGrid](nodetableview.md#showgrid)
* [showMaximized](nodetableview.md#showmaximized)
* [showMinimized](nodetableview.md#showminimized)
* [showNormal](nodetableview.md#shownormal)
* [showRow](nodetableview.md#showrow)
* [size](nodetableview.md#size)
* [sortByColumn](nodetableview.md#sortbycolumn)
* [styleSheet](nodetableview.md#stylesheet)
* [tabKeyNavigation](nodetableview.md#tabkeynavigation)
* [testAttribute](nodetableview.md#testattribute)
* [textElideMode](nodetableview.md#textelidemode)
* [update](nodetableview.md#update)
* [updateGeometry](nodetableview.md#updategeometry)
* [verticalScrollMode](nodetableview.md#verticalscrollmode)
* [viewport](nodetableview.md#viewport)
* [windowOpacity](nodetableview.md#windowopacity)
* [windowState](nodetableview.md#windowstate)
* [windowTitle](nodetableview.md#windowtitle)
* [wordWrap](nodetableview.md#wordwrap)

## Constructors

###  constructor

\+ **new NodeTableView**(`native`: [NativeElement](../globals.md#nativeelement)): *[NodeTableView](nodetableview.md)*

*Inherited from [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[NodeTableView](nodetableview.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [QMenu](qmenu.md).[_rawInlineStyle](qmenu.md#_rawinlinestyle)*

___

###  actions

• **actions**: *Set‹[QAction](qaction.md)›*

*Inherited from [QMenu](qmenu.md).[actions](qmenu.md#actions)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹Signals›*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#optional-layout)*

___

### `Abstract` native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Inherited from [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

___

###  type

• **type**: *string* = "widget"

*Inherited from [QMenu](qmenu.md).[type](qmenu.md#type)*

___

### `Optional` viewportWidget

• **viewportWidget**? : *[NodeWidget](nodewidget.md)‹any›*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewportWidget](qabstractscrollarea.md#optional-viewportwidget)*

## Methods

###  acceptDrops

▸ **acceptDrops**(): *boolean*

*Inherited from [QMenu](qmenu.md).[acceptDrops](qmenu.md#acceptdrops)*

**Returns:** *boolean*

___

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [QMenu](qmenu.md).[activateWindow](qmenu.md#activatewindow)*

**Returns:** *void*

___

###  addAction

▸ **addAction**(`action`: [QAction](qaction.md) | string): *[QAction](qaction.md)*

*Inherited from [QMenu](qmenu.md).[addAction](qmenu.md#addaction)*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [QAction](qaction.md) &#124; string |

**Returns:** *[QAction](qaction.md)*

___

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [QMenu](qmenu.md).[adjustSize](qmenu.md#adjustsize)*

**Returns:** *void*

___

###  alternatingRowColors

▸ **alternatingRowColors**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[alternatingRowColors](qabstractitemview.md#alternatingrowcolors)*

**Returns:** *boolean*

___

###  autoScrollMargin

▸ **autoScrollMargin**(): *number*

*Inherited from [QAbstractItemView](qabstractitemview.md).[autoScrollMargin](qabstractitemview.md#autoscrollmargin)*

**Returns:** *number*

___

###  clearSpans

▸ **clearSpans**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  columnAt

▸ **columnAt**(`x`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *number*

___

###  columnSpan

▸ **columnSpan**(`row`: number, `column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *number*

___

###  columnViewportPosition

▸ **columnViewportPosition**(`column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *number*

___

###  columnWidth

▸ **columnWidth**(`column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *number*

___

###  currentIndex

▸ **currentIndex**(): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[currentIndex](qabstractitemview.md#currentindex)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  defaultDropAction

▸ **defaultDropAction**(): *[DropAction](../enums/dropaction.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[defaultDropAction](qabstractitemview.md#defaultdropaction)*

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  dragDropMode

▸ **dragDropMode**(): *[DragDropMode](../enums/dragdropmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[dragDropMode](qabstractitemview.md#dragdropmode)*

**Returns:** *[DragDropMode](../enums/dragdropmode.md)*

___

###  dragDropOverwriteMode

▸ **dragDropOverwriteMode**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[dragDropOverwriteMode](qabstractitemview.md#dragdropoverwritemode)*

**Returns:** *boolean*

___

###  dragEnabled

▸ **dragEnabled**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[dragEnabled](qabstractitemview.md#dragenabled)*

**Returns:** *boolean*

___

###  editTriggers

▸ **editTriggers**(): *number*

*Inherited from [QAbstractItemView](qabstractitemview.md).[editTriggers](qabstractitemview.md#edittriggers)*

**Returns:** *number*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [QMenu](qmenu.md).[font](qmenu.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  frameRect

▸ **frameRect**(): *[QRect](qrect.md)*

*Inherited from [NodeFrame](nodeframe.md).[frameRect](nodeframe.md#framerect)*

**Returns:** *[QRect](qrect.md)*

___

###  frameShadow

▸ **frameShadow**(): *[Shadow](../enums/shadow.md)*

*Inherited from [NodeFrame](nodeframe.md).[frameShadow](nodeframe.md#frameshadow)*

**Returns:** *[Shadow](../enums/shadow.md)*

___

###  frameShape

▸ **frameShape**(): *[Shape](../enums/shape.md)*

*Inherited from [NodeFrame](nodeframe.md).[frameShape](nodeframe.md#frameshape)*

**Returns:** *[Shape](../enums/shape.md)*

___

###  frameStyle

▸ **frameStyle**(): *number*

*Inherited from [NodeFrame](nodeframe.md).[frameStyle](nodeframe.md#framestyle)*

**Returns:** *number*

___

###  frameWidth

▸ **frameWidth**(): *number*

*Inherited from [NodeFrame](nodeframe.md).[frameWidth](nodeframe.md#framewidth)*

**Returns:** *number*

___

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[geometry](qmenu.md#geometry)*

**Returns:** *[QRect](qrect.md)*

___

###  getFlexNode

▸ **getFlexNode**(): *[FlexNode](../globals.md#flexnode)*

*Inherited from [YogaWidget](yogawidget.md).[getFlexNode](yogawidget.md#getflexnode)*

**Returns:** *[FlexNode](../globals.md#flexnode)*

___

###  gridStyle

▸ **gridStyle**(): *[PenStyle](../enums/penstyle.md)*

**Returns:** *[PenStyle](../enums/penstyle.md)*

___

###  hasAutoScroll

▸ **hasAutoScroll**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[hasAutoScroll](qabstractitemview.md#hasautoscroll)*

**Returns:** *boolean*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasMouseTracking](qmenu.md#hasmousetracking)*

**Returns:** *boolean*

___

###  hide

▸ **hide**(): *void*

*Inherited from [QMenu](qmenu.md).[hide](qmenu.md#hide)*

**Returns:** *void*

___

###  hideColumn

▸ **hideColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  hideRow

▸ **hideRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  horizontalScrollMode

▸ **horizontalScrollMode**(): *[ScrollMode](../enums/scrollmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[horizontalScrollMode](qabstractitemview.md#horizontalscrollmode)*

**Returns:** *[ScrollMode](../enums/scrollmode.md)*

___

###  iconSize

▸ **iconSize**(): *[QSize](qsize.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[iconSize](qabstractitemview.md#iconsize)*

**Returns:** *[QSize](qsize.md)*

___

###  indexWidget

▸ **indexWidget**(`index`: [QModelIndex](qmodelindex.md)): *[QWidget](qwidget.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[indexWidget](qabstractitemview.md#indexwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QWidget](qwidget.md)*

___

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  isColumnHidden

▸ **isColumnHidden**(`column`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *boolean*

___

###  isCornerButtonEnabled

▸ **isCornerButtonEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isRowHidden

▸ **isRowHidden**(`row`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *boolean*

___

###  isSortingEnabled

▸ **isSortingEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isVisible](qmenu.md#isvisible)*

**Returns:** *boolean*

___

###  lineWidth

▸ **lineWidth**(): *number*

*Inherited from [NodeFrame](nodeframe.md).[lineWidth](nodeframe.md#linewidth)*

**Returns:** *number*

___

###  lower

▸ **lower**(): *void*

*Inherited from [QMenu](qmenu.md).[lower](qmenu.md#lower)*

**Returns:** *void*

___

###  mapFromGlobal

▸ **mapFromGlobal**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapFromGlobal](qmenu.md#mapfromglobal)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapFromParent

▸ **mapFromParent**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapFromParent](qmenu.md#mapfromparent)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapToGlobal

▸ **mapToGlobal**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapToGlobal](qmenu.md#maptoglobal)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapToParent

▸ **mapToParent**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapToParent](qmenu.md#maptoparent)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  maximumSize

▸ **maximumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[maximumSize](qmenu.md#maximumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  midLineWidth

▸ **midLineWidth**(): *number*

*Inherited from [NodeFrame](nodeframe.md).[midLineWidth](nodeframe.md#midlinewidth)*

**Returns:** *number*

___

###  minimumSize

▸ **minimumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[minimumSize](qmenu.md#minimumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  move

▸ **move**(`x`: number, `y`: number): *void*

*Inherited from [QMenu](qmenu.md).[move](qmenu.md#move)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

**Returns:** *string*

___

###  pos

▸ **pos**(): *object*

*Inherited from [QMenu](qmenu.md).[pos](qmenu.md#pos)*

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [NodeObject](nodeobject.md).[property](nodeobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  raise

▸ **raise**(): *void*

*Inherited from [QMenu](qmenu.md).[raise](qmenu.md#raise)*

**Returns:** *void*

___

###  removeAction

▸ **removeAction**(`action`: [QAction](qaction.md)): *void*

*Inherited from [QMenu](qmenu.md).[removeAction](qmenu.md#removeaction)*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [QAction](qaction.md) |

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  repaint

▸ **repaint**(): *void*

*Inherited from [QMenu](qmenu.md).[repaint](qmenu.md#repaint)*

**Returns:** *void*

___

###  repolish

▸ **repolish**(): *void*

*Inherited from [QMenu](qmenu.md).[repolish](qmenu.md#repolish)*

**Returns:** *void*

___

###  resetHorizontalScrollMode

▸ **resetHorizontalScrollMode**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[resetHorizontalScrollMode](qabstractitemview.md#resethorizontalscrollmode)*

**Returns:** *void*

___

###  resetVerticalScrollMode

▸ **resetVerticalScrollMode**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[resetVerticalScrollMode](qabstractitemview.md#resetverticalscrollmode)*

**Returns:** *void*

___

###  resize

▸ **resize**(`width`: number, `height`: number): *void*

*Inherited from [QMenu](qmenu.md).[resize](qmenu.md#resize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  resizeColumnToContents

▸ **resizeColumnToContents**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  resizeColumnsToContents

▸ **resizeColumnsToContents**(): *void*

**Returns:** *void*

___

###  resizeRowToContents

▸ **resizeRowToContents**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  resizeRowsToContents

▸ **resizeRowsToContents**(): *void*

**Returns:** *void*

___

###  rowAt

▸ **rowAt**(`y`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *number*

___

###  rowHeight

▸ **rowHeight**(`row`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *number*

___

###  rowSpan

▸ **rowSpan**(`row`: number, `column`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *number*

___

###  rowViewportPosition

▸ **rowViewportPosition**(`row`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *number*

___

###  scrollToBottom

▸ **scrollToBottom**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[scrollToBottom](qabstractitemview.md#scrolltobottom)*

**Returns:** *void*

___

###  scrollToTop

▸ **scrollToTop**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[scrollToTop](qabstractitemview.md#scrolltotop)*

**Returns:** *void*

___

###  selectColumn

▸ **selectColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  selectRow

▸ **selectRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  selectionBehavior

▸ **selectionBehavior**(): *[SelectionBehavior](../enums/selectionbehavior.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectionBehavior](qabstractitemview.md#selectionbehavior)*

**Returns:** *[SelectionBehavior](../enums/selectionbehavior.md)*

___

###  selectionMode

▸ **selectionMode**(): *[SelectionMode](../enums/selectionmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectionMode](qabstractitemview.md#selectionmode)*

**Returns:** *[SelectionMode](../enums/selectionmode.md)*

___

###  setAcceptDrops

▸ **setAcceptDrops**(`on`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setAcceptDrops](qmenu.md#setacceptdrops)*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

**Returns:** *void*

___

###  setAlternatingRowColors

▸ **setAlternatingRowColors**(`enable`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setAlternatingRowColors](qabstractitemview.md#setalternatingrowcolors)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setAttribute

▸ **setAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md), `switchOn`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setAttribute](qmenu.md#setattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setAutoScroll

▸ **setAutoScroll**(`enable`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setAutoScroll](qabstractitemview.md#setautoscroll)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setAutoScrollMargin

▸ **setAutoScrollMargin**(`margin`: number): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setAutoScrollMargin](qabstractitemview.md#setautoscrollmargin)*

**Parameters:**

Name | Type |
------ | ------ |
`margin` | number |

**Returns:** *void*

___

###  setColumnHidden

▸ **setColumnHidden**(`column`: number, `hide`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`hide` | boolean |

**Returns:** *void*

___

###  setColumnWidth

▸ **setColumnWidth**(`column`: number, `width`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`width` | number |

**Returns:** *void*

___

###  setContextMenuPolicy

▸ **setContextMenuPolicy**(`contextMenuPolicy`: [ContextMenuPolicy](../enums/contextmenupolicy.md)): *void*

*Inherited from [QMenu](qmenu.md).[setContextMenuPolicy](qmenu.md#setcontextmenupolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`contextMenuPolicy` | [ContextMenuPolicy](../enums/contextmenupolicy.md) |

**Returns:** *void*

___

###  setCornerButtonEnabled

▸ **setCornerButtonEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setCurrentIndex

▸ **setCurrentIndex**(`index`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setCurrentIndex](qabstractitemview.md#setcurrentindex)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

*Inherited from [QMenu](qmenu.md).[setCursor](qmenu.md#setcursor)*

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [CursorShape](../enums/cursorshape.md) &#124; [QCursor](qcursor.md) |

**Returns:** *void*

___

###  setDefaultDropAction

▸ **setDefaultDropAction**(`dropAction`: [DropAction](../enums/dropaction.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setDefaultDropAction](qabstractitemview.md#setdefaultdropaction)*

**Parameters:**

Name | Type |
------ | ------ |
`dropAction` | [DropAction](../enums/dropaction.md) |

**Returns:** *void*

___

###  setDragDropMode

▸ **setDragDropMode**(`behavior`: [DragDropMode](../enums/dragdropmode.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setDragDropMode](qabstractitemview.md#setdragdropmode)*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | [DragDropMode](../enums/dragdropmode.md) |

**Returns:** *void*

___

###  setDragDropOverwriteMode

▸ **setDragDropOverwriteMode**(`overwrite`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setDragDropOverwriteMode](qabstractitemview.md#setdragdropoverwritemode)*

**Parameters:**

Name | Type |
------ | ------ |
`overwrite` | boolean |

**Returns:** *void*

___

###  setDragEnabled

▸ **setDragEnabled**(`enable`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setDragEnabled](qabstractitemview.md#setdragenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setDropIndicatorShown

▸ **setDropIndicatorShown**(`enable`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setDropIndicatorShown](qabstractitemview.md#setdropindicatorshown)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setEditTriggers

▸ **setEditTriggers**(`triggers`: number): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setEditTriggers](qabstractitemview.md#setedittriggers)*

**Parameters:**

Name | Type |
------ | ------ |
`triggers` | number |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setEnabled](qmenu.md#setenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setFixedSize

▸ **setFixedSize**(`width`: number, `height`: number): *void*

*Inherited from [QMenu](qmenu.md).[setFixedSize](qmenu.md#setfixedsize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  setFlexNodeSizeControlled

▸ **setFlexNodeSizeControlled**(`isSizeControlled`: boolean): *void*

*Inherited from [YogaWidget](yogawidget.md).[setFlexNodeSizeControlled](yogawidget.md#setflexnodesizecontrolled)*

sets whether the widget's size is controlled by someone else (for example a window's size is controlled by its frame when dragged).

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`isSizeControlled` | boolean |   |

**Returns:** *void*

___

###  setFocus

▸ **setFocus**(`reason`: [FocusReason](../enums/focusreason.md)): *void*

*Inherited from [QMenu](qmenu.md).[setFocus](qmenu.md#setfocus)*

**Parameters:**

Name | Type |
------ | ------ |
`reason` | [FocusReason](../enums/focusreason.md) |

**Returns:** *void*

___

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

*Inherited from [QMenu](qmenu.md).[setFont](qmenu.md#setfont)*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setFrameRect

▸ **setFrameRect**(`r`: [QRect](qrect.md)): *void*

*Inherited from [NodeFrame](nodeframe.md).[setFrameRect](nodeframe.md#setframerect)*

**Parameters:**

Name | Type |
------ | ------ |
`r` | [QRect](qrect.md) |

**Returns:** *void*

___

###  setFrameShadow

▸ **setFrameShadow**(`type`: [Shadow](../enums/shadow.md)): *void*

*Inherited from [NodeFrame](nodeframe.md).[setFrameShadow](nodeframe.md#setframeshadow)*

**Parameters:**

Name | Type |
------ | ------ |
`type` | [Shadow](../enums/shadow.md) |

**Returns:** *void*

___

###  setFrameShape

▸ **setFrameShape**(`type`: [Shape](../enums/shape.md)): *void*

*Inherited from [NodeFrame](nodeframe.md).[setFrameShape](nodeframe.md#setframeshape)*

**Parameters:**

Name | Type |
------ | ------ |
`type` | [Shape](../enums/shape.md) |

**Returns:** *void*

___

###  setFrameStyle

▸ **setFrameStyle**(`style`: number): *void*

*Inherited from [NodeFrame](nodeframe.md).[setFrameStyle](nodeframe.md#setframestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | number |

**Returns:** *void*

___

###  setGeometry

▸ **setGeometry**(`x`: number, `y`: number, `w`: number, `h`: number): *void*

*Inherited from [QMenu](qmenu.md).[setGeometry](qmenu.md#setgeometry)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |

**Returns:** *void*

___

###  setGraphicsEffect

▸ **setGraphicsEffect**(`effect`: [QGraphicsEffect](qgraphicseffect.md)‹any›): *void*

*Inherited from [QMenu](qmenu.md).[setGraphicsEffect](qmenu.md#setgraphicseffect)*

**Parameters:**

Name | Type |
------ | ------ |
`effect` | [QGraphicsEffect](qgraphicseffect.md)‹any› |

**Returns:** *void*

___

###  setGridStyle

▸ **setGridStyle**(`style`: [PenStyle](../enums/penstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [PenStyle](../enums/penstyle.md) |

**Returns:** *void*

___

###  setHorizontalScrollBarPolicy

▸ **setHorizontalScrollBarPolicy**(`policy`: [ScrollBarPolicy](../enums/scrollbarpolicy.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setHorizontalScrollBarPolicy](qabstractscrollarea.md#sethorizontalscrollbarpolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [ScrollBarPolicy](../enums/scrollbarpolicy.md) |

**Returns:** *void*

___

###  setHorizontalScrollMode

▸ **setHorizontalScrollMode**(`mode`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setHorizontalScrollMode](qabstractitemview.md#sethorizontalscrollmode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | boolean |

**Returns:** *void*

___

###  setIconSize

▸ **setIconSize**(`iconSize`: [QSize](qsize.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setIconSize](qabstractitemview.md#seticonsize)*

**Parameters:**

Name | Type |
------ | ------ |
`iconSize` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setIndexWidget

▸ **setIndexWidget**(`index`: [QModelIndex](qmodelindex.md), `widget`: [QWidget](qwidget.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setIndexWidget](qabstractitemview.md#setindexwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [QMenu](qmenu.md).[setInlineStyle](qmenu.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹Signals›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹Signals› |

**Returns:** *void*

___

###  setLineWidth

▸ **setLineWidth**(`width`: number): *void*

*Inherited from [NodeFrame](nodeframe.md).[setLineWidth](nodeframe.md#setlinewidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setMaximumSize

▸ **setMaximumSize**(`maxw`: number, `maxh`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMaximumSize](qmenu.md#setmaximumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |
`maxh` | number |

**Returns:** *void*

___

###  setMidLineWidth

▸ **setMidLineWidth**(`width`: number): *void*

*Inherited from [NodeFrame](nodeframe.md).[setMidLineWidth](nodeframe.md#setmidlinewidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setMinimumSize

▸ **setMinimumSize**(`minw`: number, `minh`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMinimumSize](qmenu.md#setminimumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |
`minh` | number |

**Returns:** *void*

___

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setMouseTracking](qmenu.md#setmousetracking)*

**Parameters:**

Name | Type |
------ | ------ |
`isMouseTracked` | boolean |

**Returns:** *void*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [QMenu](qmenu.md).[setObjectName](qmenu.md#setobjectname)*

*Overrides [NodeObject](nodeobject.md).[setObjectName](nodeobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [NodeObject](nodeobject.md).[setProperty](nodeobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  setRowHeight

▸ **setRowHeight**(`row`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`height` | number |

**Returns:** *void*

___

###  setRowHidden

▸ **setRowHidden**(`row`: number, `hide`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`hide` | boolean |

**Returns:** *void*

___

###  setSelectionBehavior

▸ **setSelectionBehavior**(`behavior`: [SelectionBehavior](../enums/selectionbehavior.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setSelectionBehavior](qabstractitemview.md#setselectionbehavior)*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | [SelectionBehavior](../enums/selectionbehavior.md) |

**Returns:** *void*

___

###  setSelectionMode

▸ **setSelectionMode**(`mode`: [SelectionMode](../enums/selectionmode.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setSelectionMode](qabstractitemview.md#setselectionmode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [SelectionMode](../enums/selectionmode.md) |

**Returns:** *void*

___

###  setShowGrid

▸ **setShowGrid**(`show`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`show` | boolean |

**Returns:** *void*

___

###  setSortingEnabled

▸ **setSortingEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setSpan

▸ **setSpan**(`row`: number, `column`: number, `rowSpanCount`: number, `columnSpanCount`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |
`rowSpanCount` | number |
`columnSpanCount` | number |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [QMenu](qmenu.md).[setStyleSheet](qmenu.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setTabKeyNavigation

▸ **setTabKeyNavigation**(`enable`: boolean): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setTabKeyNavigation](qabstractitemview.md#settabkeynavigation)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setTextElideMode

▸ **setTextElideMode**(`mode`: [TextElideMode](../enums/textelidemode.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setTextElideMode](qabstractitemview.md#settextelidemode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [TextElideMode](../enums/textelidemode.md) |

**Returns:** *void*

___

###  setVerticalScrollBarPolicy

▸ **setVerticalScrollBarPolicy**(`policy`: [ScrollBarPolicy](../enums/scrollbarpolicy.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setVerticalScrollBarPolicy](qabstractscrollarea.md#setverticalscrollbarpolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [ScrollBarPolicy](../enums/scrollbarpolicy.md) |

**Returns:** *void*

___

###  setVerticalScrollMode

▸ **setVerticalScrollMode**(`mode`: [ScrollMode](../enums/scrollmode.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setVerticalScrollMode](qabstractitemview.md#setverticalscrollmode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [ScrollMode](../enums/scrollmode.md) |

**Returns:** *void*

___

###  setViewport

▸ **setViewport**(`widget`: [NodeWidget](nodewidget.md)‹any›): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setViewport](qabstractscrollarea.md#setviewport)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *void*

___

###  setWindowFlag

▸ **setWindowFlag**(`windowType`: [WindowType](../enums/windowtype.md), `switchOn`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setWindowFlag](qmenu.md#setwindowflag)*

**Parameters:**

Name | Type |
------ | ------ |
`windowType` | [WindowType](../enums/windowtype.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [QMenu](qmenu.md).[setWindowIcon](qmenu.md#setwindowicon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setWindowOpacity

▸ **setWindowOpacity**(`opacity`: number): *void*

*Inherited from [QMenu](qmenu.md).[setWindowOpacity](qmenu.md#setwindowopacity)*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

**Returns:** *void*

___

###  setWindowState

▸ **setWindowState**(`state`: [WindowState](../enums/windowstate.md)): *void*

*Inherited from [QMenu](qmenu.md).[setWindowState](qmenu.md#setwindowstate)*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [WindowState](../enums/windowstate.md) |

**Returns:** *void*

___

###  setWindowTitle

▸ **setWindowTitle**(`title`: string): *void*

*Inherited from [QMenu](qmenu.md).[setWindowTitle](qmenu.md#setwindowtitle)*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |

**Returns:** *void*

___

###  setWordWrap

▸ **setWordWrap**(`on`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

*Inherited from [QMenu](qmenu.md).[show](qmenu.md#show)*

**Returns:** *void*

___

###  showColumn

▸ **showColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  showDropIndicator

▸ **showDropIndicator**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[showDropIndicator](qabstractitemview.md#showdropindicator)*

**Returns:** *boolean*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

*Inherited from [QMenu](qmenu.md).[showFullScreen](qmenu.md#showfullscreen)*

**Returns:** *void*

___

###  showGrid

▸ **showGrid**(): *boolean*

**Returns:** *boolean*

___

###  showMaximized

▸ **showMaximized**(): *void*

*Inherited from [QMenu](qmenu.md).[showMaximized](qmenu.md#showmaximized)*

**Returns:** *void*

___

###  showMinimized

▸ **showMinimized**(): *void*

*Inherited from [QMenu](qmenu.md).[showMinimized](qmenu.md#showminimized)*

**Returns:** *void*

___

###  showNormal

▸ **showNormal**(): *void*

*Inherited from [QMenu](qmenu.md).[showNormal](qmenu.md#shownormal)*

**Returns:** *void*

___

###  showRow

▸ **showRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[size](qmenu.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  sortByColumn

▸ **sortByColumn**(`column`: number, `order`: [SortOrder](../enums/sortorder.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`order` | [SortOrder](../enums/sortorder.md) |

**Returns:** *void*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [QMenu](qmenu.md).[styleSheet](qmenu.md#stylesheet)*

**Returns:** *string*

___

###  tabKeyNavigation

▸ **tabKeyNavigation**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[tabKeyNavigation](qabstractitemview.md#tabkeynavigation)*

**Returns:** *boolean*

___

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

*Inherited from [QMenu](qmenu.md).[testAttribute](qmenu.md#testattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |

**Returns:** *boolean*

___

###  textElideMode

▸ **textElideMode**(): *[TextElideMode](../enums/textelidemode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[textElideMode](qabstractitemview.md#textelidemode)*

**Returns:** *[TextElideMode](../enums/textelidemode.md)*

___

###  update

▸ **update**(): *void*

*Inherited from [QMenu](qmenu.md).[update](qmenu.md#update)*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

*Inherited from [QMenu](qmenu.md).[updateGeometry](qmenu.md#updategeometry)*

**Returns:** *void*

___

###  verticalScrollMode

▸ **verticalScrollMode**(): *[ScrollMode](../enums/scrollmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[verticalScrollMode](qabstractitemview.md#verticalscrollmode)*

**Returns:** *[ScrollMode](../enums/scrollmode.md)*

___

###  viewport

▸ **viewport**(): *[QWidget](qwidget.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewport](qabstractscrollarea.md#viewport)*

**Returns:** *[QWidget](qwidget.md)*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

*Inherited from [QMenu](qmenu.md).[windowOpacity](qmenu.md#windowopacity)*

**Returns:** *number*

___

###  windowState

▸ **windowState**(): *number*

*Inherited from [QMenu](qmenu.md).[windowState](qmenu.md#windowstate)*

**Returns:** *number*

___

###  windowTitle

▸ **windowTitle**(): *string*

*Inherited from [QMenu](qmenu.md).[windowTitle](qmenu.md#windowtitle)*

**Returns:** *string*

___

###  wordWrap

▸ **wordWrap**(): *boolean*

**Returns:** *boolean*
