import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";

export const QPushButtonEvents = Object.freeze({
  ...BaseWidgetEvents,
  clicked: "clicked",
  pressed: "pressed",
  released: "released",
  toggled: "toggled"
});

export class QPushButton extends NodeWidget {
  native: any;
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
  }

  setText(text: string | number) {
    this.native.setText(`${text}`);
  }
}
