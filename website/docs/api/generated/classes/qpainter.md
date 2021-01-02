---
id: "qpainter"
title: "QPainter"
sidebar_label: "QPainter"
---

> Lets you paint on widgets.

**This class is a JS wrapper around Qt's [QPainter class](https://doc.qt.io/qt-5/qpainter.html)**

Note: QPainter works only inside the paint event.

### Example

```javascript

import { FlexLayout, WidgetEventTypes, QMainWindow, QPainter, QWidget } from '@nodegui/nodegui';

const win = new QMainWindow();
const center = new QWidget();
const layout = new FlexLayout();
center.setLayout(layout);
win.resize(200, 200);

win.addEventListener(WidgetEventTypes.Paint, () => {
const painter = new QPainter(win);
painter.drawText(20, 20, 'Hello');
painter.end();
});
win.show();
(global as any).win = win;

```

## Advanced example:

https://github.com/nodegui/examples/blob/master/nodegui/custom-native-widget-qpainter

## Hierarchy

* [Component](component.md)

  ↳ **QPainter**

## Index

### Constructors

* [constructor](qpainter.md#constructor)

### Properties

* [native](qpainter.md#native)
* [nodeChildren](qpainter.md#nodechildren)
* [nodeParent](qpainter.md#optional-nodeparent)

### Methods

* [begin](qpainter.md#begin)
* [drawConvexPolygon](qpainter.md#drawconvexpolygon)
* [drawLine](qpainter.md#drawline)
* [drawPath](qpainter.md#drawpath)
* [drawPie](qpainter.md#drawpie)
* [drawText](qpainter.md#drawtext)
* [end](qpainter.md#end)
* [restore](qpainter.md#restore)
* [rotate](qpainter.md#rotate)
* [save](qpainter.md#save)
* [scale](qpainter.md#scale)
* [setBrush](qpainter.md#setbrush)
* [setNodeParent](qpainter.md#setnodeparent)
* [setPen](qpainter.md#setpen)
* [setRenderHint](qpainter.md#setrenderhint)
* [strokePath](qpainter.md#strokepath)
* [translate](qpainter.md#translate)

## Constructors

###  constructor

\+ **new QPainter**(): *[QPainter](qpainter.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QPainter](qpainter.md)*

\+ **new QPainter**(`device`: [Component](component.md)): *[QPainter](qpainter.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`device` | [Component](component.md) |

**Returns:** *[QPainter](qpainter.md)*

## Properties

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

## Methods

###  begin

▸ **begin**(`device`: [Component](component.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`device` | [Component](component.md) |

**Returns:** *boolean*

___

###  drawConvexPolygon

▸ **drawConvexPolygon**(`points`: [QPoint](qpoint.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`points` | [QPoint](qpoint.md)[] |

**Returns:** *void*

___

###  drawLine

▸ **drawLine**(`x1`: number, `y1`: number, `x2`: number, `y2`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x1` | number |
`y1` | number |
`x2` | number |
`y2` | number |

**Returns:** *void*

___

###  drawPath

▸ **drawPath**(`path`: [QPainterPath](qpainterpath.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |

**Returns:** *void*

___

###  drawPie

▸ **drawPie**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `sweepLength`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`sweepLength` | number |

**Returns:** *void*

___

###  drawText

▸ **drawText**(`x`: number, `y`: number, `text`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`text` | string |

**Returns:** *void*

___

###  end

▸ **end**(): *boolean*

**Returns:** *boolean*

___

###  restore

▸ **restore**(): *void*

**Returns:** *void*

___

###  rotate

▸ **rotate**(`angle`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`angle` | number |

**Returns:** *void*

___

###  save

▸ **save**(): *void*

**Returns:** *void*

___

###  scale

▸ **scale**(`sx`: number, `sy`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`sx` | number |
`sy` | number |

**Returns:** *void*

___

###  setBrush

▸ **setBrush**(`color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) |

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

###  setPen

▸ **setPen**(`arg`: [PenStyle](../enums/penstyle.md) | [QColor](qcolor.md) | [QPen](qpen.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`arg` | [PenStyle](../enums/penstyle.md) &#124; [QColor](qcolor.md) &#124; [QPen](qpen.md) |

**Returns:** *void*

___

###  setRenderHint

▸ **setRenderHint**(`hint`: [RenderHint](../enums/renderhint.md), `on`: boolean): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`hint` | [RenderHint](../enums/renderhint.md) | - |
`on` | boolean | true |

**Returns:** *void*

___

###  strokePath

▸ **strokePath**(`path`: [QPainterPath](qpainterpath.md), `pen`: [QPen](qpen.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |
`pen` | [QPen](qpen.md) |

**Returns:** *void*

___

###  translate

▸ **translate**(`dx`: number, `dy`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`dx` | number |
`dy` | number |

**Returns:** *void*
