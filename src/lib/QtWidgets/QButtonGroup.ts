import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QAbstractButton, QAbstractButtonSignals } from './QAbstractButton';

// eslint-disable-next-line @typescript-eslint/no-empty-interface
export interface QButtonGroupSignals extends QObjectSignals {
    buttonClicked: (buttonRawPointer?: NativeRawPointer<'QAbstractButton*'>) => void;
}

export class QButtonGroup extends NodeObject<QButtonGroupSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QButtonGroup(parent.native);
        } else {
            native = new addon.QButtonGroup();
        }
        super(native);
        this.native = native;
        parent && parent.nodeChildren.add(this);
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
