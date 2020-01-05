import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { NativeElement, Component } from '../core/Component';
import { QVariant } from './QVariant';
import { DateFormat } from '../QtEnums';

export class QDate extends Component {
    native: NativeElement;
    constructor(arg?: NativeElement | number, month?: number, day?: number) {
        super();
        const count = arguments.length;
        if (count == 3) {
            this.native = new addon.QDate(arg, month, day);
        } else if (count == 1 && checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QDate();
        }
    }
    addDays(ndays: number): QDate {
        return new QDate(this.native.addDays(ndays));
    }
    addMonths(nmonths: number): QDate {
        return new QDate(this.native.addMonths(nmonths));
    }
    addYears(nyears: number): QDate {
        return new QDate(this.native.addYears(nyears));
    }
    day(): number {
        return this.native.day();
    }
    dayOfWeek(): number {
        return this.native.dayOfWeek();
    }
    dayOfYear(): number {
        return this.native.dayOfYear();
    }
    daysInMonth(): number {
        return this.native.daysInMonth();
    }
    daysInYear(): number {
        return this.native.daysInYear();
    }
    daysTo(d: QDate): number {
        return this.native.daysTo(d.native);
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    isValid(): boolean {
        return this.native.isValid();
    }
    month(): number {
        return this.native.month();
    }
    setDate(year: number, month: number, day: number): boolean {
        return this.native.setDate(year, month, day);
    }
    toJulianDay(): number {
        return this.native.toJulianDay();
    }
    toString(format: string | DateFormat): string {
        return this.native.toString$(format);
    }
    year(): number {
        return this.native.year();
    }
    static currentDate(): QDate {
        return new QDate(addon.QDate.currentDate());
    }
    static fromJulianDay(jd: number): QDate {
        return new QDate(addon.QDate.fromJulianDay(jd));
    }
    static isLeapYear(year: number): boolean {
        return addon.QDate.isLeapYear(year);
    }
    static isValid(year: number, month: number, day: number): boolean {
        return addon.QDate.isValid(year, month, day);
    }
    static fromQVariant(variant: QVariant): QDate {
        return new QDate(addon.QDate.fromQVariant(variant.native));
    }
}
