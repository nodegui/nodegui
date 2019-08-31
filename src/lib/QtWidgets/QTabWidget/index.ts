import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";
import { TabPosition } from "../../QtEnums";

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

  addTab(page: NodeWidget, icon: QIcon, label: string) {
    this.native.addTab(page.native, icon.native, label);
  }

  setTabPosition(tabPosition: TabPosition) {
    this.native.setTabPosition(tabPosition);
  }

  currentIndex(): number {
    return this.native.currentIndex();
  }
}
