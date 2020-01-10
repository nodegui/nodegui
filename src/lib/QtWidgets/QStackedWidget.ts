import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
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
export class QStackedWidget extends NodeWidget<QStackedWidgetSignals> {
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

    addWidget(widget: NodeWidget<any>): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
        widget.setFlexNodeSizeControlled(true);
    }

    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }

    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }

    currentIndex(): number {
        return this.native.currentIndex();
    }

    setCurrentWidget(widget: NodeWidget<any>): void {
        this.native.setCurrentWidget(widget.native);
    }
}

export interface QStackedWidgetSignals extends QWidgetSignals {
    currentChanged: (index: number) => void;
}
