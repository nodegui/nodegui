---
id: "qcalendarwidget"
title: "QCalendarWidget"
sidebar_label: "QCalendarWidget"
---

> Create and control a selectable monthly calendar.

**This class is a JS wrapper around Qt's [QCalendarWidget class](https://doc.qt.io/qt-5/qcalendarwidget.html)**

A `QCalendarWidget` provides a monthly based calendar widget allowing the user to select a date.

### Example

```javascript
const { QCalendarWidget } = require("@nodegui/nodegui");

const calendarWidget = new QCalendarWidget();
// more will follow when .selectedDate() et cetera are implemented
```

## Hierarchy

  ↳ [NodeWidget](nodewidget.md)‹[QCalendarWidgetSignals](../interfaces/qcalendarwidgetsignals.md)›

  ↳ **QCalendarWidget**

## Index

### Constructors

* [constructor](qcalendarwidget.md#constructor)

### Properties

* [_rawInlineStyle](qcalendarwidget.md#_rawinlinestyle)
* [layout](qcalendarwidget.md#optional-layout)
* [native](qcalendarwidget.md#native)
* [nodeChildren](qcalendarwidget.md#nodechildren)
* [nodeParent](qcalendarwidget.md#optional-nodeparent)
* [type](qcalendarwidget.md#type)

### Methods

* [activateWindow](qcalendarwidget.md#activatewindow)
* [addEventListener](qcalendarwidget.md#addeventlistener)
* [adjustSize](qcalendarwidget.md#adjustsize)
* [close](qcalendarwidget.md#close)
* [dateEditAcceptDelay](qcalendarwidget.md#dateeditacceptdelay)
* [firstDayOfWeek](qcalendarwidget.md#firstdayofweek)
* [font](qcalendarwidget.md#font)
* [geometry](qcalendarwidget.md#geometry)
* [getFlexNode](qcalendarwidget.md#getflexnode)
* [hasMouseTracking](qcalendarwidget.md#hasmousetracking)
* [hide](qcalendarwidget.md#hide)
* [horizontalHeaderFormat](qcalendarwidget.md#horizontalheaderformat)
* [inherits](qcalendarwidget.md#inherits)
* [isDateEditEnabled](qcalendarwidget.md#isdateeditenabled)
* [isEnabled](qcalendarwidget.md#isenabled)
* [isGridVisible](qcalendarwidget.md#isgridvisible)
* [isNavigationBarVisible](qcalendarwidget.md#isnavigationbarvisible)
* [isVisible](qcalendarwidget.md#isvisible)
* [lower](qcalendarwidget.md#lower)
* [move](qcalendarwidget.md#move)
* [objectName](qcalendarwidget.md#objectname)
* [pos](qcalendarwidget.md#pos)
* [property](qcalendarwidget.md#property)
* [raise](qcalendarwidget.md#raise)
* [removeEventListener](qcalendarwidget.md#removeeventlistener)
* [repaint](qcalendarwidget.md#repaint)
* [resize](qcalendarwidget.md#resize)
* [selectionMode](qcalendarwidget.md#selectionmode)
* [setAttribute](qcalendarwidget.md#setattribute)
* [setContextMenuPolicy](qcalendarwidget.md#setcontextmenupolicy)
* [setCursor](qcalendarwidget.md#setcursor)
* [setDateEditAcceptDelay](qcalendarwidget.md#setdateeditacceptdelay)
* [setDateEditEnabled](qcalendarwidget.md#setdateeditenabled)
* [setEnabled](qcalendarwidget.md#setenabled)
* [setFirstDayOfWeek](qcalendarwidget.md#setfirstdayofweek)
* [setFixedSize](qcalendarwidget.md#setfixedsize)
* [setFlexNodeSizeControlled](qcalendarwidget.md#setflexnodesizecontrolled)
* [setFont](qcalendarwidget.md#setfont)
* [setGeometry](qcalendarwidget.md#setgeometry)
* [setGridVisible](qcalendarwidget.md#setgridvisible)
* [setHorizontalHeaderFormat](qcalendarwidget.md#sethorizontalheaderformat)
* [setInlineStyle](qcalendarwidget.md#setinlinestyle)
* [setLayout](qcalendarwidget.md#setlayout)
* [setMaximumSize](qcalendarwidget.md#setmaximumsize)
* [setMinimumSize](qcalendarwidget.md#setminimumsize)
* [setMouseTracking](qcalendarwidget.md#setmousetracking)
* [setNavigationBarVisible](qcalendarwidget.md#setnavigationbarvisible)
* [setNodeParent](qcalendarwidget.md#setnodeparent)
* [setObjectName](qcalendarwidget.md#setobjectname)
* [setProperty](qcalendarwidget.md#setproperty)
* [setSelectionMode](qcalendarwidget.md#setselectionmode)
* [setStyleSheet](qcalendarwidget.md#setstylesheet)
* [setVerticalHeaderFormat](qcalendarwidget.md#setverticalheaderformat)
* [setWindowFlag](qcalendarwidget.md#setwindowflag)
* [setWindowIcon](qcalendarwidget.md#setwindowicon)
* [setWindowOpacity](qcalendarwidget.md#setwindowopacity)
* [setWindowState](qcalendarwidget.md#setwindowstate)
* [setWindowTitle](qcalendarwidget.md#setwindowtitle)
* [show](qcalendarwidget.md#show)
* [showFullScreen](qcalendarwidget.md#showfullscreen)
* [showMaximized](qcalendarwidget.md#showmaximized)
* [showMinimized](qcalendarwidget.md#showminimized)
* [showNormal](qcalendarwidget.md#shownormal)
* [size](qcalendarwidget.md#size)
* [styleSheet](qcalendarwidget.md#stylesheet)
* [testAttribute](qcalendarwidget.md#testattribute)
* [update](qcalendarwidget.md#update)
* [updateGeometry](qcalendarwidget.md#updategeometry)
* [verticalHeaderFormat](qcalendarwidget.md#verticalheaderformat)
* [windowOpacity](qcalendarwidget.md#windowopacity)
* [windowState](qcalendarwidget.md#windowstate)
* [windowTitle](qcalendarwidget.md#windowtitle)

## Constructors

###  constructor

\+ **new QCalendarWidget**(): *[QCalendarWidget](qcalendarwidget.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QCalendarWidget](qcalendarwidget.md)*

\+ **new QCalendarWidget**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QCalendarWidget](qcalendarwidget.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QCalendarWidget](qcalendarwidget.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QCalendarWidgetSignals](../interfaces/qcalendarwidgetsignals.md)›*

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

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[activateWindow](nodewidget.md#activatewindow)*

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QCalendarWidgetSignals*

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

###  dateEditAcceptDelay

▸ **dateEditAcceptDelay**(): *number*

**Returns:** *number*

___

###  firstDayOfWeek

▸ **firstDayOfWeek**(): *[DayOfWeek](../enums/dayofweek.md)*

**Returns:** *[DayOfWeek](../enums/dayofweek.md)*

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

###  horizontalHeaderFormat

▸ **horizontalHeaderFormat**(): *[HorizontalHeaderFormat](../enums/horizontalheaderformat.md)*

**Returns:** *[HorizontalHeaderFormat](../enums/horizontalheaderformat.md)*

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

###  isDateEditEnabled

▸ **isDateEditEnabled**(): *boolean*

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isEnabled](nodewidget.md#isenabled)*

**Returns:** *boolean*

___

###  isGridVisible

▸ **isGridVisible**(): *boolean*

**Returns:** *boolean*

___

###  isNavigationBarVisible

▸ **isNavigationBarVisible**(): *boolean*

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

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QCalendarWidgetSignals*

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

###  selectionMode

▸ **selectionMode**(): *SelectionMode*

**Returns:** *SelectionMode*

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

###  setDateEditAcceptDelay

▸ **setDateEditAcceptDelay**(`delay`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`delay` | number |

**Returns:** *void*

___

###  setDateEditEnabled

▸ **setDateEditEnabled**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

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

###  setFirstDayOfWeek

▸ **setFirstDayOfWeek**(`dayOfWeek`: [DayOfWeek](../enums/dayofweek.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`dayOfWeek` | [DayOfWeek](../enums/dayofweek.md) |

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

###  setGridVisible

▸ **setGridVisible**(`show`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`show` | boolean |

**Returns:** *void*

___

###  setHorizontalHeaderFormat

▸ **setHorizontalHeaderFormat**(`format`: [HorizontalHeaderFormat](../enums/horizontalheaderformat.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`format` | [HorizontalHeaderFormat](../enums/horizontalheaderformat.md) |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QCalendarWidgetSignals](../interfaces/qcalendarwidgetsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QCalendarWidgetSignals](../interfaces/qcalendarwidgetsignals.md)› |

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

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMouseTracking](nodewidget.md#setmousetracking)*

**Parameters:**

Name | Type |
------ | ------ |
`isMouseTracked` | boolean |

**Returns:** *void*

___

###  setNavigationBarVisible

▸ **setNavigationBarVisible**(`visible`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`visible` | boolean |

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

###  setSelectionMode

▸ **setSelectionMode**(`mode`: SelectionMode): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | SelectionMode |

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

###  setVerticalHeaderFormat

▸ **setVerticalHeaderFormat**(`format`: [VerticalHeaderFormat](../enums/verticalheaderformat.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`format` | [VerticalHeaderFormat](../enums/verticalheaderformat.md) |

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

###  verticalHeaderFormat

▸ **verticalHeaderFormat**(): *[VerticalHeaderFormat](../enums/verticalheaderformat.md)*

**Returns:** *[VerticalHeaderFormat](../enums/verticalheaderformat.md)*

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
