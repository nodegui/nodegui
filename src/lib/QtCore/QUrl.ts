import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

export enum ParsingMode {
    TolerantMode,
    StrictMode,
    DecodedMode,
}

type argument = string | NativeElement;

export class QUrl extends Component {
    native: NativeElement;
    constructor(arg?: argument, parsingMode: ParsingMode = ParsingMode.TolerantMode) {
        super();
        if (!arg) {
            this.native = new addon.QUrl();
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QUrl(arg, parsingMode);
        }
    }
    setUrl(url: string): void {
        return this.native.setUrl(url);
    }
    toString(): string {
        return this.native.toString();
    }
    static fromQVariant(variant: QVariant): QUrl {
        return new QUrl(addon.QUrl.fromQVariant(variant.native));
    }
}
