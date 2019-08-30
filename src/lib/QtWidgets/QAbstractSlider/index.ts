import { NodeWidget, QWidget } from "../QWidget";
import { Orientation } from "../../QtEnums";

export abstract class QAbstractSlider extends NodeWidget {
  setSingleStep = (step: number) => {
    this.native.setSingleStep(step);
  };
  setMaximum(maximum: number) {
    this.native.setMaximum(maximum);
  }
  setMinimum(minimum: number) {
    this.native.setMinimum(minimum);
  }
  setValue(value: number) {
    this.native.setValue(value);
  }
  setOrientation(orientation: Orientation) {
    this.native.setOrientation(orientation);
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
