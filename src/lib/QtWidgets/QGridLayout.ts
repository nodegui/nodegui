import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeLayout, QLayoutSignals } from './QLayout';
import { NativeElement } from '../core/Component';
import { AlignmentFlag } from '../QtEnums';

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

    addLayout(
        layout: NodeLayout<any>,
        row: number,
        column: number,
        rowSpan = 1,
        columnSpan = 1,
        alignment = AlignmentFlag.AlignLeft,
    ): void {
        this.native.addLayout(layout.native, row, column, rowSpan, columnSpan, alignment);
    }

    addWidget(
        widget: NodeWidget<any>,
        row = 0,
        col = 0,
        rowSpan = 1,
        colSpan = 1,
        alignment = AlignmentFlag.AlignLeft,
    ): void {
        this.native.addWidget(widget.native, row, col, rowSpan, colSpan, alignment);
        this.nodeChildren.add(widget);
    }
    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
    columnStretch(column: number): number {
        return this.native.columnStretch(column);
    }
    rowStretch(row: number): number {
        return this.native.rowStretch(row);
    }
    setColumnStretch(column: number, stretch: number): void {
        this.native.setColumnStretch(column, stretch);
    }
    setRowStretch(row: number, stretch: number): void {
        this.native.setRowStretch(row, stretch);
    }
    columnMinimumWidth(column: number): number {
        return this.native.columnMinimumWidth(column);
    }
    rowMinimumHeight(row: number): number {
        return this.native.rowMinimumHeight(row);
    }
    setColumnMinimumWidth(column: number, minSize: number): void {
        this.native.setColumnMinimumWidth(column, minSize);
    }
    setRowMinimumHeight(row: number, minSize: number): void {
        this.native.setRowMinimumHeight(row, minSize);
    }
    horizontalSpacing(): number {
        return this.native.horizontalSpacing();
    }
    verticalSpacing(): number {
        return this.native.verticalSpacing();
    }
    setHorizontalSpacing(spacing: number): void {
        this.native.setHorizontalSpacing(spacing);
    }
    setVerticalSpacing(spacing: number): void {
        this.native.setVerticalSpacing(spacing);
    }
    columnCount(): number {
        return this.native.columnCount();
    }
    rowCount(): number {
        return this.native.rowCount();
    }
}

export type QGridLayoutSignals = QLayoutSignals;
