import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { AlignmentFlag, CheckState, ItemFlag } from '../QtEnums';
import { QBrush } from '../QtGui/QBrush';
import { QVariant } from '../QtCore/QVariant';
import { QFont } from '../QtGui/QFont';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';

/**
 
> Creates an item for QTableWidget.

* **This class is a JS wrapper around Qt's [QTableWidgetItem class](https://doc.qt.io/qt-5/qtablewidgetitem.html)**

### Example

```javascript
const { QTableWidget, QMainWindow, QTableWidgetItem } = require("@nodegui/nodegui");

const win = new QMainWindow();
const table = new QTableWidget(2, 3);
table.setHorizontalHeaderLabels(['first', 'second', 'third']);

const cell00 = new QTableWidgetItem('C00');
const cell01 = new QTableWidgetItem('C01');
const cell10 = new QTableWidgetItem('C10');
const cell11 = new QTableWidgetItem('C11');

table.setItem(0, 0, cell00);
table.setItem(0, 1, cell01);
table.setItem(1, 0, cell10);
table.setItem(1, 1, cell11);

win.setCentralWidget(table);
win.show();
(global as any).win = win;

```

 */
export class QTableWidgetItem extends Component {
    native: NativeElement;
    constructor();
    constructor(other: QTableWidgetItem);
    constructor(native: NativeElement);
    constructor(text: string);
    constructor(arg?: QTableWidgetItem | NativeElement | string) {
        let native;
        if (typeof arg === 'string') {
            native = new addon.QTableWidgetItem(arg);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QTableWidgetItem();
        }
        super();
        this.native = native;
    }
    setBackground(brush: QBrush): void {
        this.native.setBackground(brush.native);
    }
    row(): number {
        return this.native.row();
    }
    column(): number {
        return this.native.column();
    }
    background(): QBrush {
        return new QBrush(this.native.background());
    }
    setCheckState(state: CheckState): void {
        this.native.setCheckState(state);
    }
    checkState(): CheckState {
        return this.native.checkState();
    }
    setData(role: number, value: QVariant): void {
        this.native.setData(role, value.native);
    }
    data(role: number): QVariant {
        return new QVariant(this.native.data(role));
    }
    setFlags(flags: ItemFlag): void {
        this.native.setFlags(flags);
    }
    flags(): ItemFlag {
        return this.native.flags();
    }
    setFont(font: QFont): void {
        this.native.setFont(font.native);
    }
    font(): QFont {
        return new QFont(this.native.font());
    }
    setForeground(brush: QBrush): void {
        this.native.setForeground(brush.native);
    }
    foreground(): QBrush {
        return new QBrush(this.native.foreground());
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon.native);
    }
    icon(): QIcon {
        return new QIcon(this.native.icon());
    }
    setSelected(select: boolean): void {
        this.native.setSelected(select);
    }
    isSelected(): boolean {
        return this.native.isSelected();
    }
    setSizeHint(size: QSize): void {
        this.native.setSizeHint(size.native);
    }
    sizeHint(): QSize {
        return new QSize(this.native.sizeHint());
    }
    setStatusTip(statusTip: string): void {
        this.native.setStatusTip(statusTip);
    }
    statusTip(): string {
        return this.native.statusTip();
    }
    setText(text: string): void {
        this.native.setText(text);
    }
    text(): string {
        return this.native.text();
    }
    setTextAlignment(alignment: AlignmentFlag): void {
        this.native.setTextAlignment(alignment);
    }
    textAlignment(): AlignmentFlag {
        return this.native.textAlignment();
    }
    setToolTip(toolTip: string): void {
        this.native.setToolTip(toolTip);
    }
    toolTip(): string {
        return this.native.toolTip();
    }
    setWhatsThis(whatsThis: string): void {
        this.native.setWhatsThis(whatsThis);
    }
    whatsThis(): string {
        return this.native.whatsThis();
    }
    type(): number {
        return this.native.type$();
    }
}
