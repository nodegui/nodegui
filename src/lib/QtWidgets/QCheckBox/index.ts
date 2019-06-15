import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
export class QCheckBox extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QCheckBox(parent.native);
    } else {
      native = new addon.QCheckBox();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setText.bind(this);
  }

  setText(text: string) {
    this.native.setText(text);
  }
}
