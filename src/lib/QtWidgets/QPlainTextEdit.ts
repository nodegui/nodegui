import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { QTextOptionWrapMode } from '../QtGui/QTextOption';

export interface QPlainTextEditSignals extends QAbstractScrollAreaSignals {
    textChanged: () => void;
    blockCountChanged: (blockCount: number) => void;
    copyAvailable: (yes: boolean) => void;
    cursorPositionChanged: () => void;
    modificationChanged: (changed: boolean) => void;
    redoAvailable: (available: boolean) => void;
    selectionChanged: () => void;
    undoAvailable: (available: boolean) => void;
}

export enum LineWrapMode {
    NoWrap,
    WidgetWidth,
}

/**
 
> Used to edit and display plain text.

**This class is a JS wrapper around Qt's [QPlainTextEdit class](https://doc.qt.io/qt-5/qplaintextedit.html)**

A `QPlainTextEdit` provides ability to add and manipulate native editable text field widgets.

### Example

```javascript
const { QPlainTextEdit } = require("@nodegui/nodegui");

const plainTextEdit = new QPlainTextEdit();
```
 */
export class QPlainTextEdit extends QAbstractScrollArea<QPlainTextEditSignals> {
    native: NativeElement;
    placeholderText?: string;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QPlainTextEdit(parent.native);
        } else {
            native = new addon.QPlainTextEdit();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setPlainText(text: string | number): void {
        // react:✓
        this.native.setPlainText(`${text}`);
    }
    setPlaceholderText(text: string): void {
        // react:✓, //TODO:getter
        this.placeholderText = text;
        this.native.setPlaceholderText(text);
    }
    toPlainText(): string {
        // react:✓
        return this.native.toPlainText();
    }
    setReadOnly(isReadOnly: boolean): void {
        // react:✓
        this.native.setReadOnly(isReadOnly);
    }
    clear(): void {
        // react:✓
        this.native.clear();
    }
    setWordWrapMode(mode: QTextOptionWrapMode): void {
        this.native.setWordWrapMode(mode);
    }
    wordWrapMode(): QTextOptionWrapMode {
        return this.native.wordWrapMode();
    }
    setLineWrapMode(mode: LineWrapMode): void {
        this.native.setLineWrapMode(mode);
    }
    lineWrapMode(): LineWrapMode {
        return this.native.lineWrapMode();
    }
    insertPlainText(text: string | number): void {
        this.native.insertPlainText(`${text}`);
    }
}
