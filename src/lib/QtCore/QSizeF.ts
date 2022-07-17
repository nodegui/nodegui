import { NativeElement, Component } from '../core/Component';
import { AspectRatioMode } from '../QtEnums';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QSize } from './QSize';
import { QVariant } from './QVariant';

export class QSizeF extends Component {
    constructor(nativeOrWidth?: number | NativeElement, height?: number) {
        let native: NativeElement;
        if (!nativeOrWidth) {
            native = new addon.QSizeF();
        } else if (checkIfNativeElement(nativeOrWidth)) {
            native = nativeOrWidth as NativeElement;
        } else {
            native = new addon.QSizeF(nativeOrWidth, height);
        }
        super(native);
    }
    boundedTo(otherSize: QSizeF): QSizeF {
        return new QSizeF(this.native.boundedTo(otherSize));
    }
    expandedTo(otherSize: QSizeF): QSizeF {
        return new QSizeF(this.native.expandedTo(otherSize));
    }
    height(): number {
        return this.native.height();
    }
    isEmpty(): boolean {
        return this.native.isEmpty();
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    isValid(): boolean {
        return this.native.isValid();
    }
    scale(width: number, height: number, mode: AspectRatioMode): void {
        this.native.scale(width, height, mode);
    }
    scaled(width: number, height: number, mode: AspectRatioMode): QSizeF {
        return new QSizeF(this.native.scaled(width, height, mode));
    }
    setHeight(height: number): void {
        return this.native.setHeight(height);
    }
    setWidth(width: number): void {
        return this.native.setWidth(width);
    }
    toSize(): QSize {
        return new QSize(this.native.toSize());
    }
    transpose(): void {
        this.native.transpose();
    }
    transposed(): QSizeF {
        return new QSizeF(this.native.transposed());
    }
    width(): number {
        return this.native.width();
    }
    static fromQVariant(variant: QVariant): QSizeF {
        return new QSizeF(addon.QSizeF.fromQVariant(variant.native));
    }
}
