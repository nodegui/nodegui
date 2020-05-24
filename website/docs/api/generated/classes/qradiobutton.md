---
id: "qradiobutton"
title: "QRadioButton"
sidebar_label: "QRadioButton"
---

> Create and control radio button.

**This class is a JS wrapper around Qt's [QRadioButton class](https://doc.qt.io/qt-5/qradiobutton.html)**

A `QRadioButton` provides ability to add and manipulate native radio button widgets.

### Example

```javascript
const { QRadioButton } = require("@nodegui/nodegui");

const radioButton = new QRadioButton();
radioButton.setText("Hello");
```

## Hierarchy

  ↳ [QAbstractButton](qabstractbutton.md)‹[QRadioButtonSignals](../globals.md#qradiobuttonsignals)›

  ↳ **QRadioButton**

## Index

### Constructors

* [constructor](qradiobutton.md#constructor)

### Properties

* [_rawInlineStyle](qradiobutton.md#_rawinlinestyle)
* [actions](qradiobutton.md#actions)
* [layout](qradiobutton.md#optional-layout)
* [native](qradiobutton.md#native)
* [nodeChildren](qradiobutton.md#nodechildren)
* [nodeParent](qradiobutton.md#optional-nodeparent)
* [type](qradiobutton.md#type)

### Methods

* [activateWindow](qradiobutton.md#activatewindow)
* [addAction](qradiobutton.md#addaction)
* [addEventListener](qradiobutton.md#addeventlistener)
* [adjustSize](qradiobutton.md#adjustsize)
* [animateClick](qradiobutton.md#animateclick)
* [autoExclusive](qradiobutton.md#autoexclusive)
* [autoRepeat](qradiobutton.md#autorepeat)
* [autoRepeatDelay](qradiobutton.md#autorepeatdelay)
* [autoRepeatInterval](qradiobutton.md#autorepeatinterval)
* [click](qradiobutton.md#click)
* [close](qradiobutton.md#close)
* [font](qradiobutton.md#font)
* [geometry](qradiobutton.md#geometry)
* [getFlexNode](qradiobutton.md#getflexnode)
* [hasMouseTracking](qradiobutton.md#hasmousetracking)
* [hide](qradiobutton.md#hide)
* [icon](qradiobutton.md#icon)
* [iconSize](qradiobutton.md#iconsize)
* [inherits](qradiobutton.md#inherits)
* [isCheckable](qradiobutton.md#ischeckable)
* [isChecked](qradiobutton.md#ischecked)
* [isDown](qradiobutton.md#isdown)
* [isEnabled](qradiobutton.md#isenabled)
* [isVisible](qradiobutton.md#isvisible)
* [lower](qradiobutton.md#lower)
* [mapFromGlobal](qradiobutton.md#mapfromglobal)
* [mapFromParent](qradiobutton.md#mapfromparent)
* [mapToGlobal](qradiobutton.md#maptoglobal)
* [mapToParent](qradiobutton.md#maptoparent)
* [maximumSize](qradiobutton.md#maximumsize)
* [minimumSize](qradiobutton.md#minimumsize)
* [move](qradiobutton.md#move)
* [objectName](qradiobutton.md#objectname)
* [pos](qradiobutton.md#pos)
* [property](qradiobutton.md#property)
* [raise](qradiobutton.md#raise)
* [removeAction](qradiobutton.md#removeaction)
* [removeEventListener](qradiobutton.md#removeeventlistener)
* [repaint](qradiobutton.md#repaint)
* [repolish](qradiobutton.md#repolish)
* [resize](qradiobutton.md#resize)
* [setAttribute](qradiobutton.md#setattribute)
* [setAutoExclusive](qradiobutton.md#setautoexclusive)
* [setAutoRepeat](qradiobutton.md#setautorepeat)
* [setAutoRepeatDelay](qradiobutton.md#setautorepeatdelay)
* [setAutoRepeatInterval](qradiobutton.md#setautorepeatinterval)
* [setCheckable](qradiobutton.md#setcheckable)
* [setChecked](qradiobutton.md#setchecked)
* [setContextMenuPolicy](qradiobutton.md#setcontextmenupolicy)
* [setCursor](qradiobutton.md#setcursor)
* [setDown](qradiobutton.md#setdown)
* [setEnabled](qradiobutton.md#setenabled)
* [setFixedSize](qradiobutton.md#setfixedsize)
* [setFlexNodeSizeControlled](qradiobutton.md#setflexnodesizecontrolled)
* [setFont](qradiobutton.md#setfont)
* [setGeometry](qradiobutton.md#setgeometry)
* [setGraphicsEffect](qradiobutton.md#setgraphicseffect)
* [setIcon](qradiobutton.md#seticon)
* [setIconSize](qradiobutton.md#seticonsize)
* [setInlineStyle](qradiobutton.md#setinlinestyle)
* [setLayout](qradiobutton.md#setlayout)
* [setMaximumSize](qradiobutton.md#setmaximumsize)
* [setMinimumSize](qradiobutton.md#setminimumsize)
* [setMouseTracking](qradiobutton.md#setmousetracking)
* [setNodeParent](qradiobutton.md#setnodeparent)
* [setObjectName](qradiobutton.md#setobjectname)
* [setProperty](qradiobutton.md#setproperty)
* [setShortcut](qradiobutton.md#setshortcut)
* [setStyleSheet](qradiobutton.md#setstylesheet)
* [setText](qradiobutton.md#settext)
* [setWindowFlag](qradiobutton.md#setwindowflag)
* [setWindowIcon](qradiobutton.md#setwindowicon)
* [setWindowOpacity](qradiobutton.md#setwindowopacity)
* [setWindowState](qradiobutton.md#setwindowstate)
* [setWindowTitle](qradiobutton.md#setwindowtitle)
* [shortcut](qradiobutton.md#shortcut)
* [show](qradiobutton.md#show)
* [showFullScreen](qradiobutton.md#showfullscreen)
* [showMaximized](qradiobutton.md#showmaximized)
* [showMinimized](qradiobutton.md#showminimized)
* [showNormal](qradiobutton.md#shownormal)
* [size](qradiobutton.md#size)
* [styleSheet](qradiobutton.md#stylesheet)
* [testAttribute](qradiobutton.md#testattribute)
* [text](qradiobutton.md#text)
* [toggle](qradiobutton.md#toggle)
* [update](qradiobutton.md#update)
* [updateGeometry](qradiobutton.md#updategeometry)
* [windowOpacity](qradiobutton.md#windowopacity)
* [windowState](qradiobutton.md#windowstate)
* [windowTitle](qradiobutton.md#windowtitle)

## Constructors

###  constructor

\+ **new QRadioButton**(): *[QRadioButton](qradiobutton.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QRadioButton](qradiobutton.md)*

\+ **new QRadioButton**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QRadioButton](qradiobutton.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QRadioButton](qradiobutton.md)*

\+ **new QRadioButton**(`rawPointer`: [NativeRawPointer](../globals.md#nativerawpointer)‹any›, `disableNativeDeletion?`: undefined | false | true): *[QRadioButton](qradiobutton.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`rawPointer` | [NativeRawPointer](../globals.md#nativerawpointer)‹any› |
`disableNativeDeletion?` | undefined &#124; false &#124; true |

**Returns:** *[QRadioButton](qradiobutton.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹[QRadioButtonSignals](../globals.md#qradiobuttonsignals)›*

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

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QRadioButtonSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QRadioButtonSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QRadioButtonSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  animateClick

▸ **animateClick**(`msec`: number): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[animateClick](qabstractbutton.md#animateclick)*

**Parameters:**

Name | Type |
------ | ------ |
`msec` | number |

**Returns:** *void*

___

###  autoExclusive

▸ **autoExclusive**(): *boolean*

*Inherited from [QAbstractButton](qabstractbutton.md).[autoExclusive](qabstractbutton.md#autoexclusive)*

**Returns:** *boolean*

___

###  autoRepeat

▸ **autoRepeat**(): *boolean*

*Inherited from [QAbstractButton](qabstractbutton.md).[autoRepeat](qabstractbutton.md#autorepeat)*

**Returns:** *boolean*

___

###  autoRepeatDelay

▸ **autoRepeatDelay**(): *number*

*Inherited from [QAbstractButton](qabstractbutton.md).[autoRepeatDelay](qabstractbutton.md#autorepeatdelay)*

**Returns:** *number*

___

###  autoRepeatInterval

▸ **autoRepeatInterval**(): *number*

*Inherited from [QAbstractButton](qabstractbutton.md).[autoRepeatInterval](qabstractbutton.md#autorepeatinterval)*

**Returns:** *number*

___

###  click

▸ **click**(): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[click](qabstractbutton.md#click)*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

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

###  icon

▸ **icon**(): *[QIcon](qicon.md)*

*Inherited from [QAbstractButton](qabstractbutton.md).[icon](qabstractbutton.md#icon)*

**Returns:** *[QIcon](qicon.md)*

___

###  iconSize

▸ **iconSize**(): *[QSize](qsize.md)*

*Inherited from [QAbstractButton](qabstractbutton.md).[iconSize](qabstractbutton.md#iconsize)*

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

###  isCheckable

▸ **isCheckable**(): *boolean*

*Inherited from [QAbstractButton](qabstractbutton.md).[isCheckable](qabstractbutton.md#ischeckable)*

**Returns:** *boolean*

___

###  isChecked

▸ **isChecked**(): *boolean*

*Inherited from [QAbstractButton](qabstractbutton.md).[isChecked](qabstractbutton.md#ischecked)*

**Returns:** *boolean*

___

###  isDown

▸ **isDown**(): *boolean*

*Inherited from [QAbstractButton](qabstractbutton.md).[isDown](qabstractbutton.md#isdown)*

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

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QRadioButtonSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QRadioButtonSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QRadioButtonSignals[SignalType] |

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

###  setAutoExclusive

▸ **setAutoExclusive**(`enable`: boolean): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setAutoExclusive](qabstractbutton.md#setautoexclusive)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setAutoRepeat

▸ **setAutoRepeat**(`enable`: boolean): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setAutoRepeat](qabstractbutton.md#setautorepeat)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setAutoRepeatDelay

▸ **setAutoRepeatDelay**(`delay`: number): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setAutoRepeatDelay](qabstractbutton.md#setautorepeatdelay)*

**Parameters:**

Name | Type |
------ | ------ |
`delay` | number |

**Returns:** *void*

___

###  setAutoRepeatInterval

▸ **setAutoRepeatInterval**(`interval`: number): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setAutoRepeatInterval](qabstractbutton.md#setautorepeatinterval)*

**Parameters:**

Name | Type |
------ | ------ |
`interval` | number |

**Returns:** *void*

___

###  setCheckable

▸ **setCheckable**(`checkable`: boolean): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setCheckable](qabstractbutton.md#setcheckable)*

**Parameters:**

Name | Type |
------ | ------ |
`checkable` | boolean |

**Returns:** *void*

___

###  setChecked

▸ **setChecked**(`checked`: boolean): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setChecked](qabstractbutton.md#setchecked)*

**Parameters:**

Name | Type |
------ | ------ |
`checked` | boolean |

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

###  setDown

▸ **setDown**(`down`: boolean): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setDown](qabstractbutton.md#setdown)*

**Parameters:**

Name | Type |
------ | ------ |
`down` | boolean |

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

###  setIcon

▸ **setIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setIcon](qabstractbutton.md#seticon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setIconSize

▸ **setIconSize**(`iconSize`: [QSize](qsize.md)): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setIconSize](qabstractbutton.md#seticonsize)*

**Parameters:**

Name | Type |
------ | ------ |
`iconSize` | [QSize](qsize.md) |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QRadioButtonSignals](../globals.md#qradiobuttonsignals)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QRadioButtonSignals](../globals.md#qradiobuttonsignals)› |

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

###  setShortcut

▸ **setShortcut**(`key`: [QKeySequence](qkeysequence.md)): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setShortcut](qabstractbutton.md#setshortcut)*

**Parameters:**

Name | Type |
------ | ------ |
`key` | [QKeySequence](qkeysequence.md) |

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

###  setText

▸ **setText**(`text`: string): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setText](qabstractbutton.md#settext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  shortcut

▸ **shortcut**(): *[QKeySequence](qkeysequence.md)*

*Inherited from [QAbstractButton](qabstractbutton.md).[shortcut](qabstractbutton.md#shortcut)*

**Returns:** *[QKeySequence](qkeysequence.md)*

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

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

*Inherited from [QMenu](qmenu.md).[testAttribute](qmenu.md#testattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |

**Returns:** *boolean*

___

###  text

▸ **text**(): *string*

*Inherited from [QAbstractButton](qabstractbutton.md).[text](qabstractbutton.md#text)*

**Returns:** *string*

___

###  toggle

▸ **toggle**(): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[toggle](qabstractbutton.md#toggle)*

**Returns:** *void*

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
