import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { FlexNode } from "../../core/FlexLayout/FlexNode";
export class QMainWindow extends NodeWidget {
  native: any;
  protected centralWidget?: NodeWidget;
  protected centralWidgetFlexNode?: FlexNode;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QMainWindow(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QMainWindow();
    }
  }
  setCentralWidget = (widget: NodeWidget) => {
    this.centralWidgetFlexNode = widget.getFlexNode();
    this.centralWidget = widget;
    this.native.setCentralWidget(
      this.centralWidget.native,
      this.centralWidgetFlexNode.native
    );
  };
  setFixedSize = (width: number, height: number) => {
    this.native.setFixedSize(width, height);
  };
}
