import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";

export const QSystemTrayIconEvents = Object.freeze({
  ...BaseWidgetEvents,
});
export class QSystemTrayIcon extends EventWidget {
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
    // bind member functions
    this.show = this.show.bind(this);
    this.hide = this.hide.bind(this);
    this.setIcon = this.setIcon.bind(this);
    this.isVisible = this.isVisible.bind(this);
  }
  show() {
    this.native.show();
  }
  hide() {
    this.native.hide();
  }
  setIcon(icon: QIcon) {
    this.native.setIcon(icon.native);
  }
  isVisible(): boolean {
    return this.native.isVisible();
  }
}
