import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";

export const QSpinBoxEvents = Object.freeze({
  ...BaseWidgetEvents,
  valueChanged: "valueChanged"
});

export class QSpinBox extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QSpinBox(parent.native);
    } else {
      native = new addon.QSpinBox();
    }
    super(native);
    this.parent = parent;
    this.native = native;
    // bind member functions
    this.setPrefix.bind(this);
    this.setSingleStep.bind(this);
    this.setSuffix.bind(this);
    this.setRange.bind(this);
    this.setValue.bind(this);
    this.cleanText.bind(this);
    this.maximum.bind(this);
    this.minimum.bind(this);
    this.value.bind(this);
  }

  setPrefix(prefix: string) {
    this.native.setPrefix(`${prefix}`);
  }
  setSingleStep(val: number) {
    this.native.setSingleStep(val);
  }
  setSuffix(suffix: string) {
    this.native.setSuffix(`${suffix}`);
  }
  setRange(minimum: number, maximum: number) {
    this.native.setRange(minimum, maximum);
  }
  setValue(val: number) {
    this.native.setValue(val);
  }
  cleanText(): string {
    return this.native.cleanText();
  }
  maximum(): number {
    return this.native.maximum();
  }
  minimum(): number {
    return this.native.minimum();
  }
  value(): number {
    return this.native.value();
  }
}
