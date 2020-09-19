---
id: "qslider"
title: "QSlider"
sidebar_label: "QSlider"
---

> Create and control slider widgets.

**This class is a JS wrapper around Qt's [QSlider class](https://doc.qt.io/qt-5/qslider.html)**

A `QSlider` provides ability to add and manipulate native slider widgets.

### Example

```javascript
const { QSlider } = require("@nodegui/nodegui");

const slider = new QSlider();
```

## Hierarchy

  ↳ [QAbstractSlider](qabstractslider.md)‹[QSliderSignals](../globals.md#qslidersignals)›

  ↳ **QSlider**

## Index

### Constructors

* [constructor](qslider.md#constructor)

### Properties

* [_rawInlineStyle](qslider.md#_rawinlinestyle)
* [actions](qslider.md#actions)
* [layout](qslider.md#optional-layout)
* [native](qslider.md#native)
* [nodeChildren](qslider.md#nodechildren)
* [nodeParent](qslider.md#optional-nodeparent)
* [type](qslider.md#type)

### Methods

* [acceptDrops](qslider.md#acceptdrops)
* [activateWindow](qslider.md#activatewindow)
* [addAction](qslider.md#addaction)
* [addEventListener](qslider.md#addeventlistener)
* [adjustSize](qslider.md#adjustsize)
* [close](qslider.md#close)
* [font](qslider.md#font)
* [geometry](qslider.md#geometry)
* [getFlexNode](qslider.md#getflexnode)
* [hasMouseTracking](qslider.md#hasmousetracking)
* [hasTracking](qslider.md#hastracking)
* [hide](qslider.md#hide)
* [inherits](qslider.md#inherits)
* [invertedAppearance](qslider.md#invertedappearance)
* [invertedControls](qslider.md#invertedcontrols)
* [isEnabled](qslider.md#isenabled)
* [isSliderDown](qslider.md#issliderdown)
* [isVisible](qslider.md#isvisible)
* [lower](qslider.md#lower)
* [mapFromGlobal](qslider.md#mapfromglobal)
* [mapFromParent](qslider.md#mapfromparent)
* [mapToGlobal](qslider.md#maptoglobal)
* [mapToParent](qslider.md#maptoparent)
* [maximum](qslider.md#maximum)
* [maximumSize](qslider.md#maximumsize)
* [minimum](qslider.md#minimum)
* [minimumSize](qslider.md#minimumsize)
* [move](qslider.md#move)
* [objectName](qslider.md#objectname)
* [orientation](qslider.md#orientation)
* [pageStep](qslider.md#pagestep)
* [pos](qslider.md#pos)
* [property](qslider.md#property)
* [raise](qslider.md#raise)
* [removeAction](qslider.md#removeaction)
* [removeEventListener](qslider.md#removeeventlistener)
* [repaint](qslider.md#repaint)
* [repolish](qslider.md#repolish)
* [resize](qslider.md#resize)
* [setAcceptDrops](qslider.md#setacceptdrops)
* [setAttribute](qslider.md#setattribute)
* [setContextMenuPolicy](qslider.md#setcontextmenupolicy)
* [setCursor](qslider.md#setcursor)
* [setEnabled](qslider.md#setenabled)
* [setFixedSize](qslider.md#setfixedsize)
* [setFlexNodeSizeControlled](qslider.md#setflexnodesizecontrolled)
* [setFocus](qslider.md#setfocus)
* [setFont](qslider.md#setfont)
* [setGeometry](qslider.md#setgeometry)
* [setGraphicsEffect](qslider.md#setgraphicseffect)
* [setInlineStyle](qslider.md#setinlinestyle)
* [setInvertedAppearance](qslider.md#setinvertedappearance)
* [setInvertedControls](qslider.md#setinvertedcontrols)
* [setLayout](qslider.md#setlayout)
* [setMaximum](qslider.md#setmaximum)
* [setMaximumSize](qslider.md#setmaximumsize)
* [setMinimum](qslider.md#setminimum)
* [setMinimumSize](qslider.md#setminimumsize)
* [setMouseTracking](qslider.md#setmousetracking)
* [setNodeParent](qslider.md#setnodeparent)
* [setObjectName](qslider.md#setobjectname)
* [setOrientation](qslider.md#setorientation)
* [setPageStep](qslider.md#setpagestep)
* [setProperty](qslider.md#setproperty)
* [setRange](qslider.md#setrange)
* [setSingleStep](qslider.md#setsinglestep)
* [setSliderDown](qslider.md#setsliderdown)
* [setSliderPosition](qslider.md#setsliderposition)
* [setStyleSheet](qslider.md#setstylesheet)
* [setTickInterval](qslider.md#settickinterval)
* [setTickPosition](qslider.md#settickposition)
* [setTracking](qslider.md#settracking)
* [setValue](qslider.md#setvalue)
* [setWindowFlag](qslider.md#setwindowflag)
* [setWindowIcon](qslider.md#setwindowicon)
* [setWindowOpacity](qslider.md#setwindowopacity)
* [setWindowState](qslider.md#setwindowstate)
* [setWindowTitle](qslider.md#setwindowtitle)
* [show](qslider.md#show)
* [showFullScreen](qslider.md#showfullscreen)
* [showMaximized](qslider.md#showmaximized)
* [showMinimized](qslider.md#showminimized)
* [showNormal](qslider.md#shownormal)
* [singleStep](qslider.md#singlestep)
* [size](qslider.md#size)
* [sliderPosition](qslider.md#sliderposition)
* [styleSheet](qslider.md#stylesheet)
* [testAttribute](qslider.md#testattribute)
* [tickInterval](qslider.md#tickinterval)
* [tickPosition](qslider.md#tickposition)
* [triggerAction](qslider.md#triggeraction)
* [update](qslider.md#update)
* [updateGeometry](qslider.md#updategeometry)
* [value](qslider.md#value)
* [windowOpacity](qslider.md#windowopacity)
* [windowState](qslider.md#windowstate)
* [windowTitle](qslider.md#windowtitle)

## Constructors

###  constructor

\+ **new QSlider**(): *[QSlider](qslider.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QSlider](qslider.md)*

\+ **new QSlider**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QSlider](qslider.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QSlider](qslider.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹[QSliderSignals](../globals.md#qslidersignals)›*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QSliderSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QSliderSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QSliderSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  hasTracking

▸ **hasTracking**(): *boolean*

*Inherited from [QAbstractSlider](qabstractslider.md).[hasTracking](qabstractslider.md#hastracking)*

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

###  invertedAppearance

▸ **invertedAppearance**(): *boolean*

*Inherited from [QAbstractSlider](qabstractslider.md).[invertedAppearance](qabstractslider.md#invertedappearance)*

**Returns:** *boolean*

___

###  invertedControls

▸ **invertedControls**(): *boolean*

*Inherited from [QAbstractSlider](qabstractslider.md).[invertedControls](qabstractslider.md#invertedcontrols)*

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isSliderDown

▸ **isSliderDown**(): *boolean*

*Inherited from [QAbstractSlider](qabstractslider.md).[isSliderDown](qabstractslider.md#issliderdown)*

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

###  maximum

▸ **maximum**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[maximum](qabstractslider.md#maximum)*

**Returns:** *number*

___

###  maximumSize

▸ **maximumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[maximumSize](qmenu.md#maximumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  minimum

▸ **minimum**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[minimum](qabstractslider.md#minimum)*

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

###  orientation

▸ **orientation**(): *[Orientation](../enums/orientation.md)*

*Inherited from [QAbstractSlider](qabstractslider.md).[orientation](qabstractslider.md#orientation)*

**Returns:** *[Orientation](../enums/orientation.md)*

___

###  pageStep

▸ **pageStep**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[pageStep](qabstractslider.md#pagestep)*

**Returns:** *number*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QSliderSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QSliderSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QSliderSignals[SignalType] |

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

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [QMenu](qmenu.md).[setInlineStyle](qmenu.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setInvertedAppearance

▸ **setInvertedAppearance**(`inverted`: boolean): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setInvertedAppearance](qabstractslider.md#setinvertedappearance)*

**Parameters:**

Name | Type |
------ | ------ |
`inverted` | boolean |

**Returns:** *void*

___

###  setInvertedControls

▸ **setInvertedControls**(`inverted`: boolean): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setInvertedControls](qabstractslider.md#setinvertedcontrols)*

**Parameters:**

Name | Type |
------ | ------ |
`inverted` | boolean |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QSliderSignals](../globals.md#qslidersignals)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QSliderSignals](../globals.md#qslidersignals)› |

**Returns:** *void*

___

###  setMaximum

▸ **setMaximum**(`maximum`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setMaximum](qabstractslider.md#setmaximum)*

**Parameters:**

Name | Type |
------ | ------ |
`maximum` | number |

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

###  setMinimum

▸ **setMinimum**(`minimum`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setMinimum](qabstractslider.md#setminimum)*

**Parameters:**

Name | Type |
------ | ------ |
`minimum` | number |

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

###  setOrientation

▸ **setOrientation**(`orientation`: [Orientation](../enums/orientation.md)): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setOrientation](qabstractslider.md#setorientation)*

**Parameters:**

Name | Type |
------ | ------ |
`orientation` | [Orientation](../enums/orientation.md) |

**Returns:** *void*

___

###  setPageStep

▸ **setPageStep**(`step`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setPageStep](qabstractslider.md#setpagestep)*

**Parameters:**

Name | Type |
------ | ------ |
`step` | number |

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

###  setRange

▸ **setRange**(`min`: number, `max`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setRange](qabstractslider.md#setrange)*

**Parameters:**

Name | Type |
------ | ------ |
`min` | number |
`max` | number |

**Returns:** *void*

___

###  setSingleStep

▸ **setSingleStep**(`step`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setSingleStep](qabstractslider.md#setsinglestep)*

**Parameters:**

Name | Type |
------ | ------ |
`step` | number |

**Returns:** *void*

___

###  setSliderDown

▸ **setSliderDown**(`down`: boolean): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setSliderDown](qabstractslider.md#setsliderdown)*

**Parameters:**

Name | Type |
------ | ------ |
`down` | boolean |

**Returns:** *void*

___

###  setSliderPosition

▸ **setSliderPosition**(`position`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setSliderPosition](qabstractslider.md#setsliderposition)*

**Parameters:**

Name | Type |
------ | ------ |
`position` | number |

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

###  setTickInterval

▸ **setTickInterval**(`ti`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`ti` | number |

**Returns:** *void*

___

###  setTickPosition

▸ **setTickPosition**(`position`: [TickPosition](../enums/tickposition.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`position` | [TickPosition](../enums/tickposition.md) |

**Returns:** *void*

___

###  setTracking

▸ **setTracking**(`enable`: boolean): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setTracking](qabstractslider.md#settracking)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setValue

▸ **setValue**(`value`: number): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[setValue](qabstractslider.md#setvalue)*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

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

###  singleStep

▸ **singleStep**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[singleStep](qabstractslider.md#singlestep)*

**Returns:** *number*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[size](qmenu.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  sliderPosition

▸ **sliderPosition**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[sliderPosition](qabstractslider.md#sliderposition)*

**Returns:** *number*

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

###  tickInterval

▸ **tickInterval**(): *number*

**Returns:** *number*

___

###  tickPosition

▸ **tickPosition**(): *[TickPosition](../enums/tickposition.md)*

**Returns:** *[TickPosition](../enums/tickposition.md)*

___

###  triggerAction

▸ **triggerAction**(`action`: [SliderAction](../enums/slideraction.md)): *void*

*Inherited from [QAbstractSlider](qabstractslider.md).[triggerAction](qabstractslider.md#triggeraction)*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [SliderAction](../enums/slideraction.md) |

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

###  value

▸ **value**(): *number*

*Inherited from [QAbstractSlider](qabstractslider.md).[value](qabstractslider.md#value)*

**Returns:** *number*

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
