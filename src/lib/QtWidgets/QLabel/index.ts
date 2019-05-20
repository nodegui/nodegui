import addon from "../../core/addon";
import { QWidget } from "../../QtGui/QWidget";
import { Component } from "../../core/Component";

export class QLabel extends Component {
  native: any;
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QLabel(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QLabel();
    }
  }
  setWordWrap(on: boolean) {
    this.native.setWordWrap(on);
  }
  setText(text: string) {
    this.native.setText(text);
  }
  setStyleSheet(style: string) {
    this.native.setStyleSheet(style);
  }
}
