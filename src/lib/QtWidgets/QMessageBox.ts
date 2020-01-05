import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { NodeDialog, QDialogSignals } from './QDialog';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { QPushButton } from './QPushButton';

export interface QMessageBoxSignals extends QDialogSignals {
    buttonClicked: (buttonRawPointer: NativeRawPointer<'QAbstractButton*'>) => void;
}

export enum StandardButton {
    Ok = 0x00000400,
    Open = 0x00002000,
    Save = 0x00000800,
    Cancel = 0x00400000,
    Close = 0x00200000,
    Discard = 0x00800000,
    Apply = 0x02000000,
    Reset = 0x04000000,
    RestoreDefaults = 0x08000000,
    Help = 0x01000000,
    SaveAll = 0x00001000,
    Yes = 0x00004000,
    YesToAll = 0x00008000,
    No = 0x00010000,
    NoToAll = 0x00020000,
    Abort = 0x00040000,
    Retry = 0x00080000,
    Ignore = 0x00100000,
    NoButton = 0x00000000,
}
export enum Icon {
    NoIcon = 0,
    Question = 4,
    Information = 1,
    Warning = 2,
    Critical = 3,
}

export enum ButtonRole {
    InvalidRole,
    AcceptRole,
    RejectRole,
    DestructiveRole,
    ActionRole,
    HelpRole,
    YesRole,
    NoRole,
    ApplyRole,
    ResetRole,
}
export class QMessageBox extends NodeDialog<QMessageBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QMessageBox(parent.native);
        } else {
            native = new addon.QMessageBox();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    accept(): void {
        this.native.accept();
    }
    done(r: number): void {
        this.native.done(r);
    }
    setText(text: string): void {
        this.native.setProperty('text', text);
    }

    text(): string {
        return this.property('text').toString();
    }

    setInformativeText(informativeText: string): void {
        this.native.setProperty('informativeText', informativeText);
    }

    setDetailedText(detailedText: string): void {
        this.native.setProperty('detailedText', detailedText);
    }

    detailedText(): string {
        return this.property('detailedText').toString();
    }

    setDefaultButton(button: QPushButton): void {
        this.native.setDefaultButton(button);
        this.nodeChildren.add(button);
    }

    addButton(button: QAbstractButton<QAbstractButtonSignals>, role: ButtonRole = ButtonRole.NoRole): void {
        this.native.addButton(button.native, role);
        this.nodeChildren.add(button);
    }

    static about(parent: NodeWidget<any>, title: string, text: string): void {
        addon.QMessageBox.about(parent.native, title, text);
    }

    static aboutQt(parent: NodeWidget<any>, title: string): void {
        addon.QMessageBox.aboutQt(parent.native, title);
    }
}
