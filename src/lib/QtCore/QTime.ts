import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';
import { DateFormat } from '../QtEnums';

export class QTime extends Component {
    constructor(nativeOrHours?: NativeElement | number, m?: number, s = 0, ms = 0) {
        const count = arguments.length;
        let native: NativeElement;
        if (count > 1) {
            native = new addon.QTime(nativeOrHours, m, s, ms);
        } else if (checkIfNativeElement(nativeOrHours)) {
            native = nativeOrHours as NativeElement;
        } else {
            native = new addon.QTime();
        }
        super(native);
    }
    addMSecs(ms: number): QTime {
        return new QTime(this.native.addMSecs(ms));
    }
    addSecs(s: number): QTime {
        return new QTime(this.native.addSecs(s));
    }
    elapsed(): number {
        return this.native.elapsed();
    }
    hour(): number {
        return this.native.hour();
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    isValid(): boolean {
        return this.native.isValid();
    }
    minute(): number {
        return this.native.minute();
    }
    msec(): number {
        return this.native.msec();
    }
    msecsSinceStartOfDay(): number {
        return this.native.msecsSinceStartOfDay();
    }
    msecsTo(t: QTime): number {
        return this.native.msecsTo(t.native);
    }
    restart(): number {
        return this.native.restart();
    }
    second(): number {
        return this.native.second();
    }
    secsTo(t: QTime): number {
        return this.native.secsTo(t.native);
    }
    setHMS(h: number, m: number, s: number, ms = 0): boolean {
        return this.native.setHMS(h, m, s, ms);
    }
    start(): void {
        this.native.start();
    }
    toString(format: string | DateFormat): string {
        return this.native.toString$(format);
    }
    static currentTime(): QTime {
        return new QTime(addon.QTime.currentTime());
    }
    static fromMSecsSinceStartOfDay(msecs: number): QTime {
        return new QTime(addon.QTime.fromMSecsSinceStartOfDay(msecs));
    }
    static isValid(h: number, m: number, s: number, ms = 0): boolean {
        return addon.QTime.isValid(h, m, s, ms);
    }
    static fromString(timeString: string, format: string | DateFormat): QTime {
        return new QTime(addon.QTime.fromString(timeString, format));
    }
    static fromQVariant(variant: QVariant): QTime {
        return new QTime(addon.QTime.fromQVariant(variant.native));
    }
}
