import addon from "../../core/addon";
import { NodeLayout } from "../../QtWidgets/QLayout";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { FlexLayout } from "../../core/FlexLayout";

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
    return this.native.close();
  };
  setLayout = (parentLayout: NodeLayout) => {
    const flexLayout = parentLayout as FlexLayout;
    if (flexLayout.setFlexNode) {
      //if flex layout set the flexnode
      flexLayout.setFlexNode(this.getFlexNode());
    }
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
  setMouseTracking = (isMouseTracked: boolean) => {
    this.native.setMouseTracking(isMouseTracked);
  };
  setEnabled = (enabled: boolean) => {
    this.native.setEnabled(enabled);
  };
  setFixedSize = (width: number, height: number) => {
    this.native.setFixedSize(width, height);
  };
  setMaximumSize = (maxw: number, maxh: number) => {
    this.native.setMaximumSize(maxw, maxh);
  };
  setMinimumSize = (minw: number, minh: number) => {
    this.native.setMinimumSize(minw, minh);
  };
  repaint = () => {
    this.native.repaint();
  };
  update = () => {
    this.native.update();
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

export const QWidgetEvents = BaseWidgetEvents;
