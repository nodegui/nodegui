import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDate } from '../QtCore/QDate';
import { DayOfWeek } from '../QtEnums';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

/**

> Create and control a selectable monthly calendar.

* **This class is a JS wrapper around Qt's [QCalendarWidget class](https://doc.qt.io/qt-5/qcalendarwidget.html)**

A `QCalendarWidget` provides a monthly based calendar widget allowing the user to select a date.

### Example

```javascript
const { QCalendarWidget } = require("@nodegui/nodegui");

const calendarWidget = new QCalendarWidget();
// more will follow when .selectedDate() et cetera are implemented
```
 */
export class QCalendarWidget extends QWidget<QCalendarWidgetSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QCalendarWidget(parent.native);
        } else {
            native = new addon.QCalendarWidget();
        }
        super(native);
    }
    setDateEditAcceptDelay(delay: number): void {
        this.setProperty('dateEditAcceptDelay', delay);
    }
    dateEditAcceptDelay(): number {
        return this.property('dateEditAcceptDelay').toInt();
    }
    setDateEditEnabled(enable: boolean): void {
        this.setProperty('dateEditEnabled', enable);
    }
    isDateEditEnabled(): boolean {
        return this.property('dateEditEnabled').toBool();
    }
    setFirstDayOfWeek(dayOfWeek: DayOfWeek): void {
        this.setProperty('firstDayOfWeek', dayOfWeek);
    }
    firstDayOfWeek(): DayOfWeek {
        return this.property('firstDayOfWeek').toInt();
    }
    setGridVisible(show: boolean): void {
        this.setProperty('gridVisible', show);
    }
    isGridVisible(): boolean {
        return this.property('gridVisible').toBool();
    }
    setHorizontalHeaderFormat(format: HorizontalHeaderFormat): void {
        this.setProperty('horizontalHeaderFormat', format);
    }
    horizontalHeaderFormat(): HorizontalHeaderFormat {
        return this.property('horizontalHeaderFormat').toInt();
    }
    setNavigationBarVisible(visible: boolean): void {
        this.setProperty('navigationBarVisible', visible);
    }
    isNavigationBarVisible(): boolean {
        return this.property('navigationBarVisible').toBool();
    }
    setSelectionMode(mode: SelectionMode): void {
        this.setProperty('selectionMode', mode);
    }
    selectionMode(): SelectionMode {
        return this.property('selectionMode').toInt();
    }
    setVerticalHeaderFormat(format: VerticalHeaderFormat): void {
        this.setProperty('verticalHeaderFormat', format);
    }
    verticalHeaderFormat(): VerticalHeaderFormat {
        return this.property('verticalHeaderFormat').toInt();
    }
}
wrapperCache.registerWrapper('QCalendarWidgetWrap', QCalendarWidget);

export enum HorizontalHeaderFormat {
    NoHorizontalHeader,
    SingleLetterDayNames,
    ShortDayNames,
    LongDayNames,
}

export enum VerticalHeaderFormat {
    NoVerticalHeader,
    ISOWeekNumbers,
}

export enum SelectionMode {
    NoSelection,
    SingleSelection,
}

export interface QCalendarWidgetSignals extends QWidgetSignals {
    activated: (date: QDate) => void;
    clicked: (date: QDate) => void;
    currentPageChanged: (year: number, month: number) => void;
    selectionChanged: () => void;
}
