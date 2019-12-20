import { QMenu } from './QMenu';
import { NativeElement } from '../core/Component';
import { NodeWidget } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';

export type QMenuBarSignals = {};

export class QMenuBar extends NodeWidget<QMenuBarSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(native: NativeElement);
    constructor(arg?: NodeWidget<any> | NativeElement) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (typeof arg === 'object') {
            native = new addon.QMenuBar(arg.native);
            parent = arg as NodeWidget<any>;
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
