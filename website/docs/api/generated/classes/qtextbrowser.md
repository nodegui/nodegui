---
id: "qtextbrowser"
title: "QTextBrowser"
sidebar_label: "QTextBrowser"
---

> Create and control text browser.

**This class is a JS wrapper around Qt's [QTextBrowser class](https://doc.qt.io/qt-5/qtextbrowser.html)**

A `QTextBrowser` provides ability to add and manipulate native text browser widgets.

### Example

```javascript
const { QTextBrowser } = require("@nodegui/nodegui");

const textBrowser = new QTextBrowser();
```

## Hierarchy

  ↳ [QTextEdit](qtextedit.md)‹[QTextBrowserSignals](../interfaces/qtextbrowsersignals.md)›

  ↳ **QTextBrowser**

## Index

### Constructors

* [constructor](qtextbrowser.md#constructor)

### Properties

* [_rawInlineStyle](qtextbrowser.md#_rawinlinestyle)
* [native](qtextbrowser.md#native)
* [type](qtextbrowser.md#type)

### Methods

* [_id](qtextbrowser.md#_id)
* [acceptDrops](qtextbrowser.md#acceptdrops)
* [acceptRichText](qtextbrowser.md#acceptrichtext)
* [accessibleDescription](qtextbrowser.md#accessibledescription)
* [accessibleName](qtextbrowser.md#accessiblename)
* [activateWindow](qtextbrowser.md#activatewindow)
* [addAction](qtextbrowser.md#addaction)
* [addEventListener](qtextbrowser.md#addeventlistener)
* [adjustSize](qtextbrowser.md#adjustsize)
* [alignment](qtextbrowser.md#alignment)
* [append](qtextbrowser.md#append)
* [autoFillBackground](qtextbrowser.md#autofillbackground)
* [autoFormatting](qtextbrowser.md#autoformatting)
* [backward](qtextbrowser.md#backward)
* [backwardHistoryCount](qtextbrowser.md#backwardhistorycount)
* [baseSize](qtextbrowser.md#basesize)
* [canPaste](qtextbrowser.md#canpaste)
* [childAt](qtextbrowser.md#childat)
* [children](qtextbrowser.md#children)
* [childrenRect](qtextbrowser.md#childrenrect)
* [clear](qtextbrowser.md#clear)
* [clearFocus](qtextbrowser.md#clearfocus)
* [clearHistory](qtextbrowser.md#clearhistory)
* [clearMask](qtextbrowser.md#clearmask)
* [close](qtextbrowser.md#close)
* [colorCount](qtextbrowser.md#colorcount)
* [contentsRect](qtextbrowser.md#contentsrect)
* [contextMenuPolicy](qtextbrowser.md#contextmenupolicy)
* [copy](qtextbrowser.md#copy)
* [currentFont](qtextbrowser.md#currentfont)
* [cursorWidth](qtextbrowser.md#cursorwidth)
* [cut](qtextbrowser.md#cut)
* [delete](qtextbrowser.md#delete)
* [deleteLater](qtextbrowser.md#deletelater)
* [depth](qtextbrowser.md#depth)
* [devicePixelRatio](qtextbrowser.md#devicepixelratio)
* [devicePixelRatioF](qtextbrowser.md#devicepixelratiof)
* [documentTitle](qtextbrowser.md#documenttitle)
* [dumpObjectInfo](qtextbrowser.md#dumpobjectinfo)
* [dumpObjectTree](qtextbrowser.md#dumpobjecttree)
* [ensureCursorVisible](qtextbrowser.md#ensurecursorvisible)
* [ensurePolished](qtextbrowser.md#ensurepolished)
* [eventProcessed](qtextbrowser.md#eventprocessed)
* [focusProxy](qtextbrowser.md#focusproxy)
* [focusWidget](qtextbrowser.md#focuswidget)
* [font](qtextbrowser.md#font)
* [fontFamily](qtextbrowser.md#fontfamily)
* [fontItalic](qtextbrowser.md#fontitalic)
* [fontPointSize](qtextbrowser.md#fontpointsize)
* [fontUnderline](qtextbrowser.md#fontunderline)
* [fontWeight](qtextbrowser.md#fontweight)
* [forward](qtextbrowser.md#forward)
* [forwardHistoryCount](qtextbrowser.md#forwardhistorycount)
* [frameGeometry](qtextbrowser.md#framegeometry)
* [frameRect](qtextbrowser.md#framerect)
* [frameShadow](qtextbrowser.md#frameshadow)
* [frameShape](qtextbrowser.md#frameshape)
* [frameSize](qtextbrowser.md#framesize)
* [frameStyle](qtextbrowser.md#framestyle)
* [frameWidth](qtextbrowser.md#framewidth)
* [geometry](qtextbrowser.md#geometry)
* [getFlexNode](qtextbrowser.md#getflexnode)
* [grab](qtextbrowser.md#grab)
* [grabKeyboard](qtextbrowser.md#grabkeyboard)
* [grabMouse](qtextbrowser.md#grabmouse)
* [hasFocus](qtextbrowser.md#hasfocus)
* [hasHeightForWidth](qtextbrowser.md#hasheightforwidth)
* [hasMouseTracking](qtextbrowser.md#hasmousetracking)
* [hasTabletTracking](qtextbrowser.md#hastablettracking)
* [height](qtextbrowser.md#height)
* [heightForWidth](qtextbrowser.md#heightforwidth)
* [heightMM](qtextbrowser.md#heightmm)
* [hide](qtextbrowser.md#hide)
* [historyTitle](qtextbrowser.md#historytitle)
* [historyUrl](qtextbrowser.md#historyurl)
* [home](qtextbrowser.md#home)
* [horizontalScrollBar](qtextbrowser.md#horizontalscrollbar)
* [inherits](qtextbrowser.md#inherits)
* [inputMethodHints](qtextbrowser.md#inputmethodhints)
* [insertHtml](qtextbrowser.md#inserthtml)
* [insertPlainText](qtextbrowser.md#insertplaintext)
* [isActiveWindow](qtextbrowser.md#isactivewindow)
* [isAncestorOf](qtextbrowser.md#isancestorof)
* [isBackwardAvailable](qtextbrowser.md#isbackwardavailable)
* [isEnabled](qtextbrowser.md#isenabled)
* [isEnabledTo](qtextbrowser.md#isenabledto)
* [isForwardAvailable](qtextbrowser.md#isforwardavailable)
* [isFullScreen](qtextbrowser.md#isfullscreen)
* [isHidden](qtextbrowser.md#ishidden)
* [isMaximized](qtextbrowser.md#ismaximized)
* [isMinimized](qtextbrowser.md#isminimized)
* [isModal](qtextbrowser.md#ismodal)
* [isReadOnly](qtextbrowser.md#isreadonly)
* [isUndoRedoEnabled](qtextbrowser.md#isundoredoenabled)
* [isVisible](qtextbrowser.md#isvisible)
* [isVisibleTo](qtextbrowser.md#isvisibleto)
* [isWindow](qtextbrowser.md#iswindow)
* [isWindowModified](qtextbrowser.md#iswindowmodified)
* [killTimer](qtextbrowser.md#killtimer)
* [layout](qtextbrowser.md#layout)
* [lineWidth](qtextbrowser.md#linewidth)
* [lineWrapColumnOrWidth](qtextbrowser.md#linewrapcolumnorwidth)
* [lineWrapMode](qtextbrowser.md#linewrapmode)
* [logicalDpiX](qtextbrowser.md#logicaldpix)
* [logicalDpiY](qtextbrowser.md#logicaldpiy)
* [lower](qtextbrowser.md#lower)
* [mapFrom](qtextbrowser.md#mapfrom)
* [mapFromGlobal](qtextbrowser.md#mapfromglobal)
* [mapFromParent](qtextbrowser.md#mapfromparent)
* [mapTo](qtextbrowser.md#mapto)
* [mapToGlobal](qtextbrowser.md#maptoglobal)
* [mapToParent](qtextbrowser.md#maptoparent)
* [maximumHeight](qtextbrowser.md#maximumheight)
* [maximumSize](qtextbrowser.md#maximumsize)
* [maximumViewportSize](qtextbrowser.md#maximumviewportsize)
* [maximumWidth](qtextbrowser.md#maximumwidth)
* [midLineWidth](qtextbrowser.md#midlinewidth)
* [minimumHeight](qtextbrowser.md#minimumheight)
* [minimumSize](qtextbrowser.md#minimumsize)
* [minimumSizeHint](qtextbrowser.md#minimumsizehint)
* [minimumWidth](qtextbrowser.md#minimumwidth)
* [move](qtextbrowser.md#move)
* [nativeParentWidget](qtextbrowser.md#nativeparentwidget)
* [nextInFocusChain](qtextbrowser.md#nextinfocuschain)
* [normalGeometry](qtextbrowser.md#normalgeometry)
* [objectName](qtextbrowser.md#objectname)
* [openExternalLinks](qtextbrowser.md#openexternallinks)
* [openLinks](qtextbrowser.md#openlinks)
* [overwriteMode](qtextbrowser.md#overwritemode)
* [paintingActive](qtextbrowser.md#paintingactive)
* [parent](qtextbrowser.md#parent)
* [parentWidget](qtextbrowser.md#parentwidget)
* [paste](qtextbrowser.md#paste)
* [physicalDpiX](qtextbrowser.md#physicaldpix)
* [physicalDpiY](qtextbrowser.md#physicaldpiy)
* [placeholderText](qtextbrowser.md#placeholdertext)
* [pos](qtextbrowser.md#pos)
* [previousInFocusChain](qtextbrowser.md#previousinfocuschain)
* [property](qtextbrowser.md#property)
* [raise](qtextbrowser.md#raise)
* [rect](qtextbrowser.md#rect)
* [redo](qtextbrowser.md#redo)
* [releaseKeyboard](qtextbrowser.md#releasekeyboard)
* [releaseMouse](qtextbrowser.md#releasemouse)
* [releaseShortcut](qtextbrowser.md#releaseshortcut)
* [reload](qtextbrowser.md#reload)
* [removeAction](qtextbrowser.md#removeaction)
* [removeEventListener](qtextbrowser.md#removeeventlistener)
* [repaint](qtextbrowser.md#repaint)
* [repolish](qtextbrowser.md#repolish)
* [resize](qtextbrowser.md#resize)
* [scrollToAnchor](qtextbrowser.md#scrolltoanchor)
* [selectAll](qtextbrowser.md#selectall)
* [setAcceptDrops](qtextbrowser.md#setacceptdrops)
* [setAcceptRichText](qtextbrowser.md#setacceptrichtext)
* [setAccessibleDescription](qtextbrowser.md#setaccessibledescription)
* [setAccessibleName](qtextbrowser.md#setaccessiblename)
* [setAlignment](qtextbrowser.md#setalignment)
* [setAttribute](qtextbrowser.md#setattribute)
* [setAutoFillBackground](qtextbrowser.md#setautofillbackground)
* [setAutoFormatting](qtextbrowser.md#setautoformatting)
* [setBaseSize](qtextbrowser.md#setbasesize)
* [setContentsMargins](qtextbrowser.md#setcontentsmargins)
* [setContextMenuPolicy](qtextbrowser.md#setcontextmenupolicy)
* [setCurrentFont](qtextbrowser.md#setcurrentfont)
* [setCursor](qtextbrowser.md#setcursor)
* [setCursorWidth](qtextbrowser.md#setcursorwidth)
* [setDisabled](qtextbrowser.md#setdisabled)
* [setDocumentTitle](qtextbrowser.md#setdocumenttitle)
* [setEnabled](qtextbrowser.md#setenabled)
* [setEventProcessed](qtextbrowser.md#seteventprocessed)
* [setFixedHeight](qtextbrowser.md#setfixedheight)
* [setFixedSize](qtextbrowser.md#setfixedsize)
* [setFixedWidth](qtextbrowser.md#setfixedwidth)
* [setFlexNodeSizeControlled](qtextbrowser.md#setflexnodesizecontrolled)
* [setFocus](qtextbrowser.md#setfocus)
* [setFocusPolicy](qtextbrowser.md#setfocuspolicy)
* [setFocusProxy](qtextbrowser.md#setfocusproxy)
* [setFont](qtextbrowser.md#setfont)
* [setFontFamily](qtextbrowser.md#setfontfamily)
* [setFontItalic](qtextbrowser.md#setfontitalic)
* [setFontPointSize](qtextbrowser.md#setfontpointsize)
* [setFontUnderline](qtextbrowser.md#setfontunderline)
* [setFontWeight](qtextbrowser.md#setfontweight)
* [setFrameRect](qtextbrowser.md#setframerect)
* [setFrameShadow](qtextbrowser.md#setframeshadow)
* [setFrameShape](qtextbrowser.md#setframeshape)
* [setFrameStyle](qtextbrowser.md#setframestyle)
* [setGeometry](qtextbrowser.md#setgeometry)
* [setGraphicsEffect](qtextbrowser.md#setgraphicseffect)
* [setHidden](qtextbrowser.md#sethidden)
* [setHorizontalScrollBar](qtextbrowser.md#sethorizontalscrollbar)
* [setHorizontalScrollBarPolicy](qtextbrowser.md#sethorizontalscrollbarpolicy)
* [setHtml](qtextbrowser.md#sethtml)
* [setInlineStyle](qtextbrowser.md#setinlinestyle)
* [setInputMethodHints](qtextbrowser.md#setinputmethodhints)
* [setLayout](qtextbrowser.md#setlayout)
* [setLineWidth](qtextbrowser.md#setlinewidth)
* [setLineWrapColumnOrWidth](qtextbrowser.md#setlinewrapcolumnorwidth)
* [setLineWrapMode](qtextbrowser.md#setlinewrapmode)
* [setMaximumHeight](qtextbrowser.md#setmaximumheight)
* [setMaximumSize](qtextbrowser.md#setmaximumsize)
* [setMaximumWidth](qtextbrowser.md#setmaximumwidth)
* [setMidLineWidth](qtextbrowser.md#setmidlinewidth)
* [setMinimumHeight](qtextbrowser.md#setminimumheight)
* [setMinimumSize](qtextbrowser.md#setminimumsize)
* [setMinimumWidth](qtextbrowser.md#setminimumwidth)
* [setMouseTracking](qtextbrowser.md#setmousetracking)
* [setObjectName](qtextbrowser.md#setobjectname)
* [setOpenExternalLinks](qtextbrowser.md#setopenexternallinks)
* [setOpenLinks](qtextbrowser.md#setopenlinks)
* [setOverwriteMode](qtextbrowser.md#setoverwritemode)
* [setParent](qtextbrowser.md#setparent)
* [setPlaceholderText](qtextbrowser.md#setplaceholdertext)
* [setPlainText](qtextbrowser.md#setplaintext)
* [setProperty](qtextbrowser.md#setproperty)
* [setReadOnly](qtextbrowser.md#setreadonly)
* [setShortcutAutoRepeat](qtextbrowser.md#setshortcutautorepeat)
* [setShortcutEnabled](qtextbrowser.md#setshortcutenabled)
* [setSizeIncrement](qtextbrowser.md#setsizeincrement)
* [setSizePolicy](qtextbrowser.md#setsizepolicy)
* [setSource](qtextbrowser.md#setsource)
* [setStatusTip](qtextbrowser.md#setstatustip)
* [setStyleSheet](qtextbrowser.md#setstylesheet)
* [setTabChangesFocus](qtextbrowser.md#settabchangesfocus)
* [setTabStopDistance](qtextbrowser.md#settabstopdistance)
* [setTabletTracking](qtextbrowser.md#settablettracking)
* [setText](qtextbrowser.md#settext)
* [setTextBackgroundColor](qtextbrowser.md#settextbackgroundcolor)
* [setTextColor](qtextbrowser.md#settextcolor)
* [setTextInteractionFlags](qtextbrowser.md#settextinteractionflags)
* [setToolTip](qtextbrowser.md#settooltip)
* [setToolTipDuration](qtextbrowser.md#settooltipduration)
* [setUndoRedoEnabled](qtextbrowser.md#setundoredoenabled)
* [setUpdatesEnabled](qtextbrowser.md#setupdatesenabled)
* [setVerticalScrollBar](qtextbrowser.md#setverticalscrollbar)
* [setVerticalScrollBarPolicy](qtextbrowser.md#setverticalscrollbarpolicy)
* [setViewport](qtextbrowser.md#setviewport)
* [setVisible](qtextbrowser.md#setvisible)
* [setWhatsThis](qtextbrowser.md#setwhatsthis)
* [setWindowFilePath](qtextbrowser.md#setwindowfilepath)
* [setWindowFlag](qtextbrowser.md#setwindowflag)
* [setWindowIcon](qtextbrowser.md#setwindowicon)
* [setWindowModified](qtextbrowser.md#setwindowmodified)
* [setWindowOpacity](qtextbrowser.md#setwindowopacity)
* [setWindowRole](qtextbrowser.md#setwindowrole)
* [setWindowState](qtextbrowser.md#setwindowstate)
* [setWindowTitle](qtextbrowser.md#setwindowtitle)
* [setWordWrapMode](qtextbrowser.md#setwordwrapmode)
* [show](qtextbrowser.md#show)
* [showFullScreen](qtextbrowser.md#showfullscreen)
* [showMaximized](qtextbrowser.md#showmaximized)
* [showMinimized](qtextbrowser.md#showminimized)
* [showNormal](qtextbrowser.md#shownormal)
* [size](qtextbrowser.md#size)
* [sizeHint](qtextbrowser.md#sizehint)
* [sizeIncrement](qtextbrowser.md#sizeincrement)
* [source](qtextbrowser.md#source)
* [stackUnder](qtextbrowser.md#stackunder)
* [startTimer](qtextbrowser.md#starttimer)
* [statusTip](qtextbrowser.md#statustip)
* [style](qtextbrowser.md#style)
* [styleSheet](qtextbrowser.md#stylesheet)
* [tabChangesFocus](qtextbrowser.md#tabchangesfocus)
* [tabStopDistance](qtextbrowser.md#tabstopdistance)
* [testAttribute](qtextbrowser.md#testattribute)
* [textInteractionFlags](qtextbrowser.md#textinteractionflags)
* [toHtml](qtextbrowser.md#tohtml)
* [toPlainText](qtextbrowser.md#toplaintext)
* [toolTip](qtextbrowser.md#tooltip)
* [toolTipDuration](qtextbrowser.md#tooltipduration)
* [underMouse](qtextbrowser.md#undermouse)
* [undo](qtextbrowser.md#undo)
* [unsetCursor](qtextbrowser.md#unsetcursor)
* [unsetLayoutDirection](qtextbrowser.md#unsetlayoutdirection)
* [unsetLocale](qtextbrowser.md#unsetlocale)
* [update](qtextbrowser.md#update)
* [updateGeometry](qtextbrowser.md#updategeometry)
* [updateMicroFocus](qtextbrowser.md#updatemicrofocus)
* [updatesEnabled](qtextbrowser.md#updatesenabled)
* [verticalScrollBar](qtextbrowser.md#verticalscrollbar)
* [viewport](qtextbrowser.md#viewport)
* [whatsThis](qtextbrowser.md#whatsthis)
* [width](qtextbrowser.md#width)
* [widthMM](qtextbrowser.md#widthmm)
* [winId](qtextbrowser.md#winid)
* [window](qtextbrowser.md#window)
* [windowFilePath](qtextbrowser.md#windowfilepath)
* [windowHandle](qtextbrowser.md#windowhandle)
* [windowIcon](qtextbrowser.md#windowicon)
* [windowOpacity](qtextbrowser.md#windowopacity)
* [windowRole](qtextbrowser.md#windowrole)
* [windowState](qtextbrowser.md#windowstate)
* [windowTitle](qtextbrowser.md#windowtitle)
* [wordWrapMode](qtextbrowser.md#wordwrapmode)
* [x](qtextbrowser.md#x)
* [y](qtextbrowser.md#y)
* [zommIn](qtextbrowser.md#zommin)
* [zoomOut](qtextbrowser.md#zoomout)

## Constructors

###  constructor

\+ **new QTextBrowser**(`arg?`: [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› | [NativeElement](../globals.md#nativeelement)): *[QTextBrowser](qtextbrowser.md)*

*Overrides [QTextEdit](qtextedit.md).[constructor](qtextedit.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`arg?` | [QWidget](qwidget.md)‹[QWidgetSignals](../interfaces/qwidgetsignals.md)› &#124; [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QTextBrowser](qtextbrowser.md)*

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

###  acceptRichText

▸ **acceptRichText**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[acceptRichText](qtextedit.md#acceptrichtext)*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTextBrowserSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextBrowserSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTextBrowserSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |
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

*Inherited from [QTextEdit](qtextedit.md).[alignment](qtextedit.md#alignment)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  append

▸ **append**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[append](qtextedit.md#append)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  autoFillBackground

▸ **autoFillBackground**(): *boolean*

*Inherited from [QMenu](qmenu.md).[autoFillBackground](qmenu.md#autofillbackground)*

**Returns:** *boolean*

___

###  autoFormatting

▸ **autoFormatting**(): *[AutoFormattingFlag](../enums/autoformattingflag.md)*

*Inherited from [QTextEdit](qtextedit.md).[autoFormatting](qtextedit.md#autoformatting)*

**Returns:** *[AutoFormattingFlag](../enums/autoformattingflag.md)*

___

###  backward

▸ **backward**(): *void*

**Returns:** *void*

___

###  backwardHistoryCount

▸ **backwardHistoryCount**(): *number*

**Returns:** *number*

___

###  baseSize

▸ **baseSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[baseSize](qmenu.md#basesize)*

**Returns:** *[QSize](qsize.md)*

___

###  canPaste

▸ **canPaste**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[canPaste](qtextedit.md#canpaste)*

**Returns:** *boolean*

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

*Inherited from [QTextEdit](qtextedit.md).[clear](qtextedit.md#clear)*

**Returns:** *void*

___

###  clearFocus

▸ **clearFocus**(): *void*

*Inherited from [QMenu](qmenu.md).[clearFocus](qmenu.md#clearfocus)*

**Returns:** *void*

___

###  clearHistory

▸ **clearHistory**(): *void*

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

###  copy

▸ **copy**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[copy](qtextedit.md#copy)*

**Returns:** *void*

___

###  currentFont

▸ **currentFont**(): *[QFont](qfont.md)*

*Inherited from [QTextEdit](qtextedit.md).[currentFont](qtextedit.md#currentfont)*

**Returns:** *[QFont](qfont.md)*

___

###  cursorWidth

▸ **cursorWidth**(): *number*

*Inherited from [QTextEdit](qtextedit.md).[cursorWidth](qtextedit.md#cursorwidth)*

**Returns:** *number*

___

###  cut

▸ **cut**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[cut](qtextedit.md#cut)*

**Returns:** *void*

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

###  documentTitle

▸ **documentTitle**(): *string*

*Inherited from [QTextEdit](qtextedit.md).[documentTitle](qtextedit.md#documenttitle)*

**Returns:** *string*

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

###  ensureCursorVisible

▸ **ensureCursorVisible**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[ensureCursorVisible](qtextedit.md#ensurecursorvisible)*

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

###  fontFamily

▸ **fontFamily**(): *string*

*Inherited from [QTextEdit](qtextedit.md).[fontFamily](qtextedit.md#fontfamily)*

**Returns:** *string*

___

###  fontItalic

▸ **fontItalic**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[fontItalic](qtextedit.md#fontitalic)*

**Returns:** *boolean*

___

###  fontPointSize

▸ **fontPointSize**(): *number*

*Inherited from [QTextEdit](qtextedit.md).[fontPointSize](qtextedit.md#fontpointsize)*

**Returns:** *number*

___

###  fontUnderline

▸ **fontUnderline**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[fontUnderline](qtextedit.md#fontunderline)*

**Returns:** *boolean*

___

###  fontWeight

▸ **fontWeight**(): *number*

*Inherited from [QTextEdit](qtextedit.md).[fontWeight](qtextedit.md#fontweight)*

**Returns:** *number*

___

###  forward

▸ **forward**(): *void*

**Returns:** *void*

___

###  forwardHistoryCount

▸ **forwardHistoryCount**(): *number*

**Returns:** *number*

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

###  historyTitle

▸ **historyTitle**(`i`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`i` | number |

**Returns:** *string*

___

###  historyUrl

▸ **historyUrl**(): *[QUrl](qurl.md)*

**Returns:** *[QUrl](qurl.md)*

___

###  home

▸ **home**(): *void*

**Returns:** *void*

___

###  horizontalScrollBar

▸ **horizontalScrollBar**(): *[QScrollBar](qscrollbar.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[horizontalScrollBar](qabstractscrollarea.md#horizontalscrollbar)*

**Returns:** *[QScrollBar](qscrollbar.md)*

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

###  insertHtml

▸ **insertHtml**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[insertHtml](qtextedit.md#inserthtml)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  insertPlainText

▸ **insertPlainText**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[insertPlainText](qtextedit.md#insertplaintext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  isBackwardAvailable

▸ **isBackwardAvailable**(): *boolean*

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

###  isForwardAvailable

▸ **isForwardAvailable**(): *boolean*

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

###  isReadOnly

▸ **isReadOnly**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[isReadOnly](qtextedit.md#isreadonly)*

**Returns:** *boolean*

___

###  isUndoRedoEnabled

▸ **isUndoRedoEnabled**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[isUndoRedoEnabled](qtextedit.md#isundoredoenabled)*

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

###  lineWrapColumnOrWidth

▸ **lineWrapColumnOrWidth**(): *number*

*Inherited from [QTextEdit](qtextedit.md).[lineWrapColumnOrWidth](qtextedit.md#linewrapcolumnorwidth)*

**Returns:** *number*

___

###  lineWrapMode

▸ **lineWrapMode**(): *[QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)*

*Inherited from [QTextEdit](qtextedit.md).[lineWrapMode](qtextedit.md#linewrapmode)*

**Returns:** *[QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)*

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

###  openExternalLinks

▸ **openExternalLinks**(): *boolean*

**Returns:** *boolean*

___

###  openLinks

▸ **openLinks**(): *boolean*

**Returns:** *boolean*

___

###  overwriteMode

▸ **overwriteMode**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[overwriteMode](qtextedit.md#overwritemode)*

**Returns:** *boolean*

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

###  paste

▸ **paste**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[paste](qtextedit.md#paste)*

**Returns:** *void*

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

###  placeholderText

▸ **placeholderText**(): *string*

*Inherited from [QTextEdit](qtextedit.md).[placeholderText](qtextedit.md#placeholdertext)*

**Returns:** *string*

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

###  redo

▸ **redo**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[redo](qtextedit.md#redo)*

**Returns:** *void*

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

###  reload

▸ **reload**(): *void*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTextBrowserSignals[SignalType], `options?`: [EventListenerOptions](../interfaces/eventlisteneroptions.md)): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextBrowserSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTextBrowserSignals[SignalType] |
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

###  scrollToAnchor

▸ **scrollToAnchor**(`name`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[scrollToAnchor](qtextedit.md#scrolltoanchor)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *void*

___

###  selectAll

▸ **selectAll**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[selectAll](qtextedit.md#selectall)*

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

###  setAcceptRichText

▸ **setAcceptRichText**(`accept`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setAcceptRichText](qtextedit.md#setacceptrichtext)*

**Parameters:**

Name | Type |
------ | ------ |
`accept` | boolean |

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

*Inherited from [QTextEdit](qtextedit.md).[setAlignment](qtextedit.md#setalignment)*

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

###  setAutoFormatting

▸ **setAutoFormatting**(`features`: [AutoFormattingFlag](../enums/autoformattingflag.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setAutoFormatting](qtextedit.md#setautoformatting)*

**Parameters:**

Name | Type |
------ | ------ |
`features` | [AutoFormattingFlag](../enums/autoformattingflag.md) |

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

###  setCurrentFont

▸ **setCurrentFont**(`f`: [QFont](qfont.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setCurrentFont](qtextedit.md#setcurrentfont)*

**Parameters:**

Name | Type |
------ | ------ |
`f` | [QFont](qfont.md) |

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

###  setCursorWidth

▸ **setCursorWidth**(`width`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[setCursorWidth](qtextedit.md#setcursorwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

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

###  setDocumentTitle

▸ **setDocumentTitle**(`title`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setDocumentTitle](qtextedit.md#setdocumenttitle)*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |

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

###  setFontFamily

▸ **setFontFamily**(`family`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setFontFamily](qtextedit.md#setfontfamily)*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |

**Returns:** *void*

___

###  setFontItalic

▸ **setFontItalic**(`italic`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setFontItalic](qtextedit.md#setfontitalic)*

**Parameters:**

Name | Type |
------ | ------ |
`italic` | boolean |

**Returns:** *void*

___

###  setFontPointSize

▸ **setFontPointSize**(`s`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[setFontPointSize](qtextedit.md#setfontpointsize)*

**Parameters:**

Name | Type |
------ | ------ |
`s` | number |

**Returns:** *void*

___

###  setFontUnderline

▸ **setFontUnderline**(`underline`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setFontUnderline](qtextedit.md#setfontunderline)*

**Parameters:**

Name | Type |
------ | ------ |
`underline` | boolean |

**Returns:** *void*

___

###  setFontWeight

▸ **setFontWeight**(`weight`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[setFontWeight](qtextedit.md#setfontweight)*

**Parameters:**

Name | Type |
------ | ------ |
`weight` | number |

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

###  setHtml

▸ **setHtml**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setHtml](qtextedit.md#sethtml)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  setLineWrapColumnOrWidth

▸ **setLineWrapColumnOrWidth**(`w`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[setLineWrapColumnOrWidth](qtextedit.md#setlinewrapcolumnorwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

**Returns:** *void*

___

###  setLineWrapMode

▸ **setLineWrapMode**(`mode`: [QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setLineWrapMode](qtextedit.md#setlinewrapmode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md) |

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

###  setOpenExternalLinks

▸ **setOpenExternalLinks**(`open`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`open` | boolean |

**Returns:** *void*

___

###  setOpenLinks

▸ **setOpenLinks**(`open`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`open` | boolean |

**Returns:** *void*

___

###  setOverwriteMode

▸ **setOverwriteMode**(`overwrite`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setOverwriteMode](qtextedit.md#setoverwritemode)*

**Parameters:**

Name | Type |
------ | ------ |
`overwrite` | boolean |

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

###  setPlaceholderText

▸ **setPlaceholderText**(`placeholderText`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setPlaceholderText](qtextedit.md#setplaceholdertext)*

**Parameters:**

Name | Type |
------ | ------ |
`placeholderText` | string |

**Returns:** *void*

___

###  setPlainText

▸ **setPlainText**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setPlainText](qtextedit.md#setplaintext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  setReadOnly

▸ **setReadOnly**(`ro`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setReadOnly](qtextedit.md#setreadonly)*

**Parameters:**

Name | Type |
------ | ------ |
`ro` | boolean |

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

###  setSource

▸ **setSource**(`name`: [QUrl](qurl.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`name` | [QUrl](qurl.md) |

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

###  setTabChangesFocus

▸ **setTabChangesFocus**(`b`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setTabChangesFocus](qtextedit.md#settabchangesfocus)*

**Parameters:**

Name | Type |
------ | ------ |
`b` | boolean |

**Returns:** *void*

___

###  setTabStopDistance

▸ **setTabStopDistance**(`distance`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[setTabStopDistance](qtextedit.md#settabstopdistance)*

**Parameters:**

Name | Type |
------ | ------ |
`distance` | number |

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

###  setText

▸ **setText**(`text`: string): *void*

*Inherited from [QTextEdit](qtextedit.md).[setText](qtextedit.md#settext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setTextBackgroundColor

▸ **setTextBackgroundColor**(`color`: [QColor](qcolor.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setTextBackgroundColor](qtextedit.md#settextbackgroundcolor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextColor

▸ **setTextColor**(`color`: [QColor](qcolor.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setTextColor](qtextedit.md#settextcolor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextInteractionFlags

▸ **setTextInteractionFlags**(`flags`: [TextInteractionFlag](../enums/textinteractionflag.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setTextInteractionFlags](qtextedit.md#settextinteractionflags)*

**Parameters:**

Name | Type |
------ | ------ |
`flags` | [TextInteractionFlag](../enums/textinteractionflag.md) |

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

###  setUndoRedoEnabled

▸ **setUndoRedoEnabled**(`enable`: boolean): *void*

*Inherited from [QTextEdit](qtextedit.md).[setUndoRedoEnabled](qtextedit.md#setundoredoenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

###  setWordWrapMode

▸ **setWordWrapMode**(`policy`: [WrapMode](../enums/wrapmode.md)): *void*

*Inherited from [QTextEdit](qtextedit.md).[setWordWrapMode](qtextedit.md#setwordwrapmode)*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [WrapMode](../enums/wrapmode.md) |

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

###  source

▸ **source**(): *[QUrl](qurl.md)*

**Returns:** *[QUrl](qurl.md)*

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

###  tabChangesFocus

▸ **tabChangesFocus**(): *boolean*

*Inherited from [QTextEdit](qtextedit.md).[tabChangesFocus](qtextedit.md#tabchangesfocus)*

**Returns:** *boolean*

___

###  tabStopDistance

▸ **tabStopDistance**(): *number*

*Inherited from [QTextEdit](qtextedit.md).[tabStopDistance](qtextedit.md#tabstopdistance)*

**Returns:** *number*

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

###  textInteractionFlags

▸ **textInteractionFlags**(): *[TextInteractionFlag](../enums/textinteractionflag.md)*

*Inherited from [QTextEdit](qtextedit.md).[textInteractionFlags](qtextedit.md#textinteractionflags)*

**Returns:** *[TextInteractionFlag](../enums/textinteractionflag.md)*

___

###  toHtml

▸ **toHtml**(): *string*

*Inherited from [QTextEdit](qtextedit.md).[toHtml](qtextedit.md#tohtml)*

**Returns:** *string*

___

###  toPlainText

▸ **toPlainText**(): *string*

*Inherited from [QTextEdit](qtextedit.md).[toPlainText](qtextedit.md#toplaintext)*

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

###  undo

▸ **undo**(): *void*

*Inherited from [QTextEdit](qtextedit.md).[undo](qtextedit.md#undo)*

**Returns:** *void*

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

###  verticalScrollBar

▸ **verticalScrollBar**(): *[QScrollBar](qscrollbar.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[verticalScrollBar](qabstractscrollarea.md#verticalscrollbar)*

**Returns:** *[QScrollBar](qscrollbar.md)*

___

###  viewport

▸ **viewport**(): *[QWidget](qwidget.md)*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewport](qabstractscrollarea.md#viewport)*

**Returns:** *[QWidget](qwidget.md)*

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

###  wordWrapMode

▸ **wordWrapMode**(): *[WrapMode](../enums/wrapmode.md)*

*Inherited from [QTextEdit](qtextedit.md).[wordWrapMode](qtextedit.md#wordwrapmode)*

**Returns:** *[WrapMode](../enums/wrapmode.md)*

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

___

###  zommIn

▸ **zommIn**(`range`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[zommIn](qtextedit.md#zommin)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*

___

###  zoomOut

▸ **zoomOut**(`range`: number): *void*

*Inherited from [QTextEdit](qtextedit.md).[zoomOut](qtextedit.md#zoomout)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*
