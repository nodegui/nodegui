import { NodeWidget, QWidget, QWidgetSignals } from './QWidget';
import { ScrollBarPolicy } from '../QtEnums/ScrollBarPolicy';

export type QAbstractScrollAreaSignals = QWidgetSignals;
export abstract class QAbstractScrollArea<Signals extends QAbstractScrollAreaSignals> extends NodeWidget<Signals> {
    viewportWidget?: NodeWidget<any>;
    setViewport(widget: NodeWidget<any>): void {
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
