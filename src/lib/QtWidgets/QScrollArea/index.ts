import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QAbstractScrollArea } from "../QAbstractScrollArea";

export const QScrollAreaEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QScrollArea extends QAbstractScrollArea {
  native: NativeElement;
  contentWidget?: NodeWidget;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QScrollArea(parent.native);
    } else {
      native = new addon.QScrollArea();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
  }
  setWidget(widget: NodeWidget) {
    this.contentWidget = widget;
    this.native.setWidget(widget.native);
  }
}
