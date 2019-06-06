import addon from "../addon";
import { Component } from "../Component";
import { QWidget } from "../../QtGui/QWidget";
import { FlexNode } from "./FlexNode";

export class FlexLayout extends Component {
  native = new addon.FlexLayout();
  addWidget(childWidget: QWidget, childFlexNode: FlexNode) {
    this.children.add(childWidget);
    this.native.addWidget(childWidget.native, childFlexNode.native);
  }
  setFlexNode(flexNode: FlexNode) {
    this.native.setFlexNode(flexNode.native);
  }
}
