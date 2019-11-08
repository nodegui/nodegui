import addon from '../../utils/addon';
import { NodeWidget } from '../QWidget';
import { BaseWidgetEvents } from '../../core/EventWidget';
import { NativeElement } from '../../core/Component';
import { QIcon } from '../../QtGui/QIcon';

export const QPushButtonEvents = Object.freeze({
    ...BaseWidgetEvents,
    clicked: 'clicked',
    pressed: 'pressed',
    released: 'released',
    toggled: 'toggled',
});

export class QPushButton extends NodeWidget {
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
    setText(text: string | number): void {
        // react:✓, //TODO:getter
        this.native.setText(`${text}`);
    }
    setFlat(isFlat: boolean): void {
        // react:✓, //TODO:getter
        this.native.setFlat(isFlat);
    }
    setIcon(icon: QIcon): void {
        // react:✓, //TODO:getter
        this.native.setIcon(icon.native);
    }
}
