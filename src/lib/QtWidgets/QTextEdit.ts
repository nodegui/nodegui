import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QAbstractScrollArea, QAbstractScrollAreaSignals } from './QAbstractScrollArea';
import { AlignmentFlag, TextInteractionFlag } from '../QtEnums';
import { QFont } from '../QtGui/QFont';
import { QColor } from '../QtGui/QColor';
import { checkIfNativeElement } from '../utils/helpers';
import { NativeElement } from '../core/Component';
import { wrapperCache } from '../core/WrapperCache';

/**

> Create and control editable text field.

* **This class is a JS wrapper around Qt's [QTextEdit class](https://doc.qt.io/qt-5/qtextedit.html)**

A `QTextEdit` provides ability to add and manipulate native editable text field widgets.

### Example

```javascript
const { QTextEdit } = require("@nodegui/nodegui");

const textEdit = new QTextEdit();
```

 */
export class QTextEdit<Signals extends QTextEditSignals = QTextEditSignals> extends QAbstractScrollArea<Signals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QTextEdit(parent.native);
        } else {
            native = new addon.QTextEdit();
        }
        super(native);
    }
    setAcceptRichText(accept: boolean): void {
        this.setProperty('acceptRichText', accept);
    }
    acceptRichText(): boolean {
        return this.property('acceptRichText').toBool();
    }
    setAutoFormatting(features: AutoFormattingFlag): void {
        this.setProperty('autoFormatting', features);
    }
    autoFormatting(): AutoFormattingFlag {
        return this.property('autoFormatting').toInt();
    }
    setCursorWidth(width: number): void {
        this.setProperty('cursorWidth', width);
    }
    cursorWidth(): number {
        return this.property('cursorWidth').toInt();
    }
    setDocumentTitle(title: string): void {
        this.setProperty('documentTitle', title);
    }
    documentTitle(): string {
        return this.property('documentTitle').toString();
    }
    setHtml(text: string): void {
        this.setProperty('html', text);
    }
    toHtml(): string {
        return this.property('html').toString();
    }
    setLineWrapColumnOrWidth(w: number): void {
        this.setProperty('lineWrapColumnOrWidth', w);
    }
    lineWrapColumnOrWidth(): number {
        return this.property('lineWrapColumnOrWidth').toInt();
    }
    setLineWrapMode(mode: QTextEditLineWrapMode): void {
        this.setProperty('lineWrapMode', mode);
    }
    lineWrapMode(): QTextEditLineWrapMode {
        return this.property('lineWrapMode').toInt();
    }
    setOverwriteMode(overwrite: boolean): void {
        this.setProperty('overwriteMode', overwrite);
    }
    overwriteMode(): boolean {
        return this.property('overwriteMode').toBool();
    }
    setPlaceholderText(placeholderText: string): void {
        this.setProperty('placeholderText', placeholderText);
    }
    placeholderText(): string {
        return this.property('placeholderText').toString();
    }
    setPlainText(text: string): void {
        this.setProperty('plainText', text);
    }
    toPlainText(): string {
        return this.property('plainText').toString();
    }
    setReadOnly(ro: boolean): void {
        this.setProperty('readOnly', ro);
    }
    isReadOnly(): boolean {
        return this.property('readOnly').toBool();
    }
    setTabChangesFocus(b: boolean): void {
        this.setProperty('tabChangesFocus', b);
    }
    tabChangesFocus(): boolean {
        return this.property('tabChangesFocus').toBool();
    }
    setTabStopDistance(distance: number): void {
        this.setProperty('tabStopDistance', distance);
    }
    tabStopDistance(): number {
        return this.property('tabStopDistance').toDouble();
    }
    setTextInteractionFlags(flags: TextInteractionFlag): void {
        this.setProperty('textInteractionFlags', flags);
    }
    textInteractionFlags(): TextInteractionFlag {
        return this.property('textInteractionFlags').toInt();
    }
    setUndoRedoEnabled(enable: boolean): void {
        this.setProperty('undoRedoEnabled', enable);
    }
    isUndoRedoEnabled(): boolean {
        return this.property('undoRedoEnabled').toBool();
    }
    setWordWrapMode(policy: WrapMode): void {
        this.setProperty('wordWrapMode', policy);
    }
    wordWrapMode(): WrapMode {
        return this.property('wordWrapMode').toInt();
    }
    setAlignment(alignment: AlignmentFlag): void {
        this.native.setAlignment(alignment);
    }
    alignment(): AlignmentFlag {
        return this.native.alignment();
    }
    canPaste(): boolean {
        return this.native.canPaste();
    }
    setCurrentFont(f: QFont): void {
        this.native.setCurrentFont(f.native);
    }
    currentFont(): QFont {
        return new QFont(this.native.currentFont());
    }
    ensureCursorVisible(): void {
        this.native.ensureCursorVisible();
    }
    setFontFamily(family: string): void {
        this.native.setFontFamily(family);
    }
    fontFamily(): string {
        return this.native.fontFamily();
    }
    setFontItalic(italic: boolean): void {
        this.native.setFontItalic(italic);
    }
    fontItalic(): boolean {
        return this.native.fontItalic();
    }
    setFontPointSize(s: number): void {
        this.native.setFontPointSize(s);
    }
    fontPointSize(): number {
        return this.native.fontPointSize();
    }
    setFontUnderline(underline: boolean): void {
        this.native.setFontUnderline(underline);
    }
    fontUnderline(): boolean {
        return this.native.fontUnderline();
    }
    setFontWeight(weight: number): void {
        this.native.setFontWeight(weight);
    }
    fontWeight(): number {
        return this.native.fontWeight();
    }
    append(text: string): void {
        this.native.append(text);
    }
    clear(): void {
        this.native.clear();
    }
    copy(): void {
        this.native.copy();
    }
    cut(): void {
        this.native.cut();
    }
    insertHtml(text: string): void {
        this.native.insertHtml(text);
    }
    insertPlainText(text: string): void {
        this.native.insertPlainText(text);
    }
    paste(): void {
        this.native.paste();
    }
    redo(): void {
        this.native.redo();
    }
    scrollToAnchor(name: string): void {
        this.native.scrollToAnchor(name);
    }
    selectAll(): void {
        this.native.selectAll();
    }
    setText(text: string): void {
        this.native.setText(text);
    }
    setTextBackgroundColor(color: QColor): void {
        this.native.setTextBackgroundColor(color.native);
    }
    setTextColor(color: QColor): void {
        this.native.setTextColor(color.native);
    }
    undo(): void {
        this.native.undo();
    }
    zommIn(range = 1): void {
        this.native.zoomIn(range);
    }
    zoomOut(range = 1): void {
        this.native.zoomOut(range);
    }
}
wrapperCache.registerWrapper('QTextEditWrap', QTextEdit);

export enum AutoFormattingFlag {
    AutoNone = 0,
    AutoBulletList = 0x00000001,
    AutoAll = 0xffffffff,
}

export enum QTextEditLineWrapMode {
    NoWrap,
    WidgetWidth,
    FixedPixelWidth,
    FixedColumnWidth,
}

export enum WrapMode {
    NoWrap,
    WordWrap,
    ManualWrap,
    WrapAnywhere,
    WrapAtWordBoundaryOrAnywhere,
}

export interface QTextEditSignals extends QAbstractScrollAreaSignals {
    copyAvailable: (yes: boolean) => void;
    cursorPositionChanged: () => void;
    redoAvailable: (available: boolean) => void;
    selectionChanged: () => void;
    textChanged: () => void;
    undoAvailable: (available: boolean) => void;
}
