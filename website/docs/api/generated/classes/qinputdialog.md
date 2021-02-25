---
id: "qinputdialog"
title: "QInputDialog"
sidebar_label: "QInputDialog"
---

> Create and control input modal dialogs.

**This class is a JS wrapper around Qt's [QInputDialog class](https://doc.qt.io/qt-5/qinputdialog.html)**

### Example

```javascript

import { QInputDialog } from '@nodegui/nodegui';

const dialog = new QInputDialog();
dialog.setLabelText('Click that Ok button');
dialog.exec();

```

## Hierarchy

  ↳ [NodeDialog](nodedialog.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)›

  ↳ **QInputDialog**

## Index

### Constructors

* [constructor](qinputdialog.md#constructor)

### Properties

* [_layout](qinputdialog.md#optional-_layout)
* [_rawInlineStyle](qinputdialog.md#_rawinlinestyle)
* [actions](qinputdialog.md#actions)
* [native](qinputdialog.md#native)
* [nodeChildren](qinputdialog.md#nodechildren)
* [nodeParent](qinputdialog.md#optional-nodeparent)
* [type](qinputdialog.md#type)

### Accessors

* [layout](qinputdialog.md#layout)

### Methods

* [acceptDrops](qinputdialog.md#acceptdrops)
* [activateWindow](qinputdialog.md#activatewindow)
* [addAction](qinputdialog.md#addaction)
* [addEventListener](qinputdialog.md#addeventlistener)
* [adjustSize](qinputdialog.md#adjustsize)
* [cancelButtonText](qinputdialog.md#cancelbuttontext)
* [close](qinputdialog.md#close)
* [doubleDecimals](qinputdialog.md#doubledecimals)
* [doubleMaximum](qinputdialog.md#doublemaximum)
* [doubleMinimum](qinputdialog.md#doubleminimum)
* [doubleStep](qinputdialog.md#doublestep)
* [doubleValue](qinputdialog.md#doublevalue)
* [exec](qinputdialog.md#exec)
* [font](qinputdialog.md#font)
* [geometry](qinputdialog.md#geometry)
* [getFlexNode](qinputdialog.md#getflexnode)
* [hasMouseTracking](qinputdialog.md#hasmousetracking)
* [hide](qinputdialog.md#hide)
* [inherits](qinputdialog.md#inherits)
* [inputMode](qinputdialog.md#inputmode)
* [intMaximum](qinputdialog.md#intmaximum)
* [intMinimum](qinputdialog.md#intminimum)
* [intStep](qinputdialog.md#intstep)
* [intValue](qinputdialog.md#intvalue)
* [isComboBoxEditable](qinputdialog.md#iscomboboxeditable)
* [isEnabled](qinputdialog.md#isenabled)
* [isSizeGripEnabled](qinputdialog.md#issizegripenabled)
* [isVisible](qinputdialog.md#isvisible)
* [labelText](qinputdialog.md#labeltext)
* [lower](qinputdialog.md#lower)
* [mapFromGlobal](qinputdialog.md#mapfromglobal)
* [mapFromParent](qinputdialog.md#mapfromparent)
* [mapToGlobal](qinputdialog.md#maptoglobal)
* [mapToParent](qinputdialog.md#maptoparent)
* [maximumSize](qinputdialog.md#maximumsize)
* [minimumSize](qinputdialog.md#minimumsize)
* [move](qinputdialog.md#move)
* [objectName](qinputdialog.md#objectname)
* [okButtonText](qinputdialog.md#okbuttontext)
* [open](qinputdialog.md#open)
* [options](qinputdialog.md#options)
* [pos](qinputdialog.md#pos)
* [property](qinputdialog.md#property)
* [raise](qinputdialog.md#raise)
* [reject](qinputdialog.md#reject)
* [removeAction](qinputdialog.md#removeaction)
* [removeEventListener](qinputdialog.md#removeeventlistener)
* [repaint](qinputdialog.md#repaint)
* [repolish](qinputdialog.md#repolish)
* [resize](qinputdialog.md#resize)
* [result](qinputdialog.md#result)
* [setAcceptDrops](qinputdialog.md#setacceptdrops)
* [setAttribute](qinputdialog.md#setattribute)
* [setCancelButtonText](qinputdialog.md#setcancelbuttontext)
* [setComboBoxEditable](qinputdialog.md#setcomboboxeditable)
* [setContextMenuPolicy](qinputdialog.md#setcontextmenupolicy)
* [setCursor](qinputdialog.md#setcursor)
* [setDoubleDecimals](qinputdialog.md#setdoubledecimals)
* [setDoubleMaximum](qinputdialog.md#setdoublemaximum)
* [setDoubleMinimum](qinputdialog.md#setdoubleminimum)
* [setDoubleStep](qinputdialog.md#setdoublestep)
* [setDoubleValue](qinputdialog.md#setdoublevalue)
* [setEnabled](qinputdialog.md#setenabled)
* [setFixedSize](qinputdialog.md#setfixedsize)
* [setFlexNodeSizeControlled](qinputdialog.md#setflexnodesizecontrolled)
* [setFocus](qinputdialog.md#setfocus)
* [setFont](qinputdialog.md#setfont)
* [setGeometry](qinputdialog.md#setgeometry)
* [setGraphicsEffect](qinputdialog.md#setgraphicseffect)
* [setInlineStyle](qinputdialog.md#setinlinestyle)
* [setInputMode](qinputdialog.md#setinputmode)
* [setIntMaximum](qinputdialog.md#setintmaximum)
* [setIntMinimum](qinputdialog.md#setintminimum)
* [setIntStep](qinputdialog.md#setintstep)
* [setIntValue](qinputdialog.md#setintvalue)
* [setLabelText](qinputdialog.md#setlabeltext)
* [setLayout](qinputdialog.md#setlayout)
* [setMaximumSize](qinputdialog.md#setmaximumsize)
* [setMinimumSize](qinputdialog.md#setminimumsize)
* [setModal](qinputdialog.md#setmodal)
* [setMouseTracking](qinputdialog.md#setmousetracking)
* [setNodeParent](qinputdialog.md#setnodeparent)
* [setObjectName](qinputdialog.md#setobjectname)
* [setOkButtonText](qinputdialog.md#setokbuttontext)
* [setOptions](qinputdialog.md#setoptions)
* [setProperty](qinputdialog.md#setproperty)
* [setResult](qinputdialog.md#setresult)
* [setSizeGripEnabled](qinputdialog.md#setsizegripenabled)
* [setStyleSheet](qinputdialog.md#setstylesheet)
* [setTextEchoMode](qinputdialog.md#settextechomode)
* [setTextValue](qinputdialog.md#settextvalue)
* [setWindowFlag](qinputdialog.md#setwindowflag)
* [setWindowIcon](qinputdialog.md#setwindowicon)
* [setWindowOpacity](qinputdialog.md#setwindowopacity)
* [setWindowState](qinputdialog.md#setwindowstate)
* [setWindowTitle](qinputdialog.md#setwindowtitle)
* [show](qinputdialog.md#show)
* [showFullScreen](qinputdialog.md#showfullscreen)
* [showMaximized](qinputdialog.md#showmaximized)
* [showMinimized](qinputdialog.md#showminimized)
* [showNormal](qinputdialog.md#shownormal)
* [size](qinputdialog.md#size)
* [styleSheet](qinputdialog.md#stylesheet)
* [testAttribute](qinputdialog.md#testattribute)
* [textEchoMode](qinputdialog.md#textechomode)
* [textValue](qinputdialog.md#textvalue)
* [update](qinputdialog.md#update)
* [updateGeometry](qinputdialog.md#updategeometry)
* [windowOpacity](qinputdialog.md#windowopacity)
* [windowState](qinputdialog.md#windowstate)
* [windowTitle](qinputdialog.md#windowtitle)

## Constructors

###  constructor

\+ **new QInputDialog**(): *[QInputDialog](qinputdialog.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Returns:** *[QInputDialog](qinputdialog.md)*

\+ **new QInputDialog**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QInputDialog](qinputdialog.md)*

*Overrides [NodeWidget](nodewidget.md).[constructor](nodewidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QInputDialog](qinputdialog.md)*

## Properties

### `Optional` _layout

• **_layout**? : *[NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)›*

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

• **get layout**(): *[NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)› | undefined*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Returns:** *[NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)› | undefined*

• **set layout**(`l`: [NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)› | undefined): *void*

*Inherited from [QMenu](qmenu.md).[layout](qmenu.md#layout)*

**Parameters:**

Name | Type |
------ | ------ |
`l` | [NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)› &#124; undefined |

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

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QInputDialogSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QInputDialogSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QInputDialogSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

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

###  cancelButtonText

▸ **cancelButtonText**(): *string*

**Returns:** *string*

___

###  close

▸ **close**(): *boolean*

*Inherited from [QMenu](qmenu.md).[close](qmenu.md#close)*

**Returns:** *boolean*

___

###  doubleDecimals

▸ **doubleDecimals**(): *number*

**Returns:** *number*

___

###  doubleMaximum

▸ **doubleMaximum**(): *number*

**Returns:** *number*

___

###  doubleMinimum

▸ **doubleMinimum**(): *number*

**Returns:** *number*

___

###  doubleStep

▸ **doubleStep**(): *number*

**Returns:** *number*

___

###  doubleValue

▸ **doubleValue**(): *number*

**Returns:** *number*

___

###  exec

▸ **exec**(): *[DialogCode](../enums/dialogcode.md)*

*Inherited from [NodeDialog](nodedialog.md).[exec](nodedialog.md#exec)*

**Returns:** *[DialogCode](../enums/dialogcode.md)*

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

###  inputMode

▸ **inputMode**(): *[InputMode](../enums/inputmode.md)*

**Returns:** *[InputMode](../enums/inputmode.md)*

___

###  intMaximum

▸ **intMaximum**(): *number*

**Returns:** *number*

___

###  intMinimum

▸ **intMinimum**(): *number*

**Returns:** *number*

___

###  intStep

▸ **intStep**(): *number*

**Returns:** *number*

___

###  intValue

▸ **intValue**(): *number*

**Returns:** *number*

___

###  isComboBoxEditable

▸ **isComboBoxEditable**(): *boolean*

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isEnabled](qmenu.md#isenabled)*

**Returns:** *boolean*

___

###  isSizeGripEnabled

▸ **isSizeGripEnabled**(): *boolean*

*Inherited from [NodeDialog](nodedialog.md).[isSizeGripEnabled](nodedialog.md#issizegripenabled)*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [QMenu](qmenu.md).[isVisible](qmenu.md#isvisible)*

**Returns:** *boolean*

___

###  labelText

▸ **labelText**(): *string*

**Returns:** *string*

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

###  okButtonText

▸ **okButtonText**(): *string*

**Returns:** *string*

___

###  open

▸ **open**(): *void*

*Inherited from [NodeDialog](nodedialog.md).[open](nodedialog.md#open)*

**Returns:** *void*

___

###  options

▸ **options**(): *[InputDialogOptions](../enums/inputdialogoptions.md)*

**Returns:** *[InputDialogOptions](../enums/inputdialogoptions.md)*

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

###  reject

▸ **reject**(): *void*

*Inherited from [NodeDialog](nodedialog.md).[reject](nodedialog.md#reject)*

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

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QInputDialogSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QInputDialogSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QInputDialogSignals[SignalType] |

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

###  result

▸ **result**(): *number*

*Inherited from [NodeDialog](nodedialog.md).[result](nodedialog.md#result)*

**Returns:** *number*

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

###  setCancelButtonText

▸ **setCancelButtonText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setComboBoxEditable

▸ **setComboBoxEditable**(`editable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`editable` | boolean |

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

###  setDoubleDecimals

▸ **setDoubleDecimals**(`decimals`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`decimals` | number |

**Returns:** *void*

___

###  setDoubleMaximum

▸ **setDoubleMaximum**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setDoubleMinimum

▸ **setDoubleMinimum**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setDoubleStep

▸ **setDoubleStep**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setDoubleValue

▸ **setDoubleValue**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

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

###  setInputMode

▸ **setInputMode**(`value`: [InputMode](../enums/inputmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | [InputMode](../enums/inputmode.md) |

**Returns:** *void*

___

###  setIntMaximum

▸ **setIntMaximum**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setIntMinimum

▸ **setIntMinimum**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setIntStep

▸ **setIntStep**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setIntValue

▸ **setIntValue**(`value`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | number |

**Returns:** *void*

___

###  setLabelText

▸ **setLabelText**(`value`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)›): *void*

*Inherited from [QMenu](qmenu.md).[setLayout](qmenu.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QInputDialogSignals](../interfaces/qinputdialogsignals.md)› |

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

###  setOkButtonText

▸ **setOkButtonText**(`value`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | string |

**Returns:** *void*

___

###  setOptions

▸ **setOptions**(`value`: [InputDialogOptions](../enums/inputdialogoptions.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | [InputDialogOptions](../enums/inputdialogoptions.md) |

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

*Inherited from [QMenu](qmenu.md).[setStyleSheet](qmenu.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setTextEchoMode

▸ **setTextEchoMode**(`value`: [EchoMode](../enums/echomode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | [EchoMode](../enums/echomode.md) |

**Returns:** *void*

___

###  setTextValue

▸ **setTextValue**(`value`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`value` | string |

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

###  textEchoMode

▸ **textEchoMode**(): *[EchoMode](../enums/echomode.md)*

**Returns:** *[EchoMode](../enums/echomode.md)*

___

###  textValue

▸ **textValue**(): *string*

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
