import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";
import { QWidget } from "../../QtGui/QWidget";

export const QTabWidgetEvents = Object.freeze({
  ...BaseWidgetEvents,
  currentChanged: "currentChanged",
  tabBarClicked: "tabBarClicked",
  tabBarDoubleClicked: "tabBarDoubleClicked",
  tabCloseRequested: "tabCloseRequested"
});

export class QTabWidget extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QTabWidget(parent.native);
    } else {
      native = new addon.QTabWidget();
    }
    super(native);
    this.parent = parent;
    this.native = native;
    // bind member functions
    this.addTab.bind(this);
  }

  addTab(page: QWidget, icon: QIcon, label: string) {
    this.native.addTab(page, icon, label);
  }
}
