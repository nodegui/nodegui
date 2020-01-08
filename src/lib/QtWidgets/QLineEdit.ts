import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';

/**
 
> Create and control editable text field.

* **This class is a JS wrapper around Qt's [QLineEdit class](https://doc.qt.io/qt-5/qlineedit.html)**

A `QLineEdit` provides ability to add and manipulate native editable text field widgets.

### Example

```javascript
const { QLineEdit } = require("@nodegui/nodegui");

const lineEdit = new QLineEdit();
```

 */
export enum EchoMode {
    Normal,
    NoEcho,
    Password,
    PasswordEchoOnEdit,
}
export interface QLineEditSignals extends QWidgetSignals {
    cursorPositionChanged: (oldPos: number, newPos: number) => void;
    editingFinished: () => void;
    inputRejected: () => void;
    returnPressed: () => void;
    selectionChanged: () => void;
    textChanged: (text: string) => void;
    textEdited: (text: string) => void;
}

export class QLineEdit extends NodeWidget<QLineEditSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QLineEdit(parent.native);
        } else {
            native = new addon.QLineEdit();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setText(text: string): void {
        text && this.native.setText(text);
    }
    text(): string {
        return this.native.text();
    }
    setPlaceholderText(text: string): void {
        this.native.setPlaceholderText(text);
    }
    placeholderText(): string {
        return this.property('placeholderText').toString();
    }
    setReadOnly(isReadOnly: boolean): void {
        this.native.setReadOnly(isReadOnly);
    }
    isReadOnly(): boolean {
        return this.property('readOnly').toBool();
    }
    clear(): void {
        this.native.clear();
    }
    setEchoMode(mode: EchoMode): void {
        this.native.setEchoMode(mode);
    }
}
