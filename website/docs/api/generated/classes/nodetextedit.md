---
id: "nodetextedit"
title: "NodeTextEdit"
sidebar_label: "NodeTextEdit"
---

> Create and control editable text field.

**This class is a JS wrapper around Qt's [QTextEdit class](https://doc.qt.io/qt-5/qtextedit.html)**

A `QTextEdit` provides ability to add and manipulate native editable text field widgets.

### Example

```javascript
const { QTextEdit } = require("@nodegui/nodegui");

const textEdit = new QTextEdit();
```

## Type parameters

▪ **Signals**: *[QTextEditSignals](../interfaces/qtexteditsignals.md)*

## Hierarchy

  ↳ [QAbstractScrollArea](qabstractscrollarea.md)‹Signals›

  ↳ **NodeTextEdit**

  ↳ [QTextEdit](qtextedit.md)

  ↳ [QTextBrowser](qtextbrowser.md)

## Index

### Constructors

* [constructor](nodetextedit.md#constructor)

### Properties

* [_rawInlineStyle](nodetextedit.md#_rawinlinestyle)
* [actions](nodetextedit.md#actions)
* [layout](nodetextedit.md#optional-layout)
* [native](nodetextedit.md#abstract-native)
* [nodeChildren](nodetextedit.md#nodechildren)
* [nodeParent](nodetextedit.md#optional-nodeparent)
* [type](nodetextedit.md#type)
* [viewportWidget](nodetextedit.md#optional-viewportwidget)

### Methods

* [acceptRichText](nodetextedit.md#acceptrichtext)
* [activateWindow](nodetextedit.md#activatewindow)
* [addAction](nodetextedit.md#addaction)
* [addEventListener](nodetextedit.md#addeventlistener)
* [adjustSize](nodetextedit.md#adjustsize)
* [alignment](nodetextedit.md#alignment)
* [append](nodetextedit.md#append)
* [autoFormatting](nodetextedit.md#autoformatting)
* [canPaste](nodetextedit.md#canpaste)
* [clear](nodetextedit.md#clear)
* [close](nodetextedit.md#close)
* [copy](nodetextedit.md#copy)
* [currentFont](nodetextedit.md#currentfont)
* [cursorWidth](nodetextedit.md#cursorwidth)
* [cut](nodetextedit.md#cut)
* [documentTitle](nodetextedit.md#documenttitle)
* [ensureCursorVisible](nodetextedit.md#ensurecursorvisible)
* [font](nodetextedit.md#font)
* [fontFamily](nodetextedit.md#fontfamily)
* [fontItalic](nodetextedit.md#fontitalic)
* [fontPointSize](nodetextedit.md#fontpointsize)
* [fontUnderline](nodetextedit.md#fontunderline)
* [fontWeight](nodetextedit.md#fontweight)
* [frameRect](nodetextedit.md#framerect)
* [frameShadow](nodetextedit.md#frameshadow)
* [frameShape](nodetextedit.md#frameshape)
* [frameStyle](nodetextedit.md#framestyle)
* [frameWidth](nodetextedit.md#framewidth)
* [geometry](nodetextedit.md#geometry)
* [getFlexNode](nodetextedit.md#getflexnode)
* [hasMouseTracking](nodetextedit.md#hasmousetracking)
* [hide](nodetextedit.md#hide)
* [inherits](nodetextedit.md#inherits)
* [insertHtml](nodetextedit.md#inserthtml)
* [insertPlainText](nodetextedit.md#insertplaintext)
* [isEnabled](nodetextedit.md#isenabled)
* [isReadOnly](nodetextedit.md#isreadonly)
* [isUndoRedoEnabled](nodetextedit.md#isundoredoenabled)
* [isVisible](nodetextedit.md#isvisible)
* [lineWidth](nodetextedit.md#linewidth)
* [lineWrapColumnOrWidth](nodetextedit.md#linewrapcolumnorwidth)
* [lineWrapMode](nodetextedit.md#linewrapmode)
* [lower](nodetextedit.md#lower)
* [mapFromGlobal](nodetextedit.md#mapfromglobal)
* [mapFromParent](nodetextedit.md#mapfromparent)
* [mapToGlobal](nodetextedit.md#maptoglobal)
* [mapToParent](nodetextedit.md#maptoparent)
* [maximumSize](nodetextedit.md#maximumsize)
* [midLineWidth](nodetextedit.md#midlinewidth)
* [minimumSize](nodetextedit.md#minimumsize)
* [move](nodetextedit.md#move)
* [objectName](nodetextedit.md#objectname)
* [overwriteMode](nodetextedit.md#overwritemode)
* [paste](nodetextedit.md#paste)
* [placeholderText](nodetextedit.md#placeholdertext)
* [pos](nodetextedit.md#pos)
* [property](nodetextedit.md#property)
* [raise](nodetextedit.md#raise)
* [redo](nodetextedit.md#redo)
* [removeAction](nodetextedit.md#removeaction)
* [removeEventListener](nodetextedit.md#removeeventlistener)
* [repaint](nodetextedit.md#repaint)
* [repolish](nodetextedit.md#repolish)
* [resize](nodetextedit.md#resize)
* [scrollToAnchor](nodetextedit.md#scrolltoanchor)
* [selectAll](nodetextedit.md#selectall)
* [setAcceptRichText](nodetextedit.md#setacceptrichtext)
* [setAlignment](nodetextedit.md#setalignment)
* [setAttribute](nodetextedit.md#setattribute)
* [setAutoFormatting](nodetextedit.md#setautoformatting)
* [setContextMenuPolicy](nodetextedit.md#setcontextmenupolicy)
* [setCurrentFont](nodetextedit.md#setcurrentfont)
* [setCursor](nodetextedit.md#setcursor)
* [setCursorWidth](nodetextedit.md#setcursorwidth)
* [setDocumentTitle](nodetextedit.md#setdocumenttitle)
* [setEnabled](nodetextedit.md#setenabled)
* [setFixedSize](nodetextedit.md#setfixedsize)
* [setFlexNodeSizeControlled](nodetextedit.md#setflexnodesizecontrolled)
* [setFont](nodetextedit.md#setfont)
* [setFontFamily](nodetextedit.md#setfontfamily)
* [setFontItalic](nodetextedit.md#setfontitalic)
* [setFontPointSize](nodetextedit.md#setfontpointsize)
* [setFontUnderline](nodetextedit.md#setfontunderline)
* [setFontWeight](nodetextedit.md#setfontweight)
* [setFrameRect](nodetextedit.md#setframerect)
* [setFrameShadow](nodetextedit.md#setframeshadow)
* [setFrameShape](nodetextedit.md#setframeshape)
* [setFrameStyle](nodetextedit.md#setframestyle)
* [setGeometry](nodetextedit.md#setgeometry)
* [setGraphicsEffect](nodetextedit.md#setgraphicseffect)
* [setHorizontalScrollBarPolicy](nodetextedit.md#sethorizontalscrollbarpolicy)
* [setHtml](nodetextedit.md#sethtml)
* [setInlineStyle](nodetextedit.md#setinlinestyle)
* [setLayout](nodetextedit.md#setlayout)
* [setLineWidth](nodetextedit.md#setlinewidth)
* [setLineWrapColumnOrWidth](nodetextedit.md#setlinewrapcolumnorwidth)
* [setLineWrapMode](nodetextedit.md#setlinewrapmode)
* [setMaximumSize](nodetextedit.md#setmaximumsize)
* [setMidLineWidth](nodetextedit.md#setmidlinewidth)
* [setMinimumSize](nodetextedit.md#setminimumsize)
* [setMouseTracking](nodetextedit.md#setmousetracking)
* [setNodeParent](nodetextedit.md#setnodeparent)
* [setObjectName](nodetextedit.md#setobjectname)
* [setOverwriteMode](nodetextedit.md#setoverwritemode)
* [setPlaceholderText](nodetextedit.md#setplaceholdertext)
* [setPlainText](nodetextedit.md#setplaintext)
* [setProperty](nodetextedit.md#setproperty)
* [setReadOnly](nodetextedit.md#setreadonly)
* [setStyleSheet](nodetextedit.md#setstylesheet)
* [setTabChangesFocus](nodetextedit.md#settabchangesfocus)
* [setTabStopDistance](nodetextedit.md#settabstopdistance)
* [setText](nodetextedit.md#settext)
* [setTextBackgroundColor](nodetextedit.md#settextbackgroundcolor)
* [setTextColor](nodetextedit.md#settextcolor)
* [setTextInteractionFlags](nodetextedit.md#settextinteractionflags)
* [setUndoRedoEnabled](nodetextedit.md#setundoredoenabled)
* [setVerticalScrollBarPolicy](nodetextedit.md#setverticalscrollbarpolicy)
* [setViewport](nodetextedit.md#setviewport)
* [setWindowFlag](nodetextedit.md#setwindowflag)
* [setWindowIcon](nodetextedit.md#setwindowicon)
* [setWindowOpacity](nodetextedit.md#setwindowopacity)
* [setWindowState](nodetextedit.md#setwindowstate)
* [setWindowTitle](nodetextedit.md#setwindowtitle)
* [setWordWrapMode](nodetextedit.md#setwordwrapmode)
* [show](nodetextedit.md#show)
* [showFullScreen](nodetextedit.md#showfullscreen)
* [showMaximized](nodetextedit.md#showmaximized)
* [showMinimized](nodetextedit.md#showminimized)
* [showNormal](nodetextedit.md#shownormal)
* [size](nodetextedit.md#size)
* [styleSheet](nodetextedit.md#stylesheet)
* [tabChangesFocus](nodetextedit.md#tabchangesfocus)
* [tabStopDistance](nodetextedit.md#tabstopdistance)
* [testAttribute](nodetextedit.md#testattribute)
* [textInteractionFlags](nodetextedit.md#textinteractionflags)
* [toHtml](nodetextedit.md#tohtml)
* [toPlainText](nodetextedit.md#toplaintext)
* [undo](nodetextedit.md#undo)
* [update](nodetextedit.md#update)
* [updateGeometry](nodetextedit.md#updategeometry)
* [viewport](nodetextedit.md#viewport)
* [windowOpacity](nodetextedit.md#windowopacity)
* [windowState](nodetextedit.md#windowstate)
* [windowTitle](nodetextedit.md#windowtitle)
* [wordWrapMode](nodetextedit.md#wordwrapmode)
* [zommIn](nodetextedit.md#zommin)
* [zoomOut](nodetextedit.md#zoomout)

## Constructors

###  constructor

\+ **new NodeTextEdit**(`native`: [NativeElement](../globals.md#nativeelement)): *[NodeTextEdit](nodetextedit.md)*

*Inherited from [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[NodeTextEdit](nodetextedit.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹Signals›*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#optional-layout)*

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

*Inherited from [QMenu](qmenu.md).[type](qmenu.md#type)*

___

### `Optional` viewportWidget

• **viewportWidget**? : *[NodeWidget](nodewidget.md)‹any›*

*Inherited from [QAbstractScrollArea](qabstractscrollarea.md).[viewportWidget](qabstractscrollarea.md#optional-viewportwidget)*

## Methods

###  acceptRichText

▸ **acceptRichText**(): *boolean*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

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

*Inherited from [QMenu](qmenu.md).[adjustSize](qmenu.md#adjustsize)*

**Returns:** *void*

___

###  alignment

▸ **alignment**(): *[AlignmentFlag](../enums/alignmentflag.md)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  append

▸ **append**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  autoFormatting

▸ **autoFormatting**(): *[AutoFormattingFlag](../enums/autoformattingflag.md)*

**Returns:** *[AutoFormattingFlag](../enums/autoformattingflag.md)*

___

###  canPaste

▸ **canPaste**(): *boolean*

**Returns:** *boolean*

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

###  copy

▸ **copy**(): *void*

**Returns:** *void*

___

###  currentFont

▸ **currentFont**(): *[QFont](qfont.md)*

**Returns:** *[QFont](qfont.md)*

___

###  cursorWidth

▸ **cursorWidth**(): *number*

**Returns:** *number*

___

###  cut

▸ **cut**(): *void*

**Returns:** *void*

___

###  documentTitle

▸ **documentTitle**(): *string*

**Returns:** *string*

___

###  ensureCursorVisible

▸ **ensureCursorVisible**(): *void*

**Returns:** *void*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [QMenu](qmenu.md).[font](qmenu.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  fontFamily

▸ **fontFamily**(): *string*

**Returns:** *string*

___

###  fontItalic

▸ **fontItalic**(): *boolean*

**Returns:** *boolean*

___

###  fontPointSize

▸ **fontPointSize**(): *number*

**Returns:** *number*

___

###  fontUnderline

▸ **fontUnderline**(): *boolean*

**Returns:** *boolean*

___

###  fontWeight

▸ **fontWeight**(): *number*

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

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  insertPlainText

▸ **insertPlainText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isReadOnly

▸ **isReadOnly**(): *boolean*

**Returns:** *boolean*

___

###  isUndoRedoEnabled

▸ **isUndoRedoEnabled**(): *boolean*

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

**Returns:** *number*

___

###  lineWrapMode

▸ **lineWrapMode**(): *[QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)*

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

###  overwriteMode

▸ **overwriteMode**(): *boolean*

**Returns:** *boolean*

___

###  paste

▸ **paste**(): *void*

**Returns:** *void*

___

###  placeholderText

▸ **placeholderText**(): *string*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *void*

___

###  selectAll

▸ **selectAll**(): *void*

**Returns:** *void*

___

###  setAcceptRichText

▸ **setAcceptRichText**(`accept`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`accept` | boolean |

**Returns:** *void*

___

###  setAlignment

▸ **setAlignment**(`alignment`: [AlignmentFlag](../enums/alignmentflag.md)): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |

**Returns:** *void*

___

###  setDocumentTitle

▸ **setDocumentTitle**(`title`: string): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`family` | string |

**Returns:** *void*

___

###  setFontItalic

▸ **setFontItalic**(`italic`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`italic` | boolean |

**Returns:** *void*

___

###  setFontPointSize

▸ **setFontPointSize**(`s`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`s` | number |

**Returns:** *void*

___

###  setFontUnderline

▸ **setFontUnderline**(`underline`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`underline` | boolean |

**Returns:** *void*

___

###  setFontWeight

▸ **setFontWeight**(`weight`: number): *void*

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

###  setGraphicsEffect

▸ **setGraphicsEffect**(`effect`: [QGraphicsEffect](qgraphicseffect.md)‹any›): *void*

*Inherited from [QMenu](qmenu.md).[setGraphicsEffect](qmenu.md#setgraphicseffect)*

**Parameters:**

Name | Type |
------ | ------ |
`effect` | [QGraphicsEffect](qgraphicseffect.md)‹any› |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹Signals›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹Signals› |

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

**Parameters:**

Name | Type |
------ | ------ |
`w` | number |

**Returns:** *void*

___

###  setLineWrapMode

▸ **setLineWrapMode**(`mode`: [QTextEditLineWrapMode](../enums/qtexteditlinewrapmode.md)): *void*

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

###  setOverwriteMode

▸ **setOverwriteMode**(`overwrite`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`overwrite` | boolean |

**Returns:** *void*

___

###  setPlaceholderText

▸ **setPlaceholderText**(`placeholderText`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`placeholderText` | string |

**Returns:** *void*

___

###  setPlainText

▸ **setPlainText**(`text`: string): *void*

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

**Parameters:**

Name | Type |
------ | ------ |
`ro` | boolean |

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

**Parameters:**

Name | Type |
------ | ------ |
`b` | boolean |

**Returns:** *void*

___

###  setTabStopDistance

▸ **setTabStopDistance**(`distance`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`distance` | number |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setTextBackgroundColor

▸ **setTextBackgroundColor**(`color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextColor

▸ **setTextColor**(`color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setTextInteractionFlags

▸ **setTextInteractionFlags**(`flags`: [TextInteractionFlag](../enums/textinteractionflag.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`flags` | [TextInteractionFlag](../enums/textinteractionflag.md) |

**Returns:** *void*

___

###  setUndoRedoEnabled

▸ **setUndoRedoEnabled**(`enable`: boolean): *void*

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

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [QMenu](qmenu.md).[styleSheet](qmenu.md#stylesheet)*

**Returns:** *string*

___

###  tabChangesFocus

▸ **tabChangesFocus**(): *boolean*

**Returns:** *boolean*

___

###  tabStopDistance

▸ **tabStopDistance**(): *number*

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

**Returns:** *[TextInteractionFlag](../enums/textinteractionflag.md)*

___

###  toHtml

▸ **toHtml**(): *string*

**Returns:** *string*

___

###  toPlainText

▸ **toPlainText**(): *string*

**Returns:** *string*

___

###  undo

▸ **undo**(): *void*

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

**Returns:** *[WrapMode](../enums/wrapmode.md)*

___

###  zommIn

▸ **zommIn**(`range`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*

___

###  zoomOut

▸ **zoomOut**(`range`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`range` | number | 1 |

**Returns:** *void*
