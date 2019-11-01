import addon from "../../utils/addon";
import { NodeWidget } from "../QWidget";
import { NativeElement } from "../../core/Component";
import { QMenu } from "../QMenu";
import { QIcon } from "../../QtGui/QIcon";
import { QKeySequence } from "../../QtGui/QKeySequence";
import { ShortcutContext } from "../../QtEnums";
import { QObject } from "../../QtCore/QObject";

export const QActionEvents = Object.freeze({
  triggered: "triggered",
  changed: "changed",
  hovered: "hovered",
  toggled: "toggled"
});
export class QAction extends QObject {
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
  setEnabled(enabled: boolean) {
    this.native.setEnabled(enabled);
  }
  setIcon(icon: QIcon) {
    this.icon = icon;
    this.native.setIcon(icon.native);
  }
  setMenu(menu: QMenu) {
    this.menu = menu;
    this.native.setMenu(menu.native);
  }
  setShortcut(keysequence: QKeySequence) {
    this.native.setShortcut(keysequence.native);
  }
  setShortcutContext(shortcutContext: ShortcutContext) {
    this.native.setShortcutContext(shortcutContext);
  }
  isCheckable(): boolean {
    return this.native.isCheckable();
  }
  setCheckable(isCheckable: boolean) {
    this.native.setCheckable(isCheckable);
  }
  isChecked(): boolean {
    return this.native.isChecked();
  }
  setChecked(isChecked: boolean) {
    this.native.setChecked(isChecked);
  }
  isSeparator(): boolean {
    return this.native.isSeparator();
  }
  setSeparator(isChecked: boolean) {
    this.native.setSeparator(isChecked);
  }
}
