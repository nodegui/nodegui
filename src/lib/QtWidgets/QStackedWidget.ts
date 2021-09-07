import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeFrame, QFrameSignals } from './QFrame';
import { NativeElement } from '../core/Component';

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
export class QStackedWidget extends NodeFrame<QStackedWidgetSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QStackedWidget(parent.native);
        } else {
            native = new addon.QStackedWidget();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }

    // *** Public Function ***
    addWidget(widget: NodeWidget<any>): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
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
    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
    // TODO: QWidget *	widget(int index) const

    // *** Public Slots ***
    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }
    setCurrentWidget(widget: NodeWidget<any>): void {
        this.native.setCurrentWidget(widget.native);
    }
}

export interface QStackedWidgetSignals extends QFrameSignals {
    currentChanged: (index: number) => void;
}
