import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NodeLayout } from './QLayout';
import { NativeElement } from '../core/Component';
import { Direction } from '../QtEnums';

export class QBoxLayout extends NodeLayout {
    native: NativeElement;
    constructor(dir: Direction, parent?: NodeWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QBoxLayout(dir, parent.native);
        } else {
            native = new addon.QBoxLayout(dir);
        }
        super(native);
        this.nodeParent = parent;
        this.native = native;
    }
    addLayout(layout: NodeLayout, stretch = 0): void {
        this.native.addLayout(layout.native, stretch);
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
    addWidget(widget: NodeWidget): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
    }
    direction(): Direction {
        return this.native.direction();
    }
    insertLayout(index: number, layout: NodeLayout, stretch = 0): void {
        this.native.insertLayout(index, layout.native, stretch);
    }
    removeWidget(widget: NodeWidget): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }
    setDirection(dir: Direction): void {
        this.native.setDirection(dir);
    }
}
