import addon from "../addon";
import { QWidget } from "../../QtGui/QWidget";
import { FlexNode } from "./FlexNode";
import { NodeLayout } from "../../QtWidgets/QLayout";

export class FlexLayout extends NodeLayout {
  native = new addon.FlexLayout();
  addWidget(childWidget: QWidget, childFlexNode: FlexNode) {
    this.children.add(childWidget);
    this.native.addWidget(childWidget.native, childFlexNode.native);
  }
  setFlexNode(flexNode: FlexNode) {
    this.native.setFlexNode(flexNode.native);
  }
}
