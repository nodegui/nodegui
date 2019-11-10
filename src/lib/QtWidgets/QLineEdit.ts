import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';

export enum EchoMode {
    Normal,
    NoEcho,
    Password,
    PasswordEchoOnEdit,    
};
export const QLineEditEvents = Object.freeze({
    ...BaseWidgetEvents,
    cursorPositionChanged: 'cursorPositionChanged',
    editingFinished: 'editingFinished',
    inputRejected: 'inputRejected',
    returnPressed: 'returnPressed',
    selectionChanged: 'selectionChanged',
    textChanged: 'textChanged',
    textEdited: 'textEdited',
});
export class QLineEdit extends NodeWidget {
    native: NativeElement;
    placeholderText?: string;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QLineEdit(parent.native);
        } else {
            native = new addon.QLineEdit();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    setText(text: string): void {
        // react:✓
        text && this.native.setText(text);
    }
    text(): string {
        // react:✓
        return this.native.text();
    }
    setPlaceholderText(text: string): void {
        // react:✓ TODO://getter
        this.placeholderText = text;
        this.native.setPlaceholderText(text);
    }
    setReadOnly(isReadOnly: boolean): void {
        // react:✓ TODO://getter
        this.native.setReadOnly(isReadOnly);
    }
    clear(): void {
        // react:✓
        this.native.clear();
    }
    setEchoMode(mode: EchoMode): void {
        this.native.setEchoMode(mode);
    }
}
