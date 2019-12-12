import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';

export enum SystemFont {
    GeneralFont,
    FixedFont,
    TitleFont,
    SmallestReadableFont,
}

export enum WritingSystem {
    Any = 0,
    Latin = 1,
    Greek = 2,
    Cyrillic = 3,
    Armenian = 4,
    Hebrew = 5,
    Arabic = 6,
    Syriac = 7,
    Thaana = 8,
    Devanagari = 9,
    Bengali = 10,
    Gurmukhi = 11,
    Gujaratin = 12,
    Oriya = 13,
    Tamil = 14,
    Telugu = 15,
    Kannada = 16,
    Malayalam = 17,
    Sinhala = 18,
    Thai = 19,
    Lao = 20,
    Tibetan = 21,
    Myanmar = 22,
    Georgian = 23,
    Khmer = 24,
    SimplifiedChinese = 25,
    TraditionalChinese = 26,
    Japanese = 27,
    Korean = 28,
    Vietnamese = 29,
    Symbol = 30,
    Other = Symbol,
    Ogham = 31,
    Runic = 32,
    Nko = 33,
}

export class QFontDatabase extends Component {
    native: NativeElement;
    constructor() {
        super();
        this.native = new addon.QFontDatabase();
    }
    bold(family: string, style: string): boolean {
        return this.native.bold(family, style);
    }
    italic(family: string, style: string): boolean {
        return this.native.italic(family, style);
    }
    weight(family: string, style: string): number {
        return this.native.weight(family, style);
    }
    static addApplicationFont(fileName: string): number {
        return addon.QFontDatabase.addApplicationFont(fileName);
    }
    static removeApplicationFont(id: number): boolean {
        return addon.QFontDatabase.removeApplicationFont(id);
    }
}
