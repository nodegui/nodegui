import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { EventNodeWidget } from "../../core/EventNodeWidget";

export enum QPushButtonEvents {
  clicked = "clicked",
  pressed = "pressed",
  released = "released",
  toggled = "toggled"
}

export class QPushButton extends EventNodeWidget {
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
  }

  setText(text: string) {
    this.native.setText(text);
  }
}
