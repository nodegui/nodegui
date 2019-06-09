import addon from "../../core/addon";
import { YogaWidget } from "../../core/YogaWidget";
import { NodeLayout } from "../../QtWidgets/QLayout";

// All Widgets should extend from NodeWidget
// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends YogaWidget {
  type = "widget";
  layout?: NodeLayout;
  show = () => {
    this.native.show();
  };
  resize = (width: number, height: number) => {
    this.native.resize(width, height);
  };
  close = () => {
    this.native.close();
  };
  setLayout = (parentLayout: NodeLayout) => {
    this.native.setLayout(parentLayout.native);
    this.layout = parentLayout;
  };
  setStyleSheet = (style: string) => {
    this.native.setStyleSheet(style);
  };
  hide = () => {
    this.native.hide();
  };
}

export class QWidget extends NodeWidget {
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
