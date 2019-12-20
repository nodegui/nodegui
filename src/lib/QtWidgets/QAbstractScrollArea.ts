import { NodeWidget, QWidget } from './QWidget';
import { ScrollBarPolicy } from '../QtEnums/ScrollBarPolicy';

export abstract class QAbstractScrollArea<Signals> extends NodeWidget<Signals> {
    viewportWidget?: NodeWidget<Signals>;
    setViewport(widget: NodeWidget<Signals>): void {
        this.viewportWidget = widget;
        this.native.setViewport(widget.native);
    }
    viewport(): QWidget {
        if (!this.viewportWidget) {
            this.viewportWidget = new QWidget(this.native.viewport());
        }
        return this.viewportWidget;
    }
    setHorizontalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('horizontalScrollBarPolicy', policy);
    }
    setVerticalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('verticalScrollBarPolicy', policy);
    }
}
