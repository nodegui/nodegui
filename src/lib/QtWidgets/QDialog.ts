import addon from '../utils/addon';
import { NativeElement } from '../core/Component';

import { checkIfNativeElement } from '../utils/helpers';
import { QWidget, QWidgetSignals } from './QWidget';
import { DialogCode } from '../QtEnums';
import { wrapperCache } from '../core/WrapperCache';

/**

> This is the base class of dialog windows.

* **This class is a JS wrapper around Qt's [QDialog class](https://doc.qt.io/qt-5/qdialog.html)**

It is inherited by QFileDialog and QMessageBox (n/a QColorDialog, QErrorMessage, QFontDialog, QInputDialog, QMessageBox, QProgressDialog, and QWizard)
 */
export class QDialog<Signals extends QDialogSignals = QDialogSignals> extends QWidget<Signals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
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
    accept(): void {
        this.native.accept();
    }
    done(r: number): void {
        this.native.done(r);
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
wrapperCache.registerWrapper('QDialogWrap', QDialog);

export interface QDialogSignals extends QWidgetSignals {
    accepted: () => void;
    finished: (result: number) => void;
    rejected: () => void;
}
