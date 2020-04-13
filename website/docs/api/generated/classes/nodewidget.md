---
id: "nodewidget"
title: "NodeWidget"
sidebar_label: "NodeWidget"
---

> Abstract class to add functionalities common to all Widgets.

*This class implements all methods, properties of Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html) so that it can be inherited by all widgets**

`NodeWidget` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all widget's easily. Additionally it helps in type checking process. If you wish to create a `div` like widget use [QWidget](api/QWidget.md) instead.

*NodeWidget is the base class for all widgets.**

### Example

```javascript
const {
NodeWidget,
QPushButton,
QWidget,
QRadioButton
} = require("@nodegui/nodegui");

// showWidget can accept any widget since it expects NodeWidget
const showWidget = (widget: NodeWidget) => {
widget.show();
};

showWidget(new QPushButton());
showWidget(new QWidget());
showWidget(new QRadioButton());
```
All Widgets should extend from NodeWidget
Implement all native QWidget methods here so that all widgets get access to those aswell

## Type parameters

▪ **Signals**: *[QWidgetSignals](../interfaces/qwidgetsignals.md)*

## Hierarchy

  ↳ [YogaWidget](yogawidget.md)‹Signals›

  ↳ **NodeWidget**

  ↳ [QMenu](qmenu.md)

  ↳ [QWidget](qwidget.md)

  ↳ [NodeFrame](nodeframe.md)

  ↳ [QAbstractSlider](qabstractslider.md)

  ↳ [QAbstractButton](qabstractbutton.md)

  ↳ [QAbstractSpinBox](qabstractspinbox.md)

  ↳ [QCalendarWidget](qcalendarwidget.md)

  ↳ [NodeDialog](nodedialog.md)

  ↳ [QLCDNumber](qlcdnumber.md)

  ↳ [QLineEdit](qlineedit.md)

  ↳ [QMenuBar](qmenubar.md)

  ↳ [QStatusBar](qstatusbar.md)

  ↳ [QMainWindow](qmainwindow.md)

  ↳ [QProgressBar](qprogressbar.md)

  ↳ [QComboBox](qcombobox.md)

  ↳ [QTabBar](qtabbar.md)

  ↳ [QTabWidget](qtabwidget.md)

  ↳ [QGroupBox](qgroupbox.md)

## Index

### Constructors

