import addon from "../../core/addon";
import { Component, NativeElement } from "../../core/Component";

type arg = string | NativeElement;
export class QIcon extends Component {
  native: NativeElement;
  constructor(arg?: arg) {
    super();
    if (typeof arg === "string") {
      const imageUrl = arg;
      this.native = new addon.QIcon(imageUrl);
    } else {
      this.native = new addon.QIcon();
    }
  }
}
