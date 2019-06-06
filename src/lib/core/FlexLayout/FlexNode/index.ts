import { QLayout } from "../../../QtWidgets/QLayout";

export class FlexNode extends QLayout {
  native: any;
  constructor(nativeNode: any) {
    super();
    this.native = nativeNode;
  }
  debugValue() {
    return this.native.debugValue();
  }
}
