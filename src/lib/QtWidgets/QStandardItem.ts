import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { ItemFlag } from '../QtEnums/ItemFlag';
import { CheckState } from '../QtEnums';

export class QStandardItem extends Component {
    native: NativeElement;
    constructor();
    constructor(parent: QStandardItem, text?: string);
    constructor(native: NativeElement);
    constructor(parent?: NativeElement | QStandardItem, text?: string) {
        super();
        if (checkIfNativeElement(parent)) {
            this.native = parent as NativeElement;
        } else {
            if (text) {
                this.native = new addon.QStandardItem(text);
            } else {
                this.native = new addon.QStandardItem();
            }
        }
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
