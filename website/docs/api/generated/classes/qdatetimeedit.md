---
id: "qdatetimeedit"
title: "QDateTimeEdit"
sidebar_label: "QDateTimeEdit"
---

> Creates and controls a widget for editing dates and times with spin box layout.

**This class is a JS wrapper around Qt's [QDateTimeEdit class](https://doc.qt.io/qt-5/qdatetimeedit.html)**

### Example

```javascript
const { QDateTimeEdit, QDate, QTime } = require("@nodegui/nodegui");

const dateTimeEdit = new QDateTimeEdit();

let date = new QDate();
date.setDate(2020, 1, 1);

let time = new QTime();
time.setHMS(16, 30, 0);

dateTimeEdit.setDate(date);
dateTimeEdit.setTime(time);
```

## Hierarchy

  ↳ [NodeDateTimeEdit](nodedatetimeedit.md)

  ↳ **QDateTimeEdit**

## Index

### Constructors

* [constructor](qdatetimeedit.md#constructor)

### Properties

* [_layout](qdatetimeedit.md#optional-_layout)
* [_rawInlineStyle](qdatetimeedit.md#_rawinlinestyle)
* [actions](qdatetimeedit.md#actions)
* [calendar](qdatetimeedit.md#optional-calendar)
* [native](qdatetimeedit.md#native)
* [nodeChildren](qdatetimeedit.md#nodechildren)
* [nodeParent](qdatetimeedit.md#optional-nodeparent)
* [type](qdatetimeedit.md#type)

### Accessors

* [layout](qdatetimeedit.md#layout)

### Methods

* [acceptDrops](qdatetimeedit.md#acceptdrops)
* [activateWindow](qdatetimeedit.md#activatewindow)
* [addAction](qdatetimeedit.md#addaction)
* [addEventListener](qdatetimeedit.md#addeventlistener)
* [adjustSize](qdatetimeedit.md#adjustsize)
* [alignment](qdatetimeedit.md#alignment)
* [buttonSymbols](qdatetimeedit.md#buttonsymbols)
* [calendarPopup](qdatetimeedit.md#calendarpopup)
* [calendarWidget](qdatetimeedit.md#calendarwidget)
* [clearFocus](qdatetimeedit.md#clearfocus)
* [close](qdatetimeedit.md#close)
* [correctionMode](qdatetimeedit.md#correctionmode)
* [date](qdatetimeedit.md#date)
* [dateTime](qdatetimeedit.md#datetime)
* [displayFormat](qdatetimeedit.md#displayformat)
* [font](qdatetimeedit.md#font)
* [geometry](qdatetimeedit.md#geometry)
* [getFlexNode](qdatetimeedit.md#getflexnode)
* [hasAcceptableInput](qdatetimeedit.md#hasacceptableinput)
* [hasFrame](qdatetimeedit.md#hasframe)
* [hasMouseTracking](qdatetimeedit.md#hasmousetracking)
* [hide](qdatetimeedit.md#hide)
* [inherits](qdatetimeedit.md#inherits)
* [isAccelerated](qdatetimeedit.md#isaccelerated)
* [isActiveWindow](qdatetimeedit.md#isactivewindow)
* [isEnabled](qdatetimeedit.md#isenabled)
* [isGroupSeparatorShown](qdatetimeedit.md#isgroupseparatorshown)
* [isReadOnly](qdatetimeedit.md#isreadonly)
* [isVisible](qdatetimeedit.md#isvisible)
* [keyboardTracking](qdatetimeedit.md#keyboardtracking)
* [lower](qdatetimeedit.md#lower)
* [mapFromGlobal](qdatetimeedit.md#mapfromglobal)
* [mapFromParent](qdatetimeedit.md#mapfromparent)
* [mapToGlobal](qdatetimeedit.md#maptoglobal)
* [mapToParent](qdatetimeedit.md#maptoparent)
* [maximumSize](qdatetimeedit.md#maximumsize)
* [minimumSize](qdatetimeedit.md#minimumsize)
* [move](qdatetimeedit.md#move)
* [objectName](qdatetimeedit.md#objectname)
* [pos](qdatetimeedit.md#pos)
* [property](qdatetimeedit.md#property)
* [raise](qdatetimeedit.md#raise)
* [removeAction](qdatetimeedit.md#removeaction)
* [removeEventListener](qdatetimeedit.md#removeeventlistener)
* [repaint](qdatetimeedit.md#repaint)
* [repolish](qdatetimeedit.md#repolish)
* [resize](qdatetimeedit.md#resize)
* [selectAll](qdatetimeedit.md#selectall)
* [setAccelerated](qdatetimeedit.md#setaccelerated)
* [setAcceptDrops](qdatetimeedit.md#setacceptdrops)
* [setAlignment](qdatetimeedit.md#setalignment)
* [setAttribute](qdatetimeedit.md#setattribute)
* [setButtonSymbols](qdatetimeedit.md#setbuttonsymbols)
* [setCalendarPopup](qdatetimeedit.md#setcalendarpopup)
* [setCalendarWidget](qdatetimeedit.md#setcalendarwidget)
* [setContextMenuPolicy](qdatetimeedit.md#setcontextmenupolicy)
* [setCorrectionMode](qdatetimeedit.md#setcorrectionmode)
* [setCursor](qdatetimeedit.md#setcursor)
* [setDate](qdatetimeedit.md#setdate)
* [setDateTime](qdatetimeedit.md#setdatetime)
* [setDisplayFormat](qdatetimeedit.md#setdisplayformat)
* [setEnabled](qdatetimeedit.md#setenabled)
* [setFixedSize](qdatetimeedit.md#setfixedsize)
* [setFlexNodeSizeControlled](qdatetimeedit.md#setflexnodesizecontrolled)
* [setFocus](qdatetimeedit.md#setfocus)
* [setFocusPolicy](qdatetimeedit.md#setfocuspolicy)
* [setFont](qdatetimeedit.md#setfont)
* [setFrame](qdatetimeedit.md#setframe)
* [setGeometry](qdatetimeedit.md#setgeometry)
* [setGraphicsEffect](qdatetimeedit.md#setgraphicseffect)
* [setGroupSeparatorShown](qdatetimeedit.md#setgroupseparatorshown)
* [setInlineStyle](qdatetimeedit.md#setinlinestyle)
* [setKeyboardTracking](qdatetimeedit.md#setkeyboardtracking)
* [setLayout](qdatetimeedit.md#setlayout)
* [setMaximumSize](qdatetimeedit.md#setmaximumsize)
* [setMinimumSize](qdatetimeedit.md#setminimumsize)
* [setMouseTracking](qdatetimeedit.md#setmousetracking)
* [setNodeParent](qdatetimeedit.md#setnodeparent)
* [setObjectName](qdatetimeedit.md#setobjectname)
* [setProperty](qdatetimeedit.md#setproperty)
* [setReadOnly](qdatetimeedit.md#setreadonly)
* [setSpecialValueText](qdatetimeedit.md#setspecialvaluetext)
* [setStyleSheet](qdatetimeedit.md#setstylesheet)
* [setTime](qdatetimeedit.md#settime)
* [setTimeSpec](qdatetimeedit.md#settimespec)
* [setWindowFlag](qdatetimeedit.md#setwindowflag)
* [setWindowIcon](qdatetimeedit.md#setwindowicon)
* [setWindowOpacity](qdatetimeedit.md#setwindowopacity)
* [setWindowState](qdatetimeedit.md#setwindowstate)
* [setWindowTitle](qdatetimeedit.md#setwindowtitle)
* [setWrapping](qdatetimeedit.md#setwrapping)
* [show](qdatetimeedit.md#show)
* [showFullScreen](qdatetimeedit.md#showfullscreen)
* [showMaximized](qdatetimeedit.md#showmaximized)
* [showMinimized](qdatetimeedit.md#showminimized)
* [showNormal](qdatetimeedit.md#shownormal)
* [size](qdatetimeedit.md#size)
* [specialValueText](qdatetimeedit.md#specialvaluetext)
* [stepDown](qdatetimeedit.md#stepdown)
* [stepUp](qdatetimeedit.md#stepup)
* [styleSheet](qdatetimeedit.md#stylesheet)
* [testAttribute](qdatetimeedit.md#testattribute)
* [text](qdatetimeedit.md#text)
* [time](qdatetimeedit.md#time)
* [timeSpec](qdatetimeedit.md#timespec)
* [update](qdatetimeedit.md#update)
* [updateGeometry](qdatetimeedit.md#updategeometry)
* [windowOpacity](qdatetimeedit.md#windowopacity)
* [windowState](qdatetimeedit.md#windowstate)
* [windowTitle](qdatetimeedit.md#windowtitle)
* [wrapping](qdatetimeedit.md#wrapping)

## Constructors

###  constructor

\+ **new QDateTimeEdit**(): *[QDateTimeEdit](qdatetimeedit.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QDateTimeEdit](qdatetimeedit.md)*

\+ **new QDateTimeEdit**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QDateTimeEdit](qdatetimeedit.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QDateTimeEdit](qdatetimeedit.md)*

## Properties

### `Optional` _layout

• **_layout**? : *[NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)›*

*Inherited from [QMenu](qmenu.md).[_layout](qmenu.md#optional-_layout)*

___

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [QMenu](qmenu.md).[_rawInlineStyle](qmenu.md#_rawinlinestyle)*

___

###  actions

• **actions**: *Set‹[QAction](qaction.md)›*

*Inherited from [QMenu](qmenu.md).[actions](qmenu.md#actions)*

___

### `Optional` calendar

• **calendar**? : *[QCalendarWidget](qcalendarwidget.md)*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[calendar](nodedatetimeedit.md#optional-calendar)*

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

## Accessors

###  layout

• **get layout**(): *[NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)› | undefined*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Returns:** *[NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)› | undefined*

• **set layout**(`l`: [NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)› | undefined): *void*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Parameters:**

Name | Type |
------ | ------ |
`l` | [NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)› &#124; undefined |

**Returns:** *void*

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QDateTimeEditSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QDateTimeEditSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QDateTimeEditSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[alignment](qabstractspinbox.md#alignment)*

**Returns:** *[AlignmentFlag](../enums/alignmentflag.md)*

___

###  buttonSymbols

▸ **buttonSymbols**(): *[ButtonSymbols](../enums/buttonsymbols.md)*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[buttonSymbols](qabstractspinbox.md#buttonsymbols)*

**Returns:** *[ButtonSymbols](../enums/buttonsymbols.md)*

___

###  calendarPopup

▸ **calendarPopup**(): *boolean*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[calendarPopup](nodedatetimeedit.md#calendarpopup)*

**Returns:** *boolean*

___

###  calendarWidget

▸ **calendarWidget**(): *[QCalendarWidget](qcalendarwidget.md) | null*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[calendarWidget](nodedatetimeedit.md#calendarwidget)*

**Returns:** *[QCalendarWidget](qcalendarwidget.md) | null*

___

###  clearFocus

▸ **clearFocus**(): *void*

*Inherited from [QMenu](qmenu.md).[clearFocus](qmenu.md#clearfocus)*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  correctionMode

▸ **correctionMode**(): *[CorrectionMode](../enums/correctionmode.md)*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[correctionMode](qabstractspinbox.md#correctionmode)*

**Returns:** *[CorrectionMode](../enums/correctionmode.md)*

___

###  date

▸ **date**(): *[QDate](qdate.md)*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[date](nodedatetimeedit.md#date)*

**Returns:** *[QDate](qdate.md)*

___

###  dateTime

▸ **dateTime**(): *[QDateTime](qdatetime.md)*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[dateTime](nodedatetimeedit.md#datetime)*

**Returns:** *[QDateTime](qdatetime.md)*

___

###  displayFormat

▸ **displayFormat**(): *string*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[displayFormat](nodedatetimeedit.md#displayformat)*

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

###  hasAcceptableInput

▸ **hasAcceptableInput**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[hasAcceptableInput](qabstractspinbox.md#hasacceptableinput)*

**Returns:** *boolean*

___

###  hasFrame

▸ **hasFrame**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[hasFrame](qabstractspinbox.md#hasframe)*

**Returns:** *boolean*

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

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isGroupSeparatorShown

▸ **isGroupSeparatorShown**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[isGroupSeparatorShown](qabstractspinbox.md#isgroupseparatorshown)*

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

###  keyboardTracking

▸ **keyboardTracking**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[keyboardTracking](qabstractspinbox.md#keyboardtracking)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QDateTimeEditSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QDateTimeEditSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QDateTimeEditSignals[SignalType] |

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

###  setButtonSymbols

▸ **setButtonSymbols**(`bs`: [ButtonSymbols](../enums/buttonsymbols.md)): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setButtonSymbols](qabstractspinbox.md#setbuttonsymbols)*

**Parameters:**

Name | Type |
------ | ------ |
`bs` | [ButtonSymbols](../enums/buttonsymbols.md) |

**Returns:** *void*

___

###  setCalendarPopup

▸ **setCalendarPopup**(`enable`: boolean): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setCalendarPopup](nodedatetimeedit.md#setcalendarpopup)*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setCalendarWidget

▸ **setCalendarWidget**(`calendarWidget`: [QCalendarWidget](qcalendarwidget.md)): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setCalendarWidget](nodedatetimeedit.md#setcalendarwidget)*

**Parameters:**

Name | Type |
------ | ------ |
`calendarWidget` | [QCalendarWidget](qcalendarwidget.md) |

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

###  setDate

▸ **setDate**(`date`: [QDate](qdate.md)): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setDate](nodedatetimeedit.md#setdate)*

**Parameters:**

Name | Type |
------ | ------ |
`date` | [QDate](qdate.md) |

**Returns:** *void*

___

###  setDateTime

▸ **setDateTime**(`datetime`: [QDateTime](qdatetime.md)): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setDateTime](nodedatetimeedit.md#setdatetime)*

**Parameters:**

Name | Type |
------ | ------ |
`datetime` | [QDateTime](qdatetime.md) |

**Returns:** *void*

___

###  setDisplayFormat

▸ **setDisplayFormat**(`format`: string): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setDisplayFormat](nodedatetimeedit.md#setdisplayformat)*

**Parameters:**

Name | Type |
------ | ------ |
`format` | string |

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

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [QMenu](qmenu.md).[setInlineStyle](qmenu.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QDateTimeEditSignals](../interfaces/qdatetimeeditsignals.md)› |

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

###  setReadOnly

▸ **setReadOnly**(`r`: boolean): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[setReadOnly](qabstractspinbox.md#setreadonly)*

**Parameters:**

Name | Type |
------ | ------ |
`r` | boolean |

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

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [QMenu](qmenu.md).[setStyleSheet](qmenu.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setTime

▸ **setTime**(`time`: [QTime](qtime.md)): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setTime](nodedatetimeedit.md#settime)*

**Parameters:**

Name | Type |
------ | ------ |
`time` | [QTime](qtime.md) |

**Returns:** *void*

___

###  setTimeSpec

▸ **setTimeSpec**(`spec`: [TimeSpec](../enums/timespec.md)): *void*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[setTimeSpec](nodedatetimeedit.md#settimespec)*

**Parameters:**

Name | Type |
------ | ------ |
`spec` | [TimeSpec](../enums/timespec.md) |

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

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[size](qmenu.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  specialValueText

▸ **specialValueText**(): *string*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[specialValueText](qabstractspinbox.md#specialvaluetext)*

**Returns:** *string*

___

###  stepDown

▸ **stepDown**(): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[stepDown](qabstractspinbox.md#stepdown)*

**Returns:** *void*

___

###  stepUp

▸ **stepUp**(): *void*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[stepUp](qabstractspinbox.md#stepup)*

**Returns:** *void*

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

###  text

▸ **text**(): *string*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[text](qabstractspinbox.md#text)*

**Returns:** *string*

___

###  time

▸ **time**(): *[QTime](qtime.md)*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[time](nodedatetimeedit.md#time)*

**Returns:** *[QTime](qtime.md)*

___

###  timeSpec

▸ **timeSpec**(): *[TimeSpec](../enums/timespec.md)*

*Inherited from [NodeDateTimeEdit](nodedatetimeedit.md).[timeSpec](nodedatetimeedit.md#timespec)*

**Returns:** *[TimeSpec](../enums/timespec.md)*

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

___

###  wrapping

▸ **wrapping**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[wrapping](qabstractspinbox.md#wrapping)*

**Returns:** *boolean*