* [constructor](nodewidget.md#constructor)

### Properties

* [_rawInlineStyle](nodewidget.md#_rawinlinestyle)
* [actions](nodewidget.md#actions)
* [layout](nodewidget.md#optional-layout)
* [native](nodewidget.md#abstract-native)
* [nodeChildren](nodewidget.md#nodechildren)
* [nodeParent](nodewidget.md#optional-nodeparent)
* [type](nodewidget.md#type)

### Methods

* [activateWindow](nodewidget.md#activatewindow)
* [addAction](nodewidget.md#addaction)
* [addEventListener](nodewidget.md#addeventlistener)
* [adjustSize](nodewidget.md#adjustsize)
* [close](nodewidget.md#close)
* [font](nodewidget.md#font)
* [geometry](nodewidget.md#geometry)
* [getFlexNode](nodewidget.md#getflexnode)
* [hasMouseTracking](nodewidget.md#hasmousetracking)
* [hide](nodewidget.md#hide)
* [inherits](nodewidget.md#inherits)
* [isEnabled](nodewidget.md#isenabled)
* [isVisible](nodewidget.md#isvisible)
* [lower](nodewidget.md#lower)
* [mapFromGlobal](nodewidget.md#mapfromglobal)
* [mapFromParent](nodewidget.md#mapfromparent)
* [mapToGlobal](nodewidget.md#maptoglobal)
* [mapToParent](nodewidget.md#maptoparent)
* [move](nodewidget.md#move)
* [objectName](nodewidget.md#objectname)
* [pos](nodewidget.md#pos)
* [property](nodewidget.md#property)
* [raise](nodewidget.md#raise)
* [removeEventListener](nodewidget.md#removeeventlistener)
* [repaint](nodewidget.md#repaint)
* [repolish](nodewidget.md#repolish)
* [resize](nodewidget.md#resize)
* [setAttribute](nodewidget.md#setattribute)
* [setContextMenuPolicy](nodewidget.md#setcontextmenupolicy)
* [setCursor](nodewidget.md#setcursor)
* [setEnabled](nodewidget.md#setenabled)
* [setFixedSize](nodewidget.md#setfixedsize)
* [setFlexNodeSizeControlled](nodewidget.md#setflexnodesizecontrolled)
* [setFont](nodewidget.md#setfont)
* [setGeometry](nodewidget.md#setgeometry)
* [setInlineStyle](nodewidget.md#setinlinestyle)
* [setLayout](nodewidget.md#setlayout)
* [setMaximumSize](nodewidget.md#setmaximumsize)
* [setMinimumSize](nodewidget.md#setminimumsize)
* [setMouseTracking](nodewidget.md#setmousetracking)
* [setNodeParent](nodewidget.md#setnodeparent)
* [setObjectName](nodewidget.md#setobjectname)
* [setProperty](nodewidget.md#setproperty)
* [setStyleSheet](nodewidget.md#setstylesheet)
* [setWindowFlag](nodewidget.md#setwindowflag)
* [setWindowIcon](nodewidget.md#setwindowicon)
* [setWindowOpacity](nodewidget.md#setwindowopacity)
* [setWindowState](nodewidget.md#setwindowstate)
* [setWindowTitle](nodewidget.md#setwindowtitle)
* [show](nodewidget.md#show)
* [showFullScreen](nodewidget.md#showfullscreen)
* [showMaximized](nodewidget.md#showmaximized)
* [showMinimized](nodewidget.md#showminimized)
* [showNormal](nodewidget.md#shownormal)
* [size](nodewidget.md#size)
* [styleSheet](nodewidget.md#stylesheet)
* [testAttribute](nodewidget.md#testattribute)
* [update](nodewidget.md#update)
* [updateGeometry](nodewidget.md#updategeometry)
* [windowOpacity](nodewidget.md#windowopacity)
* [windowState](nodewidget.md#windowstate)
* [windowTitle](nodewidget.md#windowtitle)

## Constructors

###  constructor

\+ **new NodeWidget**(`native`: [NativeElement](../globals.md#nativeelement)): *[NodeWidget](nodewidget.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[NodeWidget](nodewidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

___

###  actions

• **actions**: *Set‹[QAction](qaction.md)›*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹Signals›*

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

## Methods

###  activateWindow

▸ **activateWindow**(): *void*

**Returns:** *void*

___

###  addAction

▸ **addAction**(`action`: [QAction](qaction.md) | string): *[QAction](qaction.md)*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [QAction](qaction.md) &#124; string |

**Returns:** *[QAction](qaction.md)*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

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

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

**Returns:** *boolean*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

___

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  getFlexNode

▸ **getFlexNode**(): *[FlexNode](../globals.md#flexnode)*

*Inherited from [YogaWidget](yogawidget.md).[getFlexNode](yogawidget.md#getflexnode)*

**Returns:** *[FlexNode](../globals.md#flexnode)*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

**Returns:** *boolean*

___

###  hide

▸ **hide**(): *void*

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

###  isEnabled

▸ **isEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

**Returns:** *boolean*

___

###  lower

▸ **lower**(): *void*

**Returns:** *void*

___

###  mapFromGlobal

▸ **mapFromGlobal**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapFromParent

▸ **mapFromParent**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapToGlobal

▸ **mapToGlobal**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  mapToParent

▸ **mapToParent**(`pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

___

###  move

▸ **move**(`x`: number, `y`: number): *void*

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

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

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

**Returns:** *void*

___

###  repolish

▸ **repolish**(): *void*

**Returns:** *void*

___

###  resize

▸ **resize**(`width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  setAttribute

▸ **setAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md), `switchOn`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setContextMenuPolicy

▸ **setContextMenuPolicy**(`contextMenuPolicy`: [ContextMenuPolicy](../enums/contextmenupolicy.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`contextMenuPolicy` | [ContextMenuPolicy](../enums/contextmenupolicy.md) |

**Returns:** *void*

___

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [CursorShape](../enums/cursorshape.md) &#124; [QCursor](qcursor.md) |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setFixedSize

▸ **setFixedSize**(`width`: number, `height`: number): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setGeometry

▸ **setGeometry**(`x`: number, `y`: number, `w`: number, `h`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |

**Returns:** *void*

___

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹Signals›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹Signals› |

**Returns:** *void*

___

###  setMaximumSize

▸ **setMaximumSize**(`maxw`: number, `maxh`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |
`maxh` | number |

**Returns:** *void*

___

###  setMinimumSize

▸ **setMinimumSize**(`minw`: number, `minh`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |
`minh` | number |

**Returns:** *void*

___

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

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

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setWindowFlag

▸ **setWindowFlag**(`windowType`: [WindowType](../enums/windowtype.md), `switchOn`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`windowType` | [WindowType](../enums/windowtype.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setWindowOpacity

▸ **setWindowOpacity**(`opacity`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

**Returns:** *void*

___

###  setWindowState

▸ **setWindowState**(`state`: [WindowState](../enums/windowstate.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [WindowState](../enums/windowstate.md) |

**Returns:** *void*

___

###  setWindowTitle

▸ **setWindowTitle**(`title`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

**Returns:** *void*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

**Returns:** *void*

___

###  showMaximized

▸ **showMaximized**(): *void*

**Returns:** *void*

___

###  showMinimized

▸ **showMinimized**(): *void*

**Returns:** *void*

___

###  showNormal

▸ **showNormal**(): *void*

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  styleSheet

▸ **styleSheet**(): *string*

**Returns:** *string*

___

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |

**Returns:** *boolean*

___

###  update

▸ **update**(): *void*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

**Returns:** *void*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

**Returns:** *number*

___

###  windowState

▸ **windowState**(): *number*

**Returns:** *number*

___

###  windowTitle

▸ **windowTitle**(): *string*

**Returns:** *string*
