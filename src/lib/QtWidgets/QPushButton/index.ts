import addon from "../../core/addon";
import { QWidget } from "../../QtGui/QWidget";
import { EventComponent } from "../../core/EventComponent";

export class QPushButton extends EventComponent {
  native: any;
  setEventListener(event: string, callback: () => void): void {
    throw new Error("Method not implemented.");
  }
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QPushButton(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QPushButton();
    }
  }
  setText(text: string) {
    this.native.setText(text);
  }
  setStyleSheet(style: string) {
    this.native.setStyleSheet(style);
  }
}
