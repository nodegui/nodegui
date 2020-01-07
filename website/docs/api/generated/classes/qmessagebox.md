---
id: "qmessagebox"
title: "QMessageBox"
sidebar_label: "QMessageBox"
---

## Hierarchy

  ↳ [NodeDialog](nodedialog.md)‹[QMessageBoxSignals](../interfaces/qmessageboxsignals.md)›

  ↳ **QMessageBox**

## Index

### Constructors

* [constructor](qmessagebox.md#constructor)

### Properties

* [_rawInlineStyle](qmessagebox.md#_rawinlinestyle)
* [layout](qmessagebox.md#optional-layout)
* [native](qmessagebox.md#native)
* [nodeChildren](qmessagebox.md#nodechildren)
* [nodeParent](qmessagebox.md#optional-nodeparent)
* [type](qmessagebox.md#type)

### Methods

* [accept](qmessagebox.md#accept)
* [activateWindow](qmessagebox.md#activatewindow)
* [addButton](qmessagebox.md#addbutton)
* [addEventListener](qmessagebox.md#addeventlistener)
* [adjustSize](qmessagebox.md#adjustsize)
* [close](qmessagebox.md#close)
* [detailedText](qmessagebox.md#detailedtext)
* [done](qmessagebox.md#done)
* [exec](qmessagebox.md#exec)
* [font](qmessagebox.md#font)
* [geometry](qmessagebox.md#geometry)
* [getFlexNode](qmessagebox.md#getflexnode)
* [hasMouseTracking](qmessagebox.md#hasmousetracking)
* [hide](qmessagebox.md#hide)
* [inherits](qmessagebox.md#inherits)
* [isEnabled](qmessagebox.md#isenabled)
* [isSizeGripEnabled](qmessagebox.md#issizegripenabled)
* [isVisible](qmessagebox.md#isvisible)
* [lower](qmessagebox.md#lower)
* [move](qmessagebox.md#move)
* [objectName](qmessagebox.md#objectname)
* [open](qmessagebox.md#open)
* [pos](qmessagebox.md#pos)
* [property](qmessagebox.md#property)
* [raise](qmessagebox.md#raise)
* [reject](qmessagebox.md#reject)
* [removeEventListener](qmessagebox.md#removeeventlistener)
* [repaint](qmessagebox.md#repaint)
* [resize](qmessagebox.md#resize)
* [result](qmessagebox.md#result)
* [setAttribute](qmessagebox.md#setattribute)
* [setContextMenuPolicy](qmessagebox.md#setcontextmenupolicy)
* [setCursor](qmessagebox.md#setcursor)
* [setDefaultButton](qmessagebox.md#setdefaultbutton)
* [setDetailedText](qmessagebox.md#setdetailedtext)
* [setEnabled](qmessagebox.md#setenabled)
* [setFixedSize](qmessagebox.md#setfixedsize)
* [setFlexNodeSizeControlled](qmessagebox.md#setflexnodesizecontrolled)
* [setFont](qmessagebox.md#setfont)
* [setGeometry](qmessagebox.md#setgeometry)
* [setInformativeText](qmessagebox.md#setinformativetext)
* [setInlineStyle](qmessagebox.md#setinlinestyle)
* [setLayout](qmessagebox.md#setlayout)
* [setMaximumSize](qmessagebox.md#setmaximumsize)
* [setMinimumSize](qmessagebox.md#setminimumsize)
* [setModal](qmessagebox.md#setmodal)
* [setMouseTracking](qmessagebox.md#setmousetracking)
* [setNodeParent](qmessagebox.md#setnodeparent)
* [setObjectName](qmessagebox.md#setobjectname)
* [setProperty](qmessagebox.md#setproperty)
* [setResult](qmessagebox.md#setresult)
* [setSizeGripEnabled](qmessagebox.md#setsizegripenabled)
* [setStyleSheet](qmessagebox.md#setstylesheet)
* [setText](qmessagebox.md#settext)
* [setWindowFlag](qmessagebox.md#setwindowflag)
* [setWindowIcon](qmessagebox.md#setwindowicon)
* [setWindowOpacity](qmessagebox.md#setwindowopacity)
* [setWindowState](qmessagebox.md#setwindowstate)
* [setWindowTitle](qmessagebox.md#setwindowtitle)
* [show](qmessagebox.md#show)
* [showFullScreen](qmessagebox.md#showfullscreen)
* [showMaximized](qmessagebox.md#showmaximized)
* [showMinimized](qmessagebox.md#showminimized)
* [showNormal](qmessagebox.md#shownormal)
* [size](qmessagebox.md#size)
* [styleSheet](qmessagebox.md#stylesheet)
* [testAttribute](qmessagebox.md#testattribute)
* [text](qmessagebox.md#text)
* [update](qmessagebox.md#update)
* [updateGeometry](qmessagebox.md#updategeometry)
* [windowOpacity](qmessagebox.md#windowopacity)
* [windowState](qmessagebox.md#windowstate)
* [windowTitle](qmessagebox.md#windowtitle)
* [about](qmessagebox.md#static-about)
* [aboutQt](qmessagebox.md#static-aboutqt)

## Constructors

###  constructor

\+ **new QMessageBox**(): *[QMessageBox](qmessagebox.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QMessageBox](qmessagebox.md)*

\+ **new QMessageBox**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QMessageBox](qmessagebox.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QMessageBox](qmessagebox.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QMessageBoxSignals](../interfaces/qmessageboxsignals.md)›*

*Inherited from [NodeWidget](nodewidget.md).[layout](nodewidget.md#optional-layout)*

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

*Inherited from [NodeWidget](nodewidget.md).[type](nodewidget.md#type)*

## Methods

###  accept

▸ **accept**(): *void*

**Returns:** *void*

___

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[activateWindow](nodewidget.md#activatewindow)*

**Returns:** *void*

___

###  addButton

▸ **addButton**(`button`: [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)›, `role`: [ButtonRole](../enums/buttonrole.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`button` | [QAbstractButton](qabstractbutton.md)‹[QAbstractButtonSignals](../interfaces/qabstractbuttonsignals.md)› | - |
`role` | [ButtonRole](../enums/buttonrole.md) |  ButtonRole.NoRole |

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QMessageBoxSignals*

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

*Inherited from [NodeWidget](nodewidget.md).[adjustSize](nodewidget.md#adjustsize)*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[close](nodewidget.md#close)*

**Returns:** *boolean*

___

###  detailedText

▸ **detailedText**(): *string*

**Returns:** *string*

___

###  done

▸ **done**(`r`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`r` | number |

**Returns:** *void*

___

###  exec

▸ **exec**(): *number*

*Inherited from [NodeDialog](nodedialog.md).[exec](nodedialog.md#exec)*

**Returns:** *number*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [NodeWidget](nodewidget.md).[font](nodewidget.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

*Inherited from [NodeWidget](nodewidget.md).[geometry](nodewidget.md#geometry)*

**Returns:** *[QRect](qrect.md)*

___

###  getFlexNode

▸ **getFlexNode**(): *[FlexNode](../globals.md#flexnode)*

*Inherited from [YogaWidget](yogawidget.md).[getFlexNode](yogawidget.md#getflexnode)*

**Returns:** *[FlexNode](../globals.md#flexnode)*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[hasMouseTracking](nodewidget.md#hasmousetracking)*

**Returns:** *boolean*

___

###  hide

▸ **hide**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[hide](nodewidget.md#hide)*

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

*Inherited from [NodeWidget](nodewidget.md).[isEnabled](nodewidget.md#isenabled)*

**Returns:** *boolean*

___

###  isSizeGripEnabled

▸ **isSizeGripEnabled**(): *boolean*

*Inherited from [NodeDialog](nodedialog.md).[isSizeGripEnabled](nodedialog.md#issizegripenabled)*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isVisible](nodewidget.md#isvisible)*

**Returns:** *boolean*

___

###  lower

▸ **lower**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[lower](nodewidget.md#lower)*

**Returns:** *void*

___

###  move

▸ **move**(`x`: number, `y`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[move](nodewidget.md#move)*

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

###  open

▸ **open**(): *void*

*Inherited from [NodeDialog](nodedialog.md).[open](nodedialog.md#open)*

**Returns:** *void*

___

###  pos

▸ **pos**(): *object*

*Inherited from [NodeWidget](nodewidget.md).[pos](nodewidget.md#pos)*

**Returns:** *object*

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

*Inherited from [NodeWidget](nodewidget.md).[raise](nodewidget.md#raise)*

**Returns:** *void*

___

###  reject

▸ **reject**(): *void*

*Inherited from [NodeDialog](nodedialog.md).[reject](nodedialog.md#reject)*

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QMessageBoxSignals*

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

*Inherited from [NodeWidget](nodewidget.md).[repaint](nodewidget.md#repaint)*

**Returns:** *void*

___

###  resize

▸ **resize**(`width`: number, `height`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[resize](nodewidget.md#resize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  result

▸ **result**(): *number*

*Inherited from [NodeDialog](nodedialog.md).[result](nodedialog.md#result)*

**Returns:** *number*

___

###  setAttribute

▸ **setAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md), `switchOn`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setAttribute](nodewidget.md#setattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setContextMenuPolicy

▸ **setContextMenuPolicy**(`contextMenuPolicy`: [ContextMenuPolicy](../enums/contextmenupolicy.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setContextMenuPolicy](nodewidget.md#setcontextmenupolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`contextMenuPolicy` | [ContextMenuPolicy](../enums/contextmenupolicy.md) |

**Returns:** *void*

___

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setCursor](nodewidget.md#setcursor)*

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [CursorShape](../enums/cursorshape.md) &#124; [QCursor](qcursor.md) |

**Returns:** *void*

___

###  setDefaultButton

▸ **setDefaultButton**(`button`: [QPushButton](qpushbutton.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`button` | [QPushButton](qpushbutton.md) |

**Returns:** *void*

___

###  setDetailedText

▸ **setDetailedText**(`detailedText`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`detailedText` | string |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setEnabled](nodewidget.md#setenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setFixedSize

▸ **setFixedSize**(`width`: number, `height`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setFixedSize](nodewidget.md#setfixedsize)*

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

*Inherited from [NodeWidget](nodewidget.md).[setFont](nodewidget.md#setfont)*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setGeometry

▸ **setGeometry**(`x`: number, `y`: number, `w`: number, `h`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setGeometry](nodewidget.md#setgeometry)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |

**Returns:** *void*

___

###  setInformativeText

▸ **setInformativeText**(`informativeText`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`informativeText` | string |

**Returns:** *void*

___

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setInlineStyle](nodewidget.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QMessageBoxSignals](../interfaces/qmessageboxsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QMessageBoxSignals](../interfaces/qmessageboxsignals.md)› |

**Returns:** *void*

___

###  setMaximumSize

▸ **setMaximumSize**(`maxw`: number, `maxh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMaximumSize](nodewidget.md#setmaximumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |
`maxh` | number |

**Returns:** *void*

___

###  setMinimumSize

▸ **setMinimumSize**(`minw`: number, `minh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMinimumSize](nodewidget.md#setminimumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |
`minh` | number |

**Returns:** *void*

___

###  setModal

▸ **setModal**(`modal`: boolean): *void*

*Inherited from [NodeDialog](nodedialog.md).[setModal](nodedialog.md#setmodal)*

**Parameters:**

Name | Type |
------ | ------ |
`modal` | boolean |

**Returns:** *void*

___

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMouseTracking](nodewidget.md#setmousetracking)*

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

*Inherited from [NodeWidget](nodewidget.md).[setObjectName](nodewidget.md#setobjectname)*

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

###  setResult

▸ **setResult**(`i`: number): *void*

*Inherited from [NodeDialog](nodedialog.md).[setResult](nodedialog.md#setresult)*

**Parameters:**

Name | Type |
------ | ------ |
`i` | number |

**Returns:** *void*

___

###  setSizeGripEnabled

▸ **setSizeGripEnabled**(`enabled`: boolean): *void*

*Inherited from [NodeDialog](nodedialog.md).[setSizeGripEnabled](nodedialog.md#setsizegripenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setStyleSheet](nodewidget.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

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

###  setWindowFlag

▸ **setWindowFlag**(`windowType`: [WindowType](../enums/windowtype.md), `switchOn`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowFlag](nodewidget.md#setwindowflag)*

**Parameters:**

Name | Type |
------ | ------ |
`windowType` | [WindowType](../enums/windowtype.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowIcon](nodewidget.md#setwindowicon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setWindowOpacity

▸ **setWindowOpacity**(`opacity`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowOpacity](nodewidget.md#setwindowopacity)*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

**Returns:** *void*

___

###  setWindowState

▸ **setWindowState**(`state`: [WindowState](../enums/windowstate.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowState](nodewidget.md#setwindowstate)*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [WindowState](../enums/windowstate.md) |

**Returns:** *void*

___

###  setWindowTitle

▸ **setWindowTitle**(`title`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowTitle](nodewidget.md#setwindowtitle)*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[show](nodewidget.md#show)*

**Returns:** *void*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showFullScreen](nodewidget.md#showfullscreen)*

**Returns:** *void*

___

###  showMaximized

▸ **showMaximized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMaximized](nodewidget.md#showmaximized)*

**Returns:** *void*

___

###  showMinimized

▸ **showMinimized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMinimized](nodewidget.md#showminimized)*

**Returns:** *void*

___

###  showNormal

▸ **showNormal**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showNormal](nodewidget.md#shownormal)*

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [NodeWidget](nodewidget.md).[size](nodewidget.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[styleSheet](nodewidget.md#stylesheet)*

**Returns:** *string*

___

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[testAttribute](nodewidget.md#testattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |

**Returns:** *boolean*

___

###  text

▸ **text**(): *string*

**Returns:** *string*

___

###  update

▸ **update**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[update](nodewidget.md#update)*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[updateGeometry](nodewidget.md#updategeometry)*

**Returns:** *void*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowOpacity](nodewidget.md#windowopacity)*

**Returns:** *number*

___

###  windowState

▸ **windowState**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowState](nodewidget.md#windowstate)*

**Returns:** *number*

___

###  windowTitle

▸ **windowTitle**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[windowTitle](nodewidget.md#windowtitle)*

**Returns:** *string*

___

### `Static` about

▸ **about**(`parent`: [NodeWidget](nodewidget.md)‹any›, `title`: string, `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |
`title` | string |
`text` | string |

**Returns:** *void*

___

### `Static` aboutQt

▸ **aboutQt**(`parent`: [NodeWidget](nodewidget.md)‹any›, `title`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |
`title` | string |

**Returns:** *void*
