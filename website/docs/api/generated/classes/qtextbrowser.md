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

  ↳ [NodeTextEdit](nodetextedit.md)‹[QTextBrowserSignals](../interfaces/qtextbrowsersignals.md)›

  ↳ **QTextBrowser**

## Index

### Constructors

* [constructor](qtextbrowser.md#constructor)

### Properties

* [_rawInlineStyle](qtextbrowser.md#_rawinlinestyle)
* [actions](qtextbrowser.md#actions)
* [layout](qtextbrowser.md#optional-layout)
* [native](qtextbrowser.md#native)
* [nodeChildren](qtextbrowser.md#nodechildren)
* [nodeParent](qtextbrowser.md#optional-nodeparent)
* [type](qtextbrowser.md#type)
* [viewportWidget](qtextbrowser.md#optional-viewportwidget)

### Methods

* [acceptRichText](qtextbrowser.md#acceptrichtext)
* [activateWindow](qtextbrowser.md#activatewindow)
* [addAction](qtextbrowser.md#addaction)
* [addEventListener](qtextbrowser.md#addeventlistener)
* [adjustSize](qtextbrowser.md#adjustsize)
* [alignment](qtextbrowser.md#alignment)
* [append](qtextbrowser.md#append)
* [autoFormatting](qtextbrowser.md#autoformatting)
* [backward](qtextbrowser.md#backward)
* [backwardHistoryCount](qtextbrowser.md#backwardhistorycount)
* [canPaste](qtextbrowser.md#canpaste)
* [clear](qtextbrowser.md#clear)
* [clearHistory](qtextbrowser.md#clearhistory)
* [close](qtextbrowser.md#close)
* [copy](qtextbrowser.md#copy)
* [currentFont](qtextbrowser.md#currentfont)
* [cursorWidth](qtextbrowser.md#cursorwidth)
* [cut](qtextbrowser.md#cut)
* [documentTitle](qtextbrowser.md#documenttitle)
* [ensureCursorVisible](qtextbrowser.md#ensurecursorvisible)
* [font](qtextbrowser.md#font)
* [fontFamily](qtextbrowser.md#fontfamily)
* [fontItalic](qtextbrowser.md#fontitalic)
* [fontPointSize](qtextbrowser.md#fontpointsize)
* [fontUnderline](qtextbrowser.md#fontunderline)
* [fontWeight](qtextbrowser.md#fontweight)
* [forward](qtextbrowser.md#forward)
* [forwardHistoryCount](qtextbrowser.md#forwardhistorycount)
* [frameRect](qtextbrowser.md#framerect)
* [frameShadow](qtextbrowser.md#frameshadow)
* [frameShape](qtextbrowser.md#frameshape)
* [frameStyle](qtextbrowser.md#framestyle)
* [frameWidth](qtextbrowser.md#framewidth)
* [geometry](qtextbrowser.md#geometry)
* [getFlexNode](qtextbrowser.md#getflexnode)
* [hasMouseTracking](qtextbrowser.md#hasmousetracking)
* [hide](qtextbrowser.md#hide)
* [historyTitle](qtextbrowser.md#historytitle)
* [historyUrl](qtextbrowser.md#historyurl)
* [home](qtextbrowser.md#home)
* [inherits](qtextbrowser.md#inherits)
* [insertHtml](qtextbrowser.md#inserthtml)
* [insertPlainText](qtextbrowser.md#insertplaintext)
* [isBackwardAvailable](qtextbrowser.md#isbackwardavailable)
* [isEnabled](qtextbrowser.md#isenabled)
* [isForwardAvailable](qtextbrowser.md#isforwardavailable)
* [isReadOnly](qtextbrowser.md#isreadonly)
* [isUndoRedoEnabled](qtextbrowser.md#isundoredoenabled)
* [isVisible](qtextbrowser.md#isvisible)
* [lineWidth](qtextbrowser.md#linewidth)
* [lineWrapColumnOrWidth](qtextbrowser.md#linewrapcolumnorwidth)
* [lineWrapMode](qtextbrowser.md#linewrapmode)
* [lower](qtextbrowser.md#lower)
* [mapFromGlobal](qtextbrowser.md#mapfromglobal)
* [mapFromParent](qtextbrowser.md#mapfromparent)
* [mapToGlobal](qtextbrowser.md#maptoglobal)
* [mapToParent](qtextbrowser.md#maptoparent)
* [midLineWidth](qtextbrowser.md#midlinewidth)
* [move](qtextbrowser.md#move)
* [objectName](qtextbrowser.md#objectname)
* [openExternalLinks](qtextbrowser.md#openexternallinks)
* [openLinks](qtextbrowser.md#openlinks)
* [overwriteMode](qtextbrowser.md#overwritemode)
* [paste](qtextbrowser.md#paste)
* [placeholderText](qtextbrowser.md#placeholdertext)
* [pos](qtextbrowser.md#pos)
* [property](qtextbrowser.md#property)
* [raise](qtextbrowser.md#raise)
* [redo](qtextbrowser.md#redo)
* [reload](qtextbrowser.md#reload)
* [removeEventListener](qtextbrowser.md#removeeventlistener)
* [repaint](qtextbrowser.md#repaint)
* [repolish](qtextbrowser.md#repolish)
* [resize](qtextbrowser.md#resize)
* [scrollToAnchor](qtextbrowser.md#scrolltoanchor)
* [selectAll](qtextbrowser.md#selectall)
* [setAcceptRichText](qtextbrowser.md#setacceptrichtext)
* [setAlignment](qtextbrowser.md#setalignment)
* [setAttribute](qtextbrowser.md#setattribute)
* [setAutoFormatting](qtextbrowser.md#setautoformatting)
* [setContextMenuPolicy](qtextbrowser.md#setcontextmenupolicy)
* [setCurrentFont](qtextbrowser.md#setcurrentfont)
* [setCursor](qtextbrowser.md#setcursor)
* [setCursorWidth](qtextbrowser.md#setcursorwidth)
* [setDocumentTitle](qtextbrowser.md#setdocumenttitle)
* [setEnabled](qtextbrowser.md#setenabled)
* [setFixedSize](qtextbrowser.md#setfixedsize)
* [setFlexNodeSizeControlled](qtextbrowser.md#setflexnodesizecontrolled)
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
* [setHorizontalScrollBarPolicy](qtextbrowser.md#sethorizontalscrollbarpolicy)
* [setHtml](qtextbrowser.md#sethtml)
* [setInlineStyle](qtextbrowser.md#setinlinestyle)
* [setLayout](qtextbrowser.md#setlayout)
* [setLineWidth](qtextbrowser.md#setlinewidth)
* [setLineWrapColumnOrWidth](qtextbrowser.md#setlinewrapcolumnorwidth)
* [setLineWrapMode](qtextbrowser.md#setlinewrapmode)
* [setMaximumSize](qtextbrowser.md#setmaximumsize)
* [setMidLineWidth](qtextbrowser.md#setmidlinewidth)
* [setMinimumSize](qtextbrowser.md#setminimumsize)
* [setMouseTracking](qtextbrowser.md#setmousetracking)
* [setNodeParent](qtextbrowser.md#setnodeparent)
* [setObjectName](qtextbrowser.md#setobjectname)
* [setOpenExternalLinks](qtextbrowser.md#setopenexternallinks)
* [setOpenLinks](qtextbrowser.md#setopenlinks)
* [setOverwriteMode](qtextbrowser.md#setoverwritemode)
* [setPlaceholderText](qtextbrowser.md#setplaceholdertext)
* [setPlainText](qtextbrowser.md#setplaintext)
* [setProperty](qtextbrowser.md#setproperty)
* [setReadOnly](qtextbrowser.md#setreadonly)
* [setSource](qtextbrowser.md#setsource)
* [setStyleSheet](qtextbrowser.md#setstylesheet)
* [setTabChangesFocus](qtextbrowser.md#settabchangesfocus)
* [setTabStopDistance](qtextbrowser.md#settabstopdistance)
* [setText](qtextbrowser.md#settext)
* [setTextBackgroundColor](qtextbrowser.md#settextbackgroundcolor)
* [setTextColor](qtextbrowser.md#settextcolor)
* [setTextInteractionFlags](qtextbrowser.md#settextinteractionflags)
* [setUndoRedoEnabled](qtextbrowser.md#setundoredoenabled)
* [setVerticalScrollBarPolicy](qtextbrowser.md#setverticalscrollbarpolicy)
* [setViewport](qtextbrowser.md#setviewport)
* [setWindowFlag](qtextbrowser.md#setwindowflag)
* [setWindowIcon](qtextbrowser.md#setwindowicon)
* [setWindowOpacity](qtextbrowser.md#setwindowopacity)
* [setWindowState](qtextbrowser.md#setwindowstate)
* [setWindowTitle](qtextbrowser.md#setwindowtitle)
* [setWordWrapMode](qtextbrowser.md#setwordwrapmode)
* [show](qtextbrowser.md#show)
* [showFullScreen](qtextbrowser.md#showfullscreen)
* [showMaximized](qtextbrowser.md#showmaximized)
* [showMinimized](qtextbrowser.md#showminimized)
* [showNormal](qtextbrowser.md#shownormal)
* [size](qtextbrowser.md#size)
* [source](qtextbrowser.md#source)
* [styleSheet](qtextbrowser.md#stylesheet)
* [tabChangesFocus](qtextbrowser.md#tabchangesfocus)
* [tabStopDistance](qtextbrowser.md#tabstopdistance)
* [testAttribute](qtextbrowser.md#testattribute)
* [textInteractionFlags](qtextbrowser.md#textinteractionflags)
* [toHtml](qtextbrowser.md#tohtml)
* [toPlainText](qtextbrowser.md#toplaintext)
* [undo](qtextbrowser.md#undo)
* [update](qtextbrowser.md#update)
* [updateGeometry](qtextbrowser.md#updategeometry)
* [viewport](qtextbrowser.md#viewport)
* [windowOpacity](qtextbrowser.md#windowopacity)
* [windowState](qtextbrowser.md#windowstate)
* [windowTitle](qtextbrowser.md#windowtitle)
* [wordWrapMode](qtextbrowser.md#wordwrapmode)
* [zommIn](qtextbrowser.md#zommin)
* [zoomOut](qtextbrowser.md#zoomout)

## Constructors

###  constructor

\+ **new QTextBrowser**(): *[QTextBrowser](qtextbrowser.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QTextBrowser](qtextbrowser.md)*

\+ **new QTextBrowser**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QTextBrowser](qtextbrowser.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QTextBrowser](qtextbrowser.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹[QTextBrowserSignals](../interfaces/qtextbrowsersignals.md)›*

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

___

### `Optional` viewportWidget

• **viewportWidget**? : *[NodeWidget](nodewidget.md)‹any›*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewportWidget](qabstractscrollarea.md#optional-viewportwidget)*

## Methods

###  acceptRichText

▸ **acceptRichText**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[acceptRichText](nodetextedit.md#acceptrichtext)*

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

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QTextBrowserSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextBrowserSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTextBrowserSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  alignment

▸ **alignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

*Inherited from [NodeTextEdit](nodetextedit.md).[alignment](nodetextedit.md#alignment)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  append

▸ **append**(`text`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[append](nodetextedit.md#append)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  autoFormatting

▸ **autoFormatting**(): *[AutoFormattingFlag](../enums/autoformattingflag.md)*

*Inherited from [NodeTextEdit](nodetextedit.md).[autoFormatting](nodetextedit.md#autoformatting)*

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

###  canPaste

▸ **canPaste**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[canPaste](nodetextedit.md#canpaste)*

**Returns:** *boolean*

___

###  clear

▸ **clear**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[clear](nodetextedit.md#clear)*

**Returns:** *void*

___

###  clearHistory

▸ **clearHistory**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  copy

▸ **copy**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[copy](nodetextedit.md#copy)*

**Returns:** *void*

___

###  currentFont

▸ **currentFont**(): *[QFont](qfont.md)*

*Inherited from [NodeTextEdit](nodetextedit.md).[currentFont](nodetextedit.md#currentfont)*

**Returns:** *[QFont](qfont.md)*

___

###  cursorWidth

▸ **cursorWidth**(): *number*

*Inherited from [NodeTextEdit](nodetextedit.md).[cursorWidth](nodetextedit.md#cursorwidth)*

**Returns:** *number*

___

###  cut

▸ **cut**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[cut](nodetextedit.md#cut)*

**Returns:** *void*

___

###  documentTitle

▸ **documentTitle**(): *string*

*Inherited from [NodeTextEdit](nodetextedit.md).[documentTitle](nodetextedit.md#documenttitle)*

**Returns:** *string*

___

###  ensureCursorVisible

▸ **ensureCursorVisible**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[ensureCursorVisible](nodetextedit.md#ensurecursorvisible)*

**Returns:** *void*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [QMenu](qmenu.md).[font](qmenu.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  fontFamily

▸ **fontFamily**(): *string*

*Inherited from [NodeTextEdit](nodetextedit.md).[fontFamily](nodetextedit.md#fontfamily)*

**Returns:** *string*

___

###  fontItalic

▸ **fontItalic**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[fontItalic](nodetextedit.md#fontitalic)*

**Returns:** *boolean*

___

###  fontPointSize

▸ **fontPointSize**(): *number*

*Inherited from [NodeTextEdit](nodetextedit.md).[fontPointSize](nodetextedit.md#fontpointsize)*

**Returns:** *number*

___

###  fontUnderline

▸ **fontUnderline**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[fontUnderline](nodetextedit.md#fontunderline)*

**Returns:** *boolean*

___

###  fontWeight

▸ **fontWeight**(): *number*

*Inherited from [NodeTextEdit](nodetextedit.md).[fontWeight](nodetextedit.md#fontweight)*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  insertHtml

▸ **insertHtml**(`text`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[insertHtml](nodetextedit.md#inserthtml)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  insertPlainText

▸ **insertPlainText**(`text`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[insertPlainText](nodetextedit.md#insertplaintext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

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

###  isForwardAvailable

▸ **isForwardAvailable**(): *boolean*

**Returns:** *boolean*

___

###  isReadOnly

▸ **isReadOnly**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[isReadOnly](nodetextedit.md#isreadonly)*

**Returns:** *boolean*

___

###  isUndoRedoEnabled

▸ **isUndoRedoEnabled**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[isUndoRedoEnabled](nodetextedit.md#isundoredoenabled)*

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

###  lineWrapColumnOrWidth

▸ **lineWrapColumnOrWidth**(): *number*

*Inherited from [NodeTextEdit](nodetextedit.md).[lineWrapColumnOrWidth](nodetextedit.md#linewrapcolumnorwidth)*

**Returns:** *number*

___

###  lineWrapMode

▸ **lineWrapMode**(): *[QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)*

*Inherited from [NodeTextEdit](nodetextedit.md).[lineWrapMode](nodetextedit.md#linewrapmode)*

**Returns:** *[QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)*

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

###  midLineWidth

▸ **midLineWidth**(): *number*

*Inherited from [NodeFrame](nodeframe.md).[midLineWidth](nodeframe.md#midlinewidth)*

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

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

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

*Inherited from [NodeTextEdit](nodetextedit.md).[overwriteMode](nodetextedit.md#overwritemode)*

**Returns:** *boolean*

___

###  paste

▸ **paste**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[paste](nodetextedit.md#paste)*

**Returns:** *void*

___

###  placeholderText

▸ **placeholderText**(): *string*

*Inherited from [NodeTextEdit](nodetextedit.md).[placeholderText](nodetextedit.md#placeholdertext)*

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

###  redo

▸ **redo**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[redo](nodetextedit.md#redo)*

**Returns:** *void*

___

###  reload

▸ **reload**(): *void*

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: QTextBrowserSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextBrowserSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTextBrowserSignals[SignalType] |

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

###  scrollToAnchor

▸ **scrollToAnchor**(`name`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[scrollToAnchor](nodetextedit.md#scrolltoanchor)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *void*

___

###  selectAll

▸ **selectAll**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[selectAll](nodetextedit.md#selectall)*

**Returns:** *void*

___

###  setAcceptRichText

▸ **setAcceptRichText**(`accept`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setAcceptRichText](nodetextedit.md#setacceptrichtext)*

**Parameters:**

Name | Type |
------ | ------ |
`accept` | boolean |

**Returns:** *void*

___

###  setAlignment

▸ **setAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setAlignment](nodetextedit.md#setalignment)*

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

###  setAutoFormatting

▸ **setAutoFormatting**(`features`: [AutoFormattingFlag](../enums/autoformattingflag.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setAutoFormatting](nodetextedit.md#setautoformatting)*

**Parameters:**

Name | Type |
------ | ------ |
`features` | [AutoFormattingFlag](../enums/autoformattingflag.md) |

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

*Inherited from [NodeTextEdit](nodetextedit.md).[setCurrentFont](nodetextedit.md#setcurrentfont)*

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

*Inherited from [NodeTextEdit](nodetextedit.md).[setCursorWidth](nodetextedit.md#setcursorwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setDocumentTitle

▸ **setDocumentTitle**(`title`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setDocumentTitle](nodetextedit.md#setdocumenttitle)*

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

###  setFontFamily

▸ **setFontFamily**(`family`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setFontFamily](nodetextedit.md#setfontfamily)*

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |

**Returns:** *void*

___

###  setFontItalic

▸ **setFontItalic**(`italic`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setFontItalic](nodetextedit.md#setfontitalic)*

**Parameters:**

Name | Type |
------ | ------ |
`italic` | boolean |

**Returns:** *void*

___

###  setFontPointSize

▸ **setFontPointSize**(`s`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setFontPointSize](nodetextedit.md#setfontpointsize)*

**Parameters:**

Name | Type |
------ | ------ |
`s` | number |

**Returns:** *void*

___

###  setFontUnderline

▸ **setFontUnderline**(`underline`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setFontUnderline](nodetextedit.md#setfontunderline)*

**Parameters:**

Name | Type |
------ | ------ |
`underline` | boolean |

**Returns:** *void*

___

###  setFontWeight

▸ **setFontWeight**(`weight`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setFontWeight](nodetextedit.md#setfontweight)*

**Parameters:**

Name | Type |
------ | ------ |
`weight` | number |

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

*Inherited from [NodeTextEdit](nodetextedit.md).[setHtml](nodetextedit.md#sethtml)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QTextBrowserSignals](../interfaces/qtextbrowsersignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QTextBrowserSignals](../interfaces/qtextbrowsersignals.md)› |

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

###  setLineWrapColumnOrWidth

▸ **setLineWrapColumnOrWidth**(`w`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setLineWrapColumnOrWidth](nodetextedit.md#setlinewrapcolumnorwidth)*

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

**Returns:** *void*

___

###  setLineWrapMode

▸ **setLineWrapMode**(`mode`: [QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setLineWrapMode](nodetextedit.md#setlinewrapmode)*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md) |

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

*Inherited from [NodeTextEdit](nodetextedit.md).[setOverwriteMode](nodetextedit.md#setoverwritemode)*

**Parameters:**

Name | Type |
------ | ------ |
`overwrite` | boolean |

**Returns:** *void*

___

###  setPlaceholderText

▸ **setPlaceholderText**(`placeholderText`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setPlaceholderText](nodetextedit.md#setplaceholdertext)*

**Parameters:**

Name | Type |
------ | ------ |
`placeholderText` | string |

**Returns:** *void*

___

###  setPlainText

▸ **setPlainText**(`text`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setPlainText](nodetextedit.md#setplaintext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  setReadOnly

▸ **setReadOnly**(`ro`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setReadOnly](nodetextedit.md#setreadonly)*

**Parameters:**

Name | Type |
------ | ------ |
`ro` | boolean |

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

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [QMenu](qmenu.md).[setStyleSheet](qmenu.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setTabChangesFocus

▸ **setTabChangesFocus**(`b`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setTabChangesFocus](nodetextedit.md#settabchangesfocus)*

**Parameters:**

Name | Type |
------ | ------ |
`b` | boolean |

**Returns:** *void*

___

###  setTabStopDistance

▸ **setTabStopDistance**(`distance`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setTabStopDistance](nodetextedit.md#settabstopdistance)*

**Parameters:**

Name | Type |
------ | ------ |
`distance` | number |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setText](nodetextedit.md#settext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setTextBackgroundColor

▸ **setTextBackgroundColor**(`color`: [QColor](qcolor.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setTextBackgroundColor](nodetextedit.md#settextbackgroundcolor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextColor

▸ **setTextColor**(`color`: [QColor](qcolor.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setTextColor](nodetextedit.md#settextcolor)*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextInteractionFlags

▸ **setTextInteractionFlags**(`flags`: [TextInteractionFlag](../enums/textinteractionflag.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setTextInteractionFlags](nodetextedit.md#settextinteractionflags)*

**Parameters:**

Name | Type |
------ | ------ |
`flags` | [TextInteractionFlag](../enums/textinteractionflag.md) |

**Returns:** *void*

___

###  setUndoRedoEnabled

▸ **setUndoRedoEnabled**(`enable`: boolean): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setUndoRedoEnabled](nodetextedit.md#setundoredoenabled)*

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

###  setWordWrapMode

▸ **setWordWrapMode**(`policy`: [WrapMode](../enums/wrapmode.md)): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[setWordWrapMode](nodetextedit.md#setwordwrapmode)*

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

###  source

▸ **source**(): *[QUrl](qurl.md)*

**Returns:** *[QUrl](qurl.md)*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [QMenu](qmenu.md).[styleSheet](qmenu.md#stylesheet)*

**Returns:** *string*

___

###  tabChangesFocus

▸ **tabChangesFocus**(): *boolean*

*Inherited from [NodeTextEdit](nodetextedit.md).[tabChangesFocus](nodetextedit.md#tabchangesfocus)*

**Returns:** *boolean*

___

###  tabStopDistance

▸ **tabStopDistance**(): *number*

*Inherited from [NodeTextEdit](nodetextedit.md).[tabStopDistance](nodetextedit.md#tabstopdistance)*

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

*Inherited from [NodeTextEdit](nodetextedit.md).[textInteractionFlags](nodetextedit.md#textinteractionflags)*

**Returns:** *[TextInteractionFlag](../enums/textinteractionflag.md)*

___

###  toHtml

▸ **toHtml**(): *string*

*Inherited from [NodeTextEdit](nodetextedit.md).[toHtml](nodetextedit.md#tohtml)*

**Returns:** *string*

___

###  toPlainText

▸ **toPlainText**(): *string*

*Inherited from [NodeTextEdit](nodetextedit.md).[toPlainText](nodetextedit.md#toplaintext)*

**Returns:** *string*

___

###  undo

▸ **undo**(): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[undo](nodetextedit.md#undo)*

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

___

###  wordWrapMode

▸ **wordWrapMode**(): *[WrapMode](../enums/wrapmode.md)*

*Inherited from [NodeTextEdit](nodetextedit.md).[wordWrapMode](nodetextedit.md#wordwrapmode)*

**Returns:** *[WrapMode](../enums/wrapmode.md)*

___

###  zommIn

▸ **zommIn**(`range`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[zommIn](nodetextedit.md#zommin)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*

___

###  zoomOut

▸ **zoomOut**(`range`: number): *void*

*Inherited from [NodeTextEdit](nodetextedit.md).[zoomOut](nodetextedit.md#zoomout)*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*
