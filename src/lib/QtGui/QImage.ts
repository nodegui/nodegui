import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { ImageConversionFlag, GlobalColor } from '../QtEnums';
import { QSize } from '../QtCore/QSize';
import { QRect } from '../QtCore/QRect';
import { QPoint } from '../QtCore/QPoint';
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

    save(fileName: string, format: string | null = null, quality: number = -1): boolean {
        return this.native.save(fileName, format, quality);
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
