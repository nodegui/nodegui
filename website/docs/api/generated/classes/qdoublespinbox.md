---
id: "qdoublespinbox"
title: "QDoubleSpinBox"
sidebar_label: "QDoubleSpinBox"
---

> Create and control double spin box widgets.

**This class is a JS wrapper around Qt's [QDoubleSpinBox class](https://doc.qt.io/qt-5/qdoublespinbox.html)**

A `QDoubleSpinBox` provides ability to add and manipulate native double spin box widgets.

### Example

```javascript
const { QDoubleSpinBox } = require("@nodegui/nodegui");

const doublespinBox = new QDoubleSpinBox();
```

## Hierarchy

  ↳ [QAbstractSpinBox](qabstractspinbox.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)›

  ↳ **QDoubleSpinBox**

## Index

### Constructors

* [constructor](qdoublespinbox.md#constructor)

### Properties

* [_layout](qdoublespinbox.md#optional-_layout)
* [_rawInlineStyle](qdoublespinbox.md#_rawinlinestyle)
* [actions](qdoublespinbox.md#actions)
* [native](qdoublespinbox.md#native)
* [nodeChildren](qdoublespinbox.md#nodechildren)
* [nodeParent](qdoublespinbox.md#optional-nodeparent)
* [type](qdoublespinbox.md#type)

### Accessors

* [layout](qdoublespinbox.md#layout)

### Methods

* [acceptDrops](qdoublespinbox.md#acceptdrops)
* [activateWindow](qdoublespinbox.md#activatewindow)
* [addAction](qdoublespinbox.md#addaction)
* [addEventListener](qdoublespinbox.md#addeventlistener)
* [adjustSize](qdoublespinbox.md#adjustsize)
* [alignment](qdoublespinbox.md#alignment)
* [buttonSymbols](qdoublespinbox.md#buttonsymbols)
* [cleanText](qdoublespinbox.md#cleantext)
* [close](qdoublespinbox.md#close)
* [correctionMode](qdoublespinbox.md#correctionmode)
* [decimals](qdoublespinbox.md#decimals)
* [font](qdoublespinbox.md#font)
* [geometry](qdoublespinbox.md#geometry)
* [getFlexNode](qdoublespinbox.md#getflexnode)
* [hasAcceptableInput](qdoublespinbox.md#hasacceptableinput)
* [hasFrame](qdoublespinbox.md#hasframe)
* [hasMouseTracking](qdoublespinbox.md#hasmousetracking)
* [hide](qdoublespinbox.md#hide)
* [inherits](qdoublespinbox.md#inherits)
* [isAccelerated](qdoublespinbox.md#isaccelerated)
* [isEnabled](qdoublespinbox.md#isenabled)
* [isGroupSeparatorShown](qdoublespinbox.md#isgroupseparatorshown)
* [isReadOnly](qdoublespinbox.md#isreadonly)
* [isVisible](qdoublespinbox.md#isvisible)
* [keyboardTracking](qdoublespinbox.md#keyboardtracking)
* [lower](qdoublespinbox.md#lower)
* [mapFromGlobal](qdoublespinbox.md#mapfromglobal)
* [mapFromParent](qdoublespinbox.md#mapfromparent)
* [mapToGlobal](qdoublespinbox.md#maptoglobal)
* [mapToParent](qdoublespinbox.md#maptoparent)
* [maximum](qdoublespinbox.md#maximum)
* [maximumSize](qdoublespinbox.md#maximumsize)
* [minimum](qdoublespinbox.md#minimum)
* [minimumSize](qdoublespinbox.md#minimumsize)
* [move](qdoublespinbox.md#move)
* [objectName](qdoublespinbox.md#objectname)
* [pos](qdoublespinbox.md#pos)
* [prefix](qdoublespinbox.md#prefix)
* [property](qdoublespinbox.md#property)
* [raise](qdoublespinbox.md#raise)
* [removeAction](qdoublespinbox.md#removeaction)
* [removeEventListener](qdoublespinbox.md#removeeventlistener)
* [repaint](qdoublespinbox.md#repaint)
* [repolish](qdoublespinbox.md#repolish)
* [resize](qdoublespinbox.md#resize)
* [selectAll](qdoublespinbox.md#selectall)
* [setAccelerated](qdoublespinbox.md#setaccelerated)
* [setAcceptDrops](qdoublespinbox.md#setacceptdrops)
* [setAlignment](qdoublespinbox.md#setalignment)
* [setAttribute](qdoublespinbox.md#setattribute)
* [setButtonSymbols](qdoublespinbox.md#setbuttonsymbols)
* [setContextMenuPolicy](qdoublespinbox.md#setcontextmenupolicy)
* [setCorrectionMode](qdoublespinbox.md#setcorrectionmode)
* [setCursor](qdoublespinbox.md#setcursor)
* [setDecimals](qdoublespinbox.md#setdecimals)
* [setEnabled](qdoublespinbox.md#setenabled)
* [setFixedSize](qdoublespinbox.md#setfixedsize)
* [setFlexNodeSizeControlled](qdoublespinbox.md#setflexnodesizecontrolled)
* [setFocus](qdoublespinbox.md#setfocus)
* [setFont](qdoublespinbox.md#setfont)
* [setFrame](qdoublespinbox.md#setframe)
* [setGeometry](qdoublespinbox.md#setgeometry)
* [setGraphicsEffect](qdoublespinbox.md#setgraphicseffect)
* [setGroupSeparatorShown](qdoublespinbox.md#setgroupseparatorshown)
* [setInlineStyle](qdoublespinbox.md#setinlinestyle)
* [setKeyboardTracking](qdoublespinbox.md#setkeyboardtracking)
* [setLayout](qdoublespinbox.md#setlayout)
* [setMaximum](qdoublespinbox.md#setmaximum)
* [setMaximumSize](qdoublespinbox.md#setmaximumsize)
* [setMinimum](qdoublespinbox.md#setminimum)
* [setMinimumSize](qdoublespinbox.md#setminimumsize)
* [setMouseTracking](qdoublespinbox.md#setmousetracking)
* [setNodeParent](qdoublespinbox.md#setnodeparent)
* [setObjectName](qdoublespinbox.md#setobjectname)
* [setPrefix](qdoublespinbox.md#setprefix)
* [setProperty](qdoublespinbox.md#setproperty)
* [setRange](qdoublespinbox.md#setrange)
* [setReadOnly](qdoublespinbox.md#setreadonly)
* [setSingleStep](qdoublespinbox.md#setsinglestep)
* [setSpecialValueText](qdoublespinbox.md#setspecialvaluetext)
* [setStepType](qdoublespinbox.md#setsteptype)
* [setStyleSheet](qdoublespinbox.md#setstylesheet)
* [setSuffix](qdoublespinbox.md#setsuffix)
* [setValue](qdoublespinbox.md#setvalue)
* [setWindowFlag](qdoublespinbox.md#setwindowflag)
* [setWindowIcon](qdoublespinbox.md#setwindowicon)
* [setWindowOpacity](qdoublespinbox.md#setwindowopacity)
* [setWindowState](qdoublespinbox.md#setwindowstate)
* [setWindowTitle](qdoublespinbox.md#setwindowtitle)
* [setWrapping](qdoublespinbox.md#setwrapping)
* [show](qdoublespinbox.md#show)
* [showFullScreen](qdoublespinbox.md#showfullscreen)
* [showMaximized](qdoublespinbox.md#showmaximized)
* [showMinimized](qdoublespinbox.md#showminimized)
* [showNormal](qdoublespinbox.md#shownormal)
* [singleStep](qdoublespinbox.md#singlestep)
* [size](qdoublespinbox.md#size)
* [specialValueText](qdoublespinbox.md#specialvaluetext)
* [stepDown](qdoublespinbox.md#stepdown)
* [stepType](qdoublespinbox.md#steptype)
* [stepUp](qdoublespinbox.md#stepup)
* [styleSheet](qdoublespinbox.md#stylesheet)
* [suffix](qdoublespinbox.md#suffix)
* [testAttribute](qdoublespinbox.md#testattribute)
* [text](qdoublespinbox.md#text)
* [textFromValue](qdoublespinbox.md#textfromvalue)
* [update](qdoublespinbox.md#update)
* [updateGeometry](qdoublespinbox.md#updategeometry)
* [value](qdoublespinbox.md#value)
* [valueFromText](qdoublespinbox.md#valuefromtext)
* [windowOpacity](qdoublespinbox.md#windowopacity)
* [windowState](qdoublespinbox.md#windowstate)
* [windowTitle](qdoublespinbox.md#windowtitle)
* [wrapping](qdoublespinbox.md#wrapping)

## Constructors

###  constructor

\+ **new QDoubleSpinBox**(): *[QDoubleSpinBox](qdoublespinbox.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QDoubleSpinBox](qdoublespinbox.md)*

\+ **new QDoubleSpinBox**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QDoubleSpinBox](qdoublespinbox.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QDoubleSpinBox](qdoublespinbox.md)*

## Properties

### `Optional` _layout

• **_layout**? : *[NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)›*

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

• **get layout**(): *[NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)› | undefined*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Returns:** *[NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)› | undefined*

• **set layout**(`l`: [NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)› | undefined): *void*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Parameters:**

Name | Type |
------ | ------ |
`l` | [NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)› &#124; undefined |

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QDoubleSpinBoxSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QDoubleSpinBoxSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QDoubleSpinBoxSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  cleanText

▸ **cleanText**(): *string*

**Returns:** *string*

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

###  decimals

▸ **decimals**(): *number*

**Returns:** *number*

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

###  maximum

▸ **maximum**(): *number*

**Returns:** *number*

___

###  maximumSize

▸ **maximumSize**(): *[QSize](qsize.md)*

*Inherited from [QMenu](qmenu.md).[maximumSize](qmenu.md#maximumsize)*

**Returns:** *[QSize](qsize.md)*

___

###  minimum

▸ **minimum**(): *number*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QDoubleSpinBoxSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QDoubleSpinBoxSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QDoubleSpinBoxSignals[SignalType] |

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

###  setDecimals

▸ **setDecimals**(`prec`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`prec` | number |

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

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QDoubleSpinBoxSignals](../interfaces/qdoublespinboxsignals.md)› |

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

▸ **setMinimum**(`min`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`min` | number |

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

*Inherited from [NodeObject](nodeobject.md).[setProperty](nodeobject.md#setproperty)*

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

###  setSingleStep

▸ **setSingleStep**(`val`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`val` | number |

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

###  setStepType

▸ **setStepType**(`stepType`: [StepType](../enums/steptype.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`stepType` | [StepType](../enums/steptype.md) |

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

###  setSuffix

▸ **setSuffix**(`suffix`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`suffix` | string |

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

###  singleStep

▸ **singleStep**(): *number*

**Returns:** *number*

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

###  stepType

▸ **stepType**(): *[StepType](../enums/steptype.md)*

**Returns:** *[StepType](../enums/steptype.md)*

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

###  textFromValue

▸ **textFromValue**(`value`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *string*

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

**Returns:** *number*

___

###  valueFromText

▸ **valueFromText**(`text`: string): *number*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

___

###  wrapping

▸ **wrapping**(): *boolean*

*Inherited from [QAbstractSpinBox](qabstractspinbox.md).[wrapping](qabstractspinbox.md#wrapping)*

**Returns:** *boolean*
