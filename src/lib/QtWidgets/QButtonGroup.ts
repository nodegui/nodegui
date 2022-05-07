import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';
import { checkIfNativeElement } from '../utils/helpers';
import { wrapperCache } from '../core/WrapperCache';

export interface QButtonGroupSignals extends QObjectSignals {
    buttonClicked: (id?: number) => void;
}

export class QButtonGroup extends QObject<any> {
    constructor(arg?: NativeElement | QWidget) {
        let native;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg) {
            const parent = arg as QWidget;
            native = new addon.QButtonGroup(parent.native);
        } else {
            native = new addon.QButtonGroup();
        }
        super(native);
    }
    addButton(button: QAbstractButton<QAbstractButtonSignals>, id = -1): void {
        this.native.addButton(button.native, id);
    }
    removeButton(button: QAbstractButton<QAbstractButtonSignals>): void {
        this.native.removeButton(button.native);
    }
    setExclusive(exculsive: boolean): void {
        this.native.setProperty('exclusive', exculsive);
    }
    checkedId(): number {
        return this.native.checkedId();
    }
    exclusive(): boolean {
        return this.property('exclusive').toBool();
    }
    setId(button: QAbstractButton<QAbstractButtonSignals>, id: number): void {
        this.native.setId(button.native, id);
    }
    id(button: QAbstractButton<QAbstractButtonSignals>): number {
        return this.native.id(button.native);
    }
    buttons(): QAbstractButton<QAbstractButtonSignals>[] {
        return this.native.buttons();
    }
    checkedButton(): NativeRawPointer<'QAbstractButton*'> {
        return this.native.checkedButton();
    }
    button(id: number): NativeRawPointer<'QAbstractButton*'> {
        return this.native.button(id);
    }
}
wrapperCache.registerWrapper('QButtonGroupWrap', QButtonGroup);
