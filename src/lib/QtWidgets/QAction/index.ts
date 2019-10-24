import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QMenu } from "../QMenu";

export const QActionEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QAction extends EventWidget {
  native: NativeElement;
  contextMenu?: QMenu;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QAction(parent.native);
    } else {
      native = new addon.QAction();
    }
    super(native);
    this.native = native;
  }
  setText(text: string) {
    this.native.setText(text);
  }
}
