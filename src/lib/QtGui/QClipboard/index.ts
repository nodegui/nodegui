import { Component, NativeElement } from "../../core/Component";
import { checkIfNativeElement } from "../../utils";

export class QClipboard extends Component {
  native: NativeElement;
  constructor(native: NativeElement) {
    super();
    if (checkIfNativeElement(native)) {
      this.native = native;
    } else {
      throw new Error(
        "QClipboard cannot be initialised this way. Use QApplication::clipboard()"
      );
    }
  }
  clear = (mode: QClipboardMode) => {
    this.native.clear(mode);
  };
  setText = (text: string, mode: QClipboardMode) => {
    this.native.setText(text, mode);
  };
  text = (mode: QClipboardMode): string => {
    return this.native.text(mode);
  };
}

export enum QClipboardMode {
  Clipboard,
  Selection,
  FindBuffer
}
