import { NodeWidget } from "../QWidget";
import { Orientation } from "../../QtEnums";

export abstract class QAbstractSlider extends NodeWidget {
  setSingleStep = (step: number) => {
    this.native.setSingleStep(step);
  };
  setMaximum(maximum: number) {
    this.native.setMaximum(maximum);
  }
  maximum(): number {
    return this.native.maximum();
  }
  setMinimum(minimum: number) {
    this.native.setMinimum(minimum);
  }
  minimum(): number {
    return this.native.minimum();
  }
  setValue(value: number) {
    this.native.setValue(value);
  }
  value(): number {
    return this.native.value();
  }
  setOrientation(orientation: Orientation) {
    this.native.setOrientation(orientation);
  }
}
