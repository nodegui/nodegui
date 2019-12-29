---
id: "qcombobox"
title: "QComboBox"
sidebar_label: "QComboBox"
---

## Hierarchy

  ↳ [NodeWidget](nodewidget.md)‹[QComboBoxSignals](../interfaces/qcomboboxsignals.md)›

  ↳ **QComboBox**

## Index

### Constructors

* [constructor](qcombobox.md#constructor)

### Properties

* [_rawInlineStyle](qcombobox.md#_rawinlinestyle)
* [layout](qcombobox.md#optional-layout)
* [native](qcombobox.md#native)
* [nodeChildren](qcombobox.md#nodechildren)
* [nodeParent](qcombobox.md#optional-nodeparent)
* [type](qcombobox.md#type)

### Methods

* [activateWindow](qcombobox.md#activatewindow)
* [addEventListener](qcombobox.md#addeventlistener)
* [addItem](qcombobox.md#additem)
* [addItems](qcombobox.md#additems)
* [adjustSize](qcombobox.md#adjustsize)
* [clear](qcombobox.md#clear)
* [close](qcombobox.md#close)
* [currentIndex](qcombobox.md#currentindex)
* [currentText](qcombobox.md#currenttext)
* [geometry](qcombobox.md#geometry)
* [getFlexNode](qcombobox.md#getflexnode)
* [hasMouseTracking](qcombobox.md#hasmousetracking)
* [hide](qcombobox.md#hide)
* [inherits](qcombobox.md#inherits)
* [insertItem](qcombobox.md#insertitem)
* [insertItems](qcombobox.md#insertitems)
* [insertSeparator](qcombobox.md#insertseparator)
* [isEditable](qcombobox.md#iseditable)
* [isEnabled](qcombobox.md#isenabled)
* [isVisible](qcombobox.md#isvisible)
* [itemData](qcombobox.md#itemdata)
* [itemText](qcombobox.md#itemtext)
* [lower](qcombobox.md#lower)
* [maxVisibleItems](qcombobox.md#maxvisibleitems)
* [move](qcombobox.md#move)
* [objectName](qcombobox.md#objectname)
* [pos](qcombobox.md#pos)
* [property](qcombobox.md#property)
* [raise](qcombobox.md#raise)
* [removeEventListener](qcombobox.md#removeeventlistener)
* [removeItem](qcombobox.md#removeitem)
* [repaint](qcombobox.md#repaint)
* [resize](qcombobox.md#resize)
* [setAttribute](qcombobox.md#setattribute)
* [setContextMenuPolicy](qcombobox.md#setcontextmenupolicy)
* [setCurrentIndex](qcombobox.md#setcurrentindex)
* [setCurrentText](qcombobox.md#setcurrenttext)
* [setCursor](qcombobox.md#setcursor)
* [setEditable](qcombobox.md#seteditable)
* [setEnabled](qcombobox.md#setenabled)
* [setFixedSize](qcombobox.md#setfixedsize)
* [setFlexNodeSizeControlled](qcombobox.md#setflexnodesizecontrolled)
* [setGeometry](qcombobox.md#setgeometry)
* [setInlineStyle](qcombobox.md#setinlinestyle)
* [setLayout](qcombobox.md#setlayout)
* [setMaxVisibleItems](qcombobox.md#setmaxvisibleitems)
* [setMaximumSize](qcombobox.md#setmaximumsize)
* [setMinimumSize](qcombobox.md#setminimumsize)
* [setMouseTracking](qcombobox.md#setmousetracking)
* [setNodeParent](qcombobox.md#setnodeparent)
* [setObjectName](qcombobox.md#setobjectname)
* [setProperty](qcombobox.md#setproperty)
* [setSizeAdjustPolicy](qcombobox.md#setsizeadjustpolicy)
* [setStyleSheet](qcombobox.md#setstylesheet)
* [setWindowFlag](qcombobox.md#setwindowflag)
* [setWindowIcon](qcombobox.md#setwindowicon)
* [setWindowOpacity](qcombobox.md#setwindowopacity)
* [setWindowState](qcombobox.md#setwindowstate)
* [setWindowTitle](qcombobox.md#setwindowtitle)
* [show](qcombobox.md#show)
* [showFullScreen](qcombobox.md#showfullscreen)
* [showMaximized](qcombobox.md#showmaximized)
* [showMinimized](qcombobox.md#showminimized)
* [showNormal](qcombobox.md#shownormal)
* [size](qcombobox.md#size)
* [sizeAdjustPolicy](qcombobox.md#sizeadjustpolicy)
* [styleSheet](qcombobox.md#stylesheet)
* [testAttribute](qcombobox.md#testattribute)
* [update](qcombobox.md#update)
* [updateGeometry](qcombobox.md#updategeometry)
* [windowOpacity](qcombobox.md#windowopacity)
* [windowState](qcombobox.md#windowstate)
* [windowTitle](qcombobox.md#windowtitle)

## Constructors

###  constructor

\+ **new QComboBox**(): *[QComboBox](qcombobox.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QComboBox](qcombobox.md)*

\+ **new QComboBox**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QComboBox](qcombobox.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QComboBox](qcombobox.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QComboBoxSignals](../interfaces/qcomboboxsignals.md)›*

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

▪ **SignalType**: *keyof QComboBoxSignals*

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

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  addItem

▸ **addItem**(`icon`: [QIcon](qicon.md) | undefined, `text`: string, `userData`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`icon` | [QIcon](qicon.md) &#124; undefined | - |
`text` | string | - |
`userData` | [QVariant](qvariant.md) |  new QVariant() |

**Returns:** *void*

___

###  addItems

▸ **addItems**(`texts`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`texts` | string[] |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[adjustSize](nodewidget.md#adjustsize)*

**Returns:** *void*

___

###  clear

▸ **clear**(): *void*

**Returns:** *void*

___

###  close

▸ **close**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[close](nodewidget.md#close)*

**Returns:** *boolean*

___

###  currentIndex

▸ **currentIndex**(): *number*

**Returns:** *number*

___

###  currentText

▸ **currentText**(): *string*

**Returns:** *string*

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

###  insertItem

▸ **insertItem**(`index`: number, `icon`: [QIcon](qicon.md) | undefined, `text`: string, `userData`: [QVariant](qvariant.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`index` | number | - |
`icon` | [QIcon](qicon.md) &#124; undefined | - |
`text` | string | - |
`userData` | [QVariant](qvariant.md) |  new QVariant() |

**Returns:** *void*

___

###  insertItems

▸ **insertItems**(`index`: number, `texts`: string[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`texts` | string[] |

**Returns:** *void*

___

###  insertSeparator

▸ **insertSeparator**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *void*

___

###  isEditable

▸ **isEditable**(): *boolean*

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isEnabled](nodewidget.md#isenabled)*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isVisible](nodewidget.md#isvisible)*

**Returns:** *boolean*

___

###  itemData

▸ **itemData**(`index`: number): *[QVariant](qvariant.md)*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *[QVariant](qvariant.md)*

___

###  itemText

▸ **itemText**(`index`: number): *string*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *string*

___

###  lower

▸ **lower**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[lower](nodewidget.md#lower)*

**Returns:** *void*

___

###  maxVisibleItems

▸ **maxVisibleItems**(): *number*

**Returns:** *number*

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

▪ **SignalType**: *keyof QComboBoxSignals*

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

▸ (`event?`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *void*

___

###  removeItem

▸ **removeItem**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

###  setCurrentIndex

▸ **setCurrentIndex**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *void*

___

###  setCurrentText

▸ **setCurrentText**(`text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

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

###  setEditable

▸ **setEditable**(`editable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`editable` | boolean |

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

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QComboBoxSignals](../interfaces/qcomboboxsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QComboBoxSignals](../interfaces/qcomboboxsignals.md)› |

**Returns:** *void*

___

###  setMaxVisibleItems

▸ **setMaxVisibleItems**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

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

###  setSizeAdjustPolicy

▸ **setSizeAdjustPolicy**(`policy`: [SizeAdjustPolicy](../enums/sizeadjustpolicy.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`policy` | [SizeAdjustPolicy](../enums/sizeadjustpolicy.md) |

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

###  sizeAdjustPolicy

▸ **sizeAdjustPolicy**(): *number*

**Returns:** *number*

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
