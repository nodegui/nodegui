---
id: "qtreewidget"
title: "QTreeWidget"
sidebar_label: "QTreeWidget"
---

> Creates a tree view that uses a predefined tree model.

**This class is a JS wrapper around Qt's [QTreeWidget class](https://doc.qt.io/qt-5/qtreewidget.html)**

### Example

```javascript

const { QMainWindow, QTreeWidgetItem, QTreeWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();
const tree = new QTreeWidget();

const item1 = new QTreeWidgetItem();
item1.setText(0, `item-1`);
const item2 = new QTreeWidgetItem();
item2.setText(0, `item-2`);
const item3 = new QTreeWidgetItem();
item3.setText(0, `item-3`);
const item4 = new QTreeWidgetItem();
item4.setText(0, `item-4`);
const item5 = new QTreeWidgetItem();
item5.setText(0, `item-5`);
const item6 = new QTreeWidgetItem();
item6.setText(0, `item-6`);

tree.addTopLevelItem(item1);
tree.insertTopLevelItems(0, [item2, item3]);
tree.addTopLevelItems([item4, item5]);
tree.insertTopLevelItem(2, item6);

// Add children to item1
const c1item1 = new QTreeWidgetItem(item1);
c1item1.setText(0, `c1item1`);
const c1item2 = new QTreeWidgetItem(item1);
c1item2.setText(0, `c1item1`);

win.setCentralWidget(tree);
win.show();
(global as any).win = win;```

## Hierarchy

  ↳ [QAbstractScrollArea](qabstractscrollarea.md)‹[QTreeWidgetSignals](../interfaces/qtreewidgetsignals.md)›

  ↳ **QTreeWidget**

## Index

### Constructors

