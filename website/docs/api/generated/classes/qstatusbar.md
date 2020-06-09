---
id: "qstatusbar"
title: "QStatusBar"
sidebar_label: "QStatusBar"
---

> Create and control progress bar widgets.

**This class is a JS wrapper around Qt's [QStatusBar class](https://doc.qt.io/qt-5/qstatusbar.html)**

A `QStatusBar` provides ability to add and manipulate the status bar of a window.

### Example

```javascript
const { QStatusBar } = require("@nodegui/nodegui");

const progressBar = new QStatusBar();
```

## Hierarchy

  ↳ [NodeWidget](nodewidget.md)‹[QStatusBarSignals](../interfaces/qstatusbarsignals.md)›

  ↳ **QStatusBar**

## Index

### Constructors

* [constructor](qstatusbar.md#constructor)

### Properties

* [_rawInlineStyle](qstatusbar.md#_rawinlinestyle)
* [actions](qstatusbar.md#actions)
* [layout](qstatusbar.md#optional-layout)
* [native](qstatusbar.md#native)
* [nodeChildren](qstatusbar.md#nodechildren)
* [nodeParent](qstatusbar.md#optional-nodeparent)
* [permanentWidgets](qstatusbar.md#permanentwidgets)
* [type](qstatusbar.md#type)
* [widgets](qstatusbar.md#widgets)

### Methods

* [activateWindow](qstatusbar.md#activatewindow)
* [addAction](qstatusbar.md#addaction)
* [addEventListener](qstatusbar.md#addeventlistener)
* [addPermanentWidget](qstatusbar.md#addpermanentwidget)
* [addWidget](qstatusbar.md#addwidget)
* [adjustSize](qstatusbar.md#adjustsize)
* [clearMessage](qstatusbar.md#clearmessage)
* [close](qstatusbar.md#close)
* [currentMessage](qstatusbar.md#currentmessage)
* [font](qstatusbar.md#font)
* [geometry](qstatusbar.md#geometry)
* [getFlexNode](qstatusbar.md#getflexnode)
* [hasMouseTracking](qstatusbar.md#hasmousetracking)
* [hide](qstatusbar.md#hide)
* [inherits](qstatusbar.md#inherits)
* [insertPermanentWidget](qstatusbar.md#insertpermanentwidget)
* [insertWidget](qstatusbar.md#insertwidget)
* [isEnabled](qstatusbar.md#isenabled)
* [isSizeGripEnabled](qstatusbar.md#issizegripenabled)
* [isVisible](qstatusbar.md#isvisible)
* [lower](qstatusbar.md#lower)
* [mapFromGlobal](qstatusbar.md#mapfromglobal)
* [mapFromParent](qstatusbar.md#mapfromparent)
* [mapToGlobal](qstatusbar.md#maptoglobal)
* [mapToParent](qstatusbar.md#maptoparent)
* [maximumSize](qstatusbar.md#maximumsize)
* [minimumSize](qstatusbar.md#minimumsize)
* [move](qstatusbar.md#move)
* [objectName](qstatusbar.md#objectname)
* [pos](qstatusbar.md#pos)
* [property](qstatusbar.md#property)
* [raise](qstatusbar.md#raise)
* [removeAction](qstatusbar.md#removeaction)
* [removeEventListener](qstatusbar.md#removeeventlistener)
* [removeWidget](qstatusbar.md#removewidget)
* [repaint](qstatusbar.md#repaint)
* [repolish](qstatusbar.md#repolish)
* [resize](qstatusbar.md#resize)
* [setAttribute](qstatusbar.md#setattribute)
* [setContextMenuPolicy](qstatusbar.md#setcontextmenupolicy)
* [setCursor](qstatusbar.md#setcursor)
* [setEnabled](qstatusbar.md#setenabled)
* [setFixedSize](qstatusbar.md#setfixedsize)
* [setFlexNodeSizeControlled](qstatusbar.md#setflexnodesizecontrolled)
* [setFont](qstatusbar.md#setfont)
* [setGeometry](qstatusbar.md#setgeometry)
* [setGraphicsEffect](qstatusbar.md#setgraphicseffect)
* [setInlineStyle](qstatusbar.md#setinlinestyle)
* [setLayout](qstatusbar.md#setlayout)
* [setMaximumSize](qstatusbar.md#setmaximumsize)
* [setMinimumSize](qstatusbar.md#setminimumsize)
* [setMouseTracking](qstatusbar.md#setmousetracking)
* [setNodeParent](qstatusbar.md#setnodeparent)
* [setObjectName](qstatusbar.md#setobjectname)
* [setProperty](qstatusbar.md#setproperty)
* [setSizeGripEnabled](qstatusbar.md#setsizegripenabled)
* [setStyleSheet](qstatusbar.md#setstylesheet)
* [setWindowFlag](qstatusbar.md#setwindowflag)
* [setWindowIcon](qstatusbar.md#setwindowicon)
* [setWindowOpacity](qstatusbar.md#setwindowopacity)
* [setWindowState](qstatusbar.md#setwindowstate)
* [setWindowTitle](qstatusbar.md#setwindowtitle)
* [show](qstatusbar.md#show)
* [showFullScreen](qstatusbar.md#showfullscreen)
* [showMaximized](qstatusbar.md#showmaximized)
* [showMessage](qstatusbar.md#showmessage)
* [showMinimized](qstatusbar.md#showminimized)
* [showNormal](qstatusbar.md#shownormal)
* [size](qstatusbar.md#size)
* [styleSheet](qstatusbar.md#stylesheet)
* [testAttribute](qstatusbar.md#testattribute)
* [update](qstatusbar.md#update)
* [updateGeometry](qstatusbar.md#updategeometry)
* [windowOpacity](qstatusbar.md#windowopacity)
* [windowState](qstatusbar.md#windowstate)
* [windowTitle](qstatusbar.md#windowtitle)

## Constructors

###  constructor

\+ **new QStatusBar**(): *[QStatusBar](qstatusbar.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QStatusBar](qstatusbar.md)*

\+ **new QStatusBar**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QStatusBar](qstatusbar.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QStatusBar](qstatusbar.md)*

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

• **layout**? : *[NodeLayout](nodelayout.md)‹[QStatusBarSignals](../interfaces/qstatusbarsignals.md)›*

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

###  permanentWidgets

• **permanentWidgets**: *Set‹[NativeElement](../globals.md#nativeelement)›*

___

###  type

• **type**: *string* = "widget"

*Inherited from [QMenu](qmenu.md).[type](qmenu.md#type)*

___

###  widgets

• **widgets**: *Set‹[NativeElement](../globals.md#nativeelement)›*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QStatusBarSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QStatusBarSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QStatusBarSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  addPermanentWidget

▸ **addPermanentWidget**(`widget`: [QWidget](qwidget.md), `stretch`: number): *void*

Adds the given widget permanently to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
Permanently means that the widget may not be obscured by temporary messages. It is is located at the far right of the status bar.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`widget` | [QWidget](qwidget.md) | - | The widget to permanently add to this status bar. |
`stretch` | number | 0 | Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.  |

**Returns:** *void*

___

###  addWidget

▸ **addWidget**(`widget`: [QWidget](qwidget.md), `stretch`: number): *void*

Adds the given widget to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
The widget is located to the far left of the first permanent widget (see addPermanentWidget()) and may be obscured by temporary messages.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`widget` | [QWidget](qwidget.md) | - | The widget to add to this status bar. |
`stretch` | number | 0 | Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.  |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [QMenu](qmenu.md).[adjustSize](qmenu.md#adjustsize)*

**Returns:** *void*

___

###  clearMessage

▸ **clearMessage**(): *void*

Removes any temporary message being shown.

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  currentMessage

▸ **currentMessage**(): *string*

Returns the temporary message currently shown, or an empty string if there is no such message.

**Returns:** *string*

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

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  insertPermanentWidget

▸ **insertPermanentWidget**(`index`: number, `widget`: [QWidget](qwidget.md), `stretch`: number): *number*

Inserts the given widget at the given index permanently to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. If index is out of range, the widget is appended (in which case it is the actual index of the widget that is returned).
The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
Permanently means that the widget may not be obscured by temporary messages. It is is located at the far right of the status bar.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`index` | number | - | The index at which to insert the given widget permanently. |
`widget` | [QWidget](qwidget.md) | - | The widget to insert into this status bar permanently. |
`stretch` | number | 0 | Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.  |

**Returns:** *number*

___

###  insertWidget

▸ **insertWidget**(`index`: number, `widget`: [QWidget](qwidget.md), `stretch`: number): *number*

Inserts the given widget at the given index to this status bar, reparenting the widget if it isn't already a child of this QStatusBar object. If index is out of range, the widget is appended (in which case it is the actual index of the widget that is returned).
The stretch parameter is used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.
The widget is located to the far left of the first permanent widget (see addPermanentWidget()) and may be obscured by temporary messages.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`index` | number | - | The index at which to insert the given widget. |
`widget` | [QWidget](qwidget.md) | - | The widget to insert into this status bar. |
`stretch` | number | 0 | Used to compute a suitable size for the given widget as the status bar grows and shrinks. The default stretch factor is 0, i.e giving the widget a minimum of space.  |

**Returns:** *number*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isSizeGripEnabled

▸ **isSizeGripEnabled**(): *boolean*

Determines whether the QSizeGrip in the bottom-right corner of the status bar is enabled

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QStatusBarSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QStatusBarSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QStatusBarSignals[SignalType] |

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

###  removeWidget

▸ **removeWidget**(`widget`: [QWidget](qwidget.md)): *void*

Removes the specified widget from the status bar.
Note: This function does not delete the widget but hides it. To add the widget again, you must call both the addWidget() and show() functions.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`widget` | [QWidget](qwidget.md) | The widget to remove from this status bar.  |

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

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QStatusBarSignals](../interfaces/qstatusbarsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QStatusBarSignals](../interfaces/qstatusbarsignals.md)› |

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

###  setSizeGripEnabled

▸ **setSizeGripEnabled**(`enabled`: boolean): *void*

Enables or disables the QSizeGrip in the bottom-right corner of this status bar.

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`enabled` | boolean | Determines if the QSizeGrip should be enabled or disabled.  |

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

###  showMessage

▸ **showMessage**(`message`: string, `timeout`: number): *void*

Hides the normal status indications and displays the given message for the specified number of milli-seconds (timeout). If timeout is 0 (default), the message remains displayed until the clearMessage() slot is called or until the showMessage() slot is called again to change the message.
Note that showMessage() is called to show temporary explanations of tool tip texts, so passing a timeout of 0 is not sufficient to display a permanent message.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`message` | string | - | The message to display. |
`timeout` | number | 0 | The number of milliseconds to display the message.  |

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
