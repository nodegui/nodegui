import addon from "../../core/addon";
import { QLayout } from "../../QtWidgets/QLayout";
import { Component } from "../../core/Component";

// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends Component {
  abstract native: any;
  abstract layout?: QLayout;
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

export class QWidget extends NodeWidget {
  layout?: QLayout;
  native: any;
  constructor(parent?: QWidget) {
    super();
    if (parent) {
      this.native = new addon.QWidget(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QWidget();
    }
  }
}
