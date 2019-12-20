import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QAbstractScrollArea } from './QAbstractScrollArea';

type QScrollAreaSignals = {};
export class QScrollArea extends QAbstractScrollArea<QScrollAreaSignals> {
    native: NativeElement;
    contentWidget?: NodeWidget<any> | null;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QScrollArea(parent.native);
        } else {
            native = new addon.QScrollArea();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
        this.setWidgetResizable(true);
    }
    setWidget(widget: NodeWidget<any>): void {
        // react:✓, //TODO:getter
        this.contentWidget = widget;
        this.native.setWidget(widget.native);
        this.contentWidget.setFlexNodeSizeControlled(this.widgetResizable());
    }
    takeWidget(): NodeWidget<any> | null {
        // react:✓
        const contentWidget = this.contentWidget;
        this.contentWidget = null;
        if (contentWidget) {
            this.native.takeWidget();
            return contentWidget;
        }
        return null;
    }
    setWidgetResizable(resizable: boolean): void {
        this.native.setWidgetResizable(resizable);
        if (this.contentWidget) {
            this.contentWidget.setFlexNodeSizeControlled(resizable);
        }
    }
    widgetResizable(): boolean {
        return this.native.widgetResizable();
    }
}
