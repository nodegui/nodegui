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
  private eventEmiiter: EventEmitter;
  constructor(parent?: NodeWidget) {
    super();
    if (parent) {
      this.native = new addon.QPushButton(parent.native);
      this.parent = parent;
    } else {
      this.native = new addon.QPushButton();
    }
    this.eventEmiiter = this.initEventEmitter(this.native);
  }
  private initEventEmitter(native: any): EventEmitter {
    const emitter = new EventEmitter();
    native.setNodeEventEmiiter(emitter.emit.bind(emitter));
    return emitter;
  }
  setText(text: string) {
    this.native.setText(text);
  }
  setEventListener(eventType: QPushButtonEvents, callback: EventCallback) {
    this.eventEmiiter.on(eventType, callback);
  }
}
