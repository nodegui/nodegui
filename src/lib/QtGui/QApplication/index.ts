import addon from "../../core/addon";
import { Component } from "../../core/Component";

export class QApplication extends Component {
  native = new addon.QApplication();
  processEvents() {
    this.native.processEvents();
  }
  exec() {
    this.native.exec();
  }
}
