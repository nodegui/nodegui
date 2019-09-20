import addon from "../../utils/addon";
import { NodeWidget } from "../../QtWidgets/QWidget";
import { NodeLayout } from "../../QtWidgets/QLayout";
import { FlexNode } from "../YogaWidget";
import { NativeElement } from "../Component";

export class FlexLayout extends NodeLayout {
  native: NativeElement = new addon.FlexLayout();
  protected flexNode?: FlexNode;

  addWidget = (childWidget: NodeWidget, childFlexNode?: FlexNode) => {
    const childYogaNode = childFlexNode || childWidget.getFlexNode();
    this.children.add(childWidget);
    this.native.addWidget(childWidget.native, childYogaNode);
  };

  insertChildBefore = (
    childWidget: NodeWidget,
    beforeChildWidget: NodeWidget,
    childFlexNode?: FlexNode,
    beforeChildFlexNode?: FlexNode
  ) => {
    const childYogaNode = childFlexNode || childWidget.getFlexNode();
    const beforeChildYogaNode =
      beforeChildFlexNode || beforeChildWidget.getFlexNode();
    this.children.add(childWidget); // No orderer required yet, so just inserting at the end.
    this.native.insertChildBefore(
      childWidget.native,
      beforeChildYogaNode,
      childYogaNode
    );
  };

  removeWidget = (childWidget: NodeWidget, childFlexNode?: FlexNode) => {
    if (!this.children.has(childWidget)) {
      return;
    }
    const childYogaNode = childFlexNode || childWidget.getFlexNode();
    this.children.delete(childWidget);
    this.native.removeWidget(childWidget.native, childYogaNode);
  };

  setFlexNode = (flexNode: FlexNode) => {
    this.flexNode = flexNode;
    this.native.setFlexNode(flexNode);
  };
}
