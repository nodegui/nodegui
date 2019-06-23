import addon from "../../core/addon";
import { NativeElement } from "../../core/Component";
import { NativeEvent } from "../../core/EventWidget";

export class KeyEvent {
  native: NativeElement;
  constructor(event: NativeEvent) {
    this.native = new addon.QKeyEvent(event);
  }
  text = (): string => {
    return this.native.text();
  };
}
