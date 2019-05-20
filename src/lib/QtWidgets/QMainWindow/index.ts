import addon from "../../core/addon";
import { QWidget } from "../../QtGui/QWidget";
import { Component } from "../../core/Component";

export class QMainWindow extends Component {
  native: any;
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QMainWindow(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QMainWindow();
    }
  }
  setStyleSheet(style: string) {
    this.native.setStyleSheet(style);
  }
  show() {
    this.native.show();
  }
  resize(width: number, height: number) {
    this.native.resize(width, height);
  }
  close() {
    this.native.close();
  }
  setCentralWidget(widget: QWidget) {
    this.native.setCentralWidget(widget.native);
    this.children.add(widget);
  }
}
