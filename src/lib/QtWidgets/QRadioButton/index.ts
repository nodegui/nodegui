import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";

export const QRadioButtonEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QRadioButton extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QRadioButton(parent.native);
    } else {
      native = new addon.QRadioButton();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
  }
}
