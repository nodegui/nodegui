import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { ImageConversionFlag, GlobalColor, AspectRatioMode, TransformationMode } from '../QtEnums';
import { QSize } from '../QtCore/QSize';
import { QRect } from '../QtCore/QRect';
import { QPoint } from '../QtCore/QPoint';
import { QVariant } from '../QtCore/QVariant';
import { QColor } from '../QtGui/QColor';

export class QImage extends Component {
    native!: NativeElement;

    constructor();
    constructor(native: NativeElement);
    constructor(filename: string);
    constructor(width: number, height: number, format: QImageFormat);
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

    allGray(): boolean {
        return this.native.allGray();
    }

    bitPlaneCount(): number {
        return this.native.bitPlaneCount();
    }

    bytesPerLine(): number {
        return this.native.bytesPerLine();
    }

    cacheKey(): number {
        return this.native.cacheKey();
    }

    color(i: number): number {
        return this.native.color(i);
    }

    colorCount(): number {
        return this.native.colorCount();
    }

    convertTo(format: QImageFormat, flags: ImageConversionFlag = ImageConversionFlag.AutoColor): void {
        this.native.convertTo(format, flags);
    }

    convertToFormat(format: QImageFormat, flags: ImageConversionFlag = ImageConversionFlag.AutoColor): QImage {
        return new QImage(this.native.convertToFormat(format, flags));
    }

    copy(rectangle: QRect): QImage;
    copy(x: number, y: number, width: number, height: number): QImage;
    copy(rectangleOrX: QRect | number, y?: number, width?: number, height?: number): QImage {
        if (rectangleOrX instanceof QRect) {
            return new QImage(this.native.copy(rectangleOrX.native));
        }

        return new QImage(this.native.copy(rectangleOrX, y, width, height));
    }

    createAlphaMask(flags: ImageConversionFlag = ImageConversionFlag.AutoColor): QImage {
        return new QImage(this.native.createAlphaMask(flags));
    }

    createHeuristicMask(clipTight = true): QImage {
        return new QImage(this.native.createHeuristicMask(clipTight));
    }

    depth(): number {
        return this.native.depth();
    }

    devicePixelRatio(): number {
        return this.native.devicePixelRatio();
    }

    dotsPerMeterX(): number {
        return this.native.dotsPerMeterX();
    }

    dotsPerMeterY(): number {
        return this.native.dotsPerMeterY();
    }

    fill(color: QColor | GlobalColor): void {
        this.native.fill(color instanceof QColor ? color.native : color);
    }

    format(): QImageFormat {
        return this.native.format();
    }

    hasAlphaChannel(): boolean {
        return this.native.hasAlphaChannel();
    }

    height(): number {
        return this.native.height();
    }

    // eslint-disable-next-line
    invertPixels(mode: QImageInvertMode = QImageInvertMode.InvertRgb): void {
        this.native.invertPixels(mode);
    }

    isGrayscale(): boolean {
        return this.native.isGrayscale();
    }

    isNull(): boolean {
        return this.native.isNull();
    }

    load(fileName: string, format: string | null = null): boolean {
        return this.native.load(fileName, format);
    }

    loadFromData(data: Buffer, format: string | null = null): boolean {
        return this.native.loadFromData(data, format);
    }

    mirrored(horizontal = false, vertical = true): QImage {
        const native = this.native.mirrored(horizontal, vertical);
        return new QImage(native);
    }

    offset(): QPoint {
        const native = this.native.offset();
        return new QPoint(native);
    }

    pixelColor(point: QPoint): QColor;
    pixelColor(x: number, y: number): QColor;
    pixelColor(pointOrX: QPoint | number, y?: number): QColor {
        const native =
            pointOrX instanceof QPoint ? this.native.pixelColor(pointOrX.native) : this.native.pixelColor(pointOrX, y);
        return new QColor(native);
    }

    pixelIndex(point: QPoint): number;
    pixelIndex(x: number, y: number): number;
    pixelIndex(pointOrX: QPoint | number, y?: number): number {
        const pixelIndex =
            pointOrX instanceof QPoint ? this.native.pixelIndex(pointOrX.native) : this.native.pixelIndex(pointOrX, y);
        return pixelIndex;
    }

