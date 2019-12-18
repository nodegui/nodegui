import { QMenu } from './QMenu';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { NodeWidget } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';

export const QMenuBarEvents = Object.freeze({
    ...BaseWidgetEvents,
});

type arg = NodeWidget | NativeElement;

export class QMenuBar extends NodeWidget {
    native: NativeElement;
    constructor(arg?: arg) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (typeof arg === 'object') {
            native = new addon.QMenuBar(arg.native);
            parent = arg as NodeWidget;
        } else {
            native = new addon.QMenuBar();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }

    addMenu(menu: QMenu): void {
        this.native.addMenu(menu.native);
    }
    setNativeMenuBar(nativeMenuBar: boolean): void {
        this.native.setNativeMenuBar(nativeMenuBar);
    }
}
