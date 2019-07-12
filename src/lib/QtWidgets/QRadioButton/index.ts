import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";

export const QRadioButtonEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QRadioButton extends NodeWidget {
  native: NativeElement;
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
    this.setText.bind(this);
  }
  setText(text: string | number) {
    this.native.setText(`${text}`);
  }
}
