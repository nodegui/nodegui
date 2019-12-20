import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';

export enum EchoMode {
    Normal,
    NoEcho,
    Password,
    PasswordEchoOnEdit,
}
interface QLineEditSignals {
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
    placeholderText?: string;
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
