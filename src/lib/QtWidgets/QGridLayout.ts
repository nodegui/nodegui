import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeLayout, QLayoutSignals } from './QLayout';
import { NativeElement } from '../core/Component';

export type QGridLayoutSignals = QLayoutSignals;

/**
 
> The QGridLayout class lays out widgets in a grid.

* **This class is a JS wrapper around Qt's [QGridLayout](https://doc.qt.io/qt-5/qgridlayout.html)**

### Example

```javascript
const { QGridLayout, QWidget, QLabel } = require("@nodegui/nodegui");

const view = new QWidget();
const layout = new QGridLayout();
view.setLayout(layout);

const label = new QLabel();
label.setText("label1");
const label2 = new QLabel();
label2.setText("label2");

layout.addWidget(label);
layout.addWidget(label2);
```

 */
export class QGridLayout extends NodeLayout<QGridLayoutSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QGridLayout(parent.native);
        } else {
            native = new addon.QGridLayout();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
    addWidget(widget: NodeWidget<any>, row = 0, col = 0, rowSpan = 1, colSpan = 1): void {
        this.native.addWidget(widget.native, row, col, rowSpan, colSpan);
        this.nodeChildren.add(widget);
    }
    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
}
