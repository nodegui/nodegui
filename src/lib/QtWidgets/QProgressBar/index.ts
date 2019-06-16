import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";

export const QProgressBarEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QProgressBar extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QProgressBar(parent.native);
    } else {
      native = new addon.QProgressBar();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
  }
}
