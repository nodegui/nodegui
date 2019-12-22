import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';

export interface QGroupBoxSignals extends QWidgetSignals {
    clicked: (checked: boolean) => void;
    toggled: (on: boolean) => void;
}
export class QGroupBox extends NodeWidget<QGroupBoxSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QGroupBox(parent.native);
        } else {
            native = new addon.QGroupBox();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    alignment(): AlignmentFlag {
        return this.native.alignment();
    }
    isCheckable(): boolean {
        return this.native.isCheckable();
    }
    isChecked(): boolean {
        return this.native.isChecked();
    }
    isFlat(): boolean {
        return this.native.isFlat();
    }
    setAlignment(alignment: number): void {
        this.native.setAlignment(alignment);
    }
    setCheckable(checkable: boolean): void {
        this.native.setCheckable(checkable);
    }
    setFlat(flat: boolean): void {
        this.native.setFlat(flat);
    }
    setTitle(title: string): void {
        this.native.setTitle(title);
    }
    title(): string {
        return this.native.title();
    }
    setChecked(checked: boolean): void {
        this.native.setChecked(checked);
    }
}
