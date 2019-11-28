import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { AspectRatioMode } from '../QtEnums';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from '../QtCore/QVariant';

export type ImageFormats = 'BMP' | 'GIF' | 'JPG' | 'JPEG' | 'PNG' | 'PBM' | 'PGM' | 'PPM' | 'XBM' | 'XPM' | 'SVG';

type arg = string | NativeElement;
export class QPixmap extends Component {
    native: NativeElement;
    constructor(arg?: arg) {
        super();
        if (typeof arg === 'string') {
            const imageUrl = arg;
            this.native = new addon.QPixmap(imageUrl);
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QPixmap();
        }
    }
    load(imageUrl: string): boolean {
        return this.native.load(imageUrl);
    }
    loadFromData(buffer: Buffer, format?: ImageFormats): boolean {
        return format ? this.native.loadFromData(buffer, format) : this.native.loadFromData(buffer);
    }
    save(fileName: string, format?: ImageFormats): boolean {
        return format ? this.native.save(fileName, format) : this.native.save(fileName);
    }
    scaled(width: number, height: number, aspectRatioMode?: AspectRatioMode): QPixmap {
        let nativePixmap;
        if (aspectRatioMode) {
            nativePixmap = this.native.scaled(width, height, aspectRatioMode);
        } else {
            nativePixmap = this.native.scaled(width, height);
        }
        return new QPixmap(nativePixmap);
    }
    height(): number {
        return this.native.height();
    }
    width(): number {
        return this.native.width();
    }
    static fromQVariant(variant: QVariant): QPixmap {
        return new QPixmap(addon.QPixmap.fromQVariant(variant.native));
    }
}
