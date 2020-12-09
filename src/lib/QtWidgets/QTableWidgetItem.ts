import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { AlignmentFlag } from '../QtEnums';
import { checkIfNativeElement } from '../utils/helpers';

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
    setText(text: string): void {
        this.native.setText(text);
    }
    setToolTip(text: string): void {
        this.native.setToolTip(text);
    }
    setTextAlignment(alignment: AlignmentFlag): void {
        this.native.setTextAlignment(alignment);
    }
    textAlignment(): AlignmentFlag {
        return this.native.textAlignment();
    }
    text(): string {
        return this.native.text();
    }
    toolTip(): string {
        return this.native.toolTip();
    }
}
