import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";
import { QMenu } from "../QMenu";

export const QSystemTrayIconEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QSystemTrayIcon extends EventWidget {
  native: NativeElement;
  contextMenu?: QMenu;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QSystemTrayIcon(parent.native);
    } else {
      native = new addon.QSystemTrayIcon();
    }
    super(native);
    this.native = native;
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
  setToolTip(tooltip: string) {
    this.native.setToolTip(tooltip);
  }
  setContextMenu(menu: QMenu) {
    this.contextMenu = menu;
    this.native.setContextMenu(this.contextMenu.native);
  }
}
