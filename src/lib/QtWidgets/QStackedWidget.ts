import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';

export const QStackedWidgetEvents = Object.freeze({
    ...BaseWidgetEvents,
    currentChanged: 'currentChanged',
});

export class QStackedWidget extends NodeWidget {
    native: NativeElement;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QStackedWidget(parent.native);
        } else {
            native = new addon.QStackedWidget();
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

    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }

    currentIndex(): number {
        return this.native.currentIndex();
    }

    setCurrentWidget(widget: NodeWidget): void {
        this.native.setCurrentWidget(widget.native);
    }
}
