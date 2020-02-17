import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { QVariant } from './QVariant';

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
    constructor(organization: string, application: string) {
        super();
        this.native = new addon.QSettings(organization, application);
    }
    sync(): void {
        this.native.sync();
    }
    setValue(key: string, value: number | string | boolean) {
        this.native.setValue(key, value);
    }
    value(key: string): QVariant {
        return this.native.value(key);
    }
}
