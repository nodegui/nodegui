import addon from "../../utils/addon";
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
    this.nodeParent = parent;
    this.native = native;
    // bind member functions
    this.setPrefix.bind(this);
    this.setSuffix.bind(this);
    this.cleanText.bind(this);
    this.setSingleStep.bind(this);
    this.setRange.bind(this);
    this.maximum.bind(this);
    this.minimum.bind(this);
    this.setValue.bind(this);
    this.value.bind(this);
  }
  setPrefix(prefix: string) {
    // react:✓
    this.native.setPrefix(prefix);
  }
  setSuffix(suffix: string) {
    // react:✓
    this.native.setSuffix(suffix);
  }
  cleanText(): string {
    // react:✓
    return this.native.cleanText();
  }
  setSingleStep(val: number) {
    // react:✓
    this.native.setSingleStep(val);
  }
  setRange(minimum: number, maximum: number) {
    // react:✓
    this.native.setRange(minimum, maximum);
  }
  maximum(): number {
    // react:✓
    return this.native.maximum();
  }
  minimum(): number {
    // react:✓
    return this.native.minimum();
  }
  setValue(val: number) {
    // react:✓
    this.native.setValue(val);
  }
  value(): number {
    // react:✓
    return this.native.value();
  }
}
