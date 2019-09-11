import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { NodeLayout } from "../QLayout";

export const QMainWindowEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QMainWindow extends NodeWidget {
  native: NativeElement;
  public centralWidget?: NodeWidget;
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
    this.setLayout = (parentLayout: NodeLayout) => {
      if (this.centralWidget) {
        this.centralWidget.setLayout(parentLayout);
      } else {
        this.native.setLayout(parentLayout.native);
        super.layout = parentLayout;
      }
    };
  }
  setCentralWidget(widget: NodeWidget) {
    // react:✓
    this.native.setCentralWidget(widget.native, widget.getFlexNode());
    this.centralWidget = widget;
  }
  get layout() {
    if (this.centralWidget) {
      return this.centralWidget.layout;
    } else {
      return super.layout;
    }
  }
}
