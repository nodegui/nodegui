import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";

export const QLineEditEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QLineEdit extends NodeWidget {
  native: NativeElement;
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
