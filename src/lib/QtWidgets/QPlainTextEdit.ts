import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea } from './QAbstractScrollArea';
import { QTextOptionWrapMode } from '../QtGui/QTextOption';

export const QPlainTextEditEvents = Object.freeze({
    ...BaseWidgetEvents,
    textChanged: 'textChanged',
    blockCountChanged: 'blockCountChanged',
    copyAvailable: 'copyAvailable',
    cursorPositionChanged: 'cursorPositionChanged',
    modificationChanged: 'modificationChanged',
    redoAvailable: 'redoAvailable',
    selectionChanged: 'selectionChanged',
    undoAvailable: 'undoAvailable',
});

export enum LineWrapMode {
    NoWrap,
    WidgetWidth,
}
export class QPlainTextEdit extends QAbstractScrollArea {
    native: NativeElement;
    placeholderText?: string;
    constructor(parent?: NodeWidget) {
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
