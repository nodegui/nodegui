import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { ImageConversionFlag, GlobalColor, AspectRatioMode, TransformationMode } from '../QtEnums';
import { QSize } from '../QtCore/QSize';
import { QRect } from '../QtCore/QRect';
import { QPoint } from '../QtCore/QPoint';
import { QVariant } from '../QtCore/QVariant';
import { QColor } from '../QtGui/QColor';

/**

> The QImage class provides a hardware-independent image representation that
  allows direct access to the pixel data, and can be used as a paint device.

* **This class is a JS wrapper around Qt's [QImage class](https://doc.qt.io/qt-5/qimage.html)**

### Example

```javascript
const { QImage } = require('@nodegui/nodegui');

const image = new QImage();
```
 */
export class QImage extends Component {
    native!: NativeElement;

    /** Constructs a null image */
    constructor();

    constructor(native: NativeElement);

    /** Constructs an image and tries to load the image from the file with the given fileName */
    constructor(filename: string);

    /** Constructs an image with the given width, height and format */
    constructor(width: number, height: number, format: QImageFormat);

    /** Constructs an image with the given size and format */
    constructor(size: QSize, format: QImageFormat);
    constructor(
        arg?: QImage | NativeElement | QSize | string | number,
        formatOrHeight?: QImageFormat | string | number,
        format?: QImageFormat,
    ) {
        super();

        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (typeof arg === 'string') {
            this.native = new addon.QImage(arg);
        } else if (typeof arg === 'number') {
            this.native = new addon.QImage(arg, formatOrHeight, format);
        } else if (arg instanceof QSize) {
            this.native = new addon.QImage(arg.native, formatOrHeight);
        } else {
            this.native = new addon.QImage();
        }
    }

    /**
     * Returns true if all the colors in the image are shades of gray (i.e. their
     * red, green and blue components are equal); otherwise false
     */
    allGray(): boolean {
        return this.native.allGray();
    }

    /** Returns the number of bit planes in the image */
    bitPlaneCount(): number {
        return this.native.bitPlaneCount();
    }

    /** Returns the number of bytes per image scanline */
    bytesPerLine(): number {
        return this.native.bytesPerLine();
    }

    /**
     * Returns a number that identifies the contents of this QImage object. Distinct
     * QImage objects can only have the same key if they refer to the same contents
     */
    cacheKey(): number {
        return this.native.cacheKey();
    }

    /**
     * Returns the color in the color table at index i. The first color is at index 0
     */
    color(i: number): number {
        return this.native.color(i);
    }

    /** Returns the size of the color table for the image */
    colorCount(): number {
        return this.native.colorCount();
    }

    /** Detach and convert the image to the given format in place */
    convertTo(format: QImageFormat, flags: ImageConversionFlag = ImageConversionFlag.AutoColor): void {
        this.native.convertTo(format, flags);
    }

    /** Returns a copy of the image in the given format */
    convertToFormat(format: QImageFormat, flags: ImageConversionFlag = ImageConversionFlag.AutoColor): QImage {
        return new QImage(this.native.convertToFormat(format, flags));
    }

    /** Returns a sub-area of the image as a new image */
    copy(rectangle: QRect): QImage;
    /** This is an overloaded function */
    copy(x: number, y: number, width: number, height: number): QImage;
    copy(rectangleOrX: QRect | number, y?: number, width?: number, height?: number): QImage {
        if (rectangleOrX instanceof QRect) {
            return new QImage(this.native.copy(rectangleOrX.native));
        }

        return new QImage(this.native.copy(rectangleOrX, y, width, height));
    }

    /**
     * Builds and returns a 1-bpp mask from the alpha buffer in this image. Returns
     * a null image if the image's format is QImageFormat::Format_RGB32
     */
    createAlphaMask(flags: ImageConversionFlag = ImageConversionFlag.AutoColor): QImage {
        return new QImage(this.native.createAlphaMask(flags));
    }

    /** Creates and returns a 1-bpp heuristic mask for this image */
    createHeuristicMask(clipTight = true): QImage {
        return new QImage(this.native.createHeuristicMask(clipTight));
    }

    /** Returns the depth of the image */
    depth(): number {
        return this.native.depth();
    }

    /**
     * Returns the device pixel ratio for the image. This is the ratio
     * between device pixels and device independent pixels.
     */
    devicePixelRatio(): number {
        return this.native.devicePixelRatio();
    }

    /**
     * Returns the number of pixels that fit horizontally in a physical meter. Together
     * with dotsPerMeterY(), this number defines the intended scale and aspect ratio of
     * the image
     */
    dotsPerMeterX(): number {
        return this.native.dotsPerMeterX();
    }

    /**
     * Returns the number of pixels that fit vertically in a physical meter. Together with
     * dotsPerMeterX(), this number defines the intended scale and aspect ratio of the image
     */
    dotsPerMeterY(): number {
        return this.native.dotsPerMeterY();
    }

    /** Fills the entire image with the given color */
    fill(color: QColor | GlobalColor): void {
        this.native.fill(color instanceof QColor ? color.native : color);
    }

