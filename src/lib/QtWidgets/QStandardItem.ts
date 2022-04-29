import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { ItemFlag } from '../QtEnums/ItemFlag';
import { CheckState } from '../QtEnums';

export class QStandardItem extends Component {
    constructor();
    constructor(parent: QStandardItem, text?: string);
    constructor(native: NativeElement);
    constructor(parent?: NativeElement | QStandardItem, text?: string) {
        let native: NativeElement;
        if (checkIfNativeElement(parent)) {
            native = parent as NativeElement;
        } else {
            if (text) {
                native = new addon.QStandardItem(text);
            } else {
                native = new addon.QStandardItem();
            }
        }
        super(native);
    }
    setCheckState(state: CheckState): void {
        this.native.setCheckState(state);
    }
    setFlags(flags: ItemFlag): void {
        this.native.setFlags(flags);
    }
    setData(value: number, role: number): void {
        this.native.setData(value, role);
    }
    checkState(): CheckState {
        return this.native.checkState();
    }
}
