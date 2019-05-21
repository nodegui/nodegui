import addon from "../../core/addon";
import { QLayout } from "../../QtWidgets/QLayout";
import { Component } from "../../core/Component";

export class QWidget extends Component {
  native: any;
  layout?: QLayout;
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QWidget(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QWidget();
    }
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
  setLayout(parentLayout: QLayout) {
    this.native.setLayout(parentLayout.native);
    this.layout = parentLayout;
  }
  setStyleSheet(style: string) {
    this.native.setStyleSheet(style);
  }
}
