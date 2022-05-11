import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { QDialog, QDialogSignals } from './QDialog';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { QPushButton } from './QPushButton';
import { wrapperCache } from '../core/WrapperCache';
import { checkIfNativeElement } from '../utils/helpers';

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

/**

> Create and control classic modal dialogs.

* **This class is a JS wrapper around Qt's [QMessageBox class](https://doc.qt.io/qt-5/qmessagebox.html)**

### Example

```javascript

import { QMessageBox, ButtonRole, QPushButton } from '@nodegui/nodegui';

const messageBox = new QMessageBox();
messageBox.setText('Alert! This is a message');
const accept = new QPushButton();
accept.setText('Accept');
messageBox.addButton(accept, ButtonRole.AcceptRole);
messageBox.exec();

```
 */
export class QMessageBox extends QDialog<QMessageBoxSignals> {
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QMessageBox(parent.native);
        } else {
            native = new addon.QMessageBox();
        }
        super(native);
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
    }

    addButton(button: QAbstractButton<QAbstractButtonSignals>, role: ButtonRole = ButtonRole.NoRole): void {
        this.native.addButton(button.native, role);
    }

    static about(parent: QWidget, title: string, text: string): void {
        addon.QMessageBox.about(parent.native, title, text);
    }

    static aboutQt(parent: QWidget, title: string): void {
        addon.QMessageBox.aboutQt(parent.native, title);
    }
}
wrapperCache.registerWrapper('QMessageBoxWrap', QMessageBox);

export interface QMessageBoxSignals extends QDialogSignals {
    buttonClicked: (buttonRawPointer: NativeRawPointer<'QAbstractButton*'>) => void;
}

export enum QMessageBoxIcon {
    NoIcon = 0,
    Question = 4,
    Information = 1,
    Warning = 2,
    Critical = 3,
}
