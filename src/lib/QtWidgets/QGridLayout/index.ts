import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { QLayout } from "../QLayout";

export class QGridLayout extends QLayout {
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QGridLayout(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QGridLayout();
    }
  }
  addWidget(widget: NodeWidget) {
    this.native.addWidget(widget.native);
    this.children.add(widget);
  }
}
