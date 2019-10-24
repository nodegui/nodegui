import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { EventWidget, BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QMenu } from "../QMenu";
import { QIcon } from "../../QtGui/QIcon";

export const QActionEvents = Object.freeze({
  ...BaseWidgetEvents
});
export class QAction extends EventWidget {
  native: NativeElement;
  icon?: QIcon;
  menu?: QMenu;
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
  setIcon(icon: QIcon) {
    this.icon = icon;
    this.native.setIcon(icon.native);
  }
  setMenu(menu: QMenu) {
    this.menu = menu;
    this.native.setMenu(menu.native);
  }
}
