import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractSpinBox, QAbstractSpinBoxSignals } from './QAbstractSpinBox';
import { QCalendarWidget } from './QCalendarWidget';
import { QDate } from '../QtCore/QDate';
import { QDateTime } from '../QtCore/QDateTime';
import { QTime } from '../QtCore/QTime';
import { TimeSpec } from '../QtEnums';

export interface QDateTimeEditSignals extends QAbstractSpinBoxSignals {
    dateChanged: (date: QDate) => void;
    dateTimeChanged: (datetime: QDateTime) => void;
    timeChanged: (time: QTime) => void;
}

export class QDateTimeEdit extends QAbstractSpinBox<QDateTimeEditSignals> {
    native: NativeElement;
    calendar?: QCalendarWidget;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QDateTimeEdit(parent.native);
        } else {
            native = new addon.QDateTimeEdit();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setCalendarWidget(calendarWidget: QCalendarWidget): void {
        this.calendar = calendarWidget;
        this.native.setCalendarWidget(calendarWidget.native);
    }
    calendarWidget(): QCalendarWidget | null {
        const calendar = this.calendar;
        if (calendar) {
            return calendar;
        }
        return null;
    }
    setCalendarPopup(enable: boolean): void {
        this.setProperty('calendarPopup', enable);
    }
    calendarPopup(): boolean {
        return this.property('calendarPopup').toBool();
    }
    setDate(date: QDate): void {
        this.setProperty('date', date.native);
    }
    date(): QDate {
        const date = this.property('date');
        return QDate.fromQVariant(date);
    }
    setDateTime(datetime: QDateTime): void {
        this.setProperty('dateTime', datetime.native);
    }
    dateTime(): QDateTime {
        const datetime = this.property('dateTime');
        return QDateTime.fromQVariant(datetime);
    }
    setDisplayFormat(format: string): void {
        this.setProperty('displayFormat', format);
    }
    displayFormat(): string {
        return this.property('displayFormat').toString();
    }
    setTime(time: QTime): void {
        this.setProperty('time', time.native);
    }
    time(): QTime {
        const time = this.property('time');
        return QTime.fromQVariant(time);
    }
    setTimeSpec(spec: TimeSpec): void {
        this.setProperty('timeSpec', spec);
    }
    timeSpec(): TimeSpec {
        return this.property('timeSpec').toInt();
    }
}
