import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QFrame, QFrameSignals } from './QFrame';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Create and control stacked widgets where only one is visible at a time.

* **This class is a JS wrapper around Qt's [QStackedWidget class](https://doc.qt.io/qt-5/qstackedwidget.html)**

### Example

```javascript

const { QMainWindow, QLabel, QStackedWidget } = require("@nodegui/nodegui");

const win = new QMainWindow();
const stacked = new QStackedWidget();

const first = new QLabel();
first.setText('First');

const second = new QLabel();
second.setText('Second');

const third = new QLabel();
third.setText('Third');

stacked.addWidget(first);
stacked.addWidget(second);
stacked.addWidget(third);

stacked.setCurrentWidget(second);
//or
// stacked.setCurrentIndex(1);

win.setCentralWidget(stacked);
win.resize(200, 200);

win.show();
(global as any).win = win;


```
 */
export class QStackedWidget extends QFrame<QStackedWidgetSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QStackedWidget(parent.native);
        } else {
            native = new addon.QStackedWidget();
        }
        super(native);
    }
    // *** Public Function ***
    addWidget(widget: QWidget): void {
        this.native.addWidget(widget.native);
        widget.setFlexNodeSizeControlled(true);
    }
    count(): number {
        return this.property('count').toInt();
    }
    currentIndex(): number {
        return this.native.currentIndex();
    }
    // TODO: QWidget *	currentWidget() const
    // TODO: int 	indexOf(QWidget *widget) const
    // TODO: int 	insertWidget(int index, QWidget *widget)
    removeWidget(widget: QWidget): void {
        this.native.removeWidget(widget.native);
    }
    // TODO: QWidget *	widget(int index) const

    // *** Public Slots ***
    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }
    setCurrentWidget(widget: QWidget): void {
        this.native.setCurrentWidget(widget.native);
    }
}
wrapperCache.registerWrapper('QStackedWidgetWrap', QStackedWidget);

export interface QStackedWidgetSignals extends QFrameSignals {
    currentChanged: (index: number) => void;
}
