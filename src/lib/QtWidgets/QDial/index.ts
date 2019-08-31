import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QAbstractSlider } from "../QAbstractSlider";

export const QDialEvents = Object.freeze({
  ...BaseWidgetEvents,
  valueChanged: "valueChanged",
  rangeChanged: "rangeChanged",
  sliderMoved: "sliderMoved",
  sliderPressed: "sliderPressed",
  sliderReleased: "sliderReleased"
});
export class QDial extends QAbstractSlider {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QDial(parent.native);
    } else {
      native = new addon.QDial();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setNotchesVisible.bind(this);
    this.notchesVisible.bind(this);
    this.setWrapping.bind(this);
    this.wrapping.bind(this);
    this.setNotchTarget.bind(this);
    this.notchTarget.bind(this);
  }
  setNotchesVisible(visible: boolean) {
    // react:✓
    this.native.setNotchesVisible(visible);
  }
  notchesVisible(): boolean {
    // react:✓
    return this.native.notchesVisible();
  }
  setWrapping(on: boolean) {
    // react:✓
    this.native.setWrapping(on);
  }
  wrapping(): boolean {
    // react:✓
    return this.native.wrapping();
  }
  setNotchTarget(target: number) {
    // react:✓
    this.native.setNotchTarget(target);
  }
  notchTarget(): number {
    // react:✓
    return this.native.notchTarget();
  }
}
