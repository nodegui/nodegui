import addon from "../../core/addon";
import { QWidget } from "../../QtGui/QWidget";
import { Component } from "../../core/Component";

export class QPushButton extends Component {
  native: any;
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
