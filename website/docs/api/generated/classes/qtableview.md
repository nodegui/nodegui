---
id: "qtableview"
title: "QTableView"
sidebar_label: "QTableView"
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

  ↳ **QTableView**

  ↳ [QTableWidget](qtablewidget.md)

## Index

### Constructors

* [constructor](qtableview.md#constructor)

### Properties

* [_rawInlineStyle](qtableview.md#_rawinlinestyle)
* [native](qtableview.md#native)
* [type](qtableview.md#type)

### Methods

* [_id](qtableview.md#_id)
* [acceptDrops](qtableview.md#acceptdrops)
* [accessibleDescription](qtableview.md#accessibledescription)
* [accessibleName](qtableview.md#accessiblename)
* [activateWindow](qtableview.md#activatewindow)
* [addAction](qtableview.md#addaction)
* [addEventListener](qtableview.md#addeventlistener)
* [adjustSize](qtableview.md#adjustsize)
* [alternatingRowColors](qtableview.md#alternatingrowcolors)
* [autoFillBackground](qtableview.md#autofillbackground)
* [autoScrollMargin](qtableview.md#autoscrollmargin)
* [baseSize](qtableview.md#basesize)
* [childAt](qtableview.md#childat)
* [children](qtableview.md#children)
* [childrenRect](qtableview.md#childrenrect)
* [clearFocus](qtableview.md#clearfocus)
* [clearMask](qtableview.md#clearmask)
* [clearSelection](qtableview.md#clearselection)
* [clearSpans](qtableview.md#clearspans)
* [close](qtableview.md#close)
* [closePersistentEditor](qtableview.md#closepersistenteditor)
* [colorCount](qtableview.md#colorcount)
* [columnAt](qtableview.md#columnat)
* [columnSpan](qtableview.md#columnspan)
* [columnViewportPosition](qtableview.md#columnviewportposition)
* [columnWidth](qtableview.md#columnwidth)
* [contentsRect](qtableview.md#contentsrect)
* [contextMenuPolicy](qtableview.md#contextmenupolicy)
* [currentIndex](qtableview.md#currentindex)
* [defaultDropAction](qtableview.md#defaultdropaction)
* [delete](qtableview.md#delete)
* [deleteLater](qtableview.md#deletelater)
* [depth](qtableview.md#depth)
* [devicePixelRatio](qtableview.md#devicepixelratio)
* [devicePixelRatioF](qtableview.md#devicepixelratiof)
* [dragDropMode](qtableview.md#dragdropmode)
* [dragDropOverwriteMode](qtableview.md#dragdropoverwritemode)
* [dragEnabled](qtableview.md#dragenabled)
* [dumpObjectInfo](qtableview.md#dumpobjectinfo)
* [dumpObjectTree](qtableview.md#dumpobjecttree)
* [edit](qtableview.md#edit)
* [editTriggers](qtableview.md#edittriggers)
* [ensurePolished](qtableview.md#ensurepolished)
* [eventProcessed](qtableview.md#eventprocessed)
* [focusProxy](qtableview.md#focusproxy)
* [focusWidget](qtableview.md#focuswidget)
* [font](qtableview.md#font)
* [frameGeometry](qtableview.md#framegeometry)
* [frameRect](qtableview.md#framerect)
* [frameShadow](qtableview.md#frameshadow)
* [frameShape](qtableview.md#frameshape)
* [frameSize](qtableview.md#framesize)
* [frameStyle](qtableview.md#framestyle)
* [frameWidth](qtableview.md#framewidth)
* [geometry](qtableview.md#geometry)
* [getFlexNode](qtableview.md#getflexnode)
* [grab](qtableview.md#grab)
* [grabKeyboard](qtableview.md#grabkeyboard)
* [grabMouse](qtableview.md#grabmouse)
* [gridStyle](qtableview.md#gridstyle)
* [hasAutoScroll](qtableview.md#hasautoscroll)
* [hasFocus](qtableview.md#hasfocus)
* [hasHeightForWidth](qtableview.md#hasheightforwidth)
* [hasMouseTracking](qtableview.md#hasmousetracking)
* [hasTabletTracking](qtableview.md#hastablettracking)
* [height](qtableview.md#height)
* [heightForWidth](qtableview.md#heightforwidth)
* [heightMM](qtableview.md#heightmm)
* [hide](qtableview.md#hide)
* [hideColumn](qtableview.md#hidecolumn)
* [hideRow](qtableview.md#hiderow)
* [horizontalHeader](qtableview.md#horizontalheader)
* [horizontalScrollBar](qtableview.md#horizontalscrollbar)
* [horizontalScrollMode](qtableview.md#horizontalscrollmode)
* [iconSize](qtableview.md#iconsize)
* [indexAt](qtableview.md#indexat)
* [indexWidget](qtableview.md#indexwidget)
* [inherits](qtableview.md#inherits)
* [inputMethodHints](qtableview.md#inputmethodhints)
* [isActiveWindow](qtableview.md#isactivewindow)
* [isAncestorOf](qtableview.md#isancestorof)
* [isColumnHidden](qtableview.md#iscolumnhidden)
* [isCornerButtonEnabled](qtableview.md#iscornerbuttonenabled)
* [isEnabled](qtableview.md#isenabled)
* [isEnabledTo](qtableview.md#isenabledto)
* [isFullScreen](qtableview.md#isfullscreen)
* [isHidden](qtableview.md#ishidden)
* [isMaximized](qtableview.md#ismaximized)
* [isMinimized](qtableview.md#isminimized)
* [isModal](qtableview.md#ismodal)
* [isPersistentEditorOpen](qtableview.md#ispersistenteditoropen)
* [isRowHidden](qtableview.md#isrowhidden)
* [isSortingEnabled](qtableview.md#issortingenabled)
* [isVisible](qtableview.md#isvisible)
* [isVisibleTo](qtableview.md#isvisibleto)
* [isWindow](qtableview.md#iswindow)
* [isWindowModified](qtableview.md#iswindowmodified)
* [keyboardSearch](qtableview.md#keyboardsearch)
* [killTimer](qtableview.md#killtimer)
* [layout](qtableview.md#layout)
* [lineWidth](qtableview.md#linewidth)
* [logicalDpiX](qtableview.md#logicaldpix)
* [logicalDpiY](qtableview.md#logicaldpiy)
* [lower](qtableview.md#lower)
* [mapFrom](qtableview.md#mapfrom)
* [mapFromGlobal](qtableview.md#mapfromglobal)
* [mapFromParent](qtableview.md#mapfromparent)
* [mapTo](qtableview.md#mapto)
* [mapToGlobal](qtableview.md#maptoglobal)
* [mapToParent](qtableview.md#maptoparent)
* [maximumHeight](qtableview.md#maximumheight)
* [maximumSize](qtableview.md#maximumsize)
* [maximumViewportSize](qtableview.md#maximumviewportsize)
* [maximumWidth](qtableview.md#maximumwidth)
* [midLineWidth](qtableview.md#midlinewidth)
* [minimumHeight](qtableview.md#minimumheight)
* [minimumSize](qtableview.md#minimumsize)
* [minimumSizeHint](qtableview.md#minimumsizehint)
* [minimumWidth](qtableview.md#minimumwidth)
* [move](qtableview.md#move)
* [nativeParentWidget](qtableview.md#nativeparentwidget)
* [nextInFocusChain](qtableview.md#nextinfocuschain)
* [normalGeometry](qtableview.md#normalgeometry)
* [objectName](qtableview.md#objectname)
* [openPersistentEditor](qtableview.md#openpersistenteditor)
* [paintingActive](qtableview.md#paintingactive)
* [parent](qtableview.md#parent)
* [parentWidget](qtableview.md#parentwidget)
* [physicalDpiX](qtableview.md#physicaldpix)
* [physicalDpiY](qtableview.md#physicaldpiy)
* [pos](qtableview.md#pos)
* [previousInFocusChain](qtableview.md#previousinfocuschain)
* [property](qtableview.md#property)
* [raise](qtableview.md#raise)
* [rect](qtableview.md#rect)
* [releaseKeyboard](qtableview.md#releasekeyboard)
* [releaseMouse](qtableview.md#releasemouse)
* [releaseShortcut](qtableview.md#releaseshortcut)
* [removeAction](qtableview.md#removeaction)
* [removeEventListener](qtableview.md#removeeventlistener)
* [repaint](qtableview.md#repaint)
* [repolish](qtableview.md#repolish)
* [reset](qtableview.md#reset)
* [resetHorizontalScrollMode](qtableview.md#resethorizontalscrollmode)
* [resetVerticalScrollMode](qtableview.md#resetverticalscrollmode)
* [resize](qtableview.md#resize)
* [resizeColumnToContents](qtableview.md#resizecolumntocontents)
* [resizeColumnsToContents](qtableview.md#resizecolumnstocontents)
* [resizeRowToContents](qtableview.md#resizerowtocontents)
* [resizeRowsToContents](qtableview.md#resizerowstocontents)
* [rootIndex](qtableview.md#rootindex)
* [rowAt](qtableview.md#rowat)
* [rowHeight](qtableview.md#rowheight)
* [rowSpan](qtableview.md#rowspan)
* [rowViewportPosition](qtableview.md#rowviewportposition)
* [scrollTo](qtableview.md#scrollto)
* [scrollToBottom](qtableview.md#scrolltobottom)
* [scrollToTop](qtableview.md#scrolltotop)
* [selectAll](qtableview.md#selectall)
* [selectColumn](qtableview.md#selectcolumn)
* [selectRow](qtableview.md#selectrow)
* [selectionBehavior](qtableview.md#selectionbehavior)
* [selectionMode](qtableview.md#selectionmode)
* [selectionModel](qtableview.md#selectionmodel)
* [setAcceptDrops](qtableview.md#setacceptdrops)
* [setAccessibleDescription](qtableview.md#setaccessibledescription)
* [setAccessibleName](qtableview.md#setaccessiblename)
* [setAlternatingRowColors](qtableview.md#setalternatingrowcolors)
* [setAttribute](qtableview.md#setattribute)
* [setAutoFillBackground](qtableview.md#setautofillbackground)
* [setAutoScroll](qtableview.md#setautoscroll)
* [setAutoScrollMargin](qtableview.md#setautoscrollmargin)
* [setBaseSize](qtableview.md#setbasesize)
* [setColumnHidden](qtableview.md#setcolumnhidden)
* [setColumnWidth](qtableview.md#setcolumnwidth)
* [setContentsMargins](qtableview.md#setcontentsmargins)
* [setContextMenuPolicy](qtableview.md#setcontextmenupolicy)
* [setCornerButtonEnabled](qtableview.md#setcornerbuttonenabled)
* [setCurrentIndex](qtableview.md#setcurrentindex)
* [setCursor](qtableview.md#setcursor)
* [setDefaultDropAction](qtableview.md#setdefaultdropaction)
* [setDisabled](qtableview.md#setdisabled)
* [setDragDropMode](qtableview.md#setdragdropmode)
* [setDragDropOverwriteMode](qtableview.md#setdragdropoverwritemode)
* [setDragEnabled](qtableview.md#setdragenabled)
* [setDropIndicatorShown](qtableview.md#setdropindicatorshown)
* [setEditTriggers](qtableview.md#setedittriggers)
* [setEnabled](qtableview.md#setenabled)
* [setEventProcessed](qtableview.md#seteventprocessed)
* [setFixedHeight](qtableview.md#setfixedheight)
* [setFixedSize](qtableview.md#setfixedsize)
* [setFixedWidth](qtableview.md#setfixedwidth)
* [setFlexNodeSizeControlled](qtableview.md#setflexnodesizecontrolled)
* [setFocus](qtableview.md#setfocus)
* [setFocusPolicy](qtableview.md#setfocuspolicy)
* [setFocusProxy](qtableview.md#setfocusproxy)
* [setFont](qtableview.md#setfont)
* [setFrameRect](qtableview.md#setframerect)
* [setFrameShadow](qtableview.md#setframeshadow)
* [setFrameShape](qtableview.md#setframeshape)
* [setFrameStyle](qtableview.md#setframestyle)
* [setGeometry](qtableview.md#setgeometry)
* [setGraphicsEffect](qtableview.md#setgraphicseffect)
* [setGridStyle](qtableview.md#setgridstyle)
* [setHidden](qtableview.md#sethidden)
* [setHorizontalScrollBar](qtableview.md#sethorizontalscrollbar)
* [setHorizontalScrollBarPolicy](qtableview.md#sethorizontalscrollbarpolicy)
* [setHorizontalScrollMode](qtableview.md#sethorizontalscrollmode)
* [setIconSize](qtableview.md#seticonsize)
* [setIndexWidget](qtableview.md#setindexwidget)
* [setInlineStyle](qtableview.md#setinlinestyle)
* [setInputMethodHints](qtableview.md#setinputmethodhints)
* [setItemDelegate](qtableview.md#setitemdelegate)
* [setItemDelegateForColumn](qtableview.md#setitemdelegateforcolumn)
* [setItemDelegateForRow](qtableview.md#setitemdelegateforrow)
* [setLayout](qtableview.md#setlayout)
* [setLineWidth](qtableview.md#setlinewidth)
* [setMaximumHeight](qtableview.md#setmaximumheight)
* [setMaximumSize](qtableview.md#setmaximumsize)
* [setMaximumWidth](qtableview.md#setmaximumwidth)
* [setMidLineWidth](qtableview.md#setmidlinewidth)
* [setMinimumHeight](qtableview.md#setminimumheight)
* [setMinimumSize](qtableview.md#setminimumsize)
* [setMinimumWidth](qtableview.md#setminimumwidth)
* [setModel](qtableview.md#setmodel)
* [setMouseTracking](qtableview.md#setmousetracking)
* [setObjectName](qtableview.md#setobjectname)
* [setParent](qtableview.md#setparent)
* [setProperty](qtableview.md#setproperty)
* [setRootIndex](qtableview.md#setrootindex)
* [setRowHeight](qtableview.md#setrowheight)
* [setRowHidden](qtableview.md#setrowhidden)
* [setSelectionBehavior](qtableview.md#setselectionbehavior)
* [setSelectionMode](qtableview.md#setselectionmode)
* [setShortcutAutoRepeat](qtableview.md#setshortcutautorepeat)
* [setShortcutEnabled](qtableview.md#setshortcutenabled)
* [setShowGrid](qtableview.md#setshowgrid)
* [setSizeIncrement](qtableview.md#setsizeincrement)
* [setSizePolicy](qtableview.md#setsizepolicy)
* [setSortingEnabled](qtableview.md#setsortingenabled)
* [setSpan](qtableview.md#setspan)
* [setStatusTip](qtableview.md#setstatustip)
* [setStyleSheet](qtableview.md#setstylesheet)
* [setTabKeyNavigation](qtableview.md#settabkeynavigation)
* [setTabletTracking](qtableview.md#settablettracking)
* [setTextElideMode](qtableview.md#settextelidemode)
* [setToolTip](qtableview.md#settooltip)
* [setToolTipDuration](qtableview.md#settooltipduration)
* [setUpdatesEnabled](qtableview.md#setupdatesenabled)
* [setVerticalScrollBar](qtableview.md#setverticalscrollbar)
* [setVerticalScrollBarPolicy](qtableview.md#setverticalscrollbarpolicy)
* [setVerticalScrollMode](qtableview.md#setverticalscrollmode)
* [setViewport](qtableview.md#setviewport)
* [setVisible](qtableview.md#setvisible)
* [setWhatsThis](qtableview.md#setwhatsthis)
* [setWindowFilePath](qtableview.md#setwindowfilepath)
* [setWindowFlag](qtableview.md#setwindowflag)
* [setWindowIcon](qtableview.md#setwindowicon)
* [setWindowModified](qtableview.md#setwindowmodified)
* [setWindowOpacity](qtableview.md#setwindowopacity)
* [setWindowRole](qtableview.md#setwindowrole)
* [setWindowState](qtableview.md#setwindowstate)
* [setWindowTitle](qtableview.md#setwindowtitle)
* [setWordWrap](qtableview.md#setwordwrap)
* [show](qtableview.md#show)
* [showColumn](qtableview.md#showcolumn)
* [showDropIndicator](qtableview.md#showdropindicator)
* [showFullScreen](qtableview.md#showfullscreen)
* [showGrid](qtableview.md#showgrid)
* [showMaximized](qtableview.md#showmaximized)
* [showMinimized](qtableview.md#showminimized)
* [showNormal](qtableview.md#shownormal)
* [showRow](qtableview.md#showrow)
* [size](qtableview.md#size)
* [sizeHint](qtableview.md#sizehint)
* [sizeHintForIndex](qtableview.md#sizehintforindex)
* [sizeIncrement](qtableview.md#sizeincrement)
* [sortByColumn](qtableview.md#sortbycolumn)
* [stackUnder](qtableview.md#stackunder)
* [startTimer](qtableview.md#starttimer)
* [statusTip](qtableview.md#statustip)
* [style](qtableview.md#style)
* [styleSheet](qtableview.md#stylesheet)
* [tabKeyNavigation](qtableview.md#tabkeynavigation)
* [testAttribute](qtableview.md#testattribute)
* [textElideMode](qtableview.md#textelidemode)
* [toolTip](qtableview.md#tooltip)
* [toolTipDuration](qtableview.md#tooltipduration)
* [underMouse](qtableview.md#undermouse)
* [unsetCursor](qtableview.md#unsetcursor)
* [unsetLayoutDirection](qtableview.md#unsetlayoutdirection)
* [unsetLocale](qtableview.md#unsetlocale)
* [update](qtableview.md#update)
* [updateGeometry](qtableview.md#updategeometry)
* [updateMicroFocus](qtableview.md#updatemicrofocus)
* [updatesEnabled](qtableview.md#updatesenabled)
* [verticalHeader](qtableview.md#verticalheader)
* [verticalScrollBar](qtableview.md#verticalscrollbar)
* [verticalScrollMode](qtableview.md#verticalscrollmode)
* [viewport](qtableview.md#viewport)
* [visualRect](qtableview.md#visualrect)
* [whatsThis](qtableview.md#whatsthis)
* [width](qtableview.md#width)
* [widthMM](qtableview.md#widthmm)
* [winId](qtableview.md#winid)
* [window](qtableview.md#window)
* [windowFilePath](qtableview.md#windowfilepath)
* [windowHandle](qtableview.md#windowhandle)
* [windowIcon](qtableview.md#windowicon)
* [windowOpacity](qtableview.md#windowopacity)
* [windowRole](qtableview.md#windowrole)
* [windowState](qtableview.md#windowstate)
* [windowTitle](qtableview.md#windowtitle)
* [wordWrap](qtableview.md#wordwrap)
* [x](qtableview.md#x)
* [y](qtableview.md#y)

## Constructors

###  constructor

\+ **new QTableView**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QTableView](qtableview.md)*

*Overrides [QFrame](qframe.md).[constructor](qframe.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QTableView](qtableview.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string*

*Inherited from [QMenu](qmenu.md).[_rawInlineStyle](qmenu.md#_rawinlinestyle)*

___

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

___

###  type

• **type**: *string*

*Inherited from [QMenu](qmenu.md).[type](qmenu.md#type)*

## Methods

###  _id

▸ **_id**(): *number*

*Inherited from [QObject](qobject.md).[_id](qobject.md#_id)*

Get an ID identifying the underlying C++ object.

This can be useful when debugging memory problems with help from
`setLogCreateQObject()` and `setLogDestroyQObject()`. The number is
hash of the memory address of the C++ object.

**Returns:** *number*

a unique number which is valid for the lifetime of the C++ object.

___

###  acceptDrops

▸ **acceptDrops**(): *boolean*

*Inherited from [QMenu](qmenu.md).[acceptDrops](qmenu.md#acceptdrops)*

**Returns:** *boolean*

___

###  accessibleDescription

▸ **accessibleDescription**(): *string*

*Inherited from [QMenu](qmenu.md).[accessibleDescription](qmenu.md#accessibledescription)*

**Returns:** *string*

___

###  accessibleName

▸ **accessibleName**(): *string*

*Inherited from [QMenu](qmenu.md).[accessibleName](qmenu.md#accessiblename)*

**Returns:** *string*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
`options?` | [EventListenerOptions](../interfaces/eventlisteneroptions.md) | Extra optional options controlling how this event listener is added. |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function, `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

▪`Optional`  **options**: *[EventListenerOptions](../interfaces/eventlisteneroptions.md)*

Extra optional options controlling how this event listener is added.

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

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

###  autoFillBackground

▸ **autoFillBackground**(): *boolean*

*Inherited from [QMenu](qmenu.md).[autoFillBackground](qmenu.md#autofillbackground)*

**Returns:** *boolean*

___

###  autoScrollMargin

▸ **autoScrollMargin**(): *number*

*Inherited from [QAbstractItemView](qabstractitemview.md).[autoScrollMargin](qabstractitemview.md#autoscrollmargin)*

**Returns:** *number*

___

###  baseSize

▸ **baseSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[baseSize](qmenu.md#basesize)*

**Returns:** *[QSize](qsize.md)*

___

###  childAt

▸ **childAt**(`x`: number, `y`: number): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[childAt](qmenu.md#childat)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *[QWidget](qwidget.md)*

___

###  children

▸ **children**(): *[QObject](qobject.md)[]*

*Inherited from [QObject](qobject.md).[children](qobject.md#children)*

**Returns:** *[QObject](qobject.md)[]*

___

###  childrenRect

▸ **childrenRect**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[childrenRect](qmenu.md#childrenrect)*

**Returns:** *[QRect](qrect.md)*

___

###  clearFocus

▸ **clearFocus**(): *void*

*Inherited from [QMenu](qmenu.md).[clearFocus](qmenu.md#clearfocus)*

**Returns:** *void*

___

###  clearMask

▸ **clearMask**(): *void*

*Inherited from [QMenu](qmenu.md).[clearMask](qmenu.md#clearmask)*

**Returns:** *void*

___

###  clearSelection

▸ **clearSelection**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[clearSelection](qabstractitemview.md#clearselection)*

**Returns:** *void*

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

###  closePersistentEditor

▸ **closePersistentEditor**(`index`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[closePersistentEditor](qabstractitemview.md#closepersistenteditor)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  colorCount

▸ **colorCount**(): *number*

*Inherited from [QMenu](qmenu.md).[colorCount](qmenu.md#colorcount)*

**Returns:** *number*

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

###  contentsRect

▸ **contentsRect**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[contentsRect](qmenu.md#contentsrect)*

**Returns:** *[QRect](qrect.md)*

___

###  contextMenuPolicy

▸ **contextMenuPolicy**(): *[ContextMenuPolicy](../enums/contextmenupolicy.md)*

*Inherited from [QMenu](qmenu.md).[contextMenuPolicy](qmenu.md#contextmenupolicy)*

**Returns:** *[ContextMenuPolicy](../enums/contextmenupolicy.md)*

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

###  delete

▸ **delete**(): *void*

*Inherited from [QObject](qobject.md).[delete](qobject.md#delete)*

**Returns:** *void*

___

###  deleteLater

▸ **deleteLater**(): *void*

*Inherited from [QObject](qobject.md).[deleteLater](qobject.md#deletelater)*

**Returns:** *void*

___

###  depth

▸ **depth**(): *number*

*Inherited from [QMenu](qmenu.md).[depth](qmenu.md#depth)*

**Returns:** *number*

___

###  devicePixelRatio

▸ **devicePixelRatio**(): *number*

*Inherited from [QMenu](qmenu.md).[devicePixelRatio](qmenu.md#devicepixelratio)*

**Returns:** *number*

___

###  devicePixelRatioF

▸ **devicePixelRatioF**(): *number*

*Inherited from [QMenu](qmenu.md).[devicePixelRatioF](qmenu.md#devicepixelratiof)*

**Returns:** *number*

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

###  dumpObjectInfo

▸ **dumpObjectInfo**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectInfo](qobject.md#dumpobjectinfo)*

**Returns:** *void*

___

###  dumpObjectTree

▸ **dumpObjectTree**(): *void*

*Inherited from [QObject](qobject.md).[dumpObjectTree](qobject.md#dumpobjecttree)*

**Returns:** *void*

___

###  edit

▸ **edit**(`index`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[edit](qabstractitemview.md#edit)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  editTriggers

▸ **editTriggers**(): *number*

*Inherited from [QAbstractItemView](qabstractitemview.md).[editTriggers](qabstractitemview.md#edittriggers)*

**Returns:** *number*

___

###  ensurePolished

▸ **ensurePolished**(): *void*

*Inherited from [QMenu](qmenu.md).[ensurePolished](qmenu.md#ensurepolished)*

**Returns:** *void*

___

###  eventProcessed

▸ **eventProcessed**(): *boolean*

*Inherited from [EventWidget](eventwidget.md).[eventProcessed](eventwidget.md#eventprocessed)*

Get the state of the event processed flag

See `setEventProcessed()`.

**Returns:** *boolean*

boolean True if the current event is flagged as processed.

___

###  focusProxy

▸ **focusProxy**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[focusProxy](qmenu.md#focusproxy)*

**Returns:** *[QWidget](qwidget.md)*

___

###  focusWidget

▸ **focusWidget**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[focusWidget](qmenu.md#focuswidget)*

**Returns:** *[QWidget](qwidget.md)*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [QMenu](qmenu.md).[font](qmenu.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  frameGeometry

▸ **frameGeometry**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[frameGeometry](qmenu.md#framegeometry)*

**Returns:** *[QRect](qrect.md)*

___

###  frameRect

▸ **frameRect**(): *[QRect](qrect.md)*

*Inherited from [QFrame](qframe.md).[frameRect](qframe.md#framerect)*

**Returns:** *[QRect](qrect.md)*

___

###  frameShadow

▸ **frameShadow**(): *[Shadow](../enums/shadow.md)*

*Inherited from [QFrame](qframe.md).[frameShadow](qframe.md#frameshadow)*

**Returns:** *[Shadow](../enums/shadow.md)*

___

###  frameShape

▸ **frameShape**(): *[Shape](../enums/shape.md)*

*Inherited from [QFrame](qframe.md).[frameShape](qframe.md#frameshape)*

**Returns:** *[Shape](../enums/shape.md)*

___

###  frameSize

▸ **frameSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[frameSize](qmenu.md#framesize)*

**Returns:** *[QSize](qsize.md)*

___

###  frameStyle

▸ **frameStyle**(): *number*

*Inherited from [QFrame](qframe.md).[frameStyle](qframe.md#framestyle)*

**Returns:** *number*

___

###  frameWidth

▸ **frameWidth**(): *number*

*Inherited from [QFrame](qframe.md).[frameWidth](qframe.md#framewidth)*

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

###  grab

▸ **grab**(`rect?`: [QRect](qrect.md)): *[QPixmap](qpixmap.md)*

*Inherited from [QMenu](qmenu.md).[grab](qmenu.md#grab)*

**Parameters:**

Name | Type |
------ | ------ |
`rect?` | [QRect](qrect.md) |

**Returns:** *[QPixmap](qpixmap.md)*

___

###  grabKeyboard

▸ **grabKeyboard**(): *void*

*Inherited from [QMenu](qmenu.md).[grabKeyboard](qmenu.md#grabkeyboard)*

**Returns:** *void*

___

###  grabMouse

▸ **grabMouse**(): *void*

*Inherited from [QMenu](qmenu.md).[grabMouse](qmenu.md#grabmouse)*

**Returns:** *void*

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

###  hasFocus

▸ **hasFocus**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasFocus](qmenu.md#hasfocus)*

**Returns:** *boolean*

___

###  hasHeightForWidth

▸ **hasHeightForWidth**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasHeightForWidth](qmenu.md#hasheightforwidth)*

**Returns:** *boolean*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasMouseTracking](qmenu.md#hasmousetracking)*

**Returns:** *boolean*

___

###  hasTabletTracking

▸ **hasTabletTracking**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasTabletTracking](qmenu.md#hastablettracking)*

**Returns:** *boolean*

___

###  height

▸ **height**(): *number*

*Inherited from [QMenu](qmenu.md).[height](qmenu.md#height)*

**Returns:** *number*

___

###  heightForWidth

▸ **heightForWidth**(`w`: number): *number*

*Inherited from [QMenu](qmenu.md).[heightForWidth](qmenu.md#heightforwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

**Returns:** *number*

___

###  heightMM

▸ **heightMM**(): *number*

*Inherited from [QMenu](qmenu.md).[heightMM](qmenu.md#heightmm)*

**Returns:** *number*

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

###  horizontalHeader

▸ **horizontalHeader**(): *[QHeaderView](qheaderview.md)*

**Returns:** *[QHeaderView](qheaderview.md)*

___

###  horizontalScrollBar

▸ **horizontalScrollBar**(): *[QScrollBar](qscrollbar.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[horizontalScrollBar](qabstractscrollarea.md#horizontalscrollbar)*

**Returns:** *[QScrollBar](qscrollbar.md)*

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

###  indexAt

▸ **indexAt**(`point`: [QPoint](qpoint.md)): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[indexAt](qabstractitemview.md#indexat)*

**Parameters:**

Name | Type |
------ | ------ |
`point` | [QPoint](qpoint.md) |

**Returns:** *[QModelIndex](qmodelindex.md)*

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

*Inherited from [QObject](qobject.md).[inherits](qobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  inputMethodHints

▸ **inputMethodHints**(): *number*

*Inherited from [QMenu](qmenu.md).[inputMethodHints](qmenu.md#inputmethodhints)*

**Returns:** *number*

___

###  isActiveWindow

▸ **isActiveWindow**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isActiveWindow](qmenu.md#isactivewindow)*

**Returns:** *boolean*

___

###  isAncestorOf

▸ **isAncestorOf**(`child`: [QWidget](qwidget.md)): *boolean*

*Inherited from [QMenu](qmenu.md).[isAncestorOf](qmenu.md#isancestorof)*

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QWidget](qwidget.md) |

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

###  isEnabledTo

▸ **isEnabledTo**(`ancestor`: [QWidget](qwidget.md)): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabledTo](qmenu.md#isenabledto)*

**Parameters:**

Name | Type |
------ | ------ |
`ancestor` | [QWidget](qwidget.md) |

**Returns:** *boolean*

___

###  isFullScreen

▸ **isFullScreen**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isFullScreen](qmenu.md#isfullscreen)*

**Returns:** *boolean*

___

###  isHidden

▸ **isHidden**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isHidden](qmenu.md#ishidden)*

**Returns:** *boolean*

___

###  isMaximized

▸ **isMaximized**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isMaximized](qmenu.md#ismaximized)*

**Returns:** *boolean*

___

###  isMinimized

▸ **isMinimized**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isMinimized](qmenu.md#isminimized)*

**Returns:** *boolean*

___

###  isModal

▸ **isModal**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isModal](qmenu.md#ismodal)*

**Returns:** *boolean*

___

###  isPersistentEditorOpen

▸ **isPersistentEditorOpen**(`index`: [QModelIndex](qmodelindex.md)): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[isPersistentEditorOpen](qabstractitemview.md#ispersistenteditoropen)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

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

###  isVisibleTo

▸ **isVisibleTo**(`ancestor`: [QWidget](qwidget.md)): *boolean*

*Inherited from [QMenu](qmenu.md).[isVisibleTo](qmenu.md#isvisibleto)*

**Parameters:**

Name | Type |
------ | ------ |
`ancestor` | [QWidget](qwidget.md) |

**Returns:** *boolean*

___

###  isWindow

▸ **isWindow**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isWindow](qmenu.md#iswindow)*

**Returns:** *boolean*

___

###  isWindowModified

▸ **isWindowModified**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isWindowModified](qmenu.md#iswindowmodified)*

**Returns:** *boolean*

___

###  keyboardSearch

▸ **keyboardSearch**(`search`: string): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[keyboardSearch](qabstractitemview.md#keyboardsearch)*

**Parameters:**

Name | Type |
------ | ------ |
`search` | string |

**Returns:** *void*

___

###  killTimer

▸ **killTimer**(`timerId`: number): *void*

*Inherited from [QObject](qobject.md).[killTimer](qobject.md#killtimer)*

**Parameters:**

Name | Type |
------ | ------ |
`timerId` | number |

**Returns:** *void*

___

###  layout

▸ **layout**(): *[QLayout](qlayout.md) | null*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Returns:** *[QLayout](qlayout.md) | null*

___

###  lineWidth

▸ **lineWidth**(): *number*

*Inherited from [QFrame](qframe.md).[lineWidth](qframe.md#linewidth)*

**Returns:** *number*

___

###  logicalDpiX

▸ **logicalDpiX**(): *number*

*Inherited from [QMenu](qmenu.md).[logicalDpiX](qmenu.md#logicaldpix)*

**Returns:** *number*

___

###  logicalDpiY

▸ **logicalDpiY**(): *number*

*Inherited from [QMenu](qmenu.md).[logicalDpiY](qmenu.md#logicaldpiy)*

**Returns:** *number*

___

###  lower

▸ **lower**(): *void*

*Inherited from [QMenu](qmenu.md).[lower](qmenu.md#lower)*

**Returns:** *void*

___

###  mapFrom

▸ **mapFrom**(`parent`: [QWidget](qwidget.md), `pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapFrom](qmenu.md#mapfrom)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QWidget](qwidget.md) |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

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

###  mapTo

▸ **mapTo**(`parent`: [QWidget](qwidget.md), `pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

*Inherited from [QMenu](qmenu.md).[mapTo](qmenu.md#mapto)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QWidget](qwidget.md) |
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

###  maximumHeight

▸ **maximumHeight**(): *number*

*Inherited from [QMenu](qmenu.md).[maximumHeight](qmenu.md#maximumheight)*

**Returns:** *number*

___

###  maximumSize

▸ **maximumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[maximumSize](qmenu.md#maximumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  maximumViewportSize

▸ **maximumViewportSize**(): *[QSize](qsize.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[maximumViewportSize](qabstractscrollarea.md#maximumviewportsize)*

**Returns:** *[QSize](qsize.md)*

___

###  maximumWidth

▸ **maximumWidth**(): *number*

*Inherited from [QMenu](qmenu.md).[maximumWidth](qmenu.md#maximumwidth)*

**Returns:** *number*

___

###  midLineWidth

▸ **midLineWidth**(): *number*

*Inherited from [QFrame](qframe.md).[midLineWidth](qframe.md#midlinewidth)*

**Returns:** *number*

___

###  minimumHeight

▸ **minimumHeight**(): *number*

*Inherited from [QMenu](qmenu.md).[minimumHeight](qmenu.md#minimumheight)*

**Returns:** *number*

___

###  minimumSize

▸ **minimumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[minimumSize](qmenu.md#minimumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  minimumSizeHint

▸ **minimumSizeHint**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[minimumSizeHint](qmenu.md#minimumsizehint)*

**Returns:** *[QSize](qsize.md)*

___

###  minimumWidth

▸ **minimumWidth**(): *number*

*Inherited from [QMenu](qmenu.md).[minimumWidth](qmenu.md#minimumwidth)*

**Returns:** *number*

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

###  nativeParentWidget

▸ **nativeParentWidget**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[nativeParentWidget](qmenu.md#nativeparentwidget)*

**Returns:** *[QWidget](qwidget.md)*

___

###  nextInFocusChain

▸ **nextInFocusChain**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[nextInFocusChain](qmenu.md#nextinfocuschain)*

**Returns:** *[QWidget](qwidget.md)*

___

###  normalGeometry

▸ **normalGeometry**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[normalGeometry](qmenu.md#normalgeometry)*

**Returns:** *[QRect](qrect.md)*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  openPersistentEditor

▸ **openPersistentEditor**(`index`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[openPersistentEditor](qabstractitemview.md#openpersistenteditor)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  paintingActive

▸ **paintingActive**(): *boolean*

*Inherited from [QMenu](qmenu.md).[paintingActive](qmenu.md#paintingactive)*

**Returns:** *boolean*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  parentWidget

▸ **parentWidget**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[parentWidget](qmenu.md#parentwidget)*

**Returns:** *[QWidget](qwidget.md)*

___

###  physicalDpiX

▸ **physicalDpiX**(): *number*

*Inherited from [QMenu](qmenu.md).[physicalDpiX](qmenu.md#physicaldpix)*

**Returns:** *number*

___

###  physicalDpiY

▸ **physicalDpiY**(): *number*

*Inherited from [QMenu](qmenu.md).[physicalDpiY](qmenu.md#physicaldpiy)*

**Returns:** *number*

___

###  pos

▸ **pos**(): *object*

*Inherited from [QMenu](qmenu.md).[pos](qmenu.md#pos)*

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  previousInFocusChain

▸ **previousInFocusChain**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[previousInFocusChain](qmenu.md#previousinfocuschain)*

**Returns:** *[QWidget](qwidget.md)*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [QObject](qobject.md).[property](qobject.md#property)*

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

###  rect

▸ **rect**(): *[QRect](qrect.md)*

*Inherited from [QMenu](qmenu.md).[rect](qmenu.md#rect)*

**Returns:** *[QRect](qrect.md)*

___

###  releaseKeyboard

▸ **releaseKeyboard**(): *void*

*Inherited from [QMenu](qmenu.md).[releaseKeyboard](qmenu.md#releasekeyboard)*

**Returns:** *void*

___

###  releaseMouse

▸ **releaseMouse**(): *void*

*Inherited from [QMenu](qmenu.md).[releaseMouse](qmenu.md#releasemouse)*

**Returns:** *void*

___

###  releaseShortcut

▸ **releaseShortcut**(`id`: number): *void*

*Inherited from [QMenu](qmenu.md).[releaseShortcut](qmenu.md#releaseshortcut)*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof Signals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |
`options?` | [EventListenerOptions](../interfaces/eventlisteneroptions.md) |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function, `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

▪`Optional`  **options**: *[EventListenerOptions](../interfaces/eventlisteneroptions.md)*

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

###  reset

▸ **reset**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[reset](qabstractitemview.md#reset)*

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

###  rootIndex

▸ **rootIndex**(): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[rootIndex](qabstractitemview.md#rootindex)*

**Returns:** *[QModelIndex](qmodelindex.md)*

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

###  scrollTo

▸ **scrollTo**(`index`: [QModelIndex](qmodelindex.md), `hint`: ScrollHint): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[scrollTo](qabstractitemview.md#scrollto)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | [QModelIndex](qmodelindex.md) | - |
`hint` | ScrollHint | ScrollHint.EnsureVisible |

**Returns:** *void*

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

###  selectAll

▸ **selectAll**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectAll](qabstractitemview.md#selectall)*

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

▸ **selectionBehavior**(): *[QAbstractItemViewSelectionBehavior](../enums/qabstractitemviewselectionbehavior.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectionBehavior](qabstractitemview.md#selectionbehavior)*

**Returns:** *[QAbstractItemViewSelectionBehavior](../enums/qabstractitemviewselectionbehavior.md)*

___

###  selectionMode

▸ **selectionMode**(): *[SelectionMode](../enums/selectionmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectionMode](qabstractitemview.md#selectionmode)*

**Returns:** *[SelectionMode](../enums/selectionmode.md)*

___

###  selectionModel

▸ **selectionModel**(): *[QItemSelectionModel](qitemselectionmodel.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[selectionModel](qabstractitemview.md#selectionmodel)*

**Returns:** *[QItemSelectionModel](qitemselectionmodel.md)*

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

###  setAccessibleDescription

▸ **setAccessibleDescription**(`description`: string): *void*

*Inherited from [QMenu](qmenu.md).[setAccessibleDescription](qmenu.md#setaccessibledescription)*

**Parameters:**

Name | Type |
------ | ------ |
`description` | string |

**Returns:** *void*

___

###  setAccessibleName

▸ **setAccessibleName**(`name`: string): *void*

*Inherited from [QMenu](qmenu.md).[setAccessibleName](qmenu.md#setaccessiblename)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

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

###  setAutoFillBackground

▸ **setAutoFillBackground**(`enabled`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setAutoFillBackground](qmenu.md#setautofillbackground)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

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

###  setBaseSize

▸ **setBaseSize**(`size`: [QSize](qsize.md)): *void*

*Inherited from [QMenu](qmenu.md).[setBaseSize](qmenu.md#setbasesize)*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

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

###  setContentsMargins

▸ **setContentsMargins**(`left`: number, `top`: number, `right`: number, `bottom`: number): *void*

*Inherited from [QMenu](qmenu.md).[setContentsMargins](qmenu.md#setcontentsmargins)*

**Parameters:**

Name | Type |
------ | ------ |
`left` | number |
`top` | number |
`right` | number |
`bottom` | number |

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

###  setDisabled

▸ **setDisabled**(`disable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setDisabled](qmenu.md#setdisabled)*

**Parameters:**

Name | Type |
------ | ------ |
`disable` | boolean |

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

###  setEventProcessed

▸ **setEventProcessed**(`isProcessed`: boolean): *void*

*Inherited from [EventWidget](eventwidget.md).[setEventProcessed](eventwidget.md#seteventprocessed)*

Mark the current event as having been processed

This method is used to indicate that the currently dispatched event
has been processed and no further processing by superclasses is
required. It only makes sense to call this method from an event
handler.

When set, this flag will cause NodeGui's `QObject::event()` method to
return true and not call the superclass `event()`, effectively preventing
any further processing on this event.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`isProcessed` | boolean | true if the event has been processed.  |

**Returns:** *void*

___

###  setFixedHeight

▸ **setFixedHeight**(`h`: number): *void*

*Inherited from [QMenu](qmenu.md).[setFixedHeight](qmenu.md#setfixedheight)*

**Parameters:**

Name | Type |
------ | ------ |
`h` | number |

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

###  setFixedWidth

▸ **setFixedWidth**(`w`: number): *void*

*Inherited from [QMenu](qmenu.md).[setFixedWidth](qmenu.md#setfixedwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

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

Name | Type | Default |
------ | ------ | ------ |
`reason` | [FocusReason](../enums/focusreason.md) | FocusReason.OtherFocusReason |

**Returns:** *void*

___

###  setFocusPolicy

▸ **setFocusPolicy**(`policy`: [FocusPolicy](../enums/focuspolicy.md)): *void*

*Inherited from [QMenu](qmenu.md).[setFocusPolicy](qmenu.md#setfocuspolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [FocusPolicy](../enums/focuspolicy.md) |

**Returns:** *void*

___

###  setFocusProxy

▸ **setFocusProxy**(`widget`: [QWidget](qwidget.md)): *void*

*Inherited from [QMenu](qmenu.md).[setFocusProxy](qmenu.md#setfocusproxy)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

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

*Inherited from [QFrame](qframe.md).[setFrameRect](qframe.md#setframerect)*

**Parameters:**

Name | Type |
------ | ------ |
`r` | [QRect](qrect.md) |

**Returns:** *void*

___

###  setFrameShadow

▸ **setFrameShadow**(`type`: [Shadow](../enums/shadow.md)): *void*

*Inherited from [QFrame](qframe.md).[setFrameShadow](qframe.md#setframeshadow)*

**Parameters:**

Name | Type |
------ | ------ |
`type` | [Shadow](../enums/shadow.md) |

**Returns:** *void*

___

###  setFrameShape

▸ **setFrameShape**(`type`: [Shape](../enums/shape.md)): *void*

*Inherited from [QFrame](qframe.md).[setFrameShape](qframe.md#setframeshape)*

**Parameters:**

Name | Type |
------ | ------ |
`type` | [Shape](../enums/shape.md) |

**Returns:** *void*

___

###  setFrameStyle

▸ **setFrameStyle**(`style`: number): *void*

*Inherited from [QFrame](qframe.md).[setFrameStyle](qframe.md#setframestyle)*

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

###  setHidden

▸ **setHidden**(`hidden`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setHidden](qmenu.md#sethidden)*

**Parameters:**

Name | Type |
------ | ------ |
`hidden` | boolean |

**Returns:** *void*

___

###  setHorizontalScrollBar

▸ **setHorizontalScrollBar**(`scrollBar`: [QScrollBar](qscrollbar.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setHorizontalScrollBar](qabstractscrollarea.md#sethorizontalscrollbar)*

**Parameters:**

Name | Type |
------ | ------ |
`scrollBar` | [QScrollBar](qscrollbar.md) |

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

▸ **setInlineStyle**(`style`: string, `postprocess`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setInlineStyle](qmenu.md#setinlinestyle)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`style` | string | - |
`postprocess` | boolean | true |

**Returns:** *void*

___

###  setInputMethodHints

▸ **setInputMethodHints**(`hints`: number): *void*

*Inherited from [QMenu](qmenu.md).[setInputMethodHints](qmenu.md#setinputmethodhints)*

**Parameters:**

Name | Type |
------ | ------ |
`hints` | number |

**Returns:** *void*

___

###  setItemDelegate

▸ **setItemDelegate**(`delegate`: [QAbstractItemDelegate](qabstractitemdelegate.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setItemDelegate](qabstractitemview.md#setitemdelegate)*

**Parameters:**

Name | Type |
------ | ------ |
`delegate` | [QAbstractItemDelegate](qabstractitemdelegate.md) |

**Returns:** *void*

___

###  setItemDelegateForColumn

▸ **setItemDelegateForColumn**(`column`: number, `delegate`: [QAbstractItemDelegate](qabstractitemdelegate.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setItemDelegateForColumn](qabstractitemview.md#setitemdelegateforcolumn)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`delegate` | [QAbstractItemDelegate](qabstractitemdelegate.md) |

**Returns:** *void*

___

###  setItemDelegateForRow

▸ **setItemDelegateForRow**(`row`: number, `delegate`: [QAbstractItemDelegate](qabstractitemdelegate.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setItemDelegateForRow](qabstractitemview.md#setitemdelegateforrow)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`delegate` | [QAbstractItemDelegate](qabstractitemdelegate.md) |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`layout`: [QLayout](qlayout.md)): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`layout` | [QLayout](qlayout.md) |

**Returns:** *void*

___

###  setLineWidth

▸ **setLineWidth**(`width`: number): *void*

*Inherited from [QFrame](qframe.md).[setLineWidth](qframe.md#setlinewidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setMaximumHeight

▸ **setMaximumHeight**(`maxh`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMaximumHeight](qmenu.md#setmaximumheight)*

**Parameters:**

Name | Type |
------ | ------ |
`maxh` | number |

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

###  setMaximumWidth

▸ **setMaximumWidth**(`maxw`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMaximumWidth](qmenu.md#setmaximumwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |

**Returns:** *void*

___

###  setMidLineWidth

▸ **setMidLineWidth**(`width`: number): *void*

*Inherited from [QFrame](qframe.md).[setMidLineWidth](qframe.md#setmidlinewidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setMinimumHeight

▸ **setMinimumHeight**(`minh`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMinimumHeight](qmenu.md#setminimumheight)*

**Parameters:**

Name | Type |
------ | ------ |
`minh` | number |

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

###  setMinimumWidth

▸ **setMinimumWidth**(`minw`: number): *void*

*Inherited from [QMenu](qmenu.md).[setMinimumWidth](qmenu.md#setminimumwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |

**Returns:** *void*

___

###  setModel

▸ **setModel**(`model`: [QAbstractItemModel](qabstractitemmodel.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setModel](qabstractitemview.md#setmodel)*

**Parameters:**

Name | Type |
------ | ------ |
`model` | [QAbstractItemModel](qabstractitemmodel.md) |

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

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [QMenu](qmenu.md).[setObjectName](qmenu.md#setobjectname)*

*Overrides [QObject](qobject.md).[setObjectName](qobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setParent

▸ **setParent**(`parent`: [QObject](qobject.md)): *void*

*Inherited from [QObject](qobject.md).[setParent](qobject.md#setparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QObject](qobject.md) |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [QObject](qobject.md).[setProperty](qobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  setRootIndex

▸ **setRootIndex**(`index`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setRootIndex](qabstractitemview.md#setrootindex)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

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

▸ **setSelectionBehavior**(`behavior`: [QAbstractItemViewSelectionBehavior](../enums/qabstractitemviewselectionbehavior.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[setSelectionBehavior](qabstractitemview.md#setselectionbehavior)*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | [QAbstractItemViewSelectionBehavior](../enums/qabstractitemviewselectionbehavior.md) |

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

###  setShortcutAutoRepeat

▸ **setShortcutAutoRepeat**(`id`: number, `enable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setShortcutAutoRepeat](qmenu.md#setshortcutautorepeat)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`id` | number | - |
`enable` | boolean | true |

**Returns:** *void*

___

###  setShortcutEnabled

▸ **setShortcutEnabled**(`id`: number, `enable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setShortcutEnabled](qmenu.md#setshortcutenabled)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`id` | number | - |
`enable` | boolean | true |

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

###  setSizeIncrement

▸ **setSizeIncrement**(`w_or_size`: [QSize](qsize.md) | number, `h`: number): *void*

*Inherited from [QMenu](qmenu.md).[setSizeIncrement](qmenu.md#setsizeincrement)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`w_or_size` | [QSize](qsize.md) &#124; number | - |
`h` | number | 0 |

**Returns:** *void*

___

###  setSizePolicy

▸ **setSizePolicy**(`horizontal`: [QSizePolicyPolicy](../enums/qsizepolicypolicy.md), `vertical`: [QSizePolicyPolicy](../enums/qsizepolicypolicy.md)): *void*

*Inherited from [QMenu](qmenu.md).[setSizePolicy](qmenu.md#setsizepolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`horizontal` | [QSizePolicyPolicy](../enums/qsizepolicypolicy.md) |
`vertical` | [QSizePolicyPolicy](../enums/qsizepolicypolicy.md) |

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

###  setStatusTip

▸ **setStatusTip**(`statusTip`: string): *void*

*Inherited from [QMenu](qmenu.md).[setStatusTip](qmenu.md#setstatustip)*

**Parameters:**

Name | Type |
------ | ------ |
`statusTip` | string |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string, `postprocess`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setStyleSheet](qmenu.md#setstylesheet)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`styleSheet` | string | - |
`postprocess` | boolean | true |

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

###  setTabletTracking

▸ **setTabletTracking**(`enable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setTabletTracking](qmenu.md#settablettracking)*

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

###  setToolTip

▸ **setToolTip**(`text`: string): *void*

*Inherited from [QMenu](qmenu.md).[setToolTip](qmenu.md#settooltip)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setToolTipDuration

▸ **setToolTipDuration**(`msec`: number): *void*

*Inherited from [QMenu](qmenu.md).[setToolTipDuration](qmenu.md#settooltipduration)*

**Parameters:**

Name | Type |
------ | ------ |
`msec` | number |

**Returns:** *void*

___

###  setUpdatesEnabled

▸ **setUpdatesEnabled**(`enable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setUpdatesEnabled](qmenu.md#setupdatesenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setVerticalScrollBar

▸ **setVerticalScrollBar**(`scrollBar`: [QScrollBar](qscrollbar.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setVerticalScrollBar](qabstractscrollarea.md#setverticalscrollbar)*

**Parameters:**

Name | Type |
------ | ------ |
`scrollBar` | [QScrollBar](qscrollbar.md) |

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

▸ **setViewport**(`widget`: [QWidget](qwidget.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setViewport](qabstractscrollarea.md#setviewport)*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setVisible

▸ **setVisible**(`visible`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setVisible](qmenu.md#setvisible)*

**Parameters:**

Name | Type |
------ | ------ |
`visible` | boolean |

**Returns:** *void*

___

###  setWhatsThis

▸ **setWhatsThis**(`whatsThis`: string): *void*

*Inherited from [QMenu](qmenu.md).[setWhatsThis](qmenu.md#setwhatsthis)*

**Parameters:**

Name | Type |
------ | ------ |
`whatsThis` | string |

**Returns:** *void*

___

###  setWindowFilePath

▸ **setWindowFilePath**(`filePath`: string): *void*

*Inherited from [QMenu](qmenu.md).[setWindowFilePath](qmenu.md#setwindowfilepath)*

**Parameters:**

Name | Type |
------ | ------ |
`filePath` | string |

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

###  setWindowModified

▸ **setWindowModified**(`modified`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setWindowModified](qmenu.md#setwindowmodified)*

**Parameters:**

Name | Type |
------ | ------ |
`modified` | boolean |

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

###  setWindowRole

▸ **setWindowRole**(`role`: string): *void*

*Inherited from [QMenu](qmenu.md).[setWindowRole](qmenu.md#setwindowrole)*

**Parameters:**

Name | Type |
------ | ------ |
`role` | string |

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

###  sizeHint

▸ **sizeHint**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[sizeHint](qmenu.md#sizehint)*

**Returns:** *[QSize](qsize.md)*

___

###  sizeHintForIndex

▸ **sizeHintForIndex**(`index`: [QModelIndex](qmodelindex.md)): *[QSize](qsize.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[sizeHintForIndex](qabstractitemview.md#sizehintforindex)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QSize](qsize.md)*

___

###  sizeIncrement

▸ **sizeIncrement**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[sizeIncrement](qmenu.md#sizeincrement)*

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

###  stackUnder

▸ **stackUnder**(`w`: [QWidget](qwidget.md)): *void*

*Inherited from [QMenu](qmenu.md).[stackUnder](qmenu.md#stackunder)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  startTimer

▸ **startTimer**(`intervalMS`: number, `timerType`: [TimerType](../enums/timertype.md)): *number*

*Inherited from [QObject](qobject.md).[startTimer](qobject.md#starttimer)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`intervalMS` | number | - |
`timerType` | [TimerType](../enums/timertype.md) | TimerType.CoarseTimer |

**Returns:** *number*

___

###  statusTip

▸ **statusTip**(): *string*

*Inherited from [QMenu](qmenu.md).[statusTip](qmenu.md#statustip)*

**Returns:** *string*

___

###  style

▸ **style**(): *[QStyle](qstyle.md)*

*Inherited from [QMenu](qmenu.md).[style](qmenu.md#style)*

**Returns:** *[QStyle](qstyle.md)*

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

###  toolTip

▸ **toolTip**(): *string*

*Inherited from [QMenu](qmenu.md).[toolTip](qmenu.md#tooltip)*

**Returns:** *string*

___

###  toolTipDuration

▸ **toolTipDuration**(): *number*

*Inherited from [QMenu](qmenu.md).[toolTipDuration](qmenu.md#tooltipduration)*

**Returns:** *number*

___

###  underMouse

▸ **underMouse**(): *boolean*

*Inherited from [QMenu](qmenu.md).[underMouse](qmenu.md#undermouse)*

**Returns:** *boolean*

___

###  unsetCursor

▸ **unsetCursor**(): *void*

*Inherited from [QMenu](qmenu.md).[unsetCursor](qmenu.md#unsetcursor)*

**Returns:** *void*

___

###  unsetLayoutDirection

▸ **unsetLayoutDirection**(): *void*

*Inherited from [QMenu](qmenu.md).[unsetLayoutDirection](qmenu.md#unsetlayoutdirection)*

**Returns:** *void*

___

###  unsetLocale

▸ **unsetLocale**(): *void*

*Inherited from [QMenu](qmenu.md).[unsetLocale](qmenu.md#unsetlocale)*

**Returns:** *void*

___

###  update

▸ **update**(`index?`: [QModelIndex](qmodelindex.md)): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[update](qabstractitemview.md#update)*

*Overrides [QMenu](qmenu.md).[update](qmenu.md#update)*

**Parameters:**

Name | Type |
------ | ------ |
`index?` | [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

*Inherited from [QMenu](qmenu.md).[updateGeometry](qmenu.md#updategeometry)*

**Returns:** *void*

___

###  updateMicroFocus

▸ **updateMicroFocus**(`query`: number): *void*

*Inherited from [QMenu](qmenu.md).[updateMicroFocus](qmenu.md#updatemicrofocus)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`query` | number | InputMethodQuery.ImQueryAll |

**Returns:** *void*

___

###  updatesEnabled

▸ **updatesEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[updatesEnabled](qmenu.md#updatesenabled)*

**Returns:** *boolean*

___

###  verticalHeader

▸ **verticalHeader**(): *[QHeaderView](qheaderview.md)*

**Returns:** *[QHeaderView](qheaderview.md)*

___

###  verticalScrollBar

▸ **verticalScrollBar**(): *[QScrollBar](qscrollbar.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[verticalScrollBar](qabstractscrollarea.md#verticalscrollbar)*

**Returns:** *[QScrollBar](qscrollbar.md)*

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

###  visualRect

▸ **visualRect**(`index`: [QModelIndex](qmodelindex.md)): *[QRect](qrect.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[visualRect](qabstractitemview.md#visualrect)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | [QModelIndex](qmodelindex.md) |

**Returns:** *[QRect](qrect.md)*

___

###  whatsThis

▸ **whatsThis**(): *string*

*Inherited from [QMenu](qmenu.md).[whatsThis](qmenu.md#whatsthis)*

**Returns:** *string*

___

###  width

▸ **width**(): *number*

*Inherited from [QMenu](qmenu.md).[width](qmenu.md#width)*

**Returns:** *number*

___

###  widthMM

▸ **widthMM**(): *number*

*Inherited from [QMenu](qmenu.md).[widthMM](qmenu.md#widthmm)*

**Returns:** *number*

___

###  winId

▸ **winId**(): *number*

*Inherited from [QMenu](qmenu.md).[winId](qmenu.md#winid)*

**Returns:** *number*

___

###  window

▸ **window**(): *[QWidget](qwidget.md)*

*Inherited from [QMenu](qmenu.md).[window](qmenu.md#window)*

**Returns:** *[QWidget](qwidget.md)*

___

###  windowFilePath

▸ **windowFilePath**(): *string*

*Inherited from [QMenu](qmenu.md).[windowFilePath](qmenu.md#windowfilepath)*

**Returns:** *string*

___

###  windowHandle

▸ **windowHandle**(): *[QWindow](qwindow.md) | null*

*Inherited from [QMenu](qmenu.md).[windowHandle](qmenu.md#windowhandle)*

**Returns:** *[QWindow](qwindow.md) | null*

___

###  windowIcon

▸ **windowIcon**(): *[QIcon](qicon.md)*

*Inherited from [QMenu](qmenu.md).[windowIcon](qmenu.md#windowicon)*

**Returns:** *[QIcon](qicon.md)*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

*Inherited from [QMenu](qmenu.md).[windowOpacity](qmenu.md#windowopacity)*

**Returns:** *number*

___

###  windowRole

▸ **windowRole**(): *string*

*Inherited from [QMenu](qmenu.md).[windowRole](qmenu.md#windowrole)*

**Returns:** *string*

___

###  windowState

▸ **windowState**(): *[WindowState](../enums/windowstate.md)*

*Inherited from [QMenu](qmenu.md).[windowState](qmenu.md#windowstate)*

**Returns:** *[WindowState](../enums/windowstate.md)*

___

###  windowTitle

▸ **windowTitle**(): *string*

*Inherited from [QMenu](qmenu.md).[windowTitle](qmenu.md#windowtitle)*

**Returns:** *string*

___

###  wordWrap

▸ **wordWrap**(): *boolean*

**Returns:** *boolean*

___

###  x

▸ **x**(): *number*

*Inherited from [QMenu](qmenu.md).[x](qmenu.md#x)*

**Returns:** *number*

___

###  y

▸ **y**(): *number*

*Inherited from [QMenu](qmenu.md).[y](qmenu.md#y)*

**Returns:** *number*
