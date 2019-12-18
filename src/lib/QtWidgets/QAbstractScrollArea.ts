import { NodeWidget, QWidget } from './QWidget';
import { ScrollBarPolicy } from '../QtEnums/ScrollBarPolicy';

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
    setHorizontalScrollBarPolicy(policy: ScrollBarPolicy) {
        this.native.setProperty('horizontalScrollBarPolicy', policy);
    }
    setVerticalScrollBarPolicy(policy: ScrollBarPolicy) {
        this.native.setProperty('verticalScrollBarPolicy', policy);
    }
}
