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
    this.setWrapping.bind(this);
    this.setNotchTarget.bind(this);
    this.notchTarget.bind(this);
    this.notchesVisible.bind(this);
    this.wrapping.bind(this);
  }
  setNotchesVisible(visible: boolean) {
    this.native.setNotchesVisible(visible);
  }
  setWrapping(on: boolean) {
    this.native.setWrapping(on);
  }
  setNotchTarget(target: number) {
    this.native.setNotchTarget(target);
  }
  notchTarget(): number {
    return this.native.notchTarget();
  }
  notchesVisible(): boolean {
    return this.native.notchesVisible();
  }
  wrapping(): boolean {
    return this.native.wrapping();
  }
}
