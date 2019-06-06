import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";

export class QProgressBar extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QProgressBar(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QProgressBar();
    }
  }
}
