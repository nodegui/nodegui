import { Component, NativeElement } from '../core/Component';
import addon from '../utils/addon';
import { QVariant } from '../QtCore/QVariant';
import { checkIfNativeElement } from '../utils/helpers';

export class QFont extends Component {
    native: NativeElement;
    constructor();
    constructor(font: QFont);
    constructor(native: NativeElement);
    constructor(family: string, pointSize?: number, weight?: QFontWeight, italic?: boolean);
    constructor(arg?: QFont | string | NativeElement, pointSize = -1, weight = -1, italic = false) {
        super();
        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (arg instanceof QFont) {
            this.native = arg.native;
        } else if (typeof arg === 'string') {
            this.native = new addon.QFont(arg, pointSize, weight, italic);
        } else {
            this.native = new addon.QFont();
        }
    }
    setCapitalization(caps: QFontCapitalization): void {
        this.native.setCapitalization(caps);
    }
    capitalization(): QFontCapitalization {
        return this.native.capitalization();
    }
    setFamily(family: string): void {
        this.native.setFamily(family);
    }
    family(): string {
        return this.native.family();
    }
    setPointSize(value: number): void {
        this.native.setPointSize(value);
    }
    pointSize(): number {
        return this.native.pointSize();
    }
    setStretch(factor: QFontStretch): void {
        this.native.setStretch(factor);
    }
    stretch(): QFontStretch {
        return this.native.stretch();
    }
    setWeight(weight: QFontWeight): void {
        this.native.setWeight(weight);
    }
    weight(): QFontWeight {
        return this.native.weight();
    }
    setItalic(enable: boolean): void {
        this.native.setItalic(enable);
    }
    italic(): boolean {
        return this.native.italic();
    }
    toString(): string {
        return this.native.toString();
    }
    static fromQVariant(variant: QVariant): QFont {
        return new QFont(addon.QFont.fromQVariant(variant.native));
    }
}

export enum QFontStretch {
    AnyStretch = 0,
    UltraCondensed = 50,
    ExtraCondensed = 62,
    Condensed = 75,
    SemiCondensed = 87,
    Unstretched = 100,
    SemiExpanded = 112,
    Expanded = 125,
    ExtraExpanded = 150,
    UltraExpanded = 200,
}
export enum QFontCapitalization {
    MixedCase = 0,
    AllUppercase = 1,
    AllLowercase = 2,
    SmallCaps = 3,
    Capitalize = 4,
}
export enum QFontWeight {
    Thin = 0,
    ExtraLight = 12,
    Light = 25,
    Normal = 50,
    Medium = 57,
    DemiBold = 63,
    Bold = 75,
    ExtraBold = 81,
    Black = 87,
}
