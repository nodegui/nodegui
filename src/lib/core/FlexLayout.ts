import addon from '../utils/addon';
import { NodeWidget } from '../QtWidgets/QWidget';
import { NodeLayout } from '../QtWidgets/QLayout';
import { FlexNode } from './YogaWidget';
import { NativeElement } from './Component';

export type FlexLayoutSignals = {};
export class FlexLayout extends NodeLayout<FlexLayoutSignals> {
    native: NativeElement;
    protected flexNode?: FlexNode;

    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.FlexLayout(parent.native);
        } else {
            native = new addon.FlexLayout();
        }
        super(native);
        this.native = native;
        if (parent) {
            this.setFlexNode(parent.getFlexNode());
        }
    }

    addWidget(childWidget: NodeWidget<any>, childFlexNode?: FlexNode): void {
        const childYogaNode = childFlexNode || childWidget.getFlexNode();
        if (this.nodeChildren.has(childWidget)) {
            this.removeWidget(childWidget, childYogaNode);
        }
        this.nodeChildren.add(childWidget);
        this.native.addWidget(childWidget.native, childYogaNode);
    }

    insertChildBefore(
        childWidget: NodeWidget<any>,
        beforeChildWidget: NodeWidget<any>,
        childFlexNode?: FlexNode,
        beforeChildFlexNode?: FlexNode,
    ): void {
        const childYogaNode = childFlexNode || childWidget.getFlexNode();
        if (this.nodeChildren.has(childWidget)) {
            this.removeWidget(childWidget, childYogaNode);
        }
        const beforeChildYogaNode = beforeChildFlexNode || beforeChildWidget.getFlexNode();
        this.nodeChildren.add(childWidget); // No orderer required yet, so just inserting at the end.
        this.native.insertChildBefore(childWidget.native, beforeChildYogaNode, childYogaNode);
    }

    removeWidget(childWidget: NodeWidget<any>, childFlexNode?: FlexNode): void {
        if (!this.nodeChildren.has(childWidget)) {
            return;
        }
        const childYogaNode = childFlexNode || childWidget.getFlexNode();
        this.native.removeWidget(childWidget.native, childYogaNode);
        this.nodeChildren.delete(childWidget);
    }

    setFlexNode(flexNode: FlexNode): void {
        this.flexNode = flexNode;
        this.native.setFlexNode(flexNode);
    }
}
