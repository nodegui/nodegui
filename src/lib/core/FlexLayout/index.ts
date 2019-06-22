import addon from "../addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { NodeLayout } from "../../QtWidgets/QLayout";
import { FlexNode } from "../YogaWidget";
import { NativeElement } from "../Component";

export class FlexLayout extends NodeLayout {
  native: NativeElement = new addon.FlexLayout();
  protected flexNode?: FlexNode;

  addWidget = (childWidget: NodeWidget, childFlexNode: FlexNode) => {
    this.children.add(childWidget);
    this.native.addWidget(childWidget.native, childFlexNode);
  };
  setFlexNode = (flexNode: FlexNode) => {
    this.flexNode = flexNode;
    this.native.setFlexNode(flexNode);
  };
}
