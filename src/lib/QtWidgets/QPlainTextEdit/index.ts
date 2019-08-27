import addon from "../../core/addon";
import { NodeWidget } from "../QWidget";
import { BaseWidgetEvents } from "../../core/EventWidget";
import { NativeElement } from "../../core/Component";
import { QAbstractScrollArea } from "../QAbstractScrollArea";

export const QPlainTextEditEvents = Object.freeze({
  ...BaseWidgetEvents,
  textChanged: "textChanged"
});

export class QPlainTextEdit extends QAbstractScrollArea {
  native: NativeElement;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QPlainTextEdit(parent.native);
    } else {
      native = new addon.QPlainTextEdit();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
    this.setPlainText.bind(this);
    this.toPlainText.bind(this);
    this.setReadOnly.bind(this);
    this.clear.bind(this);
  }
  setPlainText(text: string | number) {
    this.native.setPlainText(`${text}`);
  }
  toPlainText() {
    return this.native.toPlainText();
  }
  setReadOnly(isReadOnly: boolean) {
    this.native.setReadOnly(isReadOnly);
  }
  clear() {
    this.native.clear();
  }
}
