import { Component, NativeElement } from '../core/Component';
import { QSize } from '../QtCore/QSize';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';

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
