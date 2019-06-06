import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { QLayout } from "../QLayout";
import { FlexNode } from "../../core/FlexLayout/FlexNode";

export class QLabel extends NodeWidget {
  native: any;
  layout?: QLayout;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QLabel(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QLabel();
    }
  }
  setWordWrap(on: boolean) {
    this.native.setWordWrap(on);
  }
  setText(text: string) {
    this.native.setText(text);
  }
  getFlexNode(): FlexNode {
    const nativeFlexNode = this.native.getFlexNode();
    return new FlexNode(nativeFlexNode);
  }
}
