import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QAbstractButton } from './QAbstractButton';

export const QPushButtonEvents = Object.freeze({
    ...BaseWidgetEvents,
    clicked: 'clicked',
    pressed: 'pressed',
    released: 'released',
    toggled: 'toggled',
});

export class QPushButton extends QAbstractButton {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QPushButton(parent.native);
        } else {
            native = new addon.QPushButton();
        }
        super(native);
        this.nodeParent = parent;
        this.native = native;
    }
    setFlat(isFlat: boolean): void {
        this.native.setFlat(isFlat);
    }
}
