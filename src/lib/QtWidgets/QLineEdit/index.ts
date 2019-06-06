import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";

export class QLineEdit extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QLineEdit(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QLineEdit();
    }
  }
}
