import { NativeElement, Component } from '../core/Component';
import { AspectRatioMode } from '../QtEnums';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export class QSize extends Component {
    constructor(nativeElement: NativeElement);
    constructor(width?: number, height?: number);
    constructor(nativeOrWidth?: number | NativeElement, height?: number) {
        let native: NativeElement;
        if (!nativeOrWidth) {
            native = new addon.QSize();
        } else if (checkIfNativeElement(nativeOrWidth)) {
            native = nativeOrWidth as NativeElement;
        } else {
            native = new addon.QSize(nativeOrWidth, height);
        }
        super(native);
    }
    boundedTo(otherSize: QSize): QSize {
        return new QSize(this.native.boundedTo(otherSize));
    }
    expandedTo(otherSize: QSize): QSize {
        return new QSize(this.native.expandedTo(otherSize));
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
    scaled(width: number, height: number, mode: AspectRatioMode): QSize {
        return new QSize(this.native.scaled(width, height, mode));
    }
    setHeight(height: number): void {
        return this.native.setHeight(height);
    }
    setWidth(width: number): void {
        return this.native.setWidth(width);
    }
    transpose(): void {
        this.native.transpose();
    }
    transposed(): QSize {
        return new QSize(this.native.transposed());
    }
    width(): number {
        return this.native.width();
    }
    static fromQVariant(variant: QVariant): QSize {
        return new QSize(addon.QSize.fromQVariant(variant.native));
    }
}
