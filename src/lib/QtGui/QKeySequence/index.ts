import addon from "../../utils/addon";
import { Component, NativeElement } from "../../core/Component";

export class QKeySequence extends Component {
  native: NativeElement;
  constructor(keySequence?: string) {
    super();
    if (typeof keySequence === "string") {
      this.native = new addon.QKeySequence(keySequence);
    } else {
      this.native = new addon.QKeySequence();
    }
  }
  count(): number {
    return this.native.count();
  }
}
