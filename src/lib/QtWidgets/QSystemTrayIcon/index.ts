import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";

export const QSystemTrayIconEvents = Object.freeze({
  ...BaseWidgetEvents,
});
export class QSystemTrayIcon extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QSystemTrayIcon(parent.native);
    } else {
      native = new addon.QSystemTrayIcon();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setIcon = this.setIcon.bind(this);
    this.isVisible = this.isVisible.bind(this);
  }
  setIcon(icon: QIcon) {
    this.native.setIcon(icon.native);
  }
  isVisible(): boolean {
    return this.native.isVisible();
  }
}
