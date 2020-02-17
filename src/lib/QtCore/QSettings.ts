import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';
import { NodeObject } from './QObject';

enum Format {
    NativeFormat = 0,
    Registry32Format = 2,
    Registry64Format = 3,
    IniFormat = 1,
    InvalidFormat = 16,
}

enum Scope {
    UserScope = 0,
    SystemScope = 1,
}

export class QSettings extends Component {
    native: NativeElement;
    constructor(parent?: NodeObject<any>) {
        super();
        if (parent) {
            this.native = new addon.QSettings(parent);
        }
        this.native = new addon.QSettings();
    }
    sync(): void {
        this.native.sync();
    }
    setValue(key: string, value: number) {
        this.native.setValue(key, value);
    }
    value(key: string): number {
        return this.native.value(key);
    }
}
