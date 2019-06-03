import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { QLayout } from "../QLayout";

export class QRadioButton extends NodeWidget {
  native: any;
  layout?: QLayout;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QRadioButton(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QRadioButton();
    }
  }
}
