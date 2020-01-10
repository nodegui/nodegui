---
id: "qfiledialog"
title: "QFileDialog"
sidebar_label: "QFileDialog"
---

> Create and control file dialogs.

**This class is a JS wrapper around Qt's [QFileDialog class](https://doc.qt.io/qt-5/qfiledialog.html)**

A `QFileDialog` class provides a dialog that allow users to select files or directories.

### Example

```javascript
const { QFileDialog } = require("@nodegui/nodegui");

const fileDialog = new QFileDialog();
fileDialog.setFileMode(FileMode.AnyFile);
fileDialog.setNameFilter('Images (*.png *.xpm *.jpg)');
fileDialog.exec();

const selectedFiles = fileDialog.selectedFiles();
console.log(selectedFiles);

```

## Hierarchy

  ↳ [NodeDialog](nodedialog.md)‹[QFileDialogSignals](../interfaces/qfiledialogsignals.md)›

  ↳ **QFileDialog**

## Index

### Constructors

* [constructor](qfiledialog.md#constructor)

### Properties

* [_rawInlineStyle](qfiledialog.md#_rawinlinestyle)
* [layout](qfiledialog.md#optional-layout)
* [native](qfiledialog.md#native)
* [nodeChildren](qfiledialog.md#nodechildren)
* [nodeParent](qfiledialog.md#optional-nodeparent)
* [type](qfiledialog.md#type)

### Methods

* [acceptMode](qfiledialog.md#acceptmode)
* [activateWindow](qfiledialog.md#activatewindow)
* [addEventListener](qfiledialog.md#addeventlistener)
* [adjustSize](qfiledialog.md#adjustsize)
* [close](qfiledialog.md#close)
* [defaultSuffix](qfiledialog.md#defaultsuffix)
* [exec](qfiledialog.md#exec)
* [fileMode](qfiledialog.md#filemode)
* [font](qfiledialog.md#font)
* [geometry](qfiledialog.md#geometry)
* [getFlexNode](qfiledialog.md#getflexnode)
* [hasMouseTracking](qfiledialog.md#hasmousetracking)
* [hide](qfiledialog.md#hide)
* [inherits](qfiledialog.md#inherits)
* [isEnabled](qfiledialog.md#isenabled)
* [isSizeGripEnabled](qfiledialog.md#issizegripenabled)
* [isVisible](qfiledialog.md#isvisible)
* [labelText](qfiledialog.md#labeltext)
* [lower](qfiledialog.md#lower)
* [move](qfiledialog.md#move)
* [objectName](qfiledialog.md#objectname)
* [open](qfiledialog.md#open)
* [options](qfiledialog.md#options)
* [pos](qfiledialog.md#pos)
* [property](qfiledialog.md#property)
* [raise](qfiledialog.md#raise)
* [reject](qfiledialog.md#reject)
* [removeEventListener](qfiledialog.md#removeeventlistener)
* [repaint](qfiledialog.md#repaint)
* [resize](qfiledialog.md#resize)
* [result](qfiledialog.md#result)
* [selectedFiles](qfiledialog.md#selectedfiles)
* [setAcceptMode](qfiledialog.md#setacceptmode)
* [setAttribute](qfiledialog.md#setattribute)
* [setContextMenuPolicy](qfiledialog.md#setcontextmenupolicy)
* [setCursor](qfiledialog.md#setcursor)
* [setDefaultSuffix](qfiledialog.md#setdefaultsuffix)
* [setEnabled](qfiledialog.md#setenabled)
* [setFileMode](qfiledialog.md#setfilemode)
* [setFixedSize](qfiledialog.md#setfixedsize)
* [setFlexNodeSizeControlled](qfiledialog.md#setflexnodesizecontrolled)
* [setFont](qfiledialog.md#setfont)
* [setGeometry](qfiledialog.md#setgeometry)
* [setInlineStyle](qfiledialog.md#setinlinestyle)
* [setLabelText](qfiledialog.md#setlabeltext)
* [setLayout](qfiledialog.md#setlayout)
* [setMaximumSize](qfiledialog.md#setmaximumsize)
* [setMinimumSize](qfiledialog.md#setminimumsize)
* [setModal](qfiledialog.md#setmodal)
* [setMouseTracking](qfiledialog.md#setmousetracking)
* [setNameFilter](qfiledialog.md#setnamefilter)
* [setNodeParent](qfiledialog.md#setnodeparent)
* [setObjectName](qfiledialog.md#setobjectname)
* [setOption](qfiledialog.md#setoption)
* [setOptions](qfiledialog.md#setoptions)
* [setProperty](qfiledialog.md#setproperty)
* [setResult](qfiledialog.md#setresult)
* [setSizeGripEnabled](qfiledialog.md#setsizegripenabled)
* [setStyleSheet](qfiledialog.md#setstylesheet)
* [setSupportedSchemes](qfiledialog.md#setsupportedschemes)
* [setWindowFlag](qfiledialog.md#setwindowflag)
* [setWindowIcon](qfiledialog.md#setwindowicon)
* [setWindowOpacity](qfiledialog.md#setwindowopacity)
* [setWindowState](qfiledialog.md#setwindowstate)
* [setWindowTitle](qfiledialog.md#setwindowtitle)
* [show](qfiledialog.md#show)
* [showFullScreen](qfiledialog.md#showfullscreen)
* [showMaximized](qfiledialog.md#showmaximized)
* [showMinimized](qfiledialog.md#showminimized)
* [showNormal](qfiledialog.md#shownormal)
* [size](qfiledialog.md#size)
* [styleSheet](qfiledialog.md#stylesheet)
* [supportedSchemes](qfiledialog.md#supportedschemes)
* [testAttribute](qfiledialog.md#testattribute)
* [update](qfiledialog.md#update)
* [updateGeometry](qfiledialog.md#updategeometry)
* [viewMode](qfiledialog.md#viewmode)
* [windowOpacity](qfiledialog.md#windowopacity)
* [windowState](qfiledialog.md#windowstate)
* [windowTitle](qfiledialog.md#windowtitle)

## Constructors

###  constructor

\+ **new QFileDialog**(): *[QFileDialog](qfiledialog.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QFileDialog](qfiledialog.md)*

\+ **new QFileDialog**(`parent`: [NodeWidget](nodewidget.md)‹any›, `caption?`: undefined | string, `directory?`: undefined | string, `filter?`: undefined | string): *[QFileDialog](qfiledialog.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |
`caption?` | undefined &#124; string |
`directory?` | undefined &#124; string |
`filter?` | undefined &#124; string |

**Returns:** *[QFileDialog](qfiledialog.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QFileDialogSignals](../interfaces/qfiledialogsignals.md)›*

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

###  acceptMode

▸ **acceptMode**(): *[AcceptMode](../enums/acceptmode.md)*

**Returns:** *[AcceptMode](../enums/acceptmode.md)*

___

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[activateWindow](nodewidget.md#activatewindow)*

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QFileDialogSignals*

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

###  defaultSuffix

▸ **defaultSuffix**(): *string*

**Returns:** *string*

___

###  exec

▸ **exec**(): *number*

*Inherited from [NodeDialog](nodedialog.md).[exec](nodedialog.md#exec)*

**Returns:** *number*

___

###  fileMode

▸ **fileMode**(): *[FileMode](../enums/filemode.md)*

**Returns:** *[FileMode](../enums/filemode.md)*

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

###  labelText

▸ **labelText**(`label`: [DialogLabel](../enums/dialoglabel.md)): *string*

**Parameters:**

Name | Type |
------ | ------ |
`label` | [DialogLabel](../enums/dialoglabel.md) |

**Returns:** *string*

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

###  options

▸ **options**(): *[Option](../enums/option.md)*

**Returns:** *[Option](../enums/option.md)*

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

▪ **SignalType**: *keyof QFileDialogSignals*

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

###  selectedFiles

▸ **selectedFiles**(): *string[]*

**Returns:** *string[]*

___

###  setAcceptMode

▸ **setAcceptMode**(`acceptMode`: [AcceptMode](../enums/acceptmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`acceptMode` | [AcceptMode](../enums/acceptmode.md) |

**Returns:** *void*

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

###  setDefaultSuffix

▸ **setDefaultSuffix**(`defaultSuffix`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`defaultSuffix` | string |

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

###  setFileMode

▸ **setFileMode**(`fileMode`: [FileMode](../enums/filemode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`fileMode` | [FileMode](../enums/filemode.md) |

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

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setInlineStyle](nodewidget.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setLabelText

▸ **setLabelText**(`label`: [DialogLabel](../enums/dialoglabel.md), `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`label` | [DialogLabel](../enums/dialoglabel.md) |
`text` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QFileDialogSignals](../interfaces/qfiledialogsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QFileDialogSignals](../interfaces/qfiledialogsignals.md)› |

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

###  setNameFilter

▸ **setNameFilter**(`filter`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`filter` | string |

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

###  setOption

▸ **setOption**(`option`: [Option](../enums/option.md), `on`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`option` | [Option](../enums/option.md) | - |
`on` | boolean | true |

**Returns:** *void*

___

###  setOptions

▸ **setOptions**(`options`: [Option](../enums/option.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`options` | [Option](../enums/option.md) |

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

###  setSupportedSchemes

▸ **setSupportedSchemes**(`schemes`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`schemes` | string[] |

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

###  supportedSchemes

▸ **supportedSchemes**(): *string[]*

**Returns:** *string[]*

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

###  viewMode

▸ **viewMode**(): *[ViewMode](../enums/viewmode.md)*

**Returns:** *[ViewMode](../enums/viewmode.md)*

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
