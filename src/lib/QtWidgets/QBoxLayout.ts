import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeLayout } from './QLayout';
import { NativeElement } from '../core/Component';
import { Direction } from '../QtEnums';

type QBoxLayoutSignals = {};
export class QBoxLayout extends NodeLayout<QBoxLayoutSignals> {
    native: NativeElement;
    childLayouts: Set<NodeLayout<any>>;
    constructor(dir: Direction);
    constructor(dir: Direction, parent: NodeWidget<any>);
    constructor(dir: Direction, parent?: NodeWidget<any>) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QBoxLayout(dir, parent.native);
        } else {
            native = new addon.QBoxLayout(dir);
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
        this.childLayouts = new Set();
    }
    addLayout(layout: NodeLayout<any>, stretch = 0): void {
        this.native.addLayout(layout.native, stretch);
        this.childLayouts.add(layout);
    }
    addSpacing(size: number): void {
        this.native.addSpacing(size);
    }
    addStretch(stretch = 0): void {
        this.native.addStretch(stretch);
    }
    addStrut(size: number): void {
        this.native.addStrut(size);
    }
    addWidget(widget: NodeWidget<any>, stretch = 0): void {
        this.native.addWidget(widget.native, stretch);
        this.nodeChildren.add(widget);
    }
    insertWidget(index: number, widget: NodeWidget<any>, stretch = 0): void {
        this.native.insertWidget(index, widget.native, stretch);
        this.nodeChildren.add(widget);
    }
    direction(): Direction {
        return this.native.direction();
    }
    insertLayout(index: number, layout: NodeLayout<any>, stretch = 0): void {
        this.native.insertLayout(index, layout.native, stretch);
        this.childLayouts.add(layout);
    }
    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
    setDirection(dir: Direction): void {
        this.native.setDirection(dir);
    }
}
