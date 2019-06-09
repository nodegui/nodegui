import addon from "../addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { FlexNode } from "./FlexNode";
import { NodeLayout } from "../../QtWidgets/QLayout";

export class FlexLayout extends NodeLayout {
  native = new addon.FlexLayout();
  protected flexNode?: FlexNode;
  protected childFlexNodes = new Set<FlexNode>();

  addWidget = (childWidget: NodeWidget, childFlexNode: FlexNode) => {
    this.children.add(childWidget);
    this.childFlexNodes.add(childFlexNode);

    this.native.addWidget(childWidget.native, childFlexNode.native);
  };
  setFlexNode = (flexNode: FlexNode) => {
    this.flexNode = flexNode;
    this.native.setFlexNode(flexNode.native);
  };
}
