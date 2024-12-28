---
id: "qimage"
title: "QImage"
sidebar_label: "QImage"
---

> The QImage class provides a hardware-independent image representation that
allows direct access to the pixel data, and can be used as a paint device.

**This class is a JS wrapper around Qt's [QImage class](https://doc.qt.io/qt-5/qimage.html)**

### Example

```javascript
const { QImage } = require('@nodegui/nodegui');

const image = new QImage();
```

## Hierarchy

* [Component](component.md)

  ↳ **QImage**

## Index

### Constructors

* [constructor](qimage.md#constructor)

### Properties

* [native](qimage.md#native)

### Methods

* [allGray](qimage.md#allgray)
* [bitPlaneCount](qimage.md#bitplanecount)
* [bytesPerLine](qimage.md#bytesperline)
* [cacheKey](qimage.md#cachekey)
* [color](qimage.md#color)
* [colorCount](qimage.md#colorcount)
* [convertTo](qimage.md#convertto)
* [convertToFormat](qimage.md#converttoformat)
* [copy](qimage.md#copy)
* [createAlphaMask](qimage.md#createalphamask)
* [createHeuristicMask](qimage.md#createheuristicmask)
* [depth](qimage.md#depth)
* [devicePixelRatio](qimage.md#devicepixelratio)
* [dotsPerMeterX](qimage.md#dotspermeterx)
* [dotsPerMeterY](qimage.md#dotspermetery)
* [fill](qimage.md#fill)
* [format](qimage.md#format)
* [hasAlphaChannel](qimage.md#hasalphachannel)
* [height](qimage.md#height)
* [invertPixels](qimage.md#invertpixels)
* [isGrayscale](qimage.md#isgrayscale)
* [isNull](qimage.md#isnull)
* [load](qimage.md#load)
* [loadFromData](qimage.md#loadfromdata)
* [mirrored](qimage.md#mirrored)
* [offset](qimage.md#offset)
* [pixelColor](qimage.md#pixelcolor)
* [pixelIndex](qimage.md#pixelindex)
* [rect](qimage.md#rect)
* [reinterpretAsFormat](qimage.md#reinterpretasformat)
* [save](qimage.md#save)
* [scaled](qimage.md#scaled)
* [scaledToHeight](qimage.md#scaledtoheight)
* [scaledToWidth](qimage.md#scaledtowidth)
* [setAlphaChannel](qimage.md#setalphachannel)
* [setColor](qimage.md#setcolor)
* [setColorCount](qimage.md#setcolorcount)
* [setDevicePixelRatio](qimage.md#setdevicepixelratio)
* [setDotsPerMeterX](qimage.md#setdotspermeterx)
* [setDotsPerMeterY](qimage.md#setdotspermetery)
* [setOffset](qimage.md#setoffset)
* [setPixel](qimage.md#setpixel)
* [setPixelColor](qimage.md#setpixelcolor)
* [setText](qimage.md#settext)
* [size](qimage.md#size)
* [sizeInBytes](qimage.md#sizeinbytes)
* [swap](qimage.md#swap)
* [text](qimage.md#text)
* [textKeys](qimage.md#textkeys)
* [valid](qimage.md#valid)
* [width](qimage.md#width)
* [fromBuffer](qimage.md#static-frombuffer)
* [fromQVariant](qimage.md#static-fromqvariant)

## Constructors

###  constructor

\+ **new QImage**(): *[QImage](qimage.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

Constructs a null image

**Returns:** *[QImage](qimage.md)*

\+ **new QImage**(`native`: [NativeElement](../globals.md#nativeelement)): *[QImage](qimage.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

Constructs a null image
Constructs an image and tries to load the image from the file with the given fileName
Constructs an image with the given width, height and format
Constructs an image with the given size and format

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QImage](qimage.md)*

\+ **new QImage**(`filename`: string): *[QImage](qimage.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

Constructs an image and tries to load the image from the file with the given fileName

**Parameters:**

Name | Type |
------ | ------ |
`filename` | string |

**Returns:** *[QImage](qimage.md)*

\+ **new QImage**(`width`: number, `height`: number, `format`: [QImageFormat](../enums/qimageformat.md)): *[QImage](qimage.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

Constructs an image with the given width, height and format

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`format` | [QImageFormat](../enums/qimageformat.md) |

**Returns:** *[QImage](qimage.md)*

\+ **new QImage**(`size`: [QSize](qsize.md), `format`: [QImageFormat](../enums/qimageformat.md)): *[QImage](qimage.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

Constructs an image with the given size and format

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |
`format` | [QImageFormat](../enums/qimageformat.md) |

**Returns:** *[QImage](qimage.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  allGray

▸ **allGray**(): *boolean*

Returns true if all the colors in the image are shades of gray (i.e. their
red, green and blue components are equal); otherwise false

**Returns:** *boolean*

___

###  bitPlaneCount

▸ **bitPlaneCount**(): *number*

Returns the number of bit planes in the image

**Returns:** *number*

___

###  bytesPerLine

▸ **bytesPerLine**(): *number*

Returns the number of bytes per image scanline

**Returns:** *number*

___

###  cacheKey

▸ **cacheKey**(): *number*

Returns a number that identifies the contents of this QImage object. Distinct
QImage objects can only have the same key if they refer to the same contents

**Returns:** *number*

___

###  color

▸ **color**(`i`: number): *number*

Returns the color in the color table at index i. The first color is at index 0

**Parameters:**

Name | Type |
------ | ------ |
`i` | number |

**Returns:** *number*

___

###  colorCount

▸ **colorCount**(): *number*

Returns the size of the color table for the image

**Returns:** *number*

___

###  convertTo

▸ **convertTo**(`format`: [QImageFormat](../enums/qimageformat.md), `flags`: [ImageConversionFlag](../enums/imageconversionflag.md)): *void*

Detach and convert the image to the given format in place

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`format` | [QImageFormat](../enums/qimageformat.md) | - |
`flags` | [ImageConversionFlag](../enums/imageconversionflag.md) | ImageConversionFlag.AutoColor |

**Returns:** *void*

___

###  convertToFormat

▸ **convertToFormat**(`format`: [QImageFormat](../enums/qimageformat.md), `flags`: [ImageConversionFlag](../enums/imageconversionflag.md)): *[QImage](qimage.md)*

Returns a copy of the image in the given format

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`format` | [QImageFormat](../enums/qimageformat.md) | - |
`flags` | [ImageConversionFlag](../enums/imageconversionflag.md) | ImageConversionFlag.AutoColor |

**Returns:** *[QImage](qimage.md)*

___

###  copy

▸ **copy**(`rectangle`: [QRect](qrect.md)): *[QImage](qimage.md)*

Returns a sub-area of the image as a new image

**Parameters:**

Name | Type |
------ | ------ |
`rectangle` | [QRect](qrect.md) |

**Returns:** *[QImage](qimage.md)*

▸ **copy**(`x`: number, `y`: number, `width`: number, `height`: number): *[QImage](qimage.md)*

This is an overloaded function

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`width` | number |
`height` | number |

**Returns:** *[QImage](qimage.md)*

___

###  createAlphaMask

▸ **createAlphaMask**(`flags`: [ImageConversionFlag](../enums/imageconversionflag.md)): *[QImage](qimage.md)*

Builds and returns a 1-bpp mask from the alpha buffer in this image. Returns
a null image if the image's format is QImageFormat::Format_RGB32

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`flags` | [ImageConversionFlag](../enums/imageconversionflag.md) | ImageConversionFlag.AutoColor |

**Returns:** *[QImage](qimage.md)*

___

###  createHeuristicMask

▸ **createHeuristicMask**(`clipTight`: boolean): *[QImage](qimage.md)*

Creates and returns a 1-bpp heuristic mask for this image

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`clipTight` | boolean | true |

**Returns:** *[QImage](qimage.md)*

___

###  depth

▸ **depth**(): *number*

Returns the depth of the image

**Returns:** *number*

___

###  devicePixelRatio

▸ **devicePixelRatio**(): *number*

Returns the device pixel ratio for the image. This is the ratio
between device pixels and device independent pixels.

**Returns:** *number*

___

###  dotsPerMeterX

▸ **dotsPerMeterX**(): *number*

Returns the number of pixels that fit horizontally in a physical meter. Together
with dotsPerMeterY(), this number defines the intended scale and aspect ratio of
the image

**Returns:** *number*

___

###  dotsPerMeterY

▸ **dotsPerMeterY**(): *number*

Returns the number of pixels that fit vertically in a physical meter. Together with
dotsPerMeterX(), this number defines the intended scale and aspect ratio of the image

**Returns:** *number*

___

###  fill

▸ **fill**(`color`: [QColor](qcolor.md) | [GlobalColor](../enums/globalcolor.md)): *void*

Fills the entire image with the given color

**Parameters:**

Name | Type |
------ | ------ |
`color` | [QColor](qcolor.md) &#124; [GlobalColor](../enums/globalcolor.md) |

**Returns:** *void*

___

###  format

▸ **format**(): *[QImageFormat](../enums/qimageformat.md)*

Returns the format of the image

**Returns:** *[QImageFormat](../enums/qimageformat.md)*

___

###  hasAlphaChannel

▸ **hasAlphaChannel**(): *boolean*

Returns true if the image has a format that respects the alpha channel, otherwise
returns false

**Returns:** *boolean*

___

###  height

▸ **height**(): *number*

Returns the height of the image

**Returns:** *number*

___

###  invertPixels

▸ **invertPixels**(`mode`: [QImageInvertMode](../enums/qimageinvertmode.md)): *void*

Inverts all pixel values in the image

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`mode` | [QImageInvertMode](../enums/qimageinvertmode.md) | QImageInvertMode.InvertRgb |

**Returns:** *void*

___

###  isGrayscale

▸ **isGrayscale**(): *boolean*

For 32-bit images, this function is equivalent to allGray()

**Returns:** *boolean*

___

###  isNull

▸ **isNull**(): *boolean*

Returns true if it is a null image, otherwise returns false

**Returns:** *boolean*

___

###  load

▸ **load**(`fileName`: string, `format`: string | null): *boolean*

Loads an image from the file with the given fileName. Returns true if the image was
successfully loaded; otherwise invalidates the image and returns false

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`fileName` | string | - |
`format` | string &#124; null | null |

**Returns:** *boolean*

___

###  loadFromData

▸ **loadFromData**(`data`: Buffer, `format`: string | null): *boolean*

Loads an image from the specified buffer

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`data` | Buffer | - |
`format` | string &#124; null | null |

**Returns:** *boolean*

___

###  mirrored

▸ **mirrored**(`horizontal`: boolean, `vertical`: boolean): *[QImage](qimage.md)*

Returns a mirror of the image, mirrored in the horizontal and/or the vertical direction
depending on whether horizontal and vertical are set to true or false

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`horizontal` | boolean | false |
`vertical` | boolean | true |

**Returns:** *[QImage](qimage.md)*

___

###  offset

▸ **offset**(): *[QPoint](qpoint.md)*

Returns the number of pixels by which the image is intended to be offset by when
positioning relative to other images

**Returns:** *[QPoint](qpoint.md)*

___

###  pixelColor

▸ **pixelColor**(`point`: [QPoint](qpoint.md)): *[QColor](qcolor.md)*

Returns the color of the pixel at the given position as a QColor

**Parameters:**

Name | Type |
------ | ------ |
`point` | [QPoint](qpoint.md) |

**Returns:** *[QColor](qcolor.md)*

▸ **pixelColor**(`x`: number, `y`: number): *[QColor](qcolor.md)*

Returns the color of the pixel at coordinates (x, y) as a QColor

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *[QColor](qcolor.md)*

___

###  pixelIndex

▸ **pixelIndex**(`point`: [QPoint](qpoint.md)): *number*

Returns the pixel index at the given position

**Parameters:**

Name | Type |
------ | ------ |
`point` | [QPoint](qpoint.md) |

**Returns:** *number*

▸ **pixelIndex**(`x`: number, `y`: number): *number*

Returns the pixel index at (x, y)

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *number*

___

###  rect

▸ **rect**(): *[QRect](qrect.md)*

Returns the enclosing rectangle (0, 0, width(), height()) of the image

**Returns:** *[QRect](qrect.md)*

___

###  reinterpretAsFormat

▸ **reinterpretAsFormat**(`format`: [QImageFormat](../enums/qimageformat.md)): *boolean*

Changes the format of the image to format without changing the data. Only works
between formats of the same depth. Returns true if successful

**Parameters:**

Name | Type |
------ | ------ |
`format` | [QImageFormat](../enums/qimageformat.md) |

**Returns:** *boolean*

___

###  save

▸ **save**(`fileName`: string, `format`: string | null, `quality`: number): *boolean*

Saves the image to the file with the given fileName, using the given image file
format and quality factor. If format is null, QImage will attempt to guess the
format by looking at fileName's suffix.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`fileName` | string | - |
`format` | string &#124; null | null |
`quality` | number | -1 |

**Returns:** *boolean*

___

###  scaled

▸ **scaled**(`size`: [QSize](qsize.md), `aspectRatioMode`: [AspectRatioMode](../enums/aspectratiomode.md), `transformMode`: [TransformationMode](../enums/transformationmode.md)): *[QImage](qimage.md)*

Returns a copy of the image scaled to a rectangle defined by the given size according
to the given aspectRatioMode and transformMode.

**Parameters:**

Name | Type |
------ | ------ |
`size` | [QSize](qsize.md) |
`aspectRatioMode` | [AspectRatioMode](../enums/aspectratiomode.md) |
`transformMode` | [TransformationMode](../enums/transformationmode.md) |

**Returns:** *[QImage](qimage.md)*

▸ **scaled**(`width`: number, `height`: number, `aspectRatioMode`: [AspectRatioMode](../enums/aspectratiomode.md), `transformMode`: [TransformationMode](../enums/transformationmode.md)): *[QImage](qimage.md)*

Returns a copy of the image scaled to a rectangle with the given width and height
according to the given aspectRatioMode and transformMode.

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |
`aspectRatioMode` | [AspectRatioMode](../enums/aspectratiomode.md) |
`transformMode` | [TransformationMode](../enums/transformationmode.md) |

**Returns:** *[QImage](qimage.md)*

___

###  scaledToHeight

▸ **scaledToHeight**(`height`: number, `mode`: [TransformationMode](../enums/transformationmode.md)): *[QImage](qimage.md)*

Returns a scaled copy of the image. The returned image is scaled to the given height
using the specified transformation mode

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`height` | number | - |
`mode` | [TransformationMode](../enums/transformationmode.md) | TransformationMode.FastTransformation |

**Returns:** *[QImage](qimage.md)*

___

###  scaledToWidth

▸ **scaledToWidth**(`width`: number, `mode`: [TransformationMode](../enums/transformationmode.md)): *[QImage](qimage.md)*

Returns a scaled copy of the image. The returned image is scaled to the given width
using the specified transformation mode

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`width` | number | - |
`mode` | [TransformationMode](../enums/transformationmode.md) | TransformationMode.FastTransformation |

**Returns:** *[QImage](qimage.md)*

___

###  setAlphaChannel

▸ **setAlphaChannel**(`alphaChannel`: [QImage](qimage.md)): *void*

Sets the alpha channel of this image to the given alphaChannel

**Parameters:**

Name | Type |
------ | ------ |
`alphaChannel` | [QImage](qimage.md) |

**Returns:** *void*

___

###  setColor

▸ **setColor**(`index`: number, `colorValue`: number): *void*

Sets the color at the given index in the color table, to the given to colorValue.
The color value is an ARGB quadruplet

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |
`colorValue` | number |

**Returns:** *void*

___

###  setColorCount

▸ **setColorCount**(`colorCount`: number): *void*

Resizes the color table to contain colorCount entries

**Parameters:**

Name | Type |
------ | ------ |
`colorCount` | number |

**Returns:** *void*

___

###  setDevicePixelRatio

▸ **setDevicePixelRatio**(`ratio`: number): *void*

Sets the device pixel ratio for the image. This is the ratio between image pixels
and device-independent pixels

**Parameters:**

Name | Type |
------ | ------ |
`ratio` | number |

**Returns:** *void*

___

###  setDotsPerMeterX

▸ **setDotsPerMeterX**(`x`: number): *void*

Sets the number of pixels that fit horizontally in a physical meter, to x

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |

**Returns:** *void*

___

###  setDotsPerMeterY

▸ **setDotsPerMeterY**(`y`: number): *void*

Sets the number of pixels that fit vertically in a physical meter, to y

**Parameters:**

Name | Type |
------ | ------ |
`y` | number |

**Returns:** *void*

___

###  setOffset

▸ **setOffset**(`offset`: [QPoint](qpoint.md)): *void*

Sets the number of pixels by which the image is intended to be offset by
when positioning relative to other images, to offset

**Parameters:**

Name | Type |
------ | ------ |
`offset` | [QPoint](qpoint.md) |

**Returns:** *void*

___

###  setPixel

▸ **setPixel**(`position`: [QPoint](qpoint.md), `indexOrRgb`: number): *void*

Sets the pixel index or color at the given position to indexOrRgb

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPoint](qpoint.md) |
`indexOrRgb` | number |

**Returns:** *void*

▸ **setPixel**(`x`: number, `y`: number, `indexOrRgb`: number): *void*

Sets the pixel index or color at (x, y) to indexOrRgb

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`indexOrRgb` | number |

**Returns:** *void*

___

###  setPixelColor

▸ **setPixelColor**(`position`: [QPoint](qpoint.md), `color`: [QColor](qcolor.md)): *void*

Sets the color at the given position to color

**Parameters:**

Name | Type |
------ | ------ |
`position` | [QPoint](qpoint.md) |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

▸ **setPixelColor**(`x`: number, `y`: number, `color`: [QColor](qcolor.md)): *void*

Sets the pixel color at (x, y) to color

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`color` | [QColor](qcolor.md) |

**Returns:** *void*

___

###  setText

▸ **setText**(`key`: string, `value`: string): *void*

Sets the image text to the given text and associate it with the given key

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`value` | string |

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

Returns the size of the image, i.e. its width() and height()

**Returns:** *[QSize](qsize.md)*

___

###  sizeInBytes

▸ **sizeInBytes**(): *number*

Returns the image data size in bytes

**Returns:** *number*

___

###  swap

▸ **swap**(`other`: [QImage](qimage.md)): *void*

Swaps image other with this image. This operation is very fast and never fails

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QImage](qimage.md) |

**Returns:** *void*

___

###  text

▸ **text**(`key`: string): *string*

Returns the image text associated with the given key. If the specified key is an empty
string, the whole image text is returned, with each key-text pair separated by a newline

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |

**Returns:** *string*

___

###  textKeys

▸ **textKeys**(): *string[]*

Returns the text keys for this image

**Returns:** *string[]*

___

###  valid

▸ **valid**(`pos`: [QPoint](qpoint.md)): *boolean*

Returns true if pos is a valid coordinate pair within the image; otherwise returns false

**Parameters:**

Name | Type |
------ | ------ |
`pos` | [QPoint](qpoint.md) |

**Returns:** *boolean*

▸ **valid**(`x`: number, `y`: number): *boolean*

Returns true if QPoint(x, y) is a valid coordinate pair within the image; otherwise returns
false

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *boolean*

___

###  width

▸ **width**(): *number*

Returns the width of the image

**Returns:** *number*

___

### `Static` fromBuffer

▸ **fromBuffer**(`buffer`: Buffer, `width`: number, `height`: number, `format`: [QImageFormat](../enums/qimageformat.md)): *[QImage](qimage.md)*

**Parameters:**

Name | Type |
------ | ------ |
`buffer` | Buffer |
`width` | number |
`height` | number |
`format` | [QImageFormat](../enums/qimageformat.md) |

**Returns:** *[QImage](qimage.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QImage](qimage.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QImage](qimage.md)*
