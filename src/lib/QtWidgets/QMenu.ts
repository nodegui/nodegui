import { NativeElement } from '../core/Component';
import { NodeWidget } from './QWidget';
import addon from '../utils/addon';
import { QAction } from './QAction';

export type QMenuSignals = {};
export class QMenu extends NodeWidget<QMenuSignals> {
    native: NativeElement;
    actions: Set<QAction>;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QMenu(parent.native);
        } else {
            native = new addon.QMenu();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
        this.actions = new Set();
    }
    setTitle(title: string): void {
        this.native.setTitle(title);
    }
    addAction(action: QAction): QAction {
        this.native.addAction(action.native);
        this.actions.add(action);
        return action;
    }
}
