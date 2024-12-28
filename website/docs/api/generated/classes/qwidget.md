---
id: "qwidget"
title: "QWidget"
sidebar_label: "QWidget"
---

> Create and control views.

**This class is a JS wrapper around Qt's [QWidget class](https://doc.qt.io/qt-5/qwidget.html)**

A `QWidget` can be used to encapsulate other widgets and provide structure. It functions similar to a `div` in the web world.

### Example

```javascript
const { QWidget } = require("@nodegui/nodegui");

const view = new QWidget();
view.setObjectName("container"); //Similar to setting `id` on the web
view.setLayout(new FlexLayout());
```

## Type parameters

▪ **Signals**: *[QWidgetSignals](../interfaces/qwidgetsignals.md)*

## Hierarchy

  ↳ [YogaWidget](yogawidget.md)‹Signals›

  ↳ **QWidget**

  ↳ [QMenu](qmenu.md)

  ↳ [QFrame](qframe.md)

  ↳ [QAbstractSlider](qabstractslider.md)

  ↳ [QAbstractButton](qabstractbutton.md)

  ↳ [QAbstractSpinBox](qabstractspinbox.md)

  ↳ [QCalendarWidget](qcalendarwidget.md)

  ↳ [QDialog](qdialog.md)

  ↳ [QLCDNumber](qlcdnumber.md)

  ↳ [QLineEdit](qlineedit.md)

  ↳ [QProgressBar](qprogressbar.md)

  ↳ [QComboBox](qcombobox.md)

  ↳ [QTabBar](qtabbar.md)

  ↳ [QTabWidget](qtabwidget.md)

  ↳ [QMenuBar](qmenubar.md)

  ↳ [QSvgWidget](qsvgwidget.md)

  ↳ [QGroupBox](qgroupbox.md)

  ↳ [QStatusBar](qstatusbar.md)

  ↳ [QMainWindow](qmainwindow.md)

## Index

### Constructors

