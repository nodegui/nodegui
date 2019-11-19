import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QPixmap } from './QPixmap';
import { QVariant } from '../QtCore/QVariant';
import { checkIfNativeElement } from '../utils/helpers';

export enum QIconMode {
    Normal,
    Disabled,
    Active,
    Selected,
}
export enum QIconState {
    Off,
    On,
}

type arg = string | NativeElement;
export class QIcon extends Component {
    native: NativeElement;
    constructor(arg?: arg) {
        super();
        if (typeof arg === 'string') {
            const imageUrl = arg;
            this.native = new addon.QIcon(imageUrl);
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QIcon();
        }
    }
    pixmap(width: number, height: number, mode?: QIconMode, state?: QIconState): QPixmap {
        let nativePixmap;
        if (mode && state) {
            nativePixmap = this.native.pixmap(width, height, mode, state);
        } else if (mode) {
            nativePixmap = this.native.pixmap(width, height, mode);
        } else {
            nativePixmap = this.native.pixmap(width, height);
        }
        return new QPixmap(nativePixmap);
    }
    isMask(): boolean {
        return this.native.isMask();
    }
    setIsMask(isMask: boolean): void {
        this.native.setIsMask(isMask);
    }
    cacheKey(): number {
        return this.native.cacheKey();
    }
    static fromQVariant(variant: QVariant): QIcon {
        return addon.QIcon.fromQVariant(variant.native);
    }
}
