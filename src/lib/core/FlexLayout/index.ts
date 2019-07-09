import addon from "../addon";
import { NodeWidget } from "../../QtGui/QWidget";
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
  removeWidget = (childWidget: NodeWidget, childFlexNode?: FlexNode) => {
    const childYogaNode = childFlexNode || childWidget.getFlexNode();
    this.native.removeWidget(childWidget.native, childYogaNode);
    this.children.delete(childWidget);
  };
  setFlexNode = (flexNode: FlexNode) => {
    this.flexNode = flexNode;
    this.native.setFlexNode(flexNode);
  };
}
