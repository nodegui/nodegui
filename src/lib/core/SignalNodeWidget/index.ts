import { NodeWidget } from "../../QtGui/QWidget";
import { EventEmitter } from "events";

export abstract class SignalNodeWidget extends NodeWidget {
  private emitter: EventEmitter;
  constructor(native: any) {
    super();
    if (native.setupSignalListeners) {
      this.emitter = new EventEmitter();
      native.setupSignalListeners(this.emitter.emit.bind(this.emitter));
    } else {
      throw new Error("Signal Listeners not implemented on native side");
    }
  }

  setSignalListener(signalType: string, callback: (payload?: any) => void) {
    this.emitter.on(signalType, callback);
  }
}
