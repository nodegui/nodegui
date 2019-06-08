import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";
import { EventEmitter } from "events";

export enum QPushButtonEvents {
  clicked = "clicked",
  pressed = "pressed",
  released = "released",
  toggled = "toggled"
}

type EventCallback = (payload?: any) => void;
export class QPushButton extends NodeWidget {
  native: any;
  private emitter: EventEmitter;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QPushButton(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QPushButton();
    }
    this.emitter = new EventEmitter();
    this.native.setupEventListeners(this.emitter.emit.bind(this.emitter));
  }

  setText(text: string) {
    this.native.setText(text);
  }
  setEventListener(eventType: QPushButtonEvents, callback: EventCallback) {
    this.emitter.on(eventType, callback);
  }
}
