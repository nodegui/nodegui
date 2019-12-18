import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';

export const QGroupBoxEvents = Object.freeze({
    ...BaseWidgetEvents,
    clicked: 'clicked',
    toggled: 'toggled',
});
export class QGroupBox extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
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
