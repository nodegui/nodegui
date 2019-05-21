import addon from "../../core/addon";
import { QWidget } from "../../QtGui/QWidget";
import { Component } from "../../core/Component";

export class QGridLayout extends Component {
  native: any;
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QGridLayout(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QGridLayout();
    }
  }
  addWidget(widget: Component) {
    this.native.addWidget(widget.native);
    this.children.add(widget);
  }
}