    rect(): QRect {
        const native = this.native.rect();
        return new QRect(native);
    }

    reinterpretAsFormat(format: QImageFormat): boolean {
        return this.native.reinterpretAsFormat(format);
    }

    save(fileName: string, format: string | null = null, quality = -1): boolean {
        return this.native.save(fileName, format, quality);
    }

    scaled(size: QSize, aspectRatioMode: AspectRatioMode, transformMode: TransformationMode): QImage;
    scaled(width: number, height: number, aspectRatioMode: AspectRatioMode, transformMode: TransformationMode): QImage;
    scaled(
        sizeOrWidth: QSize | number,
        modeOrHeight: any,
        transformOrAspectRatioMode: any,
        transformMode?: any,
    ): QImage {
        let native;
        if (sizeOrWidth instanceof QSize) {
            native = this.native.scaled(sizeOrWidth.native, modeOrHeight, transformOrAspectRatioMode);
        } else {
            native = this.native.scaled(sizeOrWidth, modeOrHeight, transformOrAspectRatioMode, transformMode);
        }
        return new QImage(native);
    }

    scaledToHeight(height: number, mode: TransformationMode = TransformationMode.FastTransformation): QImage {
        const native = this.native.scaledToHeight(height, mode);
        return new QImage(native);
    }

    scaledToWidth(width: number, mode: TransformationMode = TransformationMode.FastTransformation): QImage {
        const native = this.native.scaledToWidth(width, mode);
        return new QImage(native);
    }

    setAlphaChannel(alphaChannel: QImage): void {
        this.native.setAlphaChannel(alphaChannel.native);
    }

    setColor(index: number, colorValue: number): void {
        this.native.setColor(index, colorValue);
    }

    setColorCount(colorCount: number): void {
        this.native.setColorCount(colorCount);
    }

    setDevicePixelRatio(scaleFactory: number): void {
        this.native.setDevicePixelRatio(scaleFactory);
    }

    setDotsPerMeterX(x: number): void {
        this.native.setDotsPerMeterX(x);
    }

    setDotsPerMeterY(y: number): void {
        this.native.setDotsPerMeterY(y);
    }

    setOffset(offset: QPoint): void {
        this.native.setOffset(offset.native);
    }

    setPixel(position: QPoint, indexOrRgb: number): void;
    setPixel(x: number, y: number, indexOrRgb: number): void;
    setPixel(positionOrX: QPoint | number, indexOrRgbOrY: number, indexOrRgb?: number): void {
        if (positionOrX instanceof QPoint) {
            this.native.setPixel(positionOrX.native, indexOrRgbOrY);
            return;
        }
        this.native.setPixel(positionOrX, indexOrRgbOrY, indexOrRgb);
    }

    setPixelColor(position: QPoint, color: QColor): void;
    setPixelColor(x: number, y: number, color: QColor): void;
    setPixelColor(positionOrX: QPoint | number, colorOrY: QColor | number, color?: QColor): void {
        if (positionOrX instanceof QPoint) {
            this.native.setPixel(positionOrX.native, colorOrY);
            return;
        }
        this.native.setPixel(positionOrX, colorOrY, color!.native);
    }

    setText(key: string, value: string): void {
        this.native.setText(key, value);
    }

    size(): QSize {
        const native = this.native.size();
        return new QSize(native);
    }

    sizeInBytes(): number {
        return this.native.sizeInBytes();
    }

    swap(other: QImage): void {
        this.native.swap(other.native);
    }

    text(key: string): string {
        return this.native.text(key);
    }

    textKeys(): string[] {
        return this.native.textKeys();
    }

    valid(pos: QPoint): boolean;
    valid(x: number, y: number): boolean;
    valid(posOrX: QPoint | number, y?: number): boolean {
        if (posOrX instanceof QPoint) {
            return this.native.valid(posOrX.native);
        }
        return this.native.valid(posOrX, y);
    }

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
