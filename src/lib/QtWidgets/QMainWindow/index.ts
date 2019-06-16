import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { FlexNode } from "../../core/FlexLayout/FlexNode";
import { BaseWidgetEvents } from "../../core/EventWidget";

export const QMainWindowEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QMainWindow extends NodeWidget {
  native: any;
  protected centralWidget?: NodeWidget;
  protected centralWidgetFlexNode?: FlexNode;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QMainWindow(parent.native);
    } else {
      native = new addon.QMainWindow();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setCentralWidget.bind(this);
    this.setFixedSize.bind(this);
  }

  setCentralWidget(widget: NodeWidget) {
    this.centralWidgetFlexNode = widget.getFlexNode();
    this.centralWidget = widget;
    this.native.setCentralWidget(
      this.centralWidget.native,
      this.centralWidgetFlexNode.native
    );
  }
  setFixedSize(width: number, height: number) {
    this.native.setFixedSize(width, height);
  }
}
