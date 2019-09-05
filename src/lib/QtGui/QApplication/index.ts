import addon from "../../core/addon";
import { Component, NativeElement } from "../../core/Component";
import { checkIfNativeElement } from "../../utils";
import { QClipboard } from "../QClipboard";

type arg = NativeElement;
export class QApplication extends Component {
  native: NativeElement;
  constructor(arg?: arg) {
    super();
    if (checkIfNativeElement(arg)) {
      this.native = arg as NativeElement;
    } else {
      this.native = new addon.QApplication();
    }
  }
  static clipboard = (): QClipboard => {
    return new QClipboard(addon.QApplication.clipboard());
  };
  processEvents = () => {
    this.native.processEvents();
  };
  exec = (): Number => {
    return this.native.exec();
  };
  static instance = (): QApplication => {
    const nativeQApp = addon.QApplication.instance();
    return new QApplication(nativeQApp);
  };
  quit = () => {
    return this.native.quit();
  };
  exit = (exitCode: number) => {
    return this.native.exit(exitCode);
  };
}
