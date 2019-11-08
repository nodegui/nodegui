import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';

export const QCheckBoxEvents = Object.freeze({
    ...BaseWidgetEvents,
    toggled: 'toggled',
});
export class QCheckBox extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QCheckBox(parent.native);
        } else {
            native = new addon.QCheckBox();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    setText(text: string): void {
        // react:✓ //TODO:getter
        this.native.setText(text);
    }
    setChecked(check: boolean): void {
        // react:✓
        this.native.setChecked(check);
    }
    isChecked(): boolean {
        // react:✓
        return this.native.isChecked();
    }
}
