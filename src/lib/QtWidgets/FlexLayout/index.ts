import addon from "../../core/addon";
import { Component } from "../../core/Component";
import { QWidget } from "../../QtGui/QWidget";
import { FlexNode } from "../../core/FlexLayout/FlexNode";

export class FlexLayout extends Component {
  native = new addon.FlexLayout();
  addWidget(childWidget: QWidget, childFlexNode: FlexNode) {
    this.native.addWidget(childWidget.native, childFlexNode.native);
  }
}
