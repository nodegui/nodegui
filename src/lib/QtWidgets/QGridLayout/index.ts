import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { NodeLayout } from "../QLayout";
import { NativeElement } from "../../core/Component";

export class QGridLayout extends NodeLayout {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QGridLayout(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QGridLayout();
    }
  }
  addWidget = (widget: NodeWidget) => {
    this.native.addWidget(widget.native);
    this.children.add(widget);
  };
}
