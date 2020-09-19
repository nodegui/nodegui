---
id: "qabstractitemview"
title: "QAbstractItemView"
sidebar_label: "QAbstractItemView"
---

> This is the abstract base class of button widgets, providing their functionality.

**This class is a JS wrapper around Qt's [QAbstractItemView class](https://doc.qt.io/qt-5/qabstractitemview.html)**

The QAbstractItemView class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QListWidget. (n/a QColumnView, QHeaderView, QListView, QTableView, and QTreeView)

## Type parameters

▪ **Signals**: *[QAbstractItemViewSignals](../interfaces/qabstractitemviewsignals.md)*

## Hierarchy

  ↳ [QAbstractScrollArea](qabstractscrollarea.md)‹Signals›

  ↳ **QAbstractItemView**

  ↳ [NodeListView](nodelistview.md)

  ↳ [NodeTableView](nodetableview.md)

## Index

### Constructors

* [constructor](qabstractitemview.md#constructor)

### Properties

* [_rawInlineStyle](qabstractitemview.md#_rawinlinestyle)
* [actions](qabstractitemview.md#actions)
* [layout](qabstractitemview.md#optional-layout)
* [native](qabstractitemview.md#abstract-native)
* [nodeChildren](qabstractitemview.md#nodechildren)
* [nodeParent](qabstractitemview.md#optional-nodeparent)
* [type](qabstractitemview.md#type)
* [viewportWidget](qabstractitemview.md#optional-viewportwidget)

### Methods

* [acceptDrops](qabstractitemview.md#acceptdrops)
* [activateWindow](qabstractitemview.md#activatewindow)
* [addAction](qabstractitemview.md#addaction)
* [addEventListener](qabstractitemview.md#addeventlistener)
* [adjustSize](qabstractitemview.md#adjustsize)
* [alternatingRowColors](qabstractitemview.md#alternatingrowcolors)
* [autoScrollMargin](qabstractitemview.md#autoscrollmargin)
* [close](qabstractitemview.md#close)
* [currentIndex](qabstractitemview.md#currentindex)
* [defaultDropAction](qabstractitemview.md#defaultdropaction)
* [dragDropMode](qabstractitemview.md#dragdropmode)
* [dragDropOverwriteMode](qabstractitemview.md#dragdropoverwritemode)
* [dragEnabled](qabstractitemview.md#dragenabled)
* [editTriggers](qabstractitemview.md#edittriggers)
* [font](qabstractitemview.md#font)
* [frameRect](qabstractitemview.md#framerect)
* [frameShadow](qabstractitemview.md#frameshadow)
* [frameShape](qabstractitemview.md#frameshape)
* [frameStyle](qabstractitemview.md#framestyle)
* [frameWidth](qabstractitemview.md#framewidth)
* [geometry](qabstractitemview.md#geometry)
* [getFlexNode](qabstractitemview.md#getflexnode)
* [hasAutoScroll](qabstractitemview.md#hasautoscroll)
* [hasMouseTracking](qabstractitemview.md#hasmousetracking)
* [hide](qabstractitemview.md#hide)
* [horizontalScrollMode](qabstractitemview.md#horizontalscrollmode)
* [iconSize](qabstractitemview.md#iconsize)
* [indexWidget](qabstractitemview.md#indexwidget)
* [inherits](qabstractitemview.md#inherits)
* [isEnabled](qabstractitemview.md#isenabled)
* [isVisible](qabstractitemview.md#isvisible)
* [lineWidth](qabstractitemview.md#linewidth)
* [lower](qabstractitemview.md#lower)
* [mapFromGlobal](qabstractitemview.md#mapfromglobal)
* [mapFromParent](qabstractitemview.md#mapfromparent)
* [mapToGlobal](qabstractitemview.md#maptoglobal)
* [mapToParent](qabstractitemview.md#maptoparent)
* [maximumSize](qabstractitemview.md#maximumsize)
* [midLineWidth](qabstractitemview.md#midlinewidth)
* [minimumSize](qabstractitemview.md#minimumsize)
* [move](qabstractitemview.md#move)
* [objectName](qabstractitemview.md#objectname)
* [pos](qabstractitemview.md#pos)
* [property](qabstractitemview.md#property)
* [raise](qabstractitemview.md#raise)
* [removeAction](qabstractitemview.md#removeaction)
* [removeEventListener](qabstractitemview.md#removeeventlistener)
* [repaint](qabstractitemview.md#repaint)
* [repolish](qabstractitemview.md#repolish)
* [resetHorizontalScrollMode](qabstractitemview.md#resethorizontalscrollmode)
* [resetVerticalScrollMode](qabstractitemview.md#resetverticalscrollmode)
* [resize](qabstractitemview.md#resize)
* [scrollToBottom](qabstractitemview.md#scrolltobottom)
* [scrollToTop](qabstractitemview.md#scrolltotop)
* [selectionBehavior](qabstractitemview.md#selectionbehavior)
* [selectionMode](qabstractitemview.md#selectionmode)
* [setAcceptDrops](qabstractitemview.md#setacceptdrops)
* [setAlternatingRowColors](qabstractitemview.md#setalternatingrowcolors)
* [setAttribute](qabstractitemview.md#setattribute)
* [setAutoScroll](qabstractitemview.md#setautoscroll)
* [setAutoScrollMargin](qabstractitemview.md#setautoscrollmargin)
* [setContextMenuPolicy](qabstractitemview.md#setcontextmenupolicy)
* [setCurrentIndex](qabstractitemview.md#setcurrentindex)
* [setCursor](qabstractitemview.md#setcursor)
* [setDefaultDropAction](qabstractitemview.md#setdefaultdropaction)
* [setDragDropMode](qabstractitemview.md#setdragdropmode)
* [setDragDropOverwriteMode](qabstractitemview.md#setdragdropoverwritemode)
* [setDragEnabled](qabstractitemview.md#setdragenabled)
* [setDropIndicatorShown](qabstractitemview.md#setdropindicatorshown)
* [setEditTriggers](qabstractitemview.md#setedittriggers)
* [setEnabled](qabstractitemview.md#setenabled)
* [setFixedSize](qabstractitemview.md#setfixedsize)
* [setFlexNodeSizeControlled](qabstractitemview.md#setflexnodesizecontrolled)
* [setFocus](qabstractitemview.md#setfocus)
* [setFont](qabstractitemview.md#setfont)
* [setFrameRect](qabstractitemview.md#setframerect)
* [setFrameShadow](qabstractitemview.md#setframeshadow)
* [setFrameShape](qabstractitemview.md#setframeshape)
* [setFrameStyle](qabstractitemview.md#setframestyle)
* [setGeometry](qabstractitemview.md#setgeometry)
* [setGraphicsEffect](qabstractitemview.md#setgraphicseffect)
* [setHorizontalScrollBarPolicy](qabstractitemview.md#sethorizontalscrollbarpolicy)
* [setHorizontalScrollMode](qabstractitemview.md#sethorizontalscrollmode)
* [setIconSize](qabstractitemview.md#seticonsize)
* [setIndexWidget](qabstractitemview.md#setindexwidget)
* [setInlineStyle](qabstractitemview.md#setinlinestyle)
* [setLayout](qabstractitemview.md#setlayout)
* [setLineWidth](qabstractitemview.md#setlinewidth)
* [setMaximumSize](qabstractitemview.md#setmaximumsize)
* [setMidLineWidth](qabstractitemview.md#setmidlinewidth)
* [setMinimumSize](qabstractitemview.md#setminimumsize)
* [setMouseTracking](qabstractitemview.md#setmousetracking)
* [setNodeParent](qabstractitemview.md#setnodeparent)
* [setObjectName](qabstractitemview.md#setobjectname)
* [setProperty](qabstractitemview.md#setproperty)
* [setSelectionBehavior](qabstractitemview.md#setselectionbehavior)
* [setSelectionMode](qabstractitemview.md#setselectionmode)
* [setStyleSheet](qabstractitemview.md#setstylesheet)
* [setTabKeyNavigation](qabstractitemview.md#settabkeynavigation)
* [setTextElideMode](qabstractitemview.md#settextelidemode)
* [setVerticalScrollBarPolicy](qabstractitemview.md#setverticalscrollbarpolicy)
* [setVerticalScrollMode](qabstractitemview.md#setverticalscrollmode)
* [setViewport](qabstractitemview.md#setviewport)
* [setWindowFlag](qabstractitemview.md#setwindowflag)
* [setWindowIcon](qabstractitemview.md#setwindowicon)
* [setWindowOpacity](qabstractitemview.md#setwindowopacity)
* [setWindowState](qabstractitemview.md#setwindowstate)
* [setWindowTitle](qabstractitemview.md#setwindowtitle)
* [show](qabstractitemview.md#show)
* [showDropIndicator](qabstractitemview.md#showdropindicator)
* [showFullScreen](qabstractitemview.md#showfullscreen)
* [showMaximized](qabstractitemview.md#showmaximized)
* [showMinimized](qabstractitemview.md#showminimized)
* [showNormal](qabstractitemview.md#shownormal)
* [size](qabstractitemview.md#size)
* [styleSheet](qabstractitemview.md#stylesheet)
* [tabKeyNavigation](qabstractitemview.md#tabkeynavigation)
* [testAttribute](qabstractitemview.md#testattribute)
* [textElideMode](qabstractitemview.md#textelidemode)
* [update](qabstractitemview.md#update)
* [updateGeometry](qabstractitemview.md#updategeometry)
* [verticalScrollMode](qabstractitemview.md#verticalscrollmode)
* [viewport](qabstractitemview.md#viewport)
* [windowOpacity](qabstractitemview.md#windowopacity)
* [windowState](qabstractitemview.md#windowstate)
* [windowTitle](qabstractitemview.md#windowtitle)

## Constructors

###  constructor

\+ **new QAbstractItemView**(`native`: [NativeElement](../globals.md#nativeelement)): *[QAbstractItemView](qabstractitemview.md)*

*Inherited from [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QAbstractItemView](qabstractitemview.md)*

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

**Returns:** *boolean*

___

###  autoScrollMargin

▸ **autoScrollMargin**(): *number*

**Returns:** *number*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  currentIndex

▸ **currentIndex**(): *[QModelIndex](qmodelindex.md)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  defaultDropAction

▸ **defaultDropAction**(): *[DropAction](../enums/dropaction.md)*

**Returns:** *[DropAction](../enums/dropaction.md)*

___

###  dragDropMode

▸ **dragDropMode**(): *[DragDropMode](../enums/dragdropmode.md)*

**Returns:** *[DragDropMode](../enums/dragdropmode.md)*

___

###  dragDropOverwriteMode

▸ **dragDropOverwriteMode**(): *boolean*

**Returns:** *boolean*

___

###  dragEnabled

▸ **dragEnabled**(): *boolean*

**Returns:** *boolean*

___

###  editTriggers

▸ **editTriggers**(): *number*

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

###  hasAutoScroll

▸ **hasAutoScroll**(): *boolean*

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

###  horizontalScrollMode

▸ **horizontalScrollMode**(): *[ScrollMode](../enums/scrollmode.md)*

**Returns:** *[ScrollMode](../enums/scrollmode.md)*

___

###  iconSize

▸ **iconSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  indexWidget

▸ **indexWidget**(`index`: [QModelIndex](qmodelindex.md)): *[QWidget](qwidget.md)*

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

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

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

**Returns:** *void*

___

###  resetVerticalScrollMode

▸ **resetVerticalScrollMode**(): *void*

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

###  scrollToBottom

▸ **scrollToBottom**(): *void*

**Returns:** *void*

___

###  scrollToTop

▸ **scrollToTop**(): *void*

**Returns:** *void*

___

###  selectionBehavior

▸ **selectionBehavior**(): *[SelectionBehavior](../enums/selectionbehavior.md)*

**Returns:** *[SelectionBehavior](../enums/selectionbehavior.md)*

___

###  selectionMode

▸ **selectionMode**(): *[SelectionMode](../enums/selectionmode.md)*

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

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setAutoScrollMargin

▸ **setAutoScrollMargin**(`margin`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`margin` | number |

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

###  setCurrentIndex

▸ **setCurrentIndex**(`index`: [QModelIndex](qmodelindex.md)): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`dropAction` | [DropAction](../enums/dropaction.md) |

**Returns:** *void*

___

###  setDragDropMode

▸ **setDragDropMode**(`behavior`: [DragDropMode](../enums/dragdropmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | [DragDropMode](../enums/dragdropmode.md) |

**Returns:** *void*

___

###  setDragDropOverwriteMode

▸ **setDragDropOverwriteMode**(`overwrite`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`overwrite` | boolean |

**Returns:** *void*

___

###  setDragEnabled

▸ **setDragEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setDropIndicatorShown

▸ **setDropIndicatorShown**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setEditTriggers

▸ **setEditTriggers**(`triggers`: number): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`mode` | boolean |

**Returns:** *void*

___

###  setIconSize

▸ **setIconSize**(`iconSize`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`iconSize` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setIndexWidget

▸ **setIndexWidget**(`index`: [QModelIndex](qmodelindex.md), `widget`: [QWidget](qwidget.md)): *void*

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

###  setSelectionBehavior

▸ **setSelectionBehavior**(`behavior`: [SelectionBehavior](../enums/selectionbehavior.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | [SelectionBehavior](../enums/selectionbehavior.md) |

**Returns:** *void*

___

###  setSelectionMode

▸ **setSelectionMode**(`mode`: [SelectionMode](../enums/selectionmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [SelectionMode](../enums/selectionmode.md) |

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

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setTextElideMode

▸ **setTextElideMode**(`mode`: [TextElideMode](../enums/textelidemode.md)): *void*

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

###  show

▸ **show**(): *void*

*Inherited from [QMenu](qmenu.md).[show](qmenu.md#show)*

**Returns:** *void*

___

###  showDropIndicator

▸ **showDropIndicator**(): *boolean*

**Returns:** *boolean*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

*Inherited from [QMenu](qmenu.md).[showFullScreen](qmenu.md#showfullscreen)*

**Returns:** *void*

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

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[size](qmenu.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [QMenu](qmenu.md).[styleSheet](qmenu.md#stylesheet)*

**Returns:** *string*

___

###  tabKeyNavigation

▸ **tabKeyNavigation**(): *boolean*

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
