import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";

export class QLineEdit extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QLineEdit(parent.native);
    } else {
      native = new addon.QLineEdit();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
  }
}
