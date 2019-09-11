import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QIcon } from "../../QtGui/QIcon";

export const QPushButtonEvents = Object.freeze({
  ...BaseWidgetEvents,
  clicked: "clicked",
  pressed: "pressed",
  released: "released",
  toggled: "toggled"
});

export class QPushButton extends NodeWidget {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QPushButton(parent.native);
    } else {
      native = new addon.QPushButton();
    }
    super(native);
    this.parent = parent;
    this.native = native;
    // bind member functions
    this.setText.bind(this);
    this.setFlat.bind(this);
  }
  setText(text: string | number) {
    // react:✓, //TODO:getter
    this.native.setText(`${text}`);
  }
  setFlat(isFlat: boolean) {
    // react:✓, //TODO:getter
    this.native.setFlat(isFlat);
  }
  setIcon(icon: QIcon) {
    // react:✓, //TODO:getter
    this.native.setIcon(icon.native);
  }
}
