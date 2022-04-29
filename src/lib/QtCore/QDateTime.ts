import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';
import { QDate } from './QDate';
import { QTime } from './QTime';
import { TimeSpec, DateFormat } from '../QtEnums';

export class QDateTime extends Component {
    constructor(arg?: NativeElement, time?: NativeElement) {
        const count = arguments.length;
        let native: NativeElement;
        if (arg && time) {
            native = new addon.QDateTime(arg.native, time.native);
        } else if (count == 1 && checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QDateTime();
        }
        super(native);
    }
    addDays(ndays: number): QDateTime {
        return new QDateTime(this.native.addDays(ndays));
    }
    addMSecs(msecs: number): QDateTime {
        return new QDateTime(this.native.addMSecs(msecs));
    }
    addMonths(nmonths: number): QDateTime {
        return new QDateTime(this.native.addMonths(nmonths));
    }
    addSecs(s: number): QDateTime {
        return new QDateTime(this.native.addSecs(s));
    }
    addYears(nyears: number): QDateTime {
        return new QDateTime(this.native.addYears(nyears));
    }
    date(): QDate {
        return new QDate(this.native.date());
    }
    daysTo(other: QDateTime): number {
        return this.native.daysTo(other.native);
    }
    isDaylightTime(): boolean {
        return this.native.isDaylightTime();
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    isValid(): boolean {
        return this.native.isValid();
    }
    msecsTo(other: QDateTime): number {
        return this.native.msecsTo(other.native);
    }
    offsetFromUtc(): number {
        return this.native.offsetFromUtc();
    }
    secsTo(other: QDateTime): number {
        return this.native.secsTo(other.native);
    }
    setDate(date: QDate): void {
        this.native.setDate(date.native);
    }
    setMSecsSinceEpoch(msecs: number): void {
        this.native.setMSecsSinceEpoch(msecs);
    }
    setOffsetFromUtc(offsetSeconds: number): void {
        this.native.setOffsetFromUtc(offsetSeconds);
    }
    setSecsSinceEpoch(secs: number): void {
        this.native.setSecsSinceEpoch(secs);
    }
    setTime(time: QTime): void {
        this.native.setTime(time.native);
    }
    setTimeSpec(spec: TimeSpec): void {
        this.native.setTimeSpec(spec);
    }
    time(): QTime {
        return new QTime(this.native.time());
    }
    timeSpec(): TimeSpec {
        return this.native.timeSpec();
    }
    toLocalTime(): QDateTime {
        return new QDateTime(this.native.toLocalTime());
    }
    toMSecsSinceEpoch(): number {
        return this.native.toMSecsSinceEpoch();
    }
    toOffsetFromUtc(offsetSeconds: number): QDateTime {
        return new QDateTime(this.native.toOffsetFromUtc(offsetSeconds));
    }
    toSecsSinceEpoch(): number {
        return this.native.toSecsSinceEpoch();
    }
    toString(format: string | DateFormat): string {
        return this.native.toString$(format);
    }
    toTimeSpec(spec: TimeSpec): QDateTime {
        return new QDateTime(this.native.toTimeSpec(spec));
    }
    toUTC(): QDateTime {
        return new QDateTime(this.native.toUTC());
    }
    static currentDateTime(): QDateTime {
        return new QDateTime(addon.QDateTime.currentDateTime());
    }
    static currentDateTimeUtc(): QDateTime {
        return new QDateTime(addon.QDateTime.currentDateTimeUtc());
    }
    static currentMSecsSinceEpoch(): number {
        return addon.QDateTime.currentMSecsSinceEpoch();
    }
    static currentSecsSinceEpoch(): number {
        return addon.QDateTime.currentSecsSinceEpoch();
    }
    static fromString(dateTimeString: string, format: string | DateFormat): QDateTime {
        return addon.QDateTime.fromString(dateTimeString, format);
    }
    static fromQVariant(variant: QVariant): QDateTime {
        return new QDateTime(addon.QDateTime.fromQVariant(variant.native));
    }
}
