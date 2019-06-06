import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
export class QPushButton extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QPushButton(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QPushButton();
    }
  }
  setText(text: string) {
    this.native.setText(text);
  }
}
