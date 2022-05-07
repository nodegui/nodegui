import addon from '../utils/addon';
import { NativeElement } from '../core/Component';

import { checkIfNativeElement } from '../utils/helpers';
import { QWidget, QWidgetSignals } from './QWidget';
import { DialogCode } from '../QtEnums';

/**

> This is the base class of dialog windows.

* **This class is a JS wrapper around Qt's [QDialog class](https://doc.qt.io/qt-5/qdialog.html)**

It is inherited by QFileDialog and QMessageBox (n/a QColorDialog, QErrorMessage, QFontDialog, QInputDialog, QMessageBox, QProgressDialog, and QWizard)
 */
export class QDialog<Signals extends QDialogSignals = QDialogSignals> extends QWidget<Signals> {
    constructor(arg?: QDialog | NativeElement) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as QDialog) {
            parent = arg as QDialog;
            native = new addon.QDialog(parent.native);
        } else {
            native = new addon.QDialog();
        }
        super(native);
    }

    setResult(i: number): void {
        this.native.setResult(i);
    }
    result(): number {
        return this.native.result();
    }
    setModal(modal: boolean): void {
        this.setProperty('modal', modal);
    }
    setSizeGripEnabled(enabled: boolean): void {
        this.setProperty('sizeGripEnabled', enabled);
    }
    isSizeGripEnabled(): boolean {
        return this.property('sizeGripEnabled').toBool();
    }
    exec(): DialogCode {
        return this.native.exec();
    }
    open(): void {
        this.native.open();
    }
    reject(): void {
        this.native.reject();
    }
}

export interface QDialogSignals extends QWidgetSignals {
    accepted: () => void;
    finished: (result: number) => void;
    rejected: () => void;
}
