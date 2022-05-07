import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';
import { CursorMoveStyle } from '../QtEnums/CursorMoveStyle';
import { QPoint } from '../QtCore/QPoint';

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
export class QLineEdit extends QWidget<QLineEditSignals> {
    constructor(parent?: QWidget) {
        let native;
        if (parent) {
            native = new addon.QLineEdit(parent.native);
        } else {
            native = new addon.QLineEdit();
        }
        super(native);
    }
    // TODO: void 	addAction(QAction *action, QLineEdit::ActionPosition position)
    // TODO: QAction *	addAction(const QIcon &icon, QLineEdit::ActionPosition position)
    alignment(): AlignmentFlag {
        return this.property('alignment').toInt();
    }
    backspace(): void {
        this.native.backspace();
    }
    // TODO: QCompleter *	completer() const
    // TODO: QMenu *	createStandardContextMenu()
    cursorBackward(mark: boolean, steps = 1): void {
        this.native.cursorBackward(mark, steps);
    }
    cursorForward(mark: boolean, steps = 1): void {
        this.native.cursorForward(mark, steps);
    }
    cursorMoveStyle(): CursorMoveStyle {
        return this.property('cursorMoveStyle').toInt();
    }
    cursorPosition(): number {
        return this.property('cursorPosition').toInt();
    }
    cursorPositionAt(pos: QPoint): number {
        return this.native.cursorPositionAt(pos);
    }
    cursorWordBackward(mark: boolean): void {
        this.native.cursorWordBackward(mark);
    }
    cursorWordForward(mark: boolean): void {
        this.native.cursorWordForward(mark);
    }
    del(): void {
        this.native.del();
    }
    deselect(): void {
        this.native.deselect();
    }
    displayText(): string {
        return this.property('displayText').toString();
    }
    dragEnabled(): boolean {
        return this.property('dragEnabled').toBool();
    }
    echoMode(): EchoMode {
        return this.property('echoMode').toInt();
    }
    end(mark: boolean): void {
        this.native.end(mark);
    }
    hasAcceptableInput(): boolean {
        return this.property('hasAcceptableInput').toBool();
    }
    hasFrame(): boolean {
        return this.property('hasFrame').toBool();
    }
    hasSelectedText(): boolean {
        return this.property('hasSelectedText').toBool();
    }
    home(mark: boolean): void {
        this.native.home(mark);
    }
    inputMask(): string {
        return this.property('inputMask').toString();
    }
    insert(newText: string): void {
        this.native.insert(newText);
    }
    isClearButtonEnabled(): boolean {
        return this.property('isClearButtonEnabled').toBool();
    }
    isModified(): boolean {
        return this.property('isModified').toBool();
    }
    isReadOnly(): boolean {
        return this.property('isReadOnly').toBool();
    }
    isRedoAvailable(): boolean {
        return this.property('isRedoAvailable').toBool();
    }
    isUndoAvailable(): boolean {
        return this.property('isUndoAvailable').toBool();
    }
    maxLength(): number {
        return this.property('maxLength').toInt();
    }
    placeholderText(): string {
        return this.property('placeholderText').toString();
    }
    selectedText(): string {
        return this.property('selectedText').toString();
    }
    selectionEnd(): number {
        return this.native.selectionEnd();
    }
    selectionLength(): number {
        return this.native.selectionLength();
    }
    selectionStart(): number {
        return this.native.selectionStart();
    }
    setAlignment(alignment: AlignmentFlag): void {
        this.setProperty('alignment', alignment);
    }
    setClearButtonEnabled(enable: boolean): void {
        this.setProperty('clearButtonEnabled', enable);
    }
    // TODO: void 	setCompleter(QCompleter *c)
    setCursorMoveStyle(style: CursorMoveStyle): void {
        this.setProperty('cursorMoveStyle', style);
    }
    setCursorPosition(pos: number): void {
        this.setProperty('cursorPosition', pos);
    }
    setDragEnabled(b: boolean): void {
        this.setProperty('dragEnabled', b);
    }
    setEchoMode(echoMode: EchoMode): void {
        this.setProperty('echoMode', echoMode);
    }
    setFrame(useFrame: boolean): void {
        this.setProperty('frame', useFrame);
    }
    setInputMask(inputMask: string): void {
        this.setProperty('inputMask', inputMask);
    }
    setMaxLength(maxLength: number): void {
        this.setProperty('maxLength', maxLength);
    }
    setModified(isModified: boolean): void {
        this.setProperty('modified', isModified);
    }
    setPlaceholderText(text: string): void {
        this.setProperty('placeholderText', text);
    }
    setReadOnly(isReadOnly: boolean): void {
        this.setProperty('readOnly', isReadOnly);
    }
    setSelection(start: number, length: number): void {
        this.native.setSelection(start, length);
    }
    setTextMargins(left: number, top: number, right: number, bottom: number): void {
        this.native.setTextMargins(left, top, right, bottom);
    }
    // TODO: void 	setTextMargins(const QMargins &margins)
    // TODO: void 	setValidator(const QValidator *v)
    text(): string {
        return this.property('text').toString();
    }
    // TODO: QMargins 	textMargins() const
    // TODO: const QValidator *	validator() const

    // *** Public Slots ***
    clear(): void {
        this.native.clear();
    }
    copy(): void {
        this.native.copy();
    }
    cut(): void {
        this.native.cut();
    }
    paste(): void {
        this.native.paste();
    }
    redo(): void {
        this.native.redo();
    }
    selectAll(): void {
        this.native.selectAll();
    }
    setText(text: string): void {
        this.setProperty('text', text);
    }
    undo(): void {
        this.native.undo();
    }
}

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
