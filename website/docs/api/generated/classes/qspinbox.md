---
id: "qspinbox"
title: "QSpinBox"
sidebar_label: "QSpinBox"
---

> Create and control spin box widgets.

**This class is a JS wrapper around Qt's [QSpinBox class](https://doc.qt.io/qt-5/qspinbox.html)**

A `QSpinBox` provides ability to add and manipulate native spin box widgets.

### Example

```javascript
const { QSpinBox } = require("@nodegui/nodegui");

const spinBox = new QSpinBox();
```

## Hierarchy

  ↳ [QAbstractSpinBox](qabstractspinbox.md)‹[QSpinBoxSignals](../interfaces/qspinboxsignals.md)›

  ↳ **QSpinBox**

## Index

### Constructors

* [constructor](qspinbox.md#constructor)

### Properties

* [_rawInlineStyle](qspinbox.md#_rawinlinestyle)
* [native](qspinbox.md#native)
* [type](qspinbox.md#type)

### Methods

* [_id](qspinbox.md#_id)
* [acceptDrops](qspinbox.md#acceptdrops)
* [accessibleDescription](qspinbox.md#accessibledescription)
* [accessibleName](qspinbox.md#accessiblename)
* [activateWindow](qspinbox.md#activatewindow)
* [addAction](qspinbox.md#addaction)
* [addEventListener](qspinbox.md#addeventlistener)
* [adjustSize](qspinbox.md#adjustsize)
* [alignment](qspinbox.md#alignment)
* [autoFillBackground](qspinbox.md#autofillbackground)
* [baseSize](qspinbox.md#basesize)
* [buttonSymbols](qspinbox.md#buttonsymbols)
* [childAt](qspinbox.md#childat)
* [children](qspinbox.md#children)
* [childrenRect](qspinbox.md#childrenrect)
* [cleanText](qspinbox.md#cleantext)
* [clearFocus](qspinbox.md#clearfocus)
* [clearMask](qspinbox.md#clearmask)
* [close](qspinbox.md#close)
* [colorCount](qspinbox.md#colorcount)
* [contentsRect](qspinbox.md#contentsrect)
* [contextMenuPolicy](qspinbox.md#contextmenupolicy)
* [correctionMode](qspinbox.md#correctionmode)
* [delete](qspinbox.md#delete)
* [deleteLater](qspinbox.md#deletelater)
* [depth](qspinbox.md#depth)
* [devicePixelRatio](qspinbox.md#devicepixelratio)
* [devicePixelRatioF](qspinbox.md#devicepixelratiof)
* [displayIntegerBase](qspinbox.md#displayintegerbase)
* [dumpObjectInfo](qspinbox.md#dumpobjectinfo)
* [dumpObjectTree](qspinbox.md#dumpobjecttree)
* [ensurePolished](qspinbox.md#ensurepolished)
* [eventProcessed](qspinbox.md#eventprocessed)
* [focusProxy](qspinbox.md#focusproxy)
* [focusWidget](qspinbox.md#focuswidget)
* [font](qspinbox.md#font)
* [frameGeometry](qspinbox.md#framegeometry)
* [frameSize](qspinbox.md#framesize)
* [geometry](qspinbox.md#geometry)
* [getFlexNode](qspinbox.md#getflexnode)
* [grab](qspinbox.md#grab)
* [grabKeyboard](qspinbox.md#grabkeyboard)
* [grabMouse](qspinbox.md#grabmouse)
* [hasAcceptableInput](qspinbox.md#hasacceptableinput)
* [hasFocus](qspinbox.md#hasfocus)
* [hasFrame](qspinbox.md#hasframe)
* [hasHeightForWidth](qspinbox.md#hasheightforwidth)
* [hasMouseTracking](qspinbox.md#hasmousetracking)
* [hasTabletTracking](qspinbox.md#hastablettracking)
* [height](qspinbox.md#height)
* [heightForWidth](qspinbox.md#heightforwidth)
* [heightMM](qspinbox.md#heightmm)
* [hide](qspinbox.md#hide)
* [inherits](qspinbox.md#inherits)
* [inputMethodHints](qspinbox.md#inputmethodhints)
* [isAccelerated](qspinbox.md#isaccelerated)
* [isActiveWindow](qspinbox.md#isactivewindow)
* [isAncestorOf](qspinbox.md#isancestorof)
* [isEnabled](qspinbox.md#isenabled)
* [isEnabledTo](qspinbox.md#isenabledto)
* [isFullScreen](qspinbox.md#isfullscreen)
* [isGroupSeparatorShown](qspinbox.md#isgroupseparatorshown)
* [isHidden](qspinbox.md#ishidden)
* [isMaximized](qspinbox.md#ismaximized)
* [isMinimized](qspinbox.md#isminimized)
* [isModal](qspinbox.md#ismodal)
* [isReadOnly](qspinbox.md#isreadonly)
* [isVisible](qspinbox.md#isvisible)
* [isVisibleTo](qspinbox.md#isvisibleto)
* [isWindow](qspinbox.md#iswindow)
* [isWindowModified](qspinbox.md#iswindowmodified)
* [keyboardTracking](qspinbox.md#keyboardtracking)
* [killTimer](qspinbox.md#killtimer)
* [layout](qspinbox.md#layout)
* [logicalDpiX](qspinbox.md#logicaldpix)
* [logicalDpiY](qspinbox.md#logicaldpiy)
* [lower](qspinbox.md#lower)
* [mapFrom](qspinbox.md#mapfrom)
* [mapFromGlobal](qspinbox.md#mapfromglobal)
* [mapFromParent](qspinbox.md#mapfromparent)
* [mapTo](qspinbox.md#mapto)
* [mapToGlobal](qspinbox.md#maptoglobal)
* [mapToParent](qspinbox.md#maptoparent)
* [maximum](qspinbox.md#maximum)
* [maximumHeight](qspinbox.md#maximumheight)
* [maximumSize](qspinbox.md#maximumsize)
* [maximumWidth](qspinbox.md#maximumwidth)
* [minimum](qspinbox.md#minimum)
* [minimumHeight](qspinbox.md#minimumheight)
* [minimumSize](qspinbox.md#minimumsize)
* [minimumSizeHint](qspinbox.md#minimumsizehint)
* [minimumWidth](qspinbox.md#minimumwidth)
* [move](qspinbox.md#move)
* [nativeParentWidget](qspinbox.md#nativeparentwidget)
* [nextInFocusChain](qspinbox.md#nextinfocuschain)
* [normalGeometry](qspinbox.md#normalgeometry)
* [objectName](qspinbox.md#objectname)
* [paintingActive](qspinbox.md#paintingactive)
* [parent](qspinbox.md#parent)
* [parentWidget](qspinbox.md#parentwidget)
* [physicalDpiX](qspinbox.md#physicaldpix)
* [physicalDpiY](qspinbox.md#physicaldpiy)
* [pos](qspinbox.md#pos)
* [prefix](qspinbox.md#prefix)
* [previousInFocusChain](qspinbox.md#previousinfocuschain)
* [property](qspinbox.md#property)
* [raise](qspinbox.md#raise)
* [rect](qspinbox.md#rect)
* [releaseKeyboard](qspinbox.md#releasekeyboard)
* [releaseMouse](qspinbox.md#releasemouse)
* [releaseShortcut](qspinbox.md#releaseshortcut)
* [removeAction](qspinbox.md#removeaction)
* [removeEventListener](qspinbox.md#removeeventlistener)
* [repaint](qspinbox.md#repaint)
* [repolish](qspinbox.md#repolish)
* [resize](qspinbox.md#resize)
* [selectAll](qspinbox.md#selectall)
* [setAccelerated](qspinbox.md#setaccelerated)
* [setAcceptDrops](qspinbox.md#setacceptdrops)
* [setAccessibleDescription](qspinbox.md#setaccessibledescription)
* [setAccessibleName](qspinbox.md#setaccessiblename)
* [setAlignment](qspinbox.md#setalignment)
* [setAttribute](qspinbox.md#setattribute)
* [setAutoFillBackground](qspinbox.md#setautofillbackground)
* [setBaseSize](qspinbox.md#setbasesize)
* [setButtonSymbols](qspinbox.md#setbuttonsymbols)
* [setContentsMargins](qspinbox.md#setcontentsmargins)
* [setContextMenuPolicy](qspinbox.md#setcontextmenupolicy)
* [setCorrectionMode](qspinbox.md#setcorrectionmode)
* [setCursor](qspinbox.md#setcursor)
* [setDisabled](qspinbox.md#setdisabled)
* [setDisplayIntegerBase](qspinbox.md#setdisplayintegerbase)
* [setEnabled](qspinbox.md#setenabled)
* [setEventProcessed](qspinbox.md#seteventprocessed)
* [setFixedHeight](qspinbox.md#setfixedheight)
* [setFixedSize](qspinbox.md#setfixedsize)
* [setFixedWidth](qspinbox.md#setfixedwidth)
* [setFlexNodeSizeControlled](qspinbox.md#setflexnodesizecontrolled)
* [setFocus](qspinbox.md#setfocus)
* [setFocusPolicy](qspinbox.md#setfocuspolicy)
* [setFocusProxy](qspinbox.md#setfocusproxy)
* [setFont](qspinbox.md#setfont)
* [setFrame](qspinbox.md#setframe)
* [setGeometry](qspinbox.md#setgeometry)
* [setGraphicsEffect](qspinbox.md#setgraphicseffect)
* [setGroupSeparatorShown](qspinbox.md#setgroupseparatorshown)
* [setHidden](qspinbox.md#sethidden)
* [setInlineStyle](qspinbox.md#setinlinestyle)
* [setInputMethodHints](qspinbox.md#setinputmethodhints)
* [setKeyboardTracking](qspinbox.md#setkeyboardtracking)
* [setLayout](qspinbox.md#setlayout)
* [setMaximum](qspinbox.md#setmaximum)
* [setMaximumHeight](qspinbox.md#setmaximumheight)
* [setMaximumSize](qspinbox.md#setmaximumsize)
* [setMaximumWidth](qspinbox.md#setmaximumwidth)
* [setMinimum](qspinbox.md#setminimum)
* [setMinimumHeight](qspinbox.md#setminimumheight)
* [setMinimumSize](qspinbox.md#setminimumsize)
* [setMinimumWidth](qspinbox.md#setminimumwidth)
* [setMouseTracking](qspinbox.md#setmousetracking)
* [setObjectName](qspinbox.md#setobjectname)
* [setParent](qspinbox.md#setparent)
* [setPrefix](qspinbox.md#setprefix)
* [setProperty](qspinbox.md#setproperty)
* [setRange](qspinbox.md#setrange)
* [setReadOnly](qspinbox.md#setreadonly)
* [setShortcutAutoRepeat](qspinbox.md#setshortcutautorepeat)
* [setShortcutEnabled](qspinbox.md#setshortcutenabled)
* [setSingleStep](qspinbox.md#setsinglestep)
* [setSizeIncrement](qspinbox.md#setsizeincrement)
* [setSizePolicy](qspinbox.md#setsizepolicy)
* [setSpecialValueText](qspinbox.md#setspecialvaluetext)
* [setStatusTip](qspinbox.md#setstatustip)
* [setStepType](qspinbox.md#setsteptype)
* [setStyleSheet](qspinbox.md#setstylesheet)
* [setSuffix](qspinbox.md#setsuffix)
* [setTabletTracking](qspinbox.md#settablettracking)
* [setToolTip](qspinbox.md#settooltip)
* [setToolTipDuration](qspinbox.md#settooltipduration)
* [setUpdatesEnabled](qspinbox.md#setupdatesenabled)
* [setValue](qspinbox.md#setvalue)
* [setVisible](qspinbox.md#setvisible)
* [setWhatsThis](qspinbox.md#setwhatsthis)
* [setWindowFilePath](qspinbox.md#setwindowfilepath)
* [setWindowFlag](qspinbox.md#setwindowflag)
* [setWindowIcon](qspinbox.md#setwindowicon)
* [setWindowModified](qspinbox.md#setwindowmodified)
* [setWindowOpacity](qspinbox.md#setwindowopacity)
* [setWindowRole](qspinbox.md#setwindowrole)
* [setWindowState](qspinbox.md#setwindowstate)
* [setWindowTitle](qspinbox.md#setwindowtitle)
* [setWrapping](qspinbox.md#setwrapping)
* [show](qspinbox.md#show)
* [showFullScreen](qspinbox.md#showfullscreen)
* [showMaximized](qspinbox.md#showmaximized)
* [showMinimized](qspinbox.md#showminimized)
* [showNormal](qspinbox.md#shownormal)
* [singleStep](qspinbox.md#singlestep)
* [size](qspinbox.md#size)
* [sizeHint](qspinbox.md#sizehint)
* [sizeIncrement](qspinbox.md#sizeincrement)
* [specialValueText](qspinbox.md#specialvaluetext)
* [stackUnder](qspinbox.md#stackunder)
* [startTimer](qspinbox.md#starttimer)
* [statusTip](qspinbox.md#statustip)
* [stepDown](qspinbox.md#stepdown)
* [stepType](qspinbox.md#steptype)
* [stepUp](qspinbox.md#stepup)
* [style](qspinbox.md#style)
* [styleSheet](qspinbox.md#stylesheet)
* [suffix](qspinbox.md#suffix)
* [testAttribute](qspinbox.md#testattribute)
* [text](qspinbox.md#text)
* [toolTip](qspinbox.md#tooltip)
* [toolTipDuration](qspinbox.md#tooltipduration)
* [underMouse](qspinbox.md#undermouse)
* [unsetCursor](qspinbox.md#unsetcursor)
* [unsetLayoutDirection](qspinbox.md#unsetlayoutdirection)
* [unsetLocale](qspinbox.md#unsetlocale)
* [update](qspinbox.md#update)
* [updateGeometry](qspinbox.md#updategeometry)
* [updateMicroFocus](qspinbox.md#updatemicrofocus)
* [updatesEnabled](qspinbox.md#updatesenabled)
* [value](qspinbox.md#value)
* [whatsThis](qspinbox.md#whatsthis)
* [width](qspinbox.md#width)
* [widthMM](qspinbox.md#widthmm)
* [winId](qspinbox.md#winid)
* [window](qspinbox.md#window)
* [windowFilePath](qspinbox.md#windowfilepath)
* [windowHandle](qspinbox.md#windowhandle)
* [windowIcon](qspinbox.md#windowicon)
* [windowOpacity](qspinbox.md#windowopacity)
* [windowRole](qspinbox.md#windowrole)
* [windowState](qspinbox.md#windowstate)
* [windowTitle](qspinbox.md#windowtitle)
* [wrapping](qspinbox.md#wrapping)
* [x](qspinbox.md#x)
* [y](qspinbox.md#y)

## Constructors

###  constructor

\+ **new QSpinBox**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QSpinBox](qspinbox.md)*

*Overrides [QAbstractSlider](qabstractslider.md).[constructor](qabstractslider.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QSpinBox](qspinbox.md)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QSpinBoxSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QSpinBoxSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QSpinBoxSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

###  alignment

▸ **alignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[alignment](qabstractspinbox.md#alignment)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  autoFillBackground

▸ **autoFillBackground**(): *boolean*

*Inherited from [QMenu](qmenu.md).[autoFillBackground](qmenu.md#autofillbackground)*

**Returns:** *boolean*

___

###  baseSize

▸ **baseSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[baseSize](qmenu.md#basesize)*

**Returns:** *[QSize](qsize.md)*

___

###  buttonSymbols

▸ **buttonSymbols**(): *[ButtonSymbols](../enums/buttonsymbols.md)*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[buttonSymbols](qabstractspinbox.md#buttonsymbols)*

**Returns:** *[ButtonSymbols](../enums/buttonsymbols.md)*

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

###  cleanText

▸ **cleanText**(): *string*

**Returns:** *string*

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

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  colorCount

▸ **colorCount**(): *number*

*Inherited from [QMenu](qmenu.md).[colorCount](qmenu.md#colorcount)*

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

###  correctionMode

▸ **correctionMode**(): *[CorrectionMode](../enums/correctionmode.md)*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[correctionMode](qabstractspinbox.md#correctionmode)*

**Returns:** *[CorrectionMode](../enums/correctionmode.md)*

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

###  displayIntegerBase

▸ **displayIntegerBase**(): *number*

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

###  frameSize

▸ **frameSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[frameSize](qmenu.md#framesize)*

**Returns:** *[QSize](qsize.md)*

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

###  hasAcceptableInput

▸ **hasAcceptableInput**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[hasAcceptableInput](qabstractspinbox.md#hasacceptableinput)*

**Returns:** *boolean*

___

###  hasFocus

▸ **hasFocus**(): *boolean*

*Inherited from [QMenu](qmenu.md).[hasFocus](qmenu.md#hasfocus)*

**Returns:** *boolean*

___

###  hasFrame

▸ **hasFrame**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[hasFrame](qabstractspinbox.md#hasframe)*

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

###  isAccelerated

▸ **isAccelerated**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[isAccelerated](qabstractspinbox.md#isaccelerated)*

**Returns:** *boolean*

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

###  isGroupSeparatorShown

▸ **isGroupSeparatorShown**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[isGroupSeparatorShown](qabstractspinbox.md#isgroupseparatorshown)*

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

###  isReadOnly

▸ **isReadOnly**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[isReadOnly](qabstractspinbox.md#isreadonly)*

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

###  keyboardTracking

▸ **keyboardTracking**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[keyboardTracking](qabstractspinbox.md#keyboardtracking)*

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

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Returns:** *[QLayout](qlayout.md) | null*

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

###  maximum

▸ **maximum**(): *number*

**Returns:** *number*

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

###  maximumWidth

▸ **maximumWidth**(): *number*

*Inherited from [QMenu](qmenu.md).[maximumWidth](qmenu.md#maximumwidth)*

**Returns:** *number*

___

###  minimum

▸ **minimum**(): *number*

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

###  prefix

▸ **prefix**(): *string*

**Returns:** *string*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QSpinBoxSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QSpinBoxSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QSpinBoxSignals[SignalType] |
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

###  selectAll

▸ **selectAll**(): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[selectAll](qabstractspinbox.md#selectall)*

**Returns:** *void*

___

###  setAccelerated

▸ **setAccelerated**(`on`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setAccelerated](qabstractspinbox.md#setaccelerated)*

**Parameters:**

Name | Type |
------ | ------ |
`on` | boolean |

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

###  setAlignment

▸ **setAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setAlignment](qabstractspinbox.md#setalignment)*

**Parameters:**

Name | Type |
------ | ------ |
`alignment` | [AlignmentFlag](../enums/alignmentflag.md) |

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

###  setBaseSize

▸ **setBaseSize**(`size`: [QSize](qsize.md)): *void*

*Inherited from [QMenu](qmenu.md).[setBaseSize](qmenu.md#setbasesize)*

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setButtonSymbols

▸ **setButtonSymbols**(`bs`: [ButtonSymbols](../enums/buttonsymbols.md)): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setButtonSymbols](qabstractspinbox.md#setbuttonsymbols)*

**Parameters:**

Name | Type |
------ | ------ |
`bs` | [ButtonSymbols](../enums/buttonsymbols.md) |

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

###  setCorrectionMode

▸ **setCorrectionMode**(`cm`: [CorrectionMode](../enums/correctionmode.md)): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setCorrectionMode](qabstractspinbox.md#setcorrectionmode)*

**Parameters:**

Name | Type |
------ | ------ |
`cm` | [CorrectionMode](../enums/correctionmode.md) |

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

###  setDisabled

▸ **setDisabled**(`disable`: boolean): *void*

*Inherited from [QMenu](qmenu.md).[setDisabled](qmenu.md#setdisabled)*

**Parameters:**

Name | Type |
------ | ------ |
`disable` | boolean |

**Returns:** *void*

___

###  setDisplayIntegerBase

▸ **setDisplayIntegerBase**(`base`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`base` | number |

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

###  setFrame

▸ **setFrame**(`enable`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setFrame](qabstractspinbox.md#setframe)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

###  setGroupSeparatorShown

▸ **setGroupSeparatorShown**(`shown`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setGroupSeparatorShown](qabstractspinbox.md#setgroupseparatorshown)*

**Parameters:**

Name | Type |
------ | ------ |
`shown` | boolean |

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

###  setKeyboardTracking

▸ **setKeyboardTracking**(`kt`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setKeyboardTracking](qabstractspinbox.md#setkeyboardtracking)*

**Parameters:**

Name | Type |
------ | ------ |
`kt` | boolean |

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

###  setMaximum

▸ **setMaximum**(`max`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`max` | number |

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

###  setMinimum

▸ **setMinimum**(`min`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`min` | number |

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

###  setPrefix

▸ **setPrefix**(`prefix`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`prefix` | string |

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

###  setRange

▸ **setRange**(`minimum`: number, `maximum`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`minimum` | number |
`maximum` | number |

**Returns:** *void*

___

###  setReadOnly

▸ **setReadOnly**(`r`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setReadOnly](qabstractspinbox.md#setreadonly)*

**Parameters:**

Name | Type |
------ | ------ |
`r` | boolean |

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

###  setSingleStep

▸ **setSingleStep**(`val`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`val` | number |

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

###  setSpecialValueText

▸ **setSpecialValueText**(`txt`: string): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setSpecialValueText](qabstractspinbox.md#setspecialvaluetext)*

**Parameters:**

Name | Type |
------ | ------ |
`txt` | string |

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

###  setStepType

▸ **setStepType**(`stepType`: [StepType](../enums/steptype.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`stepType` | [StepType](../enums/steptype.md) |

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

###  setSuffix

▸ **setSuffix**(`suffix`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`suffix` | string |

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

###  setValue

▸ **setValue**(`val`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`val` | number |

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

###  setWrapping

▸ **setWrapping**(`w`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setWrapping](qabstractspinbox.md#setwrapping)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | boolean |

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

**Returns:** *number*

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

###  sizeIncrement

▸ **sizeIncrement**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[sizeIncrement](qmenu.md#sizeincrement)*

**Returns:** *[QSize](qsize.md)*

___

###  specialValueText

▸ **specialValueText**(): *string*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[specialValueText](qabstractspinbox.md#specialvaluetext)*

**Returns:** *string*

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

###  stepDown

▸ **stepDown**(): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[stepDown](qabstractspinbox.md#stepdown)*

**Returns:** *void*

___

###  stepType

▸ **stepType**(): *[StepType](../enums/steptype.md)*

**Returns:** *[StepType](../enums/steptype.md)*

___

###  stepUp

▸ **stepUp**(): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[stepUp](qabstractspinbox.md#stepup)*

**Returns:** *void*

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

###  suffix

▸ **suffix**(): *string*

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

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[text](qabstractspinbox.md#text)*

**Returns:** *string*

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

▸ **update**(): *void*

*Inherited from [QMenu](qmenu.md).[update](qmenu.md#update)*

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

###  value

▸ **value**(): *number*

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

###  wrapping

▸ **wrapping**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[wrapping](qabstractspinbox.md#wrapping)*

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
