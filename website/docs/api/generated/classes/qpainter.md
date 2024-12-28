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

### Methods

* [begin](qpainter.md#begin)
* [beginNativePainting](qpainter.md#beginnativepainting)
* [boundingRect](qpainter.md#boundingrect)
* [boundingRectF](qpainter.md#boundingrectf)
* [compositionMode](qpainter.md#compositionmode)
* [drawArc](qpainter.md#drawarc)
* [drawArcF](qpainter.md#drawarcf)
* [drawChord](qpainter.md#drawchord)
* [drawChordF](qpainter.md#drawchordf)
* [drawConvexPolygon](qpainter.md#drawconvexpolygon)
* [drawConvexPolygonF](qpainter.md#drawconvexpolygonf)
* [drawEllipse](qpainter.md#drawellipse)
* [drawEllipseF](qpainter.md#drawellipsef)
* [drawImage](qpainter.md#drawimage)
* [drawImageF](qpainter.md#drawimagef)
* [drawLine](qpainter.md#drawline)
* [drawLineF](qpainter.md#drawlinef)
* [drawPath](qpainter.md#drawpath)
* [drawPie](qpainter.md#drawpie)
* [drawPieF](qpainter.md#drawpief)
* [drawPixmap](qpainter.md#drawpixmap)
* [drawPoint](qpainter.md#drawpoint)
* [drawPointF](qpainter.md#drawpointf)
* [drawRect](qpainter.md#drawrect)
* [drawRectF](qpainter.md#drawrectf)
* [drawRoundedRect](qpainter.md#drawroundedrect)
* [drawRoundedRectF](qpainter.md#drawroundedrectf)
* [drawText](qpainter.md#drawtext)
* [drawTextF](qpainter.md#drawtextf)
* [end](qpainter.md#end)
* [endNativePainting](qpainter.md#endnativepainting)
* [eraseRect](qpainter.md#eraserect)
* [eraseRectF](qpainter.md#eraserectf)
* [fillPath](qpainter.md#fillpath)
* [fillRect](qpainter.md#fillrect)
* [fillRectF](qpainter.md#fillrectf)
* [opacity](qpainter.md#opacity)
* [restore](qpainter.md#restore)
* [rotate](qpainter.md#rotate)
* [save](qpainter.md#save)
* [scale](qpainter.md#scale)
* [setBrush](qpainter.md#setbrush)
* [setBrushOrigin](qpainter.md#setbrushorigin)
* [setBrushOriginF](qpainter.md#setbrushoriginf)
* [setCompositionMode](qpainter.md#setcompositionmode)
* [setFont](qpainter.md#setfont)
* [setOpacity](qpainter.md#setopacity)
* [setPen](qpainter.md#setpen)
* [setRenderHint](qpainter.md#setrenderhint)
* [setTransform](qpainter.md#settransform)
* [strokePath](qpainter.md#strokepath)
* [translate](qpainter.md#translate)

## Constructors

###  constructor

\+ **new QPainter**(`device?`: [QWidget](qwidget.md) | [QImage](qimage.md)): *[QPainter](qpainter.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`device?` | [QWidget](qwidget.md) &#124; [QImage](qimage.md) |

**Returns:** *[QPainter](qpainter.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  begin

▸ **begin**(`device`: [QWidget](qwidget.md) | [QImage](qimage.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`device` | [QWidget](qwidget.md) &#124; [QImage](qimage.md) |

**Returns:** *boolean*

___

###  beginNativePainting

▸ **beginNativePainting**(): *void*

**Returns:** *void*

___

###  boundingRect

▸ **boundingRect**(`x`: number, `y`: number, `w`: number, `h`: number, `flags`: number, `text`: string): *[QRect](qrect.md)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |
`flags` | number |
`text` | string |

**Returns:** *[QRect](qrect.md)*

___

###  boundingRectF

▸ **boundingRectF**(`x`: number, `y`: number, `w`: number, `h`: number, `flags`: number, `text`: string): *[QRect](qrect.md)*

Version of boundingRect() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |
`flags` | number |
`text` | string |

**Returns:** *[QRect](qrect.md)*

___

###  compositionMode

▸ **compositionMode**(): *[CompositionMode](../enums/compositionmode.md)*

**Returns:** *[CompositionMode](../enums/compositionmode.md)*

___

###  drawArc

▸ **drawArc**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `spanAngle`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`spanAngle` | number |

**Returns:** *void*

___

###  drawArcF

▸ **drawArcF**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `spanAngle`: number): *void*

Version of drawArc() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`spanAngle` | number |

**Returns:** *void*

___

###  drawChord

▸ **drawChord**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `spanAngle`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`spanAngle` | number |

**Returns:** *void*

___

###  drawChordF

▸ **drawChordF**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `spanAngle`: number): *void*

Version of drawChord() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`startAngle` | number |
`spanAngle` | number |

**Returns:** *void*

___

###  drawConvexPolygon

▸ **drawConvexPolygon**(`points`: [QPoint](qpoint.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`points` | [QPoint](qpoint.md)[] |

**Returns:** *void*

___

###  drawConvexPolygonF

▸ **drawConvexPolygonF**(`points`: [QPoint](qpoint.md)[]): *void*

**Parameters:**

Name | Type |
------ | ------ |
`points` | [QPoint](qpoint.md)[] |

**Returns:** *void*

___

###  drawEllipse

▸ **drawEllipse**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  drawEllipseF

▸ **drawEllipseF**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

Version of drawEllipse() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  drawImage

▸ **drawImage**(`x`: number, `y`: number, `image`: [QImage](qimage.md), `sx`: number, `sy`: number, `sw`: number, `sh`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`image` | [QImage](qimage.md) | - |
`sx` | number | 0 |
`sy` | number | 0 |
`sw` | number | -1 |
`sh` | number | -1 |

**Returns:** *void*

___

###  drawImageF

▸ **drawImageF**(`x`: number, `y`: number, `image`: [QImage](qimage.md), `sx`: number, `sy`: number, `sw`: number, `sh`: number): *void*

Version of drawImage() which takes floating point parameters.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`image` | [QImage](qimage.md) | - |
`sx` | number | 0 |
`sy` | number | 0 |
`sw` | number | -1 |
`sh` | number | -1 |

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

###  drawLineF

▸ **drawLineF**(`x1`: number, `y1`: number, `x2`: number, `y2`: number): *void*

Version of drawLine() which takes floating point parameters.

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

###  drawPieF

▸ **drawPieF**(`x`: number, `y`: number, `width`: number, `height`: number, `startAngle`: number, `sweepLength`: number): *void*

Version of drawPie() which takes floating point parameters.

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

###  drawPixmap

▸ **drawPixmap**(`x`: number, `y`: number, `pixmap`: [QPixmap](qpixmap.md), `sx`: number, `sy`: number, `sw`: number, `sh`: number): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`pixmap` | [QPixmap](qpixmap.md) | - |
`sx` | number | 0 |
`sy` | number | 0 |
`sw` | number | -1 |
`sh` | number | -1 |

**Returns:** *void*

___

###  drawPoint

▸ **drawPoint**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  drawPointF

▸ **drawPointF**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  drawRect

▸ **drawRect**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  drawRectF

▸ **drawRectF**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

Version of drawRect() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  drawRoundedRect

▸ **drawRoundedRect**(`x`: number, `y`: number, `w`: number, `h`: number, `xRadius`: number, `yRadius`: number, `mode`: [SizeMode](../enums/sizemode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`w` | number | - |
`h` | number | - |
`xRadius` | number | - |
`yRadius` | number | - |
`mode` | [SizeMode](../enums/sizemode.md) | SizeMode.AbsoluteSize |

**Returns:** *void*

___

###  drawRoundedRectF

▸ **drawRoundedRectF**(`x`: number, `y`: number, `w`: number, `h`: number, `xRadius`: number, `yRadius`: number, `mode`: [SizeMode](../enums/sizemode.md)): *void*

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`x` | number | - |
`y` | number | - |
`w` | number | - |
`h` | number | - |
`xRadius` | number | - |
`yRadius` | number | - |
`mode` | [SizeMode](../enums/sizemode.md) | SizeMode.AbsoluteSize |

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

###  drawTextF

▸ **drawTextF**(`x`: number, `y`: number, `text`: string): *void*

Version of drawText() which takes floating point parameters

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

###  endNativePainting

▸ **endNativePainting**(): *void*

**Returns:** *void*

___

###  eraseRect

▸ **eraseRect**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  eraseRectF

▸ **eraseRectF**(`x`: number, `y`: number, `width`: number, `height`: number): *void*

Version of eraseRect() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  fillPath

▸ **fillPath**(`path`: [QPainterPath](qpainterpath.md), `brush`: [QBrush](qbrush.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`path` | [QPainterPath](qpainterpath.md) |
`brush` | [QBrush](qbrush.md) |

**Returns:** *void*

___

###  fillRect

▸ **fillRect**(`x`: number, `y`: number, `width`: number, `height`: number, `color`: [QColor](qcolor.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  fillRectF

▸ **fillRectF**(`x`: number, `y`: number, `width`: number, `height`: number, `color`: [QColor](qcolor.md)): *void*

Version of fillRect() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  opacity

▸ **opacity**(): *number*

**Returns:** *number*

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

▸ **setBrush**(`colorOrBrush`: [QColor](qcolor.md) | [QBrush](qbrush.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`colorOrBrush` | [QColor](qcolor.md) &#124; [QBrush](qbrush.md) |

**Returns:** *void*

___

###  setBrushOrigin

▸ **setBrushOrigin**(`x`: number, `y`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  setBrushOriginF

▸ **setBrushOriginF**(`x`: number, `y`: number): *void*

Version of setBrushOrigin() which takes floating point parameters.

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  setCompositionMode

▸ **setCompositionMode**(`mode`: [CompositionMode](../enums/compositionmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [CompositionMode](../enums/compositionmode.md) |

**Returns:** *void*

___

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setOpacity

▸ **setOpacity**(`opacity`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

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

###  setTransform

▸ **setTransform**(`matrix2x3`: number[] | Float32Array, `combine`: boolean): *void*

Sets the world transformation matrix.

**Parameters:**

Name | Type | Default | Description |
------ | ------ | ------ | ------ |
`matrix2x3` | number[] &#124; Float32Array | - | An array of length 6 representing a 2x3 transformation                  matrix. The order of elements corresponds to the                  convention used in QTransform, i.e. m11, m12, m21, m22,                  dx, and dy. |
`combine` | boolean | false | If set then this transform will be combining with the                  curent one. Otherwise it replaces it completely.  |

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