    /** Returns the format of the image */
    format(): QImageFormat {
        return this.native.format();
    }

    /**
     * Returns true if the image has a format that respects the alpha channel, otherwise
     * returns false
     */
    hasAlphaChannel(): boolean {
        return this.native.hasAlphaChannel();
    }

    /** Returns the height of the image */
    height(): number {
        return this.native.height();
    }

    /** Inverts all pixel values in the image */
    // eslint-disable-next-line
    invertPixels(mode: QImageInvertMode = QImageInvertMode.InvertRgb): void {
        this.native.invertPixels(mode);
    }

    /** For 32-bit images, this function is equivalent to allGray() */
    isGrayscale(): boolean {
        return this.native.isGrayscale();
    }

    /** Returns true if it is a null image, otherwise returns false */
    isNull(): boolean {
        return this.native.isNull();
    }

    /**
     * Loads an image from the file with the given fileName. Returns true if the image was
     * successfully loaded; otherwise invalidates the image and returns false
     */
    load(fileName: string, format: string | null = null): boolean {
        return this.native.load(fileName, format);
    }

    /** Loads an image from the specified buffer */
    loadFromData(data: Buffer, format: string | null = null): boolean {
        return this.native.loadFromData(data, format);
    }

    /**
     * Returns a mirror of the image, mirrored in the horizontal and/or the vertical direction
     * depending on whether horizontal and vertical are set to true or false
     */
    mirrored(horizontal = false, vertical = true): QImage {
        const native = this.native.mirrored(horizontal, vertical);
        return new QImage(native);
    }

    /**
     * Returns the number of pixels by which the image is intended to be offset by when
     * positioning relative to other images
     */
    offset(): QPoint {
        const native = this.native.offset();
        return new QPoint(native);
    }

    /** Returns the color of the pixel at the given position as a QColor */
    pixelColor(point: QPoint): QColor;
    /** Returns the color of the pixel at coordinates (x, y) as a QColor  */
    pixelColor(x: number, y: number): QColor;
    pixelColor(pointOrX: QPoint | number, y?: number): QColor {
        const native =
            pointOrX instanceof QPoint ? this.native.pixelColor(pointOrX.native) : this.native.pixelColor(pointOrX, y);
        return new QColor(native);
    }

    /** Returns the pixel index at the given position */
    pixelIndex(point: QPoint): number;
    /** Returns the pixel index at (x, y) */
    pixelIndex(x: number, y: number): number;
    pixelIndex(pointOrX: QPoint | number, y?: number): number {
        const pixelIndex =
            pointOrX instanceof QPoint ? this.native.pixelIndex(pointOrX.native) : this.native.pixelIndex(pointOrX, y);
        return pixelIndex;
    }

    /** Returns the enclosing rectangle (0, 0, width(), height()) of the image */
    rect(): QRect {
        const native = this.native.rect();
        return new QRect(native);
    }

    /**
     * Changes the format of the image to format without changing the data. Only works
     * between formats of the same depth. Returns true if successful
     */
    reinterpretAsFormat(format: QImageFormat): boolean {
        return this.native.reinterpretAsFormat(format);
    }

    /**
     * Saves the image to the file with the given fileName, using the given image file
     * format and quality factor. If format is null, QImage will attempt to guess the
     * format by looking at fileName's suffix.
     */
    save(fileName: string, format: string | null = null, quality = -1): boolean {
        return this.native.save(fileName, format, quality);
    }

    /**
     * Returns a copy of the image scaled to a rectangle defined by the given size according
     * to the given aspectRatioMode and transformMode.
     */
    scaled(size: QSize, aspectRatioMode: AspectRatioMode, transformMode: TransformationMode): QImage;
    /**
     * Returns a copy of the image scaled to a rectangle with the given width and height
     * according to the given aspectRatioMode and transformMode.
     */
    scaled(width: number, height: number, aspectRatioMode: AspectRatioMode, transformMode: TransformationMode): QImage;
    scaled(
        sizeOrWidth: QSize | number,
        modeOrHeight: AspectRatioMode | number,
        transformOrAspectRatioMode: TransformationMode | AspectRatioMode,
        transformMode?: TransformationMode,
    ): QImage {
        let native;
        if (sizeOrWidth instanceof QSize) {
            native = this.native.scaled(sizeOrWidth.native, modeOrHeight, transformOrAspectRatioMode);
        } else {
            native = this.native.scaled(sizeOrWidth, modeOrHeight, transformOrAspectRatioMode, transformMode);
        }
        return new QImage(native);
    }

    /**
     * Returns a scaled copy of the image. The returned image is scaled to the given height
     * using the specified transformation mode
     */
    scaledToHeight(height: number, mode: TransformationMode = TransformationMode.FastTransformation): QImage {
        const native = this.native.scaledToHeight(height, mode);
        return new QImage(native);
    }

    /**
     * Returns a scaled copy of the image. The returned image is scaled to the given width
     * using the specified transformation mode
     */
    scaledToWidth(width: number, mode: TransformationMode = TransformationMode.FastTransformation): QImage {
        const native = this.native.scaledToWidth(width, mode);
        return new QImage(native);
    }