* [constructor](qtreewidget.md#constructor)

### Properties

* [_rawInlineStyle](qtreewidget.md#_rawinlinestyle)
* [actions](qtreewidget.md#actions)
* [itemWidgets](qtreewidget.md#itemwidgets)
* [layout](qtreewidget.md#optional-layout)
* [native](qtreewidget.md#native)
* [nodeChildren](qtreewidget.md#nodechildren)
* [nodeParent](qtreewidget.md#optional-nodeparent)
* [topLevelItems](qtreewidget.md#toplevelitems)
* [type](qtreewidget.md#type)
* [viewportWidget](qtreewidget.md#optional-viewportwidget)

### Methods

* [acceptDrops](qtreewidget.md#acceptdrops)
* [activateWindow](qtreewidget.md#activatewindow)
* [addAction](qtreewidget.md#addaction)
* [addEventListener](qtreewidget.md#addeventlistener)
* [addTopLevelItem](qtreewidget.md#addtoplevelitem)
* [addTopLevelItems](qtreewidget.md#addtoplevelitems)
* [adjustSize](qtreewidget.md#adjustsize)
* [clear](qtreewidget.md#clear)
* [close](qtreewidget.md#close)
* [currentItem](qtreewidget.md#currentitem)
* [findItems](qtreewidget.md#finditems)
* [font](qtreewidget.md#font)
* [frameRect](qtreewidget.md#framerect)
* [frameShadow](qtreewidget.md#frameshadow)
* [frameShape](qtreewidget.md#frameshape)
* [frameStyle](qtreewidget.md#framestyle)
* [frameWidth](qtreewidget.md#framewidth)
* [geometry](qtreewidget.md#geometry)
* [getFlexNode](qtreewidget.md#getflexnode)
* [hasMouseTracking](qtreewidget.md#hasmousetracking)
* [hide](qtreewidget.md#hide)
* [inherits](qtreewidget.md#inherits)
* [insertTopLevelItem](qtreewidget.md#inserttoplevelitem)
* [insertTopLevelItems](qtreewidget.md#inserttoplevelitems)
* [isEnabled](qtreewidget.md#isenabled)
* [isVisible](qtreewidget.md#isvisible)
* [lineWidth](qtreewidget.md#linewidth)
* [lower](qtreewidget.md#lower)
* [mapFromGlobal](qtreewidget.md#mapfromglobal)
* [mapFromParent](qtreewidget.md#mapfromparent)
* [mapToGlobal](qtreewidget.md#maptoglobal)
* [mapToParent](qtreewidget.md#maptoparent)
* [maximumSize](qtreewidget.md#maximumsize)
* [midLineWidth](qtreewidget.md#midlinewidth)
* [minimumSize](qtreewidget.md#minimumsize)
* [move](qtreewidget.md#move)
* [objectName](qtreewidget.md#objectname)
* [pos](qtreewidget.md#pos)
* [property](qtreewidget.md#property)
* [raise](qtreewidget.md#raise)
* [removeAction](qtreewidget.md#removeaction)
* [removeEventListener](qtreewidget.md#removeeventlistener)
* [repaint](qtreewidget.md#repaint)
* [repolish](qtreewidget.md#repolish)
* [resize](qtreewidget.md#resize)
* [selectedItems](qtreewidget.md#selecteditems)
* [setAcceptDrops](qtreewidget.md#setacceptdrops)
* [setAttribute](qtreewidget.md#setattribute)
* [setColumnCount](qtreewidget.md#setcolumncount)
* [setColumnWidth](qtreewidget.md#setcolumnwidth)
* [setContextMenuPolicy](qtreewidget.md#setcontextmenupolicy)
* [setCursor](qtreewidget.md#setcursor)
* [setEnabled](qtreewidget.md#setenabled)
* [setFixedSize](qtreewidget.md#setfixedsize)
* [setFlexNodeSizeControlled](qtreewidget.md#setflexnodesizecontrolled)
* [setFocus](qtreewidget.md#setfocus)
* [setFont](qtreewidget.md#setfont)
* [setFrameRect](qtreewidget.md#setframerect)
* [setFrameShadow](qtreewidget.md#setframeshadow)
* [setFrameShape](qtreewidget.md#setframeshape)
* [setFrameStyle](qtreewidget.md#setframestyle)
* [setGeometry](qtreewidget.md#setgeometry)
* [setGraphicsEffect](qtreewidget.md#setgraphicseffect)
* [setHeaderHidden](qtreewidget.md#setheaderhidden)
* [setHeaderLabel](qtreewidget.md#setheaderlabel)
* [setHeaderLabels](qtreewidget.md#setheaderlabels)
* [setHorizontalScrollBarPolicy](qtreewidget.md#sethorizontalscrollbarpolicy)
* [setInlineStyle](qtreewidget.md#setinlinestyle)
* [setItemWidget](qtreewidget.md#setitemwidget)
* [setLayout](qtreewidget.md#setlayout)
* [setLineWidth](qtreewidget.md#setlinewidth)
* [setMaximumSize](qtreewidget.md#setmaximumsize)
* [setMidLineWidth](qtreewidget.md#setmidlinewidth)
* [setMinimumSize](qtreewidget.md#setminimumsize)
* [setMouseTracking](qtreewidget.md#setmousetracking)
* [setNodeParent](qtreewidget.md#setnodeparent)
* [setObjectName](qtreewidget.md#setobjectname)
* [setProperty](qtreewidget.md#setproperty)
* [setSortingEnabled](qtreewidget.md#setsortingenabled)
* [setStyleSheet](qtreewidget.md#setstylesheet)
* [setVerticalScrollBarPolicy](qtreewidget.md#setverticalscrollbarpolicy)
* [setViewport](qtreewidget.md#setviewport)
* [setWindowFlag](qtreewidget.md#setwindowflag)
* [setWindowIcon](qtreewidget.md#setwindowicon)
* [setWindowOpacity](qtreewidget.md#setwindowopacity)
* [setWindowState](qtreewidget.md#setwindowstate)
* [setWindowTitle](qtreewidget.md#setwindowtitle)
* [show](qtreewidget.md#show)
* [showFullScreen](qtreewidget.md#showfullscreen)
* [showMaximized](qtreewidget.md#showmaximized)
* [showMinimized](qtreewidget.md#showminimized)
* [showNormal](qtreewidget.md#shownormal)
* [size](qtreewidget.md#size)
* [styleSheet](qtreewidget.md#stylesheet)
* [takeTopLevelItem](qtreewidget.md#taketoplevelitem)
* [testAttribute](qtreewidget.md#testattribute)
* [update](qtreewidget.md#update)
* [updateGeometry](qtreewidget.md#updategeometry)
* [viewport](qtreewidget.md#viewport)
* [windowOpacity](qtreewidget.md#windowopacity)
* [windowState](qtreewidget.md#windowstate)
* [windowTitle](qtreewidget.md#windowtitle)

## Constructors

###  constructor

\+ **new QTreeWidget**(): *[QTreeWidget](qtreewidget.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QTreeWidget](qtreewidget.md)*

\+ **new QTreeWidget**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QTreeWidget](qtreewidget.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QTreeWidget](qtreewidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [QMenu](qmenu.md).[_rawInlineStyle](qmenu.md#_rawinlinestyle)*

___

###  actions

• **actions**: *Set‹[QAction](qaction.md)›*

*Inherited from [QMenu](qmenu.md).[actions](qmenu.md#actions)*

___

###  itemWidgets

• **itemWidgets**: *Map‹[QTreeWidgetItem](qtreewidgetitem.md), [QWidget](qwidget.md)›*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QTreeWidgetSignals](../interfaces/qtreewidgetsignals.md)›*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#optional-layout)*

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

###  topLevelItems

• **topLevelItems**: *Set‹[QTreeWidgetItem](qtreewidgetitem.md)›*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTreeWidgetSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTreeWidgetSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTreeWidgetSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  addTopLevelItem

▸ **addTopLevelItem**(`item`: [QTreeWidgetItem](qtreewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`item` | [QTreeWidgetItem](qtreewidgetitem.md) |

**Returns:** *void*

___

###  addTopLevelItems

▸ **addTopLevelItems**(`items`: [QTreeWidgetItem](qtreewidgetitem.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`items` | [QTreeWidgetItem](qtreewidgetitem.md)[] |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [QMenu](qmenu.md).[adjustSize](qmenu.md#adjustsize)*

**Returns:** *void*

___

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  currentItem

▸ **currentItem**(): *[QTreeWidgetItem](qtreewidgetitem.md) | void*

Returns the current item in the tree widget.

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md) | void*

___

###  findItems

▸ **findItems**(`text`: string, `flags`: [MatchFlag](../enums/matchflag.md), `column`: number): *[QTreeWidgetItem](qtreewidgetitem.md)[]*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |
`flags` | [MatchFlag](../enums/matchflag.md) |
`column` | number |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)[]*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  insertTopLevelItem

▸ **insertTopLevelItem**(`index`: number, `item`: [QTreeWidgetItem](qtreewidgetitem.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`item` | [QTreeWidgetItem](qtreewidgetitem.md) |

**Returns:** *void*

___

###  insertTopLevelItems

▸ **insertTopLevelItems**(`index`: number, `items`: [QTreeWidgetItem](qtreewidgetitem.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`items` | [QTreeWidgetItem](qtreewidgetitem.md)[] |

**Returns:** *void*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTreeWidgetSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTreeWidgetSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTreeWidgetSignals[SignalType] |

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

###  selectedItems

▸ **selectedItems**(): *[QTreeWidgetItem](qtreewidgetitem.md)[]*

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md)[]*

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

###  setColumnCount

▸ **setColumnCount**(`columnCount`: number): *void*

Sets the column count of this QTreeWidget.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`columnCount` | number | The number of columns.  |

**Returns:** *void*

___

###  setColumnWidth

▸ **setColumnWidth**(`column`: number, `width`: number): *void*

Sets the width of column of this QTreeWidget.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`column` | number | The column index. |
`width` | number | The size of the columns.  |

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

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

*Inherited from [QMenu](qmenu.md).[setCursor](qmenu.md#setcursor)*

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [CursorShape](../enums/cursorshape.md) &#124; [QCursor](qcursor.md) |

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

###  setHeaderHidden

▸ **setHeaderHidden**(`hide`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hide` | boolean |

**Returns:** *void*

___

###  setHeaderLabel

▸ **setHeaderLabel**(`label`: string): *void*

Sets the header label.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`label` | string | The header label.  |

**Returns:** *void*

___

###  setHeaderLabels

▸ **setHeaderLabels**(`labels`: string[]): *void*

Sets the header labels of the existing columns.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`labels` | string[] | The header labels for each column.  |

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

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [QMenu](qmenu.md).[setInlineStyle](qmenu.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setItemWidget

▸ **setItemWidget**(`item`: [QTreeWidgetItem](qtreewidgetitem.md), `column`: number, `widget`: [QWidget](qwidget.md)): *void*

Sets the given widget to be displayed in the cell specified by the given item and column.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`item` | [QTreeWidgetItem](qtreewidgetitem.md) | The targeted item. |
`column` | number | The column in which to show the edit widget. |
`widget` | [QWidget](qwidget.md) | The edit widget.  |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QTreeWidgetSignals](../interfaces/qtreewidgetsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QTreeWidgetSignals](../interfaces/qtreewidgetsignals.md)› |

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

###  setSortingEnabled

▸ **setSortingEnabled**(`enable`: boolean): *void*

Sets if columns can be sorted by clicking on its header

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`enable` | boolean | Sorting enabled or disabled  |

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

###  setVerticalScrollBarPolicy

▸ **setVerticalScrollBarPolicy**(`policy`: [ScrollBarPolicy](../enums/scrollbarpolicy.md)): *void*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[setVerticalScrollBarPolicy](qabstractscrollarea.md#setverticalscrollbarpolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [ScrollBarPolicy](../enums/scrollbarpolicy.md) |

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

###  takeTopLevelItem

▸ **takeTopLevelItem**(`index`: number): *[QTreeWidgetItem](qtreewidgetitem.md) | void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QTreeWidgetItem](qtreewidgetitem.md) | void*

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
