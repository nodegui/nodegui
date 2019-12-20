import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';

interface QStackedWidgetSignals {
    currentChanged: (index: number) => void;
}

export class QStackedWidget extends NodeWidget<QStackedWidgetSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QStackedWidget(parent.native);
        } else {
            native = new addon.QStackedWidget();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }

    addWidget(widget: NodeWidget<any>): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
        widget.setFlexNodeSizeControlled(true);
    }

    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }

    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }

    currentIndex(): number {
        return this.native.currentIndex();
    }

    setCurrentWidget(widget: NodeWidget<any>): void {
        this.native.setCurrentWidget(widget.native);
    }
}
