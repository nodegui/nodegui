import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
export class QCheckBox extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QCheckBox(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QCheckBox();
    }
  }
  setText = (text: string) => {
    this.native.setText(text);
  };
}