* [constructor](qwidget.md#constructor)

### Properties

* [_rawInlineStyle](qwidget.md#_rawinlinestyle)
* [native](qwidget.md#native)
* [type](qwidget.md#type)

### Methods

* [_id](qwidget.md#_id)
* [acceptDrops](qwidget.md#acceptdrops)
* [accessibleDescription](qwidget.md#accessibledescription)
* [accessibleName](qwidget.md#accessiblename)
* [activateWindow](qwidget.md#activatewindow)
* [addAction](qwidget.md#addaction)
* [addEventListener](qwidget.md#addeventlistener)
* [adjustSize](qwidget.md#adjustsize)
* [autoFillBackground](qwidget.md#autofillbackground)
* [baseSize](qwidget.md#basesize)
* [childAt](qwidget.md#childat)
* [children](qwidget.md#children)
* [childrenRect](qwidget.md#childrenrect)
* [clearFocus](qwidget.md#clearfocus)
* [clearMask](qwidget.md#clearmask)
* [close](qwidget.md#close)
* [colorCount](qwidget.md#colorcount)
* [contentsRect](qwidget.md#contentsrect)
* [contextMenuPolicy](qwidget.md#contextmenupolicy)
* [delete](qwidget.md#delete)
* [deleteLater](qwidget.md#deletelater)
* [depth](qwidget.md#depth)
* [devicePixelRatio](qwidget.md#devicepixelratio)
* [devicePixelRatioF](qwidget.md#devicepixelratiof)
* [dumpObjectInfo](qwidget.md#dumpobjectinfo)
* [dumpObjectTree](qwidget.md#dumpobjecttree)
* [ensurePolished](qwidget.md#ensurepolished)
* [eventProcessed](qwidget.md#eventprocessed)
* [focusProxy](qwidget.md#focusproxy)
* [focusWidget](qwidget.md#focuswidget)
* [font](qwidget.md#font)
* [frameGeometry](qwidget.md#framegeometry)
* [frameSize](qwidget.md#framesize)
* [geometry](qwidget.md#geometry)
* [getFlexNode](qwidget.md#getflexnode)
* [grab](qwidget.md#grab)
* [grabKeyboard](qwidget.md#grabkeyboard)
* [grabMouse](qwidget.md#grabmouse)
* [hasFocus](qwidget.md#hasfocus)
* [hasHeightForWidth](qwidget.md#hasheightforwidth)
* [hasMouseTracking](qwidget.md#hasmousetracking)
* [hasTabletTracking](qwidget.md#hastablettracking)
* [height](qwidget.md#height)
* [heightForWidth](qwidget.md#heightforwidth)
* [heightMM](qwidget.md#heightmm)
* [hide](qwidget.md#hide)
* [inherits](qwidget.md#inherits)
* [inputMethodHints](qwidget.md#inputmethodhints)
* [isActiveWindow](qwidget.md#isactivewindow)
* [isAncestorOf](qwidget.md#isancestorof)
* [isEnabled](qwidget.md#isenabled)
* [isEnabledTo](qwidget.md#isenabledto)
* [isFullScreen](qwidget.md#isfullscreen)
* [isHidden](qwidget.md#ishidden)
* [isMaximized](qwidget.md#ismaximized)
* [isMinimized](qwidget.md#isminimized)
* [isModal](qwidget.md#ismodal)
* [isVisible](qwidget.md#isvisible)
* [isVisibleTo](qwidget.md#isvisibleto)
* [isWindow](qwidget.md#iswindow)
* [isWindowModified](qwidget.md#iswindowmodified)
* [killTimer](qwidget.md#killtimer)
* [layout](qwidget.md#layout)
* [logicalDpiX](qwidget.md#logicaldpix)
* [logicalDpiY](qwidget.md#logicaldpiy)
* [lower](qwidget.md#lower)
* [mapFrom](qwidget.md#mapfrom)
* [mapFromGlobal](qwidget.md#mapfromglobal)
* [mapFromParent](qwidget.md#mapfromparent)
* [mapTo](qwidget.md#mapto)
* [mapToGlobal](qwidget.md#maptoglobal)
* [mapToParent](qwidget.md#maptoparent)
* [maximumHeight](qwidget.md#maximumheight)
* [maximumSize](qwidget.md#maximumsize)
* [maximumWidth](qwidget.md#maximumwidth)
* [minimumHeight](qwidget.md#minimumheight)
* [minimumSize](qwidget.md#minimumsize)
* [minimumSizeHint](qwidget.md#minimumsizehint)
* [minimumWidth](qwidget.md#minimumwidth)
* [move](qwidget.md#move)
* [nativeParentWidget](qwidget.md#nativeparentwidget)
* [nextInFocusChain](qwidget.md#nextinfocuschain)
* [normalGeometry](qwidget.md#normalgeometry)
* [objectName](qwidget.md#objectname)
* [paintingActive](qwidget.md#paintingactive)
* [parent](qwidget.md#parent)
* [parentWidget](qwidget.md#parentwidget)
* [physicalDpiX](qwidget.md#physicaldpix)
* [physicalDpiY](qwidget.md#physicaldpiy)
* [pos](qwidget.md#pos)
* [previousInFocusChain](qwidget.md#previousinfocuschain)
* [property](qwidget.md#property)
* [raise](qwidget.md#raise)
* [rect](qwidget.md#rect)
* [releaseKeyboard](qwidget.md#releasekeyboard)
* [releaseMouse](qwidget.md#releasemouse)
* [releaseShortcut](qwidget.md#releaseshortcut)
* [removeAction](qwidget.md#removeaction)
* [removeEventListener](qwidget.md#removeeventlistener)
* [repaint](qwidget.md#repaint)
* [repolish](qwidget.md#repolish)
* [resize](qwidget.md#resize)
* [setAcceptDrops](qwidget.md#setacceptdrops)
* [setAccessibleDescription](qwidget.md#setaccessibledescription)
* [setAccessibleName](qwidget.md#setaccessiblename)
* [setAttribute](qwidget.md#setattribute)
* [setAutoFillBackground](qwidget.md#setautofillbackground)
* [setBaseSize](qwidget.md#setbasesize)
* [setContentsMargins](qwidget.md#setcontentsmargins)
* [setContextMenuPolicy](qwidget.md#setcontextmenupolicy)
* [setCursor](qwidget.md#setcursor)
* [setDisabled](qwidget.md#setdisabled)
* [setEnabled](qwidget.md#setenabled)
* [setEventProcessed](qwidget.md#seteventprocessed)
* [setFixedHeight](qwidget.md#setfixedheight)
* [setFixedSize](qwidget.md#setfixedsize)
* [setFixedWidth](qwidget.md#setfixedwidth)
* [setFlexNodeSizeControlled](qwidget.md#setflexnodesizecontrolled)
* [setFocus](qwidget.md#setfocus)
* [setFocusPolicy](qwidget.md#setfocuspolicy)
* [setFocusProxy](qwidget.md#setfocusproxy)
* [setFont](qwidget.md#setfont)
* [setGeometry](qwidget.md#setgeometry)
* [setGraphicsEffect](qwidget.md#setgraphicseffect)
* [setHidden](qwidget.md#sethidden)
* [setInlineStyle](qwidget.md#setinlinestyle)
* [setInputMethodHints](qwidget.md#setinputmethodhints)
* [setLayout](qwidget.md#setlayout)
* [setMaximumHeight](qwidget.md#setmaximumheight)
* [setMaximumSize](qwidget.md#setmaximumsize)
* [setMaximumWidth](qwidget.md#setmaximumwidth)
* [setMinimumHeight](qwidget.md#setminimumheight)
* [setMinimumSize](qwidget.md#setminimumsize)
* [setMinimumWidth](qwidget.md#setminimumwidth)
* [setMouseTracking](qwidget.md#setmousetracking)
* [setObjectName](qwidget.md#setobjectname)
* [setParent](qwidget.md#setparent)
* [setProperty](qwidget.md#setproperty)
* [setShortcutAutoRepeat](qwidget.md#setshortcutautorepeat)
* [setShortcutEnabled](qwidget.md#setshortcutenabled)
* [setSizeIncrement](qwidget.md#setsizeincrement)
* [setSizePolicy](qwidget.md#setsizepolicy)
* [setStatusTip](qwidget.md#setstatustip)
* [setStyleSheet](qwidget.md#setstylesheet)
* [setTabletTracking](qwidget.md#settablettracking)
* [setToolTip](qwidget.md#settooltip)
* [setToolTipDuration](qwidget.md#settooltipduration)
* [setUpdatesEnabled](qwidget.md#setupdatesenabled)
* [setVisible](qwidget.md#setvisible)
* [setWhatsThis](qwidget.md#setwhatsthis)
* [setWindowFilePath](qwidget.md#setwindowfilepath)
* [setWindowFlag](qwidget.md#setwindowflag)
* [setWindowIcon](qwidget.md#setwindowicon)
* [setWindowModified](qwidget.md#setwindowmodified)
* [setWindowOpacity](qwidget.md#setwindowopacity)
* [setWindowRole](qwidget.md#setwindowrole)
* [setWindowState](qwidget.md#setwindowstate)
* [setWindowTitle](qwidget.md#setwindowtitle)
* [show](qwidget.md#show)
* [showFullScreen](qwidget.md#showfullscreen)
* [showMaximized](qwidget.md#showmaximized)
* [showMinimized](qwidget.md#showminimized)
* [showNormal](qwidget.md#shownormal)
* [size](qwidget.md#size)
* [sizeHint](qwidget.md#sizehint)
* [sizeIncrement](qwidget.md#sizeincrement)
* [stackUnder](qwidget.md#stackunder)
* [startTimer](qwidget.md#starttimer)
* [statusTip](qwidget.md#statustip)
* [style](qwidget.md#style)
* [styleSheet](qwidget.md#stylesheet)
* [testAttribute](qwidget.md#testattribute)
* [toolTip](qwidget.md#tooltip)
* [toolTipDuration](qwidget.md#tooltipduration)
* [underMouse](qwidget.md#undermouse)
* [unsetCursor](qwidget.md#unsetcursor)
* [unsetLayoutDirection](qwidget.md#unsetlayoutdirection)
* [unsetLocale](qwidget.md#unsetlocale)
* [update](qwidget.md#update)
* [updateGeometry](qwidget.md#updategeometry)
* [updateMicroFocus](qwidget.md#updatemicrofocus)
* [updatesEnabled](qwidget.md#updatesenabled)
* [whatsThis](qwidget.md#whatsthis)
* [width](qwidget.md#width)
* [widthMM](qwidget.md#widthmm)
* [winId](qwidget.md#winid)
* [window](qwidget.md#window)
* [windowFilePath](qwidget.md#windowfilepath)
* [windowHandle](qwidget.md#windowhandle)
* [windowIcon](qwidget.md#windowicon)
* [windowOpacity](qwidget.md#windowopacity)
* [windowRole](qwidget.md#windowrole)
* [windowState](qwidget.md#windowstate)
* [windowTitle](qwidget.md#windowtitle)
* [x](qwidget.md#x)
* [y](qwidget.md#y)

## Constructors

###  constructor

\+ **new QWidget**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QWidget](qwidget.md)*

*Overrides [QObject](qobject.md).[constructor](qobject.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QWidget](qwidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string*

___

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

___

###  type

• **type**: *string*

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

**Returns:** *boolean*

___

###  accessibleDescription

▸ **accessibleDescription**(): *string*

**Returns:** *string*

___

###  accessibleName

▸ **accessibleName**(): *string*

**Returns:** *string*

___

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

**Returns:** *void*

___

###  autoFillBackground

▸ **autoFillBackground**(): *boolean*

**Returns:** *boolean*

___

###  baseSize

▸ **baseSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  childAt

▸ **childAt**(`x`: number, `y`: number): *[QWidget](qwidget.md)*

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

**Returns:** *[QRect](qrect.md)*

___

###  clearFocus

▸ **clearFocus**(): *void*

**Returns:** *void*

___

###  clearMask

▸ **clearMask**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

**Returns:** *boolean*

___

###  colorCount

▸ **colorCount**(): *number*

**Returns:** *number*

___

###  contentsRect

▸ **contentsRect**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  contextMenuPolicy

▸ **contextMenuPolicy**(): *[ContextMenuPolicy](../enums/contextmenupolicy.md)*

**Returns:** *[ContextMenuPolicy](../enums/contextmenupolicy.md)*

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

**Returns:** *number*

___

###  devicePixelRatio

▸ **devicePixelRatio**(): *number*

**Returns:** *number*

___

###  devicePixelRatioF

▸ **devicePixelRatioF**(): *number*

**Returns:** *number*

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

###  ensurePolished

▸ **ensurePolished**(): *void*

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

**Returns:** *[QWidget](qwidget.md)*

___

###  focusWidget

▸ **focusWidget**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

___

###  frameGeometry

▸ **frameGeometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  frameSize

▸ **frameSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

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

###  grab

▸ **grab**(`rect?`: [QRect](qrect.md)): *[QPixmap](qpixmap.md)*

**Parameters:**

Name | Type |
------ | ------ |
`rect?` | [QRect](qrect.md) |

**Returns:** *[QPixmap](qpixmap.md)*

___

###  grabKeyboard

▸ **grabKeyboard**(): *void*

**Returns:** *void*

___

###  grabMouse

▸ **grabMouse**(): *void*

**Returns:** *void*

___

###  hasFocus

▸ **hasFocus**(): *boolean*

**Returns:** *boolean*

___

###  hasHeightForWidth

▸ **hasHeightForWidth**(): *boolean*

**Returns:** *boolean*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

**Returns:** *boolean*

___

###  hasTabletTracking

▸ **hasTabletTracking**(): *boolean*

**Returns:** *boolean*

___

###  height

▸ **height**(): *number*

**Returns:** *number*

___

###  heightForWidth

▸ **heightForWidth**(`w`: number): *number*

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

**Returns:** *number*

___

###  heightMM

▸ **heightMM**(): *number*

**Returns:** *number*

___

###  hide

▸ **hide**(): *void*

**Returns:** *void*

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

**Returns:** *number*

___

###  isActiveWindow

▸ **isActiveWindow**(): *boolean*

**Returns:** *boolean*

___

###  isAncestorOf

▸ **isAncestorOf**(`child`: [QWidget](qwidget.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`child` | [QWidget](qwidget.md) |

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isEnabledTo

▸ **isEnabledTo**(`ancestor`: [QWidget](qwidget.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`ancestor` | [QWidget](qwidget.md) |

**Returns:** *boolean*

___

###  isFullScreen

▸ **isFullScreen**(): *boolean*

**Returns:** *boolean*

___

###  isHidden

▸ **isHidden**(): *boolean*

**Returns:** *boolean*

___

###  isMaximized

▸ **isMaximized**(): *boolean*

**Returns:** *boolean*

___

###  isMinimized

▸ **isMinimized**(): *boolean*

**Returns:** *boolean*

___

###  isModal

▸ **isModal**(): *boolean*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

**Returns:** *boolean*

___

###  isVisibleTo

▸ **isVisibleTo**(`ancestor`: [QWidget](qwidget.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`ancestor` | [QWidget](qwidget.md) |

**Returns:** *boolean*

___

###  isWindow

▸ **isWindow**(): *boolean*

**Returns:** *boolean*

___

###  isWindowModified

▸ **isWindowModified**(): *boolean*

**Returns:** *boolean*

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

**Returns:** *[QLayout](qlayout.md) | null*

___

###  logicalDpiX

▸ **logicalDpiX**(): *number*

**Returns:** *number*

___

###  logicalDpiY

▸ **logicalDpiY**(): *number*

**Returns:** *number*

___

###  lower

▸ **lower**(): *void*

**Returns:** *void*

___

###  mapFrom

▸ **mapFrom**(`parent`: [QWidget](qwidget.md), `pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QWidget](qwidget.md) |
`pos` | [QPoint](qpoint.md) |

**Returns:** *[QPoint](qpoint.md)*

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

###  mapTo

▸ **mapTo**(`parent`: [QWidget](qwidget.md), `pos`: [QPoint](qpoint.md)): *[QPoint](qpoint.md)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [QWidget](qwidget.md) |
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

###  maximumHeight

▸ **maximumHeight**(): *number*

**Returns:** *number*

___

###  maximumSize

▸ **maximumSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  maximumWidth

▸ **maximumWidth**(): *number*

**Returns:** *number*

___

###  minimumHeight

▸ **minimumHeight**(): *number*

**Returns:** *number*

___

###  minimumSize

▸ **minimumSize**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  minimumSizeHint

▸ **minimumSizeHint**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  minimumWidth

▸ **minimumWidth**(): *number*

**Returns:** *number*

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

###  nativeParentWidget

▸ **nativeParentWidget**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

___

###  nextInFocusChain

▸ **nextInFocusChain**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

___

###  normalGeometry

▸ **normalGeometry**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [QObject](qobject.md).[objectName](qobject.md#objectname)*

**Returns:** *string*

___

###  paintingActive

▸ **paintingActive**(): *boolean*

**Returns:** *boolean*

___

###  parent

▸ **parent**(): *[QObject](qobject.md)*

*Inherited from [QObject](qobject.md).[parent](qobject.md#parent)*

**Returns:** *[QObject](qobject.md)*

___

###  parentWidget

▸ **parentWidget**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

___

###  physicalDpiX

▸ **physicalDpiX**(): *number*

**Returns:** *number*

___

###  physicalDpiY

▸ **physicalDpiY**(): *number*

**Returns:** *number*

___

###  pos

▸ **pos**(): *object*

**Returns:** *object*

* **x**: *number*

* **y**: *number*

___

###  previousInFocusChain

▸ **previousInFocusChain**(): *[QWidget](qwidget.md)*

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

**Returns:** *void*

___

###  rect

▸ **rect**(): *[QRect](qrect.md)*

**Returns:** *[QRect](qrect.md)*

___

###  releaseKeyboard

▸ **releaseKeyboard**(): *void*

**Returns:** *void*

___

###  releaseMouse

▸ **releaseMouse**(): *void*

**Returns:** *void*

___

###  releaseShortcut

▸ **releaseShortcut**(`id`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`id` | number |

**Returns:** *void*

___

###  removeAction

▸ **removeAction**(`action`: [QAction](qaction.md)): *void*

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

###  setAcceptDrops

▸ **setAcceptDrops**(`on`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

**Returns:** *void*

___

###  setAccessibleDescription

▸ **setAccessibleDescription**(`description`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`description` | string |

**Returns:** *void*

___

###  setAccessibleName

▸ **setAccessibleName**(`name`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

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

###  setAutoFillBackground

▸ **setAutoFillBackground**(`enabled`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setBaseSize

▸ **setBaseSize**(`size`: [QSize](qsize.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setContentsMargins

▸ **setContentsMargins**(`left`: number, `top`: number, `right`: number, `bottom`: number): *void*

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

###  setDisabled

▸ **setDisabled**(`disable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`disable` | boolean |

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

**Parameters:**

Name | Type |
------ | ------ |
`h` | number |

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

###  setFixedWidth

▸ **setFixedWidth**(`w`: number): *void*

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

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`reason` | [FocusReason](../enums/focusreason.md) | FocusReason.OtherFocusReason |

**Returns:** *void*

___

###  setFocusPolicy

▸ **setFocusPolicy**(`policy`: [FocusPolicy](../enums/focuspolicy.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [FocusPolicy](../enums/focuspolicy.md) |

**Returns:** *void*

___

###  setFocusProxy

▸ **setFocusProxy**(`widget`: [QWidget](qwidget.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`widget` | [QWidget](qwidget.md) |

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

###  setGraphicsEffect

▸ **setGraphicsEffect**(`effect`: [QGraphicsEffect](qgraphicseffect.md)‹any›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`effect` | [QGraphicsEffect](qgraphicseffect.md)‹any› |

**Returns:** *void*

___

###  setHidden

▸ **setHidden**(`hidden`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hidden` | boolean |

**Returns:** *void*

___

###  setInlineStyle

▸ **setInlineStyle**(`style`: string, `postprocess`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`style` | string | - |
`postprocess` | boolean | true |

**Returns:** *void*

___

###  setInputMethodHints

▸ **setInputMethodHints**(`hints`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`hints` | number |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`layout`: [QLayout](qlayout.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`layout` | [QLayout](qlayout.md) |

**Returns:** *void*

___

###  setMaximumHeight

▸ **setMaximumHeight**(`maxh`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`maxh` | number |

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

###  setMaximumWidth

▸ **setMaximumWidth**(`maxw`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |

**Returns:** *void*

___

###  setMinimumHeight

▸ **setMinimumHeight**(`minh`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`minh` | number |

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

###  setMinimumWidth

▸ **setMinimumWidth**(`minw`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |

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

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

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

###  setShortcutAutoRepeat

▸ **setShortcutAutoRepeat**(`id`: number, `enable`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`id` | number | - |
`enable` | boolean | true |

**Returns:** *void*

___

###  setShortcutEnabled

▸ **setShortcutEnabled**(`id`: number, `enable`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`id` | number | - |
`enable` | boolean | true |

**Returns:** *void*

___

###  setSizeIncrement

▸ **setSizeIncrement**(`w_or_size`: [QSize](qsize.md) | number, `h`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`w_or_size` | [QSize](qsize.md) &#124; number | - |
`h` | number | 0 |

**Returns:** *void*

___

###  setSizePolicy

▸ **setSizePolicy**(`horizontal`: [QSizePolicyPolicy](../enums/qsizepolicypolicy.md), `vertical`: [QSizePolicyPolicy](../enums/qsizepolicypolicy.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`horizontal` | [QSizePolicyPolicy](../enums/qsizepolicypolicy.md) |
`vertical` | [QSizePolicyPolicy](../enums/qsizepolicypolicy.md) |

**Returns:** *void*

___

###  setStatusTip

▸ **setStatusTip**(`statusTip`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`statusTip` | string |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string, `postprocess`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`styleSheet` | string | - |
`postprocess` | boolean | true |

**Returns:** *void*

___

###  setTabletTracking

▸ **setTabletTracking**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setToolTip

▸ **setToolTip**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setToolTipDuration

▸ **setToolTipDuration**(`msec`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`msec` | number |

**Returns:** *void*

___

###  setUpdatesEnabled

▸ **setUpdatesEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setVisible

▸ **setVisible**(`visible`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`visible` | boolean |

**Returns:** *void*

___

###  setWhatsThis

▸ **setWhatsThis**(`whatsThis`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`whatsThis` | string |

**Returns:** *void*

___

###  setWindowFilePath

▸ **setWindowFilePath**(`filePath`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`filePath` | string |

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

###  setWindowModified

▸ **setWindowModified**(`modified`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`modified` | boolean |

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

###  setWindowRole

▸ **setWindowRole**(`role`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`role` | string |

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

###  sizeHint

▸ **sizeHint**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  sizeIncrement

▸ **sizeIncrement**(): *[QSize](qsize.md)*

**Returns:** *[QSize](qsize.md)*

___

###  stackUnder

▸ **stackUnder**(`w`: [QWidget](qwidget.md)): *void*

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

**Returns:** *string*

___

###  style

▸ **style**(): *[QStyle](qstyle.md)*

**Returns:** *[QStyle](qstyle.md)*

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

###  toolTip

▸ **toolTip**(): *string*

**Returns:** *string*

___

###  toolTipDuration

▸ **toolTipDuration**(): *number*

**Returns:** *number*

___

###  underMouse

▸ **underMouse**(): *boolean*

**Returns:** *boolean*

___

###  unsetCursor

▸ **unsetCursor**(): *void*

**Returns:** *void*

___

###  unsetLayoutDirection

▸ **unsetLayoutDirection**(): *void*

**Returns:** *void*

___

###  unsetLocale

▸ **unsetLocale**(): *void*

**Returns:** *void*

___

###  update

▸ **update**(): *void*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

**Returns:** *void*

___

###  updateMicroFocus

▸ **updateMicroFocus**(`query`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`query` | number | InputMethodQuery.ImQueryAll |

**Returns:** *void*

___

###  updatesEnabled

▸ **updatesEnabled**(): *boolean*

**Returns:** *boolean*

___

###  whatsThis

▸ **whatsThis**(): *string*

**Returns:** *string*

___

###  width

▸ **width**(): *number*

**Returns:** *number*

___

###  widthMM

▸ **widthMM**(): *number*

**Returns:** *number*

___

###  winId

▸ **winId**(): *number*

**Returns:** *number*

___

###  window

▸ **window**(): *[QWidget](qwidget.md)*

**Returns:** *[QWidget](qwidget.md)*

___

###  windowFilePath

▸ **windowFilePath**(): *string*

**Returns:** *string*

___

###  windowHandle

▸ **windowHandle**(): *[QWindow](qwindow.md) | null*

**Returns:** *[QWindow](qwindow.md) | null*

___

###  windowIcon

▸ **windowIcon**(): *[QIcon](qicon.md)*

**Returns:** *[QIcon](qicon.md)*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

**Returns:** *number*

___

###  windowRole

▸ **windowRole**(): *string*

**Returns:** *string*

___

###  windowState

▸ **windowState**(): *[WindowState](../enums/windowstate.md)*

**Returns:** *[WindowState](../enums/windowstate.md)*

___

###  windowTitle

▸ **windowTitle**(): *string*

**Returns:** *string*

___

###  x

▸ **x**(): *number*

**Returns:** *number*

___

###  y

▸ **y**(): *number*

**Returns:** *number*
