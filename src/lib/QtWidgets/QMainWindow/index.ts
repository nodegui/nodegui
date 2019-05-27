import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { QLayout } from "../QLayout";
export class QMainWindow extends NodeWidget {
  layout?: QLayout;
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QMainWindow(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QMainWindow();
    }
  }
  setCentralWidget(widget: NodeWidget) {
    this.native.setCentralWidget(widget.native);
    this.children.add(widget);
  }
}
