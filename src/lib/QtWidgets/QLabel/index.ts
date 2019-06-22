import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";

export const QLabelEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QLabel extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QLabel(parent.native);
    } else {
      native = new addon.QLabel();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setWordWrap.bind(this);
    this.setText.bind(this);
    this.text.bind(this);
  }
  setWordWrap(on: boolean) {
    this.native.setWordWrap(on);
  }
  setText(text: string | number) {
    this.native.setText(`${text}`);
  }
  text() {
    return this.native.text();
  }
}
