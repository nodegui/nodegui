---
id: "qlistwidget"
title: "QListWidget"
sidebar_label: "QListWidget"
---

> Create and control a item-based list.

**This class is a JS wrapper around Qt's [QListWidget class](https://doc.qt.io/qt-5/qlistwidget.html)**

### Example

```javascript
const { QListWidget, QListWidgetItem } = require("@nodegui/nodegui");

const listWidget = new QListWidget();

for (let i = 0; i < 30; i++) {
let listWidgetItem = new QListWidgetItem();
listWidgetItem.setText('listWidgetItem ' + i);
if (i===3) {
listWidgetItem.setCheckState(2);
} else {
listWidgetItem.setCheckState(0);
}
listWidget.addItem(listWidgetItem);
}
```

## Hierarchy

  ↳ [QAbstractItemView](qabstractitemview.md)‹[QListWidgetSignals](../interfaces/qlistwidgetsignals.md)›

  ↳ **QListWidget**

## Index

### Constructors

* [constructor](qlistwidget.md#constructor)

### Properties

* [_rawInlineStyle](qlistwidget.md#_rawinlinestyle)
* [items](qlistwidget.md#items)
* [layout](qlistwidget.md#optional-layout)
* [native](qlistwidget.md#native)
* [nodeChildren](qlistwidget.md#nodechildren)
* [nodeParent](qlistwidget.md#optional-nodeparent)
* [type](qlistwidget.md#type)
* [viewportWidget](qlistwidget.md#optional-viewportwidget)

### Methods

* [activateWindow](qlistwidget.md#activatewindow)
* [addEventListener](qlistwidget.md#addeventlistener)
* [addItem](qlistwidget.md#additem)
* [addItems](qlistwidget.md#additems)
* [adjustSize](qlistwidget.md#adjustsize)
* [alternatingRowColors](qlistwidget.md#alternatingrowcolors)
* [autoScrollMargin](qlistwidget.md#autoscrollmargin)
* [batchSize](qlistwidget.md#batchsize)
* [clear](qlistwidget.md#clear)
* [clearPropertyFlags](qlistwidget.md#clearpropertyflags)
* [close](qlistwidget.md#close)
* [closePersistentEditor](qlistwidget.md#closepersistenteditor)
* [count](qlistwidget.md#count)
* [currentIndex](qlistwidget.md#currentindex)
* [currentItem](qlistwidget.md#currentitem)
* [currentRow](qlistwidget.md#currentrow)
* [defaultDropAction](qlistwidget.md#defaultdropaction)
* [dragDropMode](qlistwidget.md#dragdropmode)
* [dragDropOverwriteMode](qlistwidget.md#dragdropoverwritemode)
* [dragEnabled](qlistwidget.md#dragenabled)
* [editItem](qlistwidget.md#edititem)
* [editTriggers](qlistwidget.md#edittriggers)
* [flow](qlistwidget.md#flow)
* [font](qlistwidget.md#font)
* [geometry](qlistwidget.md#geometry)
* [getFlexNode](qlistwidget.md#getflexnode)
* [gridSize](qlistwidget.md#gridsize)
* [hasAutoScroll](qlistwidget.md#hasautoscroll)
* [hasMouseTracking](qlistwidget.md#hasmousetracking)
* [hide](qlistwidget.md#hide)
* [horizontalScrollMode](qlistwidget.md#horizontalscrollmode)
* [iconSize](qlistwidget.md#iconsize)
* [indexWidget](qlistwidget.md#indexwidget)
* [inherits](qlistwidget.md#inherits)
* [insertItem](qlistwidget.md#insertitem)
* [insertItems](qlistwidget.md#insertitems)
* [isEnabled](qlistwidget.md#isenabled)
* [isPersistentEditorOpen](qlistwidget.md#ispersistenteditoropen)
* [isRowHidden](qlistwidget.md#isrowhidden)
* [isSelectionRectVisible](qlistwidget.md#isselectionrectvisible)
* [isSortingEnabled](qlistwidget.md#issortingenabled)
* [isVisible](qlistwidget.md#isvisible)
* [isWrapping](qlistwidget.md#iswrapping)
* [item](qlistwidget.md#item)
* [itemAlignment](qlistwidget.md#itemalignment)
* [itemAt](qlistwidget.md#itemat)
* [itemWidget](qlistwidget.md#itemwidget)
* [layoutMode](qlistwidget.md#layoutmode)
* [lower](qlistwidget.md#lower)
* [modelColumn](qlistwidget.md#modelcolumn)
* [move](qlistwidget.md#move)
* [movement](qlistwidget.md#movement)
* [objectName](qlistwidget.md#objectname)
* [openPersistentEditor](qlistwidget.md#openpersistenteditor)
* [pos](qlistwidget.md#pos)
* [property](qlistwidget.md#property)
* [raise](qlistwidget.md#raise)
* [removeEventListener](qlistwidget.md#removeeventlistener)
* [removeItemWidget](qlistwidget.md#removeitemwidget)
* [repaint](qlistwidget.md#repaint)
* [resetHorizontalScrollMode](qlistwidget.md#resethorizontalscrollmode)
* [resetVerticalScrollMode](qlistwidget.md#resetverticalscrollmode)
* [resize](qlistwidget.md#resize)
* [resizeMode](qlistwidget.md#resizemode)
* [row](qlistwidget.md#row)
* [scrollToBottom](qlistwidget.md#scrolltobottom)
* [scrollToItem](qlistwidget.md#scrolltoitem)
* [scrollToTop](qlistwidget.md#scrolltotop)
* [selectionBehavior](qlistwidget.md#selectionbehavior)
* [selectionMode](qlistwidget.md#selectionmode)
* [setAlternatingRowColors](qlistwidget.md#setalternatingrowcolors)
* [setAttribute](qlistwidget.md#setattribute)
* [setAutoScroll](qlistwidget.md#setautoscroll)
* [setAutoScrollMargin](qlistwidget.md#setautoscrollmargin)
* [setBatchSize](qlistwidget.md#setbatchsize)
* [setContextMenuPolicy](qlistwidget.md#setcontextmenupolicy)
* [setCurrentIndex](qlistwidget.md#setcurrentindex)
* [setCurrentItem](qlistwidget.md#setcurrentitem)
* [setCurrentRow](qlistwidget.md#setcurrentrow)
* [setCursor](qlistwidget.md#setcursor)
* [setDefaultDropAction](qlistwidget.md#setdefaultdropaction)
* [setDragDropMode](qlistwidget.md#setdragdropmode)
* [setDragDropOverwriteMode](qlistwidget.md#setdragdropoverwritemode)
* [setDragEnabled](qlistwidget.md#setdragenabled)
* [setDropIndicatorShown](qlistwidget.md#setdropindicatorshown)
* [setEditTriggers](qlistwidget.md#setedittriggers)
* [setEnabled](qlistwidget.md#setenabled)
* [setFixedSize](qlistwidget.md#setfixedsize)
* [setFlexNodeSizeControlled](qlistwidget.md#setflexnodesizecontrolled)
* [setFlow](qlistwidget.md#setflow)
* [setFont](qlistwidget.md#setfont)
* [setGeometry](qlistwidget.md#setgeometry)
* [setGridSize](qlistwidget.md#setgridsize)
* [setHorizontalScrollBarPolicy](qlistwidget.md#sethorizontalscrollbarpolicy)
* [setHorizontalScrollMode](qlistwidget.md#sethorizontalscrollmode)
* [setIconSize](qlistwidget.md#seticonsize)
* [setIndexWidget](qlistwidget.md#setindexwidget)
* [setInlineStyle](qlistwidget.md#setinlinestyle)
* [setItemAlignment](qlistwidget.md#setitemalignment)
* [setItemWidget](qlistwidget.md#setitemwidget)
* [setLayout](qlistwidget.md#setlayout)
* [setLayoutMode](qlistwidget.md#setlayoutmode)
* [setMaximumSize](qlistwidget.md#setmaximumsize)
* [setMinimumSize](qlistwidget.md#setminimumsize)
* [setModelColumn](qlistwidget.md#setmodelcolumn)
* [setMouseTracking](qlistwidget.md#setmousetracking)
* [setMovement](qlistwidget.md#setmovement)
* [setNodeParent](qlistwidget.md#setnodeparent)
* [setObjectName](qlistwidget.md#setobjectname)
* [setProperty](qlistwidget.md#setproperty)
* [setResizeMode](qlistwidget.md#setresizemode)
* [setRowHidden](qlistwidget.md#setrowhidden)
* [setSelectionBehavior](qlistwidget.md#setselectionbehavior)
* [setSelectionMode](qlistwidget.md#setselectionmode)
* [setSelectionRectVisible](qlistwidget.md#setselectionrectvisible)
* [setSortingEnabled](qlistwidget.md#setsortingenabled)
* [setSpacing](qlistwidget.md#setspacing)
* [setStyleSheet](qlistwidget.md#setstylesheet)
* [setTabKeyNavigation](qlistwidget.md#settabkeynavigation)
* [setTextElideMode](qlistwidget.md#settextelidemode)
* [setUniformItemSizes](qlistwidget.md#setuniformitemsizes)
* [setVerticalScrollBarPolicy](qlistwidget.md#setverticalscrollbarpolicy)
* [setVerticalScrollMode](qlistwidget.md#setverticalscrollmode)
* [setViewMode](qlistwidget.md#setviewmode)
* [setViewport](qlistwidget.md#setviewport)
* [setWindowFlag](qlistwidget.md#setwindowflag)
* [setWindowIcon](qlistwidget.md#setwindowicon)
* [setWindowOpacity](qlistwidget.md#setwindowopacity)
* [setWindowState](qlistwidget.md#setwindowstate)
* [setWindowTitle](qlistwidget.md#setwindowtitle)
* [setWordWrap](qlistwidget.md#setwordwrap)
* [setWrapping](qlistwidget.md#setwrapping)
* [show](qlistwidget.md#show)
* [showDropIndicator](qlistwidget.md#showdropindicator)
* [showFullScreen](qlistwidget.md#showfullscreen)
* [showMaximized](qlistwidget.md#showmaximized)
* [showMinimized](qlistwidget.md#showminimized)
* [showNormal](qlistwidget.md#shownormal)
* [size](qlistwidget.md#size)
* [sortItems](qlistwidget.md#sortitems)
* [spacing](qlistwidget.md#spacing)
* [styleSheet](qlistwidget.md#stylesheet)
* [tabKeyNavigation](qlistwidget.md#tabkeynavigation)
* [takeItem](qlistwidget.md#takeitem)
* [testAttribute](qlistwidget.md#testattribute)
* [textElideMode](qlistwidget.md#textelidemode)
* [uniformItemSizes](qlistwidget.md#uniformitemsizes)
* [update](qlistwidget.md#update)
* [updateGeometry](qlistwidget.md#updategeometry)
* [verticalScrollMode](qlistwidget.md#verticalscrollmode)
* [viewMode](qlistwidget.md#viewmode)
* [viewport](qlistwidget.md#viewport)
* [visualItemRect](qlistwidget.md#visualitemrect)
* [windowOpacity](qlistwidget.md#windowopacity)
* [windowState](qlistwidget.md#windowstate)
* [windowTitle](qlistwidget.md#windowtitle)
* [wordWrap](qlistwidget.md#wordwrap)

## Constructors

###  constructor

\+ **new QListWidget**(): *[QListWidget](qlistwidget.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QListWidget](qlistwidget.md)*

\+ **new QListWidget**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QListWidget](qlistwidget.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QListWidget](qlistwidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

###  items

• **items**: *Set‹[NativeElement](../globals.md#nativeelement) | [Component](component.md)›*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QListWidgetSignals](../interfaces/qlistwidgetsignals.md)›*

*Inherited from [NodeWidget](nodewidget.md).[layout](nodewidget.md#optional-layout)*

___

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

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

*Inherited from [NodeWidget](nodewidget.md).[type](nodewidget.md#type)*

___

### `Optional` viewportWidget

• **viewportWidget**? : *[NodeWidget](nodewidget.md)‹any›*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewportWidget](qabstractscrollarea.md#optional-viewportwidget)*

## Methods

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[activateWindow](nodewidget.md#activatewindow)*

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QListWidgetSignals*

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

###  addItem

▸ **addItem**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  addItems

▸ **addItems**(`labels`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`labels` | string[] |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[adjustSize](nodewidget.md#adjustsize)*

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

###  batchSize

▸ **batchSize**(): *number*

**Returns:** *number*

___

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  clearPropertyFlags

▸ **clearPropertyFlags**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[close](nodewidget.md#close)*

**Returns:** *boolean*

___

###  closePersistentEditor

▸ **closePersistentEditor**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  count

▸ **count**(): *number*

**Returns:** *number*

___

###  currentIndex

▸ **currentIndex**(): *[QModelIndex](qmodelindex.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[currentIndex](qabstractitemview.md#currentindex)*

**Returns:** *[QModelIndex](qmodelindex.md)*

___

###  currentItem

▸ **currentItem**(): *[QListWidgetItem](qlistwidgetitem.md)*

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

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

###  flow

▸ **flow**(): *[Flow](../enums/flow.md)*

**Returns:** *[Flow](../enums/flow.md)*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [NodeWidget](nodewidget.md).[font](nodewidget.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

*Inherited from [NodeWidget](nodewidget.md).[geometry](nodewidget.md#geometry)*

**Returns:** *[QRect](qrect.md)*

___

###  getFlexNode

▸ **getFlexNode**(): *[FlexNode](../globals.md#flexnode)*

*Inherited from [YogaWidget](yogawidget.md).[getFlexNode](yogawidget.md#getflexnode)*

**Returns:** *[FlexNode](../globals.md#flexnode)*

___

###  gridSize

▸ **gridSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  hasAutoScroll

▸ **hasAutoScroll**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[hasAutoScroll](qabstractitemview.md#hasautoscroll)*

**Returns:** *boolean*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[hasMouseTracking](nodewidget.md#hasmousetracking)*

**Returns:** *boolean*

___

###  hide

▸ **hide**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[hide](nodewidget.md#hide)*

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

###  insertItem

▸ **insertItem**(`row`: number, `item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  insertItems

▸ **insertItems**(`row`: number, `labels`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |
`labels` | string[] |

**Returns:** *void*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isEnabled](nodewidget.md#isenabled)*

**Returns:** *boolean*

___

###  isPersistentEditorOpen

▸ **isPersistentEditorOpen**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

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

###  isSelectionRectVisible

▸ **isSelectionRectVisible**(): *boolean*

**Returns:** *boolean*

___

###  isSortingEnabled

▸ **isSortingEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isVisible](nodewidget.md#isvisible)*

**Returns:** *boolean*

___

###  isWrapping

▸ **isWrapping**(): *boolean*

**Returns:** *boolean*

___

###  item

▸ **item**(`row`: number): *[QListWidgetItem](qlistwidgetitem.md)*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

___

###  itemAlignment

▸ **itemAlignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  itemAt

▸ **itemAt**(`x`: number, `y`: number): *[QListWidgetItem](qlistwidgetitem.md)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *[QListWidgetItem](qlistwidgetitem.md)*

___

###  itemWidget

▸ **itemWidget**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *[QWidget](qwidget.md)*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *[QWidget](qwidget.md)*

___

###  layoutMode

▸ **layoutMode**(): *[LayoutMode](../enums/layoutmode.md)*

**Returns:** *[LayoutMode](../enums/layoutmode.md)*

___

###  lower

▸ **lower**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[lower](nodewidget.md#lower)*

**Returns:** *void*

___

###  modelColumn

▸ **modelColumn**(): *number*

**Returns:** *number*

___

###  move

▸ **move**(`x`: number, `y`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[move](nodewidget.md#move)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  movement

▸ **movement**(): *[Movement](../enums/movement.md)*

**Returns:** *[Movement](../enums/movement.md)*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

**Returns:** *string*

___

###  openPersistentEditor

▸ **openPersistentEditor**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  pos

▸ **pos**(): *object*

*Inherited from [NodeWidget](nodewidget.md).[pos](nodewidget.md#pos)*

**Returns:** *object*

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

*Inherited from [NodeWidget](nodewidget.md).[raise](nodewidget.md#raise)*

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QListWidgetSignals*

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

###  removeItemWidget

▸ **removeItemWidget**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  repaint

▸ **repaint**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[repaint](nodewidget.md#repaint)*

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

*Inherited from [NodeWidget](nodewidget.md).[resize](nodewidget.md#resize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  resizeMode

▸ **resizeMode**(): *[ResizeMode](../enums/resizemode.md)*

**Returns:** *[ResizeMode](../enums/resizemode.md)*

___

###  row

▸ **row**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *number*

___

###  scrollToBottom

▸ **scrollToBottom**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[scrollToBottom](qabstractitemview.md#scrolltobottom)*

**Returns:** *void*

___

###  scrollToItem

▸ **scrollToItem**(`item`: [QListWidgetItem](qlistwidgetitem.md), `hint`: [ScrollHint](../enums/scrollhint.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |
`hint` | [ScrollHint](../enums/scrollhint.md) |

**Returns:** *void*

___

###  scrollToTop

▸ **scrollToTop**(): *void*

*Inherited from [QAbstractItemView](qabstractitemview.md).[scrollToTop](qabstractitemview.md#scrolltotop)*

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

*Inherited from [NodeWidget](nodewidget.md).[setAttribute](nodewidget.md#setattribute)*

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

###  setBatchSize

▸ **setBatchSize**(`batchSize`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`batchSize` | number |

**Returns:** *void*

___

###  setContextMenuPolicy

▸ **setContextMenuPolicy**(`contextMenuPolicy`: [ContextMenuPolicy](../enums/contextmenupolicy.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setContextMenuPolicy](nodewidget.md#setcontextmenupolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`contextMenuPolicy` | [ContextMenuPolicy](../enums/contextmenupolicy.md) |

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

▸ **setCurrentItem**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *void*

___

###  setCurrentRow

▸ **setCurrentRow**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setCursor](nodewidget.md#setcursor)*

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

*Inherited from [NodeWidget](nodewidget.md).[setEnabled](nodewidget.md#setenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setFixedSize

▸ **setFixedSize**(`width`: number, `height`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setFixedSize](nodewidget.md#setfixedsize)*

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

###  setFlow

▸ **setFlow**(`flow`: [Flow](../enums/flow.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`flow` | [Flow](../enums/flow.md) |

**Returns:** *void*

___

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setFont](nodewidget.md#setfont)*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setGeometry

▸ **setGeometry**(`x`: number, `y`: number, `w`: number, `h`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setGeometry](nodewidget.md#setgeometry)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |

**Returns:** *void*

___

###  setGridSize

▸ **setGridSize**(`size`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

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

*Inherited from [NodeWidget](nodewidget.md).[setInlineStyle](nodewidget.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setItemAlignment

▸ **setItemAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) |

**Returns:** *void*

___

###  setItemWidget

▸ **setItemWidget**(`item`: [QListWidgetItem](qlistwidgetitem.md), `widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |
`widget` | [QWidget](qwidget.md) |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QListWidgetSignals](../interfaces/qlistwidgetsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QListWidgetSignals](../interfaces/qlistwidgetsignals.md)› |

**Returns:** *void*

___

###  setLayoutMode

▸ **setLayoutMode**(`mode`: [LayoutMode](../enums/layoutmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [LayoutMode](../enums/layoutmode.md) |

**Returns:** *void*

___

###  setMaximumSize

▸ **setMaximumSize**(`maxw`: number, `maxh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMaximumSize](nodewidget.md#setmaximumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |
`maxh` | number |

**Returns:** *void*

___

###  setMinimumSize

▸ **setMinimumSize**(`minw`: number, `minh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMinimumSize](nodewidget.md#setminimumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |
`minh` | number |

**Returns:** *void*

___

###  setModelColumn

▸ **setModelColumn**(`column`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`column` | number |

**Returns:** *void*

___

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMouseTracking](nodewidget.md#setmousetracking)*

**Parameters:**

Name | Type |
------ | ------ |
`isMouseTracked` | boolean |

**Returns:** *void*

___

###  setMovement

▸ **setMovement**(`movement`: [Movement](../enums/movement.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`movement` | [Movement](../enums/movement.md) |

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

*Inherited from [NodeWidget](nodewidget.md).[setObjectName](nodewidget.md#setobjectname)*

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

###  setResizeMode

▸ **setResizeMode**(`mode`: [ResizeMode](../enums/resizemode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [ResizeMode](../enums/resizemode.md) |

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

###  setSelectionRectVisible

▸ **setSelectionRectVisible**(`show`: boolean): *void*

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

###  setSpacing

▸ **setSpacing**(`space`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`space` | number |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setStyleSheet](nodewidget.md#setstylesheet)*

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

###  setUniformItemSizes

▸ **setUniformItemSizes**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

###  setViewMode

▸ **setViewMode**(`mode`: ViewMode): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | ViewMode |

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

*Inherited from [NodeWidget](nodewidget.md).[setWindowFlag](nodewidget.md#setwindowflag)*

**Parameters:**

Name | Type |
------ | ------ |
`windowType` | [WindowType](../enums/windowtype.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowIcon](nodewidget.md#setwindowicon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setWindowOpacity

▸ **setWindowOpacity**(`opacity`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowOpacity](nodewidget.md#setwindowopacity)*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

**Returns:** *void*

___

###  setWindowState

▸ **setWindowState**(`state`: [WindowState](../enums/windowstate.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowState](nodewidget.md#setwindowstate)*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [WindowState](../enums/windowstate.md) |

**Returns:** *void*

___

###  setWindowTitle

▸ **setWindowTitle**(`title`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowTitle](nodewidget.md#setwindowtitle)*

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

###  setWrapping

▸ **setWrapping**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[show](nodewidget.md#show)*

**Returns:** *void*

___

###  showDropIndicator

▸ **showDropIndicator**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[showDropIndicator](qabstractitemview.md#showdropindicator)*

**Returns:** *boolean*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showFullScreen](nodewidget.md#showfullscreen)*

**Returns:** *void*

___

###  showMaximized

▸ **showMaximized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMaximized](nodewidget.md#showmaximized)*

**Returns:** *void*

___

###  showMinimized

▸ **showMinimized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMinimized](nodewidget.md#showminimized)*

**Returns:** *void*

___

###  showNormal

▸ **showNormal**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showNormal](nodewidget.md#shownormal)*

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [NodeWidget](nodewidget.md).[size](nodewidget.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  sortItems

▸ **sortItems**(`order`: [SortOrder](../enums/sortorder.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`order` | [SortOrder](../enums/sortorder.md) |

**Returns:** *void*

___

###  spacing

▸ **spacing**(): *number*

**Returns:** *number*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[styleSheet](nodewidget.md#stylesheet)*

**Returns:** *string*

___

###  tabKeyNavigation

▸ **tabKeyNavigation**(): *boolean*

*Inherited from [QAbstractItemView](qabstractitemview.md).[tabKeyNavigation](qabstractitemview.md#tabkeynavigation)*

**Returns:** *boolean*

___

###  takeItem

▸ **takeItem**(`row`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`row` | number |

**Returns:** *void*

___

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[testAttribute](nodewidget.md#testattribute)*

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

###  uniformItemSizes

▸ **uniformItemSizes**(): *boolean*

**Returns:** *boolean*

___

###  update

▸ **update**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[update](nodewidget.md#update)*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[updateGeometry](nodewidget.md#updategeometry)*

**Returns:** *void*

___

###  verticalScrollMode

▸ **verticalScrollMode**(): *[ScrollMode](../enums/scrollmode.md)*

*Inherited from [QAbstractItemView](qabstractitemview.md).[verticalScrollMode](qabstractitemview.md#verticalscrollmode)*

**Returns:** *[ScrollMode](../enums/scrollmode.md)*

___

###  viewMode

▸ **viewMode**(): *ViewMode*

**Returns:** *ViewMode*

___

###  viewport

▸ **viewport**(): *[QWidget](qwidget.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewport](qabstractscrollarea.md#viewport)*

**Returns:** *[QWidget](qwidget.md)*

___

###  visualItemRect

▸ **visualItemRect**(`item`: [QListWidgetItem](qlistwidgetitem.md)): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QListWidgetItem](qlistwidgetitem.md) |

**Returns:** *[QRect](qrect.md)*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowOpacity](nodewidget.md#windowopacity)*

**Returns:** *number*

___

###  windowState

▸ **windowState**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowState](nodewidget.md#windowstate)*

**Returns:** *number*

___

###  windowTitle

▸ **windowTitle**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[windowTitle](nodewidget.md#windowtitle)*

**Returns:** *string*

___

###  wordWrap

▸ **wordWrap**(): *boolean*

**Returns:** *boolean*
