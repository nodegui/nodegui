import addon from "../../../utils/addon";
import { NativeElement } from "../../../core/Component";
import { NativeEvent } from "../../../core/EventWidget";

export class QKeyEvent {
  native: NativeElement;
  constructor(event: NativeEvent) {
    this.native = new addon.QKeyEvent(event);
  }
  text = (): string => {
    return this.native.text();
  };
}
