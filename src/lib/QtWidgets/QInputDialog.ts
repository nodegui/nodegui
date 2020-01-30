import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeDialog, QDialogSignals } from './QDialog';
import { EchoMode } from './QLineEdit';

/**
 
> Create and control input modal dialogs.

* **This class is a JS wrapper around Qt's [QInputDialog class](https://doc.qt.io/qt-5/qinputdialog.html)**

### Example

```javascript

import { QInputDialog } from '@nodegui/nodegui';

const dialog = new QInputDialog();
dialog.setLabelText('Click that Ok button');
dialog.exec();

```
 */
export class QInputDialog extends NodeDialog<QInputDialogSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QInputDialog(parent.native);
        } else {
            native = new addon.QInputDialog();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    setCancelButtonText(text: string): void {
        this.setProperty('cancelButtonText', text);
    }
    cancelButtonText(): string {
        return this.property('cancelButtonText').toString();
    }
    setComboBoxEditable(editable: boolean): void {
        this.setProperty('comboxBoxEditable', editable);
    }
    comboBoxEditable(): boolean {
        return this.property('comboxBoxEditable').toBool();
    }
    setDoubleDecimals(decimals: number): void {
        this.setProperty('doubleDecimals', decimals);
    }
    doubleDecimals(): number {
        return this.property('doubleDecimals').toDouble();
    }
    setDoubleMaximum(value: number): void {
        this.setProperty('doubleMaximum', value);
    }
    doubleMaximum(): number {
        return this.property('doubleMaximum').toDouble();
    }
    setDoubleMinimum(value: number): void {
        this.setProperty('doubleMinimum', value);
    }
    doubleMinimum(): number {
        return this.property('doubleMinimum').toDouble();
    }
    doubleStep(): number {
        return this.property('doubleStep').toDouble();
    }
    setDoubleStep(value: number): void {
        this.setProperty('doubleStep', value);
    }
    doubleValue(): number {
        return this.property('doubleValue').toDouble();
    }
    setDoubleValue(value: number): void {
        this.setProperty('doubleValue', value);
    }
    inputMode(): InputMode {
        return this.property('inputMode').toInt();
    }
    setInputMode(value: InputMode): void {
        this.setProperty('inputMode', value);
    }
    intMaximum(): number {
        return this.property('intMaximum').toInt();
    }
    setIntMaximum(value: number): void {
        this.setProperty('intMaximum', value);
    }
    intMinimum(): number {
        return this.property('intMinimum').toInt();
    }
    setIntMinimum(value: number): void {
        this.setProperty('intMinimum', value);
    }
    intStep(): number {
        return this.property('intStep').toInt();
    }
    setIntStep(value: number): void {
        this.setProperty('intStep', value);
    }
    intValue(): number {
        return this.property('intValue').toInt();
    }
    setIntValue(value: number): void {
        this.setProperty('intValue', value);
    }
    labelText(): string {
        return this.property('labelText').toString();
    }
    setLabelText(value: string): void {
        this.setProperty('labelText', value);
    }
    okButtonText(): string {
        return this.property('okButtonText').toString();
    }
    setOkButtonText(value: string): void {
        this.setProperty('okButtonText', value);
    }
    options(): InputDialogOptions {
        return this.property('options').toInt();
    }
    setOptions(value: InputDialogOptions): void {
        this.setProperty('options', value);
    }
    textEchoMode(): EchoMode {
        return this.property('textEchoMode').toInt();
    }
    setTextEchoMode(value: EchoMode): void {
        this.setProperty('textEchoMode', value);
    }
    textValue(): string {
        return this.property('textValue').toString();
    }
    setTextValue(value: string): void {
        this.setProperty('textValue', value);
    }
}

export interface QInputDialogSignals extends QDialogSignals {
    doubleValueChanged: (value: number) => void;
    doubleValueSelected: (value: number) => void;
    intValueChanged: (value: number) => void;
    intValueSelected: (value: number) => void;
    textValueChanged: (text: string) => void;
    textValueSelected: (text: string) => void;
}

export enum InputMode {
    TextInput = 0,
    IntInput = 1,
    DoubleInput = 2,
}

export enum InputDialogOptions {
    NoButtons = 1,
    UseListViewForComboBoxItems = 2,
    UsePlainTextEditForTextInput = 3,
}
