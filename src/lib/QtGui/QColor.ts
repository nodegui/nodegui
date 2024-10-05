import { Component, NativeElement } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from '../QtCore/QVariant';
import { GlobalColor } from '../QtEnums';

export class QColor extends Component {
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(colorString: string);
    constructor(color: GlobalColor);
    constructor(r?: number, g?: number, b?: number, a?: number);
    constructor(arg?: NativeElement | number | string, g = 0, b = 0, a = 255) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (typeof arg === 'number') {
            if (arguments.length === 1) {
                // This is for QGlobalColor enum
                native = new addon.QColor(arg);
            } else {
                native = new addon.QColor(arg, g, b, a);
            }
        } else if (typeof arg === 'string') {
            native = new addon.QColor(arg);
        } else {
            native = new addon.QColor();
        }
        super(native);
    }
    setRed(value: number): void {
        this.native.setRed(value);
    }
    red(): number {
        return this.native.red();
    }
    setGreen(value: number): void {
        this.native.setGreen(value);
    }
    green(): number {
        return this.native.green();
    }
    setBlue(value: number): void {
        this.native.setBlue(value);
    }
    blue(): number {
        return this.native.blue();
    }
    setAlpha(value: number): void {
        this.native.setAlpha(value);
    }
    alpha(): number {
        return this.native.alpha();
    }
    rgb(): number {
        return this.native.rgb();
    }
    rgba(): number {
        return this.native.rgba();
    }

    static fromCmyk(c: number, m: number, y: number, k: number, a = 255): QColor {
        return new QColor(addon.QColor.fromCmyk(c, m, y, k, a));
    }

    static fromCmykF(c: number, m: number, y: number, k: number, a = 1.0): QColor {
        return new QColor(addon.QColor.fromCmykF(c, m, y, k, a));
    }

    static fromHsl(h: number, s: number, l: number, a = 255): QColor {
        return new QColor(addon.QColor.fromHsl(h, s, l, a));
    }

    static fromHslF(h: number, s: number, l: number, a = 1.0): QColor {
        return new QColor(addon.QColor.fromHslF(h, s, l, a));
    }

    static fromHsv(h: number, s: number, v: number, a = 255): QColor {
        return new QColor(addon.QColor.fromHsv(h, s, v, a));
    }

    static fromHsvF(h: number, s: number, v: number, a = 1.0): QColor {
        return new QColor(addon.QColor.fromHsvF(h, s, v, a));
    }

    static fromRgb(r: number, g: number, b: number, a = 255): QColor {
        return new QColor(addon.QColor.fromRgb(r, g, b, a));
    }
    static fromQVariant(variant: QVariant): QColor {
        return new QColor(addon.QColor.fromQVariant(variant.native));
    }
}
