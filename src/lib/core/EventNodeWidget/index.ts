import { NodeWidget } from "../../QtGui/QWidget";
import { EventEmitter } from "events";

export abstract class EventNodeWidget extends NodeWidget {
  private emitter: EventEmitter;
  constructor(native: any) {
    super();
    if (native.setupEventListeners) {
      this.emitter = new EventEmitter();
      native.setupEventListeners(this.emitter.emit.bind(this.emitter));
    } else {
      throw new Error("Event Listeners not implemented on native side");
    }
  }

  setEventListener(eventType: string, callback: (payload?: any) => void) {
    this.emitter.on(eventType, callback);
  }
}
