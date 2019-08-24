import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { Orientation } from "../../QtEnums";

export const QProgressBarEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QProgressBar extends NodeWidget {
  native: NativeElement;
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
    this.setValue.bind(this);
    this.setMinimum.bind(this);
    this.setMaximum.bind(this);
    this.setOrientation.bind(this);
    this.value.bind(this);
  }
  setValue(value: number) {
    this.native.setValue(value);
  }
  setMinimum(min: number) {
    this.native.setMinimum(min);
  }
  setMaximum(max: number) {
    this.native.setMaximum(max);
  }
  setOrientation(orientation: Orientation) {
    this.native.setOrientation(orientation);
  }
  value(): number {
    return this.native.value();
  }
}
