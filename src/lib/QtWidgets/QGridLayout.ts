import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeLayout } from './QLayout';
import { NativeElement } from '../core/Component';

export class QGridLayout extends NodeLayout {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QGridLayout(parent.native);
        } else {
            native = new addon.QGridLayout();
        }
        super(native);
        this.nodeParent = parent;
        this.native = native;
    }
    addWidget(widget: NodeWidget): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
    }
    removeWidget(widget: NodeWidget): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
}
