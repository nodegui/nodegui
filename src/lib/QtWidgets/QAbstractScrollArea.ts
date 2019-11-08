import { NodeWidget, QWidget } from './QWidget';

export abstract class QAbstractScrollArea extends NodeWidget {
    viewportWidget?: NodeWidget;
    setViewport(widget: NodeWidget): void {
        this.viewportWidget = widget;
        this.native.setViewport(widget.native);
    }
    viewport(): QWidget {
        if (!this.viewportWidget) {
            this.viewportWidget = new QWidget(this.native.viewport());
        }
        return this.viewportWidget;
    }
}
