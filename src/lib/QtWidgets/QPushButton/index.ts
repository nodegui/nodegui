import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { SignalNodeWidget } from "../../core/SignalNodeWidget";

export enum QPushButtonSignal {
  clicked = "clicked",
  pressed = "pressed",
  released = "released",
  toggled = "toggled"
}

export class QPushButton extends SignalNodeWidget {
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
    this.setText.bind(this);
  }

  setText(text: string | number) {
    this.native.setText(`${text}`);
  }
}
