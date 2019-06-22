import addon from "../../core/addon";
import { NodeLayout } from "../../QtWidgets/QLayout";
import { EventWidget } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";

// All Widgets should extend from NodeWidget
// Implement all native QWidget methods here so that all widgets get access to those aswell
export abstract class NodeWidget extends EventWidget {
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
  setObjectName = (objectName: string) => {
    this.native.setObjectName(objectName);
  };
}

export class QWidget extends NodeWidget {
  native: NativeElement;
  constructor(parent?: QWidget) {
    let native;
    if (parent) {
      native = new addon.QWidget(parent.native);
    } else {
      native = new addon.QWidget();
    }
    super(native);
    this.parent = parent;
    this.native = native;
  }
}