    /**
     * Sets the alpha channel of this image to the given alphaChannel
     */
    setAlphaChannel(alphaChannel: QImage): void {
        this.native.setAlphaChannel(alphaChannel.native);
    }

    /**
     * Sets the color at the given index in the color table, to the given to colorValue.
     * The color value is an ARGB quadruplet
     */
    setColor(index: number, colorValue: number): void {
        this.native.setColor(index, colorValue);
    }

    /**
     * Resizes the color table to contain colorCount entries
     */
    setColorCount(colorCount: number): void {
        this.native.setColorCount(colorCount);
    }

    /**
     * Sets the device pixel ratio for the image. This is the ratio between image pixels
     * and device-independent pixels
     */
    setDevicePixelRatio(scaleFactory: number): void {
        this.native.setDevicePixelRatio(scaleFactory);
    }

    /**
     * Sets the number of pixels that fit horizontally in a physical meter, to x
     */
    setDotsPerMeterX(x: number): void {
        this.native.setDotsPerMeterX(x);
    }

    /**
     * Sets the number of pixels that fit vertically in a physical meter, to y
     */
    setDotsPerMeterY(y: number): void {
        this.native.setDotsPerMeterY(y);
    }

    /**
     * Sets the number of pixels by which the image is intended to be offset by
     * when positioning relative to other images, to offset
     */
    setOffset(offset: QPoint): void {
        this.native.setOffset(offset.native);
    }

    /** Sets the pixel index or color at the given position to indexOrRgb */
    setPixel(position: QPoint, indexOrRgb: number): void;
    /** Sets the pixel index or color at (x, y) to indexOrRgb */
    setPixel(x: number, y: number, indexOrRgb: number): void;
    setPixel(positionOrX: QPoint | number, indexOrRgbOrY: number, indexOrRgb?: number): void {
        if (positionOrX instanceof QPoint) {
            this.native.setPixel(positionOrX.native, indexOrRgbOrY);
            return;
        }
        this.native.setPixel(positionOrX, indexOrRgbOrY, indexOrRgb);
    }

    /** Sets the color at the given position to color */
    setPixelColor(position: QPoint, color: QColor): void;
    /** Sets the pixel color at (x, y) to color */
    setPixelColor(x: number, y: number, color: QColor): void;
    setPixelColor(positionOrX: QPoint | number, colorOrY: QColor | number, color?: QColor): void {
        if (positionOrX instanceof QPoint) {
            this.native.setPixel(positionOrX.native, colorOrY);
            return;
        }
        this.native.setPixel(positionOrX, colorOrY, color?.native as NativeElement);
    }

    /** Sets the image text to the given text and associate it with the given key */
    setText(key: string, value: string): void {
        this.native.setText(key, value);
    }

    /** Returns the size of the image, i.e. its width() and height() */
    size(): QSize {
        const native = this.native.size();
        return new QSize(native);
    }

    /** Returns the image data size in bytes */
    sizeInBytes(): number {
        return this.native.sizeInBytes();
    }

    /** Swaps image other with this image. This operation is very fast and never fails */
    swap(other: QImage): void {
        this.native.swap(other.native);
    }

    /**
     * Returns the image text associated with the given key. If the specified key is an empty
     * string, the whole image text is returned, with each key-text pair separated by a newline
     */
    text(key: string): string {
        return this.native.text(key);
    }

    /** Returns the text keys for this image */
    textKeys(): string[] {
        return this.native.textKeys();
    }

    /** Returns true if pos is a valid coordinate pair within the image; otherwise returns false */
    valid(pos: QPoint): boolean;
    /**
     * Returns true if QPoint(x, y) is a valid coordinate pair within the image; otherwise returns
     * false
     */
    valid(x: number, y: number): boolean;
    valid(posOrX: QPoint | number, y?: number): boolean {
        if (posOrX instanceof QPoint) {
            return this.native.valid(posOrX.native);
        }
        return this.native.valid(posOrX, y);
    }

    /** Returns the width of the image */
    width(): number {
        return this.native.width();
    }

    static fromQVariant(variant: QVariant): QImage {
        return new QImage(addon.QImage.fromQVariant(variant.native));
    }
}

export enum QImageFormat {
    Invalid,
    Mono,
    MonoLSB,
    Indexed8,
    RGB32,
    ARGB32,
    ARGB32_Premultiplied,
    RGB16,
    ARGB8565_Premultiplied,
    RGB666,
    ARGB6666_Premultiplied,
    RGB555,
    ARGB8555_Premultiplied,
    RGB888,
    RGB444,
    ARGB4444_Premultiplied,
    RGBX8888,
    RGBA8888,
    RGBA8888_Premultiplied,
    BGR30,
    A2BGR30_Premultiplied,
    RGB30,
    A2RGB30_Premultiplied,
    Alpha8,
    Grayscale8,
    Grayscale16,
    RGBX64,
    RGBA64,
    RGBA64_Premultiplied,
    BGR888,
}

export enum QImageInvertMode {
    InvertRgb,
    InvertRgba,
}
