import { Component } from '../core/Component';
import addon from '../utils/addon';
import { QVariant } from './QVariant';

export enum QSettingsFormat {
    NativeFormat = 0,
    Registry32Format = 2,
    Registry64Format = 3,
    IniFormat = 1,
    InvalidFormat = 16,
}

export enum QSettingsScope {
    UserScope = 0,
    SystemScope = 1,
}

export class QSettings extends Component {
    constructor(organization: string, application: string) {
        super(new addon.QSettings(organization, application));
    }
    sync(): void {
        this.native.sync();
    }
    setValue(key: string, value: number | string | boolean): void {
        this.native.setValue(key, value);
    }
    value(key: string): QVariant {
        return this.native.value(key);
    }
}
