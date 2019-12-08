import addon from '../utils/addon';
import { NodeWidget } from '../QtWidgets/QWidget';
import { NodeLayout } from '../QtWidgets/QLayout';
import { FlexNode } from './YogaWidget';
import { NativeElement } from './Component';

export class FlexLayout extends NodeLayout {
    native: NativeElement;
    constructor() {
        const native = new addon.FlexLayout();
        super(native);
        this.native = native;
    }
    protected flexNode?: FlexNode;

    addWidget(childWidget: NodeWidget, childFlexNode?: FlexNode): void {
        const childYogaNode = childFlexNode || childWidget.getFlexNode();
        this.nodeChildren.add(childWidget);
        this.native.addWidget(childWidget.native, childYogaNode);
    }

    insertChildBefore(
        childWidget: NodeWidget,
        beforeChildWidget: NodeWidget,
        childFlexNode?: FlexNode,
        beforeChildFlexNode?: FlexNode,
    ): void {
        const childYogaNode = childFlexNode || childWidget.getFlexNode();
        const beforeChildYogaNode = beforeChildFlexNode || beforeChildWidget.getFlexNode();
        this.nodeChildren.add(childWidget); // No orderer required yet, so just inserting at the end.
        this.native.insertChildBefore(childWidget.native, beforeChildYogaNode, childYogaNode);
    }

    removeWidget(childWidget: NodeWidget, childFlexNode?: FlexNode): void {
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
