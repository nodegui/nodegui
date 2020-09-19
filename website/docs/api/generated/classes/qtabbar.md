---
id: "qtabbar"
title: "QTabBar"
sidebar_label: "QTabBar"
---

> Create and control tabbar.

**This class is a JS wrapper around Qt's [QTabBar class](https://doc.qt.io/qt-5/qtabbar.html)**

The QTabBar class provides a tab bar, e.g. for use in tabbed dialogs.

### Example

```javascript
const { QTabBar } = require("@nodegui/nodegui");

const tabBar = new QTabBar();

```

## Hierarchy

  ↳ [NodeWidget](nodewidget.md)‹[QTabBarSignals](../interfaces/qtabbarsignals.md)›

  ↳ **QTabBar**

## Index

### Constructors

* [constructor](qtabbar.md#constructor)

### Properties

* [_rawInlineStyle](qtabbar.md#_rawinlinestyle)
* [actions](qtabbar.md#actions)
* [layout](qtabbar.md#optional-layout)
* [native](qtabbar.md#native)
* [nodeChildren](qtabbar.md#nodechildren)
* [nodeParent](qtabbar.md#optional-nodeparent)
* [type](qtabbar.md#type)

### Methods

* [acceptDrops](qtabbar.md#acceptdrops)
* [accessibleTabName](qtabbar.md#accessibletabname)
* [activateWindow](qtabbar.md#activatewindow)
* [addAction](qtabbar.md#addaction)
* [addEventListener](qtabbar.md#addeventlistener)
* [addTab](qtabbar.md#addtab)
* [adjustSize](qtabbar.md#adjustsize)
* [autoHide](qtabbar.md#autohide)
* [changeCurrentOnDrag](qtabbar.md#changecurrentondrag)
* [close](qtabbar.md#close)
* [count](qtabbar.md#count)
* [currentIndex](qtabbar.md#currentindex)
* [documentMode](qtabbar.md#documentmode)
* [drawBase](qtabbar.md#drawbase)
* [elideMode](qtabbar.md#elidemode)
* [expanding](qtabbar.md#expanding)
* [font](qtabbar.md#font)
* [geometry](qtabbar.md#geometry)
* [getFlexNode](qtabbar.md#getflexnode)
* [hasMouseTracking](qtabbar.md#hasmousetracking)
* [hide](qtabbar.md#hide)
* [iconSize](qtabbar.md#iconsize)
* [inherits](qtabbar.md#inherits)
* [insertTab](qtabbar.md#inserttab)
* [isEnabled](qtabbar.md#isenabled)
* [isMovable](qtabbar.md#ismovable)
* [isTabEnabled](qtabbar.md#istabenabled)
* [isVisible](qtabbar.md#isvisible)
* [lower](qtabbar.md#lower)
* [mapFromGlobal](qtabbar.md#mapfromglobal)
* [mapFromParent](qtabbar.md#mapfromparent)
* [mapToGlobal](qtabbar.md#maptoglobal)
* [mapToParent](qtabbar.md#maptoparent)
* [maximumSize](qtabbar.md#maximumsize)
* [minimumSize](qtabbar.md#minimumsize)
* [move](qtabbar.md#move)
* [moveTab](qtabbar.md#movetab)
* [objectName](qtabbar.md#objectname)
* [pos](qtabbar.md#pos)
* [property](qtabbar.md#property)
* [raise](qtabbar.md#raise)
* [removeAction](qtabbar.md#removeaction)
* [removeEventListener](qtabbar.md#removeeventlistener)
* [removeTab](qtabbar.md#removetab)
* [repaint](qtabbar.md#repaint)
* [repolish](qtabbar.md#repolish)
* [resize](qtabbar.md#resize)
* [selectionBehaviorOnRemove](qtabbar.md#selectionbehavioronremove)
* [setAcceptDrops](qtabbar.md#setacceptdrops)
* [setAccessibleTabName](qtabbar.md#setaccessibletabname)
* [setAttribute](qtabbar.md#setattribute)
* [setAutoHide](qtabbar.md#setautohide)
* [setChangeCurrentOnDrag](qtabbar.md#setchangecurrentondrag)
* [setContextMenuPolicy](qtabbar.md#setcontextmenupolicy)
* [setCurrentIndex](qtabbar.md#setcurrentindex)
* [setCursor](qtabbar.md#setcursor)
* [setDocumentMode](qtabbar.md#setdocumentmode)
* [setDrawBase](qtabbar.md#setdrawbase)
* [setElideMode](qtabbar.md#setelidemode)
* [setEnabled](qtabbar.md#setenabled)
* [setExpanding](qtabbar.md#setexpanding)
* [setFixedSize](qtabbar.md#setfixedsize)
* [setFlexNodeSizeControlled](qtabbar.md#setflexnodesizecontrolled)
* [setFocus](qtabbar.md#setfocus)
* [setFont](qtabbar.md#setfont)
* [setGeometry](qtabbar.md#setgeometry)
* [setGraphicsEffect](qtabbar.md#setgraphicseffect)
* [setIconSize](qtabbar.md#seticonsize)
* [setInlineStyle](qtabbar.md#setinlinestyle)
* [setLayout](qtabbar.md#setlayout)
* [setMaximumSize](qtabbar.md#setmaximumsize)
* [setMinimumSize](qtabbar.md#setminimumsize)
* [setMouseTracking](qtabbar.md#setmousetracking)
* [setMovable](qtabbar.md#setmovable)
* [setNodeParent](qtabbar.md#setnodeparent)
* [setObjectName](qtabbar.md#setobjectname)
* [setProperty](qtabbar.md#setproperty)
* [setSelectionBehaviorOnRemove](qtabbar.md#setselectionbehavioronremove)
* [setShape](qtabbar.md#setshape)
* [setStyleSheet](qtabbar.md#setstylesheet)
* [setTabButton](qtabbar.md#settabbutton)
* [setTabData](qtabbar.md#settabdata)
* [setTabEnabled](qtabbar.md#settabenabled)
* [setTabIcon](qtabbar.md#settabicon)
* [setTabText](qtabbar.md#settabtext)
* [setTabTextColor](qtabbar.md#settabtextcolor)
* [setTabToolTip](qtabbar.md#settabtooltip)
* [setTabWhatsThis](qtabbar.md#settabwhatsthis)
* [setTabsClosable](qtabbar.md#settabsclosable)
* [setUsesScrollButtons](qtabbar.md#setusesscrollbuttons)
* [setWindowFlag](qtabbar.md#setwindowflag)
* [setWindowIcon](qtabbar.md#setwindowicon)
* [setWindowOpacity](qtabbar.md#setwindowopacity)
* [setWindowState](qtabbar.md#setwindowstate)
* [setWindowTitle](qtabbar.md#setwindowtitle)
* [shape](qtabbar.md#shape)
* [show](qtabbar.md#show)
* [showFullScreen](qtabbar.md#showfullscreen)
* [showMaximized](qtabbar.md#showmaximized)
* [showMinimized](qtabbar.md#showminimized)
* [showNormal](qtabbar.md#shownormal)
* [size](qtabbar.md#size)
* [styleSheet](qtabbar.md#stylesheet)
* [tabAt](qtabbar.md#tabat)
* [tabData](qtabbar.md#tabdata)
* [tabIcon](qtabbar.md#tabicon)
* [tabRect](qtabbar.md#tabrect)
* [tabText](qtabbar.md#tabtext)
* [tabTextColor](qtabbar.md#tabtextcolor)
* [tabToolTip](qtabbar.md#tabtooltip)
* [tabWhatsThis](qtabbar.md#tabwhatsthis)
* [tabsClosable](qtabbar.md#tabsclosable)
* [testAttribute](qtabbar.md#testattribute)
* [update](qtabbar.md#update)
* [updateGeometry](qtabbar.md#updategeometry)
* [usesScrollButtons](qtabbar.md#usesscrollbuttons)
* [windowOpacity](qtabbar.md#windowopacity)
* [windowState](qtabbar.md#windowstate)
* [windowTitle](qtabbar.md#windowtitle)

## Constructors

###  constructor

\+ **new QTabBar**(): *[QTabBar](qtabbar.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QTabBar](qtabbar.md)*

\+ **new QTabBar**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QTabBar](qtabbar.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QTabBar](qtabbar.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹[QTabBarSignals](../interfaces/qtabbarsignals.md)›*

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

###  type

• **type**: *string* = "widget"

*Inherited from [QMenu](qmenu.md).[type](qmenu.md#type)*

## Methods

###  acceptDrops

▸ **acceptDrops**(): *boolean*

*Inherited from [QMenu](qmenu.md).[acceptDrops](qmenu.md#acceptdrops)*

**Returns:** *boolean*

___

###  accessibleTabName

▸ **accessibleTabName**(`index`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTabBarSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTabBarSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTabBarSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  addTab

▸ **addTab**(`icon`: [QIcon](qicon.md) | undefined, `text`: string): *number*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) &#124; undefined |
`text` | string |

**Returns:** *number*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [QMenu](qmenu.md).[adjustSize](qmenu.md#adjustsize)*

**Returns:** *void*

___

###  autoHide

▸ **autoHide**(): *boolean*

**Returns:** *boolean*

___

###  changeCurrentOnDrag

▸ **changeCurrentOnDrag**(): *boolean*

**Returns:** *boolean*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  count

▸ **count**(): *number*

**Returns:** *number*

___

###  currentIndex

▸ **currentIndex**(): *number*

**Returns:** *number*

___

###  documentMode

▸ **documentMode**(): *boolean*

**Returns:** *boolean*

___

###  drawBase

▸ **drawBase**(): *boolean*

**Returns:** *boolean*

___

###  elideMode

▸ **elideMode**(): *[TextElideMode](../enums/textelidemode.md)*

**Returns:** *[TextElideMode](../enums/textelidemode.md)*

___

###  expanding

▸ **expanding**(): *boolean*

**Returns:** *boolean*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [QMenu](qmenu.md).[font](qmenu.md#font)*

**Returns:** *[QFont](qfont.md)*

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

###  iconSize

▸ **iconSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

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

###  insertTab

▸ **insertTab**(`index`: number, `icon`: [QIcon](qicon.md) | undefined, `text`: string): *number*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`icon` | [QIcon](qicon.md) &#124; undefined |
`text` | string |

**Returns:** *number*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isMovable

▸ **isMovable**(): *boolean*

**Returns:** *boolean*

___

###  isTabEnabled

▸ **isTabEnabled**(`index`: number): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isVisible](qmenu.md#isvisible)*

**Returns:** *boolean*

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

###  moveTab

▸ **moveTab**(`from`: number, `to`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`from` | number |
`to` | number |

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTabBarSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTabBarSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTabBarSignals[SignalType] |

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

###  removeTab

▸ **removeTab**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

###  selectionBehaviorOnRemove

▸ **selectionBehaviorOnRemove**(): *SelectionBehavior*

**Returns:** *SelectionBehavior*

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

###  setAccessibleTabName

▸ **setAccessibleTabName**(`index`: number, `name`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`name` | string |

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

###  setAutoHide

▸ **setAutoHide**(`hide`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hide` | boolean |

**Returns:** *void*

___

###  setChangeCurrentOnDrag

▸ **setChangeCurrentOnDrag**(`change`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`change` | boolean |

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

▸ **setCurrentIndex**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

###  setDocumentMode

▸ **setDocumentMode**(`set`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`set` | boolean |

**Returns:** *void*

___

###  setDrawBase

▸ **setDrawBase**(`drawTheBase`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`drawTheBase` | boolean |

**Returns:** *void*

___

###  setElideMode

▸ **setElideMode**(`mode`: [TextElideMode](../enums/textelidemode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [TextElideMode](../enums/textelidemode.md) |

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

###  setExpanding

▸ **setExpanding**(`enabled`: boolean): *void*

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

###  setIconSize

▸ **setIconSize**(`size`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QTabBarSignals](../interfaces/qtabbarsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QTabBarSignals](../interfaces/qtabbarsignals.md)› |

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

###  setMovable

▸ **setMovable**(`movable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`movable` | boolean |

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

###  setSelectionBehaviorOnRemove

▸ **setSelectionBehaviorOnRemove**(`behavior`: SelectionBehavior): *void*

**Parameters:**

Name | Type |
------ | ------ |
`behavior` | SelectionBehavior |

**Returns:** *void*

___

###  setShape

▸ **setShape**(`shape`: [TabBarShape](../enums/tabbarshape.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`shape` | [TabBarShape](../enums/tabbarshape.md) |

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

###  setTabButton

▸ **setTabButton**(`index`: number, `position`: [ButtonPosition](../enums/buttonposition.md), `widget`: [NodeWidget](nodewidget.md)‹any›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`position` | [ButtonPosition](../enums/buttonposition.md) |
`widget` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *void*

___

###  setTabData

▸ **setTabData**(`index`: number, `data`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`data` | [QVariant](qvariant.md) |

**Returns:** *void*

___

###  setTabEnabled

▸ **setTabEnabled**(`index`: number, `enabled`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`enabled` | boolean |

**Returns:** *void*

___

###  setTabIcon

▸ **setTabIcon**(`index`: number, `icon`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setTabText

▸ **setTabText**(`index`: number, `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`text` | string |

**Returns:** *void*

___

###  setTabTextColor

▸ **setTabTextColor**(`index`: number, `color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTabToolTip

▸ **setTabToolTip**(`index`: number, `tip`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`tip` | string |

**Returns:** *void*

___

###  setTabWhatsThis

▸ **setTabWhatsThis**(`index`: number, `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`text` | string |

**Returns:** *void*

___

###  setTabsClosable

▸ **setTabsClosable**(`closeable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`closeable` | boolean |

**Returns:** *void*

___

###  setUsesScrollButtons

▸ **setUsesScrollButtons**(`useButtons`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`useButtons` | boolean |

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

###  shape

▸ **shape**(): *[TabBarShape](../enums/tabbarshape.md)*

**Returns:** *[TabBarShape](../enums/tabbarshape.md)*

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

###  tabAt

▸ **tabAt**(`position`: [QPoint](qpoint.md)): *number*

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPoint](qpoint.md) |

**Returns:** *number*

___

###  tabData

▸ **tabData**(`index`: number): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QVariant](qvariant.md)*

___

###  tabIcon

▸ **tabIcon**(`index`: number): *[QIcon](qicon.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QIcon](qicon.md)*

___

###  tabRect

▸ **tabRect**(`index`: number): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QRect](qrect.md)*

___

###  tabText

▸ **tabText**(`index`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *string*

___

###  tabTextColor

▸ **tabTextColor**(`index`: number): *[QColor](qcolor.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QColor](qcolor.md)*

___

###  tabToolTip

▸ **tabToolTip**(`index`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *string*

___

###  tabWhatsThis

▸ **tabWhatsThis**(`index`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *string*

___

###  tabsClosable

▸ **tabsClosable**(): *boolean*

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

###  usesScrollButtons

▸ **usesScrollButtons**(): *boolean*

**Returns:** *boolean*

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
