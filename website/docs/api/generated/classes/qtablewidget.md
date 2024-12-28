---
id: "qtablewidget"
title: "QTableWidget"
sidebar_label: "QTableWidget"
---

> Creates and item-based table view.

**This class is a JS wrapper around Qt's [QTableWidget class](https://doc.qt.io/qt-5/qtablewidget.html)**

### Example

```javascript
const { QTableWidget, QMainWindow, QTableWidgetItem } = require("@nodegui/nodegui");

const win = new QMainWindow();
const table = new QTableWidget(2, 3);
table.setHorizontalHeaderLabels(['first', 'second', 'third']);

const cell00 = new QTableWidgetItem('C00');
const cell01 = new QTableWidgetItem('C01');
const cell10 = new QTableWidgetItem('C10');
const cell11 = new QTableWidgetItem('C11');

table.setItem(0, 0, cell00);
table.setItem(0, 1, cell01);
table.setItem(1, 0, cell10);
table.setItem(1, 1, cell11);

win.setCentralWidget(table);
win.show();
(global as any).win = win;

```

## Hierarchy

  ↳ [QTableView](qtableview.md)‹[QTableWidgetSignals](../interfaces/qtablewidgetsignals.md)›

  ↳ **QTableWidget**

## Index

### Constructors

* [constructor](qtablewidget.md#constructor)

### Properties

* [_rawInlineStyle](qtablewidget.md#_rawinlinestyle)
* [items](qtablewidget.md#items)
* [native](qtablewidget.md#native)
* [type](qtablewidget.md#type)

### Methods

* [_id](qtablewidget.md#_id)
* [acceptDrops](qtablewidget.md#acceptdrops)
* [accessibleDescription](qtablewidget.md#accessibledescription)
* [accessibleName](qtablewidget.md#accessiblename)
* [activateWindow](qtablewidget.md#activatewindow)
* [addAction](qtablewidget.md#addaction)
* [addEventListener](qtablewidget.md#addeventlistener)
* [adjustSize](qtablewidget.md#adjustsize)
* [alternatingRowColors](qtablewidget.md#alternatingrowcolors)
* [autoFillBackground](qtablewidget.md#autofillbackground)
* [autoScrollMargin](qtablewidget.md#autoscrollmargin)
* [baseSize](qtablewidget.md#basesize)
* [cellWidget](qtablewidget.md#cellwidget)
* [childAt](qtablewidget.md#childat)
* [children](qtablewidget.md#children)
* [childrenRect](qtablewidget.md#childrenrect)
* [clear](qtablewidget.md#clear)
* [clearContents](qtablewidget.md#clearcontents)
* [clearFocus](qtablewidget.md#clearfocus)
* [clearMask](qtablewidget.md#clearmask)
* [clearSelection](qtablewidget.md#clearselection)
* [clearSpans](qtablewidget.md#clearspans)
* [close](qtablewidget.md#close)
* [closePersistentEditor](qtablewidget.md#closepersistenteditor)
* [colorCount](qtablewidget.md#colorcount)
* [column](qtablewidget.md#column)
* [columnAt](qtablewidget.md#columnat)
* [columnCount](qtablewidget.md#columncount)
* [columnSpan](qtablewidget.md#columnspan)
* [columnViewportPosition](qtablewidget.md#columnviewportposition)
* [columnWidth](qtablewidget.md#columnwidth)
* [contentsRect](qtablewidget.md#contentsrect)
* [contextMenuPolicy](qtablewidget.md#contextmenupolicy)
* [currentColumn](qtablewidget.md#currentcolumn)
* [currentIndex](qtablewidget.md#currentindex)
* [currentItem](qtablewidget.md#currentitem)
* [currentRow](qtablewidget.md#currentrow)
* [defaultDropAction](qtablewidget.md#defaultdropaction)
* [delete](qtablewidget.md#delete)
* [deleteLater](qtablewidget.md#deletelater)
* [depth](qtablewidget.md#depth)
* [devicePixelRatio](qtablewidget.md#devicepixelratio)
* [devicePixelRatioF](qtablewidget.md#devicepixelratiof)
* [dragDropMode](qtablewidget.md#dragdropmode)
* [dragDropOverwriteMode](qtablewidget.md#dragdropoverwritemode)
* [dragEnabled](qtablewidget.md#dragenabled)
* [dumpObjectInfo](qtablewidget.md#dumpobjectinfo)
* [dumpObjectTree](qtablewidget.md#dumpobjecttree)
* [edit](qtablewidget.md#edit)
* [editItem](qtablewidget.md#edititem)
* [editTriggers](qtablewidget.md#edittriggers)
* [ensurePolished](qtablewidget.md#ensurepolished)
* [eventProcessed](qtablewidget.md#eventprocessed)
* [findItems](qtablewidget.md#finditems)
* [focusProxy](qtablewidget.md#focusproxy)
* [focusWidget](qtablewidget.md#focuswidget)
* [font](qtablewidget.md#font)
* [frameGeometry](qtablewidget.md#framegeometry)
* [frameRect](qtablewidget.md#framerect)
* [frameShadow](qtablewidget.md#frameshadow)
* [frameShape](qtablewidget.md#frameshape)
* [frameSize](qtablewidget.md#framesize)
* [frameStyle](qtablewidget.md#framestyle)
* [frameWidth](qtablewidget.md#framewidth)
* [geometry](qtablewidget.md#geometry)
* [getFlexNode](qtablewidget.md#getflexnode)
* [grab](qtablewidget.md#grab)
* [grabKeyboard](qtablewidget.md#grabkeyboard)
* [grabMouse](qtablewidget.md#grabmouse)
* [gridStyle](qtablewidget.md#gridstyle)
* [hasAutoScroll](qtablewidget.md#hasautoscroll)
* [hasFocus](qtablewidget.md#hasfocus)
* [hasHeightForWidth](qtablewidget.md#hasheightforwidth)
* [hasMouseTracking](qtablewidget.md#hasmousetracking)
* [hasTabletTracking](qtablewidget.md#hastablettracking)
* [height](qtablewidget.md#height)
* [heightForWidth](qtablewidget.md#heightforwidth)
* [heightMM](qtablewidget.md#heightmm)
* [hide](qtablewidget.md#hide)
* [hideColumn](qtablewidget.md#hidecolumn)
* [hideRow](qtablewidget.md#hiderow)
* [horizontalHeader](qtablewidget.md#horizontalheader)
* [horizontalScrollBar](qtablewidget.md#horizontalscrollbar)
* [horizontalScrollMode](qtablewidget.md#horizontalscrollmode)
* [iconSize](qtablewidget.md#iconsize)
* [indexAt](qtablewidget.md#indexat)
* [indexWidget](qtablewidget.md#indexwidget)
* [inherits](qtablewidget.md#inherits)
* [inputMethodHints](qtablewidget.md#inputmethodhints)
* [insertColumn](qtablewidget.md#insertcolumn)
* [insertRow](qtablewidget.md#insertrow)
* [isActiveWindow](qtablewidget.md#isactivewindow)
* [isAncestorOf](qtablewidget.md#isancestorof)
* [isColumnHidden](qtablewidget.md#iscolumnhidden)
* [isCornerButtonEnabled](qtablewidget.md#iscornerbuttonenabled)
* [isEnabled](qtablewidget.md#isenabled)
* [isEnabledTo](qtablewidget.md#isenabledto)
* [isFullScreen](qtablewidget.md#isfullscreen)
* [isHidden](qtablewidget.md#ishidden)
* [isMaximized](qtablewidget.md#ismaximized)
* [isMinimized](qtablewidget.md#isminimized)
* [isModal](qtablewidget.md#ismodal)
* [isPersistentEditorOpen](qtablewidget.md#ispersistenteditoropen)
* [isRowHidden](qtablewidget.md#isrowhidden)
* [isSortingEnabled](qtablewidget.md#issortingenabled)
* [isVisible](qtablewidget.md#isvisible)
* [isVisibleTo](qtablewidget.md#isvisibleto)
* [isWindow](qtablewidget.md#iswindow)
* [isWindowModified](qtablewidget.md#iswindowmodified)
* [item](qtablewidget.md#item)
* [itemAt](qtablewidget.md#itemat)
* [keyboardSearch](qtablewidget.md#keyboardsearch)
* [killTimer](qtablewidget.md#killtimer)
* [layout](qtablewidget.md#layout)
* [lineWidth](qtablewidget.md#linewidth)
* [logicalDpiX](qtablewidget.md#logicaldpix)
* [logicalDpiY](qtablewidget.md#logicaldpiy)
* [lower](qtablewidget.md#lower)
* [mapFrom](qtablewidget.md#mapfrom)
* [mapFromGlobal](qtablewidget.md#mapfromglobal)
* [mapFromParent](qtablewidget.md#mapfromparent)
* [mapTo](qtablewidget.md#mapto)
* [mapToGlobal](qtablewidget.md#maptoglobal)
* [mapToParent](qtablewidget.md#maptoparent)
* [maximumHeight](qtablewidget.md#maximumheight)
* [maximumSize](qtablewidget.md#maximumsize)
* [maximumViewportSize](qtablewidget.md#maximumviewportsize)
* [maximumWidth](qtablewidget.md#maximumwidth)
* [midLineWidth](qtablewidget.md#midlinewidth)
* [minimumHeight](qtablewidget.md#minimumheight)
* [minimumSize](qtablewidget.md#minimumsize)
* [minimumSizeHint](qtablewidget.md#minimumsizehint)
* [minimumWidth](qtablewidget.md#minimumwidth)
* [move](qtablewidget.md#move)
* [nativeParentWidget](qtablewidget.md#nativeparentwidget)
* [nextInFocusChain](qtablewidget.md#nextinfocuschain)
* [normalGeometry](qtablewidget.md#normalgeometry)
* [objectName](qtablewidget.md#objectname)
* [openPersistentEditor](qtablewidget.md#openpersistenteditor)
* [paintingActive](qtablewidget.md#paintingactive)
* [parent](qtablewidget.md#parent)
* [parentWidget](qtablewidget.md#parentwidget)
* [physicalDpiX](qtablewidget.md#physicaldpix)
* [physicalDpiY](qtablewidget.md#physicaldpiy)
* [pos](qtablewidget.md#pos)
* [previousInFocusChain](qtablewidget.md#previousinfocuschain)
* [property](qtablewidget.md#property)
* [raise](qtablewidget.md#raise)
* [rect](qtablewidget.md#rect)
* [releaseKeyboard](qtablewidget.md#releasekeyboard)
* [releaseMouse](qtablewidget.md#releasemouse)
* [releaseShortcut](qtablewidget.md#releaseshortcut)
* [removeAction](qtablewidget.md#removeaction)
* [removeCellWidget](qtablewidget.md#removecellwidget)
* [removeColumn](qtablewidget.md#removecolumn)
* [removeEventListener](qtablewidget.md#removeeventlistener)
* [removeRow](qtablewidget.md#removerow)
* [repaint](qtablewidget.md#repaint)
* [repolish](qtablewidget.md#repolish)
* [reset](qtablewidget.md#reset)
* [resetHorizontalScrollMode](qtablewidget.md#resethorizontalscrollmode)
* [resetVerticalScrollMode](qtablewidget.md#resetverticalscrollmode)
* [resize](qtablewidget.md#resize)
* [resizeColumnToContents](qtablewidget.md#resizecolumntocontents)
* [resizeColumnsToContents](qtablewidget.md#resizecolumnstocontents)
* [resizeRowToContents](qtablewidget.md#resizerowtocontents)
* [resizeRowsToContents](qtablewidget.md#resizerowstocontents)
* [rootIndex](qtablewidget.md#rootindex)
* [row](qtablewidget.md#row)
* [rowAt](qtablewidget.md#rowat)
* [rowCount](qtablewidget.md#rowcount)
* [rowHeight](qtablewidget.md#rowheight)
* [rowSpan](qtablewidget.md#rowspan)
* [rowViewportPosition](qtablewidget.md#rowviewportposition)
* [scrollTo](qtablewidget.md#scrollto)
* [scrollToBottom](qtablewidget.md#scrolltobottom)
* [scrollToItem](qtablewidget.md#scrolltoitem)
* [scrollToTop](qtablewidget.md#scrolltotop)
* [selectAll](qtablewidget.md#selectall)
* [selectColumn](qtablewidget.md#selectcolumn)
* [selectRow](qtablewidget.md#selectrow)
* [selectedRanges](qtablewidget.md#selectedranges)
* [selectionBehavior](qtablewidget.md#selectionbehavior)
* [selectionMode](qtablewidget.md#selectionmode)
* [selectionModel](qtablewidget.md#selectionmodel)
* [setAcceptDrops](qtablewidget.md#setacceptdrops)
* [setAccessibleDescription](qtablewidget.md#setaccessibledescription)
* [setAccessibleName](qtablewidget.md#setaccessiblename)
* [setAlternatingRowColors](qtablewidget.md#setalternatingrowcolors)
* [setAttribute](qtablewidget.md#setattribute)
* [setAutoFillBackground](qtablewidget.md#setautofillbackground)
* [setAutoScroll](qtablewidget.md#setautoscroll)
* [setAutoScrollMargin](qtablewidget.md#setautoscrollmargin)
* [setBaseSize](qtablewidget.md#setbasesize)
* [setCellWidget](qtablewidget.md#setcellwidget)
* [setColumnCount](qtablewidget.md#setcolumncount)
* [setColumnHidden](qtablewidget.md#setcolumnhidden)
* [setColumnWidth](qtablewidget.md#setcolumnwidth)
* [setContentsMargins](qtablewidget.md#setcontentsmargins)
* [setContextMenuPolicy](qtablewidget.md#setcontextmenupolicy)
* [setCornerButtonEnabled](qtablewidget.md#setcornerbuttonenabled)
* [setCurrentCell](qtablewidget.md#setcurrentcell)
* [setCurrentIndex](qtablewidget.md#setcurrentindex)
* [setCurrentItem](qtablewidget.md#setcurrentitem)
* [setCursor](qtablewidget.md#setcursor)
* [setDefaultDropAction](qtablewidget.md#setdefaultdropaction)
* [setDisabled](qtablewidget.md#setdisabled)
* [setDragDropMode](qtablewidget.md#setdragdropmode)
* [setDragDropOverwriteMode](qtablewidget.md#setdragdropoverwritemode)
* [setDragEnabled](qtablewidget.md#setdragenabled)
* [setDropIndicatorShown](qtablewidget.md#setdropindicatorshown)
* [setEditTriggers](qtablewidget.md#setedittriggers)
* [setEnabled](qtablewidget.md#setenabled)
* [setEventProcessed](qtablewidget.md#seteventprocessed)
* [setFixedHeight](qtablewidget.md#setfixedheight)
* [setFixedSize](qtablewidget.md#setfixedsize)
* [setFixedWidth](qtablewidget.md#setfixedwidth)
* [setFlexNodeSizeControlled](qtablewidget.md#setflexnodesizecontrolled)
* [setFocus](qtablewidget.md#setfocus)
* [setFocusPolicy](qtablewidget.md#setfocuspolicy)
* [setFocusProxy](qtablewidget.md#setfocusproxy)
* [setFont](qtablewidget.md#setfont)
* [setFrameRect](qtablewidget.md#setframerect)
* [setFrameShadow](qtablewidget.md#setframeshadow)
* [setFrameShape](qtablewidget.md#setframeshape)
* [setFrameStyle](qtablewidget.md#setframestyle)
* [setGeometry](qtablewidget.md#setgeometry)
* [setGraphicsEffect](qtablewidget.md#setgraphicseffect)
* [setGridStyle](qtablewidget.md#setgridstyle)
* [setHidden](qtablewidget.md#sethidden)
* [setHorizontalHeaderItem](qtablewidget.md#sethorizontalheaderitem)
* [setHorizontalHeaderLabels](qtablewidget.md#sethorizontalheaderlabels)
* [setHorizontalScrollBar](qtablewidget.md#sethorizontalscrollbar)
* [setHorizontalScrollBarPolicy](qtablewidget.md#sethorizontalscrollbarpolicy)
* [setHorizontalScrollMode](qtablewidget.md#sethorizontalscrollmode)
* [setIconSize](qtablewidget.md#seticonsize)
* [setIndexWidget](qtablewidget.md#setindexwidget)
* [setInlineStyle](qtablewidget.md#setinlinestyle)
* [setInputMethodHints](qtablewidget.md#setinputmethodhints)
* [setItem](qtablewidget.md#setitem)
* [setItemDelegate](qtablewidget.md#setitemdelegate)
* [setItemDelegateForColumn](qtablewidget.md#setitemdelegateforcolumn)
* [setItemDelegateForRow](qtablewidget.md#setitemdelegateforrow)
* [setLayout](qtablewidget.md#setlayout)
* [setLineWidth](qtablewidget.md#setlinewidth)
* [setMaximumHeight](qtablewidget.md#setmaximumheight)
* [setMaximumSize](qtablewidget.md#setmaximumsize)
* [setMaximumWidth](qtablewidget.md#setmaximumwidth)
* [setMidLineWidth](qtablewidget.md#setmidlinewidth)
* [setMinimumHeight](qtablewidget.md#setminimumheight)
* [setMinimumSize](qtablewidget.md#setminimumsize)
* [setMinimumWidth](qtablewidget.md#setminimumwidth)
* [setModel](qtablewidget.md#setmodel)
* [setMouseTracking](qtablewidget.md#setmousetracking)
* [setObjectName](qtablewidget.md#setobjectname)
* [setParent](qtablewidget.md#setparent)
* [setProperty](qtablewidget.md#setproperty)
* [setRootIndex](qtablewidget.md#setrootindex)
* [setRowCount](qtablewidget.md#setrowcount)
* [setRowHeight](qtablewidget.md#setrowheight)
* [setRowHidden](qtablewidget.md#setrowhidden)
* [setSelectionBehavior](qtablewidget.md#setselectionbehavior)
* [setSelectionMode](qtablewidget.md#setselectionmode)
* [setShortcutAutoRepeat](qtablewidget.md#setshortcutautorepeat)
* [setShortcutEnabled](qtablewidget.md#setshortcutenabled)
* [setShowGrid](qtablewidget.md#setshowgrid)
* [setSizeIncrement](qtablewidget.md#setsizeincrement)
* [setSizePolicy](qtablewidget.md#setsizepolicy)
* [setSortingEnabled](qtablewidget.md#setsortingenabled)
* [setSpan](qtablewidget.md#setspan)
* [setStatusTip](qtablewidget.md#setstatustip)
* [setStyleSheet](qtablewidget.md#setstylesheet)
* [setTabKeyNavigation](qtablewidget.md#settabkeynavigation)
* [setTabletTracking](qtablewidget.md#settablettracking)
* [setTextElideMode](qtablewidget.md#settextelidemode)
* [setToolTip](qtablewidget.md#settooltip)
* [setToolTipDuration](qtablewidget.md#settooltipduration)
* [setUpdatesEnabled](qtablewidget.md#setupdatesenabled)
* [setVerticalHeaderItem](qtablewidget.md#setverticalheaderitem)
* [setVerticalHeaderLabels](qtablewidget.md#setverticalheaderlabels)
* [setVerticalScrollBar](qtablewidget.md#setverticalscrollbar)
* [setVerticalScrollBarPolicy](qtablewidget.md#setverticalscrollbarpolicy)
* [setVerticalScrollMode](qtablewidget.md#setverticalscrollmode)
* [setViewport](qtablewidget.md#setviewport)
* [setVisible](qtablewidget.md#setvisible)
* [setWhatsThis](qtablewidget.md#setwhatsthis)
* [setWindowFilePath](qtablewidget.md#setwindowfilepath)
* [setWindowFlag](qtablewidget.md#setwindowflag)
* [setWindowIcon](qtablewidget.md#setwindowicon)
* [setWindowModified](qtablewidget.md#setwindowmodified)
* [setWindowOpacity](qtablewidget.md#setwindowopacity)
* [setWindowRole](qtablewidget.md#setwindowrole)
* [setWindowState](qtablewidget.md#setwindowstate)
* [setWindowTitle](qtablewidget.md#setwindowtitle)
* [setWordWrap](qtablewidget.md#setwordwrap)
* [show](qtablewidget.md#show)
* [showColumn](qtablewidget.md#showcolumn)
* [showDropIndicator](qtablewidget.md#showdropindicator)
* [showFullScreen](qtablewidget.md#showfullscreen)
* [showGrid](qtablewidget.md#showgrid)
* [showMaximized](qtablewidget.md#showmaximized)
* [showMinimized](qtablewidget.md#showminimized)
* [showNormal](qtablewidget.md#shownormal)
* [showRow](qtablewidget.md#showrow)
* [size](qtablewidget.md#size)
* [sizeHint](qtablewidget.md#sizehint)
* [sizeHintForIndex](qtablewidget.md#sizehintforindex)
* [sizeIncrement](qtablewidget.md#sizeincrement)
* [sortByColumn](qtablewidget.md#sortbycolumn)
* [sortItems](qtablewidget.md#sortitems)
* [stackUnder](qtablewidget.md#stackunder)
* [startTimer](qtablewidget.md#starttimer)
* [statusTip](qtablewidget.md#statustip)
* [style](qtablewidget.md#style)
* [styleSheet](qtablewidget.md#stylesheet)
* [tabKeyNavigation](qtablewidget.md#tabkeynavigation)
* [takeItem](qtablewidget.md#takeitem)
* [testAttribute](qtablewidget.md#testattribute)
* [textElideMode](qtablewidget.md#textelidemode)
* [toolTip](qtablewidget.md#tooltip)
* [toolTipDuration](qtablewidget.md#tooltipduration)
* [underMouse](qtablewidget.md#undermouse)
* [unsetCursor](qtablewidget.md#unsetcursor)
* [unsetLayoutDirection](qtablewidget.md#unsetlayoutdirection)
* [unsetLocale](qtablewidget.md#unsetlocale)
* [update](qtablewidget.md#update)
* [updateGeometry](qtablewidget.md#updategeometry)
* [updateMicroFocus](qtablewidget.md#updatemicrofocus)
* [updatesEnabled](qtablewidget.md#updatesenabled)
* [verticalHeader](qtablewidget.md#verticalheader)
* [verticalScrollBar](qtablewidget.md#verticalscrollbar)
* [verticalScrollMode](qtablewidget.md#verticalscrollmode)
* [viewport](qtablewidget.md#viewport)
* [visualColumn](qtablewidget.md#visualcolumn)
* [visualItemRect](qtablewidget.md#visualitemrect)
* [visualRect](qtablewidget.md#visualrect)
* [visualRow](qtablewidget.md#visualrow)
* [whatsThis](qtablewidget.md#whatsthis)
* [width](qtablewidget.md#width)
* [widthMM](qtablewidget.md#widthmm)
* [winId](qtablewidget.md#winid)
* [window](qtablewidget.md#window)
* [windowFilePath](qtablewidget.md#windowfilepath)
* [windowHandle](qtablewidget.md#windowhandle)
* [windowIcon](qtablewidget.md#windowicon)
* [windowOpacity](qtablewidget.md#windowopacity)
* [windowRole](qtablewidget.md#windowrole)
* [windowState](qtablewidget.md#windowstate)
* [windowTitle](qtablewidget.md#windowtitle)
* [wordWrap](qtablewidget.md#wordwrap)
* [x](qtablewidget.md#x)
* [y](qtablewidget.md#y)

## Constructors

###  constructor

\+ **new QTableWidget**(`rowsOrNativeOrParent`: [QWidget](qwidget.md) | [NativeElement](../globals.md#nativeelement) | number, `columns?`: number, `parent?`: [QWidget](qwidget.md)): *[QTableWidget](qtablewidget.md)*

*Overrides [QTableView](qtableview.md).[constructor](qtableview.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`rowsOrNativeOrParent` | [QWidget](qwidget.md) &#124; [NativeElement](../globals.md#nativeelement) &#124; number |
`columns?` | number |
`parent?` | [QWidget](qwidget.md) |

**Returns:** *[QTableWidget](qtablewidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string*

*Inherited from [QMenu](qmenu.md).[_rawInlineStyle](qmenu.md#_rawinlinestyle)*

___

###  items

• **items**: *Set‹[NativeElement](../globals.md#nativeelement) | [Component](component.md)›*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTableWidgetSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTableWidgetSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTableWidgetSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  cellWidget

▸ **cellWidget**(`row`: number, `column`: number): *[QWidget](qwidget.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |
`column` | number | 0 |

**Returns:** *[QWidget](qwidget.md)*

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

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  clearContents

▸ **clearContents**(): *void*

**Returns:** *void*

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

*Inherited from [QTableView](qtableview.md).[clearSpans](qtableview.md#clearspans)*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  closePersistentEditor

▸ **closePersistentEditor**(`itemOrIndex`: [QTableWidgetItem](qtablewidgetitem.md) | [QModelIndex](qmodelindex.md)): *void*

*Overrides [QAbstractItemView](qabstractitemview.md).[closePersistentEditor](qabstractitemview.md#closepersistenteditor)*

**Parameters:**

Name | Type |
------ | ------ |
`itemOrIndex` | [QTableWidgetItem](qtablewidgetitem.md) &#124; [QModelIndex](qmodelindex.md) |

**Returns:** *void*

___

###  colorCount

▸ **colorCount**(): *number*

*Inherited from [QMenu](qmenu.md).[colorCount](qmenu.md#colorcount)*

**Returns:** *number*

___

###  column

▸ **column**(`item`: [QTableWidgetItem](qtablewidgetitem.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *number*

___

###  columnAt

▸ **columnAt**(`x`: number): *number*

*Inherited from [QTableView](qtableview.md).[columnAt](qtableview.md#columnat)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *number*

___

###  columnCount

▸ **columnCount**(): *number*

**Returns:** *number*

___

###  columnSpan

▸ **columnSpan**(`row`: number, `column`: number): *number*

*Inherited from [QTableView](qtableview.md).[columnSpan](qtableview.md#columnspan)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *number*

___

###  columnViewportPosition

▸ **columnViewportPosition**(`column`: number): *number*

*Inherited from [QTableView](qtableview.md).[columnViewportPosition](qtableview.md#columnviewportposition)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *number*

___

###  columnWidth

▸ **columnWidth**(`column`: number): *number*

*Inherited from [QTableView](qtableview.md).[columnWidth](qtableview.md#columnwidth)*

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

###  currentColumn

▸ **currentColumn**(): *number*

**Returns:** *number*

___

###  currentIndex

▸ **currentIndex**(): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[currentIndex](qabstractitemview.md#currentindex)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  currentItem

▸ **currentItem**(): *[QTableWidgetItem](qtablewidgetitem.md)*

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

___

###  currentRow

▸ **currentRow**(): *number*

**Returns:** *number*

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

###  editItem

▸ **editItem**(`item`: [Component](component.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [Component](component.md) |

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

###  findItems

▸ **findItems**(`text`: string, `flags`: [MatchFlag](../enums/matchflag.md)): *[QTableWidgetItem](qtablewidgetitem.md)[]*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |
`flags` | [MatchFlag](../enums/matchflag.md) |

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)[]*

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

*Inherited from [QTableView](qtableview.md).[gridStyle](qtableview.md#gridstyle)*

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

*Inherited from [QTableView](qtableview.md).[hideColumn](qtableview.md#hidecolumn)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  hideRow

▸ **hideRow**(`row`: number): *void*

*Inherited from [QTableView](qtableview.md).[hideRow](qtableview.md#hiderow)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  horizontalHeader

▸ **horizontalHeader**(): *[QHeaderView](qheaderview.md)*

*Inherited from [QTableView](qtableview.md).[horizontalHeader](qtableview.md#horizontalheader)*

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

###  insertColumn

▸ **insertColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  insertRow

▸ **insertRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

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

*Inherited from [QTableView](qtableview.md).[isColumnHidden](qtableview.md#iscolumnhidden)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *boolean*

___

###  isCornerButtonEnabled

▸ **isCornerButtonEnabled**(): *boolean*

*Inherited from [QTableView](qtableview.md).[isCornerButtonEnabled](qtableview.md#iscornerbuttonenabled)*

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

▸ **isPersistentEditorOpen**(`itemOrIndex`: [QTableWidgetItem](qtablewidgetitem.md) | [QModelIndex](qmodelindex.md)): *boolean*

*Overrides [QAbstractItemView](qabstractitemview.md).[isPersistentEditorOpen](qabstractitemview.md#ispersistenteditoropen)*

**Parameters:**

Name | Type |
------ | ------ |
`itemOrIndex` | [QTableWidgetItem](qtablewidgetitem.md) &#124; [QModelIndex](qmodelindex.md) |

**Returns:** *boolean*

___

###  isRowHidden

▸ **isRowHidden**(`row`: number): *boolean*

*Inherited from [QTableView](qtableview.md).[isRowHidden](qtableview.md#isrowhidden)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *boolean*

___

###  isSortingEnabled

▸ **isSortingEnabled**(): *boolean*

*Inherited from [QTableView](qtableview.md).[isSortingEnabled](qtableview.md#issortingenabled)*

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

###  item

▸ **item**(`row`: number, `column`: number): *[QTableWidgetItem](qtablewidgetitem.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |
`column` | number | 0 |

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

___

###  itemAt

▸ **itemAt**(`x`: number, `y`: number): *[QTableWidgetItem](qtablewidgetitem.md)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | 0 |
`y` | number | 0 |

**Returns:** *[QTableWidgetItem](qtablewidgetitem.md)*

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

▸ **openPersistentEditor**(`itemOrIndex`: [QTableWidgetItem](qtablewidgetitem.md) | [QModelIndex](qmodelindex.md)): *void*

*Overrides [QAbstractItemView](qabstractitemview.md).[openPersistentEditor](qabstractitemview.md#openpersistenteditor)*

**Parameters:**

Name | Type |
------ | ------ |
`itemOrIndex` | [QTableWidgetItem](qtablewidgetitem.md) &#124; [QModelIndex](qmodelindex.md) |

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

###  removeCellWidget

▸ **removeCellWidget**(`row`: number, `column`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |
`column` | number | 0 |

**Returns:** *void*

___

###  removeColumn

▸ **removeColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTableWidgetSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTableWidgetSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTableWidgetSignals[SignalType] |
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

###  removeRow

▸ **removeRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

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

*Inherited from [QTableView](qtableview.md).[resizeColumnToContents](qtableview.md#resizecolumntocontents)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  resizeColumnsToContents

▸ **resizeColumnsToContents**(): *void*

*Inherited from [QTableView](qtableview.md).[resizeColumnsToContents](qtableview.md#resizecolumnstocontents)*

**Returns:** *void*

___

###  resizeRowToContents

▸ **resizeRowToContents**(`row`: number): *void*

*Inherited from [QTableView](qtableview.md).[resizeRowToContents](qtableview.md#resizerowtocontents)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  resizeRowsToContents

▸ **resizeRowsToContents**(): *void*

*Inherited from [QTableView](qtableview.md).[resizeRowsToContents](qtableview.md#resizerowstocontents)*

**Returns:** *void*

___

###  rootIndex

▸ **rootIndex**(): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[rootIndex](qabstractitemview.md#rootindex)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  row

▸ **row**(`item`: [QTableWidgetItem](qtablewidgetitem.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *number*

___

###  rowAt

▸ **rowAt**(`y`: number): *number*

*Inherited from [QTableView](qtableview.md).[rowAt](qtableview.md#rowat)*

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *number*

___

###  rowCount

▸ **rowCount**(): *number*

**Returns:** *number*

___

###  rowHeight

▸ **rowHeight**(`row`: number): *number*

*Inherited from [QTableView](qtableview.md).[rowHeight](qtableview.md#rowheight)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *number*

___

###  rowSpan

▸ **rowSpan**(`row`: number, `column`: number): *number*

*Inherited from [QTableView](qtableview.md).[rowSpan](qtableview.md#rowspan)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |

**Returns:** *number*

___

###  rowViewportPosition

▸ **rowViewportPosition**(`row`: number): *number*

*Inherited from [QTableView](qtableview.md).[rowViewportPosition](qtableview.md#rowviewportposition)*

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

###  scrollToItem

▸ **scrollToItem**(`item`: [QTableWidgetItem](qtablewidgetitem.md), `hint`: [ScrollHint](../enums/scrollhint.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`item` | [QTableWidgetItem](qtablewidgetitem.md) | - |
`hint` | [ScrollHint](../enums/scrollhint.md) | ScrollHint.EnsureVisible |

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

*Inherited from [QTableView](qtableview.md).[selectColumn](qtableview.md#selectcolumn)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  selectRow

▸ **selectRow**(`row`: number): *void*

*Inherited from [QTableView](qtableview.md).[selectRow](qtableview.md#selectrow)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  selectedRanges

▸ **selectedRanges**(): *[Range](../interfaces/range.md)[]*

**Returns:** *[Range](../interfaces/range.md)[]*

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

###  setCellWidget

▸ **setCellWidget**(`row`: number, `column`: number, `widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setColumnCount

▸ **setColumnCount**(`count`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`count` | number |

**Returns:** *void*

___

###  setColumnHidden

▸ **setColumnHidden**(`column`: number, `hide`: boolean): *void*

*Inherited from [QTableView](qtableview.md).[setColumnHidden](qtableview.md#setcolumnhidden)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`hide` | boolean |

**Returns:** *void*

___

###  setColumnWidth

▸ **setColumnWidth**(`column`: number, `width`: number): *void*

*Inherited from [QTableView](qtableview.md).[setColumnWidth](qtableview.md#setcolumnwidth)*

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

*Inherited from [QTableView](qtableview.md).[setCornerButtonEnabled](qtableview.md#setcornerbuttonenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setCurrentCell

▸ **setCurrentCell**(`row`: number, `column`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |
`column` | number | 0 |

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

###  setCurrentItem

▸ **setCurrentItem**(`item`: [QTableWidgetItem](qtablewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

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

*Inherited from [QTableView](qtableview.md).[setGridStyle](qtableview.md#setgridstyle)*

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

###  setHorizontalHeaderItem

▸ **setHorizontalHeaderItem**(`column`: number, `item`: [QTableWidgetItem](qtablewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *void*

___

###  setHorizontalHeaderLabels

▸ **setHorizontalHeaderLabels**(`labels`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`labels` | string[] |

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

###  setItem

▸ **setItem**(`row`: number, `column`: number, `item`: [QTableWidgetItem](qtablewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`column` | number |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

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

###  setRowCount

▸ **setRowCount**(`count`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`count` | number |

**Returns:** *void*

___

###  setRowHeight

▸ **setRowHeight**(`row`: number, `height`: number): *void*

*Inherited from [QTableView](qtableview.md).[setRowHeight](qtableview.md#setrowheight)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`height` | number |

**Returns:** *void*

___

###  setRowHidden

▸ **setRowHidden**(`row`: number, `hide`: boolean): *void*

*Inherited from [QTableView](qtableview.md).[setRowHidden](qtableview.md#setrowhidden)*

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

*Inherited from [QTableView](qtableview.md).[setShowGrid](qtableview.md#setshowgrid)*

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

*Inherited from [QTableView](qtableview.md).[setSortingEnabled](qtableview.md#setsortingenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setSpan

▸ **setSpan**(`row`: number, `column`: number, `rowSpanCount`: number, `columnSpanCount`: number): *void*

*Inherited from [QTableView](qtableview.md).[setSpan](qtableview.md#setspan)*

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

###  setVerticalHeaderItem

▸ **setVerticalHeaderItem**(`row`: number, `item`: [QTableWidgetItem](qtablewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *void*

___

###  setVerticalHeaderLabels

▸ **setVerticalHeaderLabels**(`labels`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`labels` | string[] |

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

*Inherited from [QTableView](qtableview.md).[setWordWrap](qtableview.md#setwordwrap)*

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

*Inherited from [QTableView](qtableview.md).[showColumn](qtableview.md#showcolumn)*

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

*Inherited from [QTableView](qtableview.md).[showGrid](qtableview.md#showgrid)*

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

*Inherited from [QTableView](qtableview.md).[showRow](qtableview.md#showrow)*

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

*Inherited from [QTableView](qtableview.md).[sortByColumn](qtableview.md#sortbycolumn)*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |
`order` | [SortOrder](../enums/sortorder.md) |

**Returns:** *void*

___

###  sortItems

▸ **sortItems**(`column`: number, `order`: [SortOrder](../enums/sortorder.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`column` | number | 0 |
`order` | [SortOrder](../enums/sortorder.md) | SortOrder.AscendingOrder |

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

###  takeItem

▸ **takeItem**(`row`: number, `column`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`row` | number | 0 |
`column` | number | 0 |

**Returns:** *void*

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

*Inherited from [QTableView](qtableview.md).[verticalHeader](qtableview.md#verticalheader)*

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

###  visualColumn

▸ **visualColumn**(`logicalColumn`: number): *number*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`logicalColumn` | number | 0 |

**Returns:** *number*

___

###  visualItemRect

▸ **visualItemRect**(`item`: [QTableWidgetItem](qtablewidgetitem.md)): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTableWidgetItem](qtablewidgetitem.md) |

**Returns:** *[QRect](qrect.md)*

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

###  visualRow

▸ **visualRow**(`logicalRow`: number): *number*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`logicalRow` | number | 0 |

**Returns:** *number*

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

*Inherited from [QTableView](qtableview.md).[wordWrap](qtableview.md#wordwrap)*

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
