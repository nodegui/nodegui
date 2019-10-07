import { BaseWidgetEvents } from "../core/EventWidget";
import { NativeElement } from "../core/Component";
import { NodeWidget } from "./QWidget";
import addon from "../utils/addon";
export const QMenuEvents = Object.freeze({
  ...BaseWidgetEvents
});

export class QMenu extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QMenu(parent.native);
    } else {
      native = new addon.QMenu();
    }
    super(native);
    this.native = native;
    this.parent = parent;
  }
  setTitle(title: string) {
    this.native.setTitle(title);
  }
}
