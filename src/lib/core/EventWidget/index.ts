import { EventEmitter } from "events";
import { YogaWidget } from "../YogaWidget";

export abstract class EventWidget extends YogaWidget {
  private emitter: EventEmitter;
  constructor(native: any) {
    super();
    if (native.initNodeEventEmitter) {
      this.emitter = new EventEmitter();
      native.initNodeEventEmitter(this.emitter.emit.bind(this.emitter));
    } else {
      throw new Error("initNodeEventEmitter not implemented on native side");
    }
  }

  addEventListener = (eventType: string, callback: (payload?: any) => void) => {
    this.native.subscribeToQtEvent(eventType);
    this.emitter.on(eventType, callback);
  };
}
