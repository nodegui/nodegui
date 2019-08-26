import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";

export const QCheckBoxEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QCheckBox extends NodeWidget {
  native: NativeElement;
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
    this.isChecked.bind(this);
    this.setChecked.bind(this);
  }

  setText(text: string) {
    this.native.setText(text);
  }
  isChecked(): boolean {
    return this.native.isChecked();
  }
  setChecked(check: boolean) {
    return this.native.setChecked(check);
  }
}
