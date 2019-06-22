import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { FlexNode } from "../../core/YogaWidget";
import { NativeElement } from "../../core/Component";

export const QMainWindowEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QMainWindow extends NodeWidget {
  native: NativeElement;
  protected centralWidget?: NodeWidget;
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
    this.centralWidget = widget;
    this.native.setCentralWidget(
      this.centralWidget.native,
      widget.getFlexNode()
    );
  }
  setFixedSize(width: number, height: number) {
    this.native.setFixedSize(width, height);
  }
}
