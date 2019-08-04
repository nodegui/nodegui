import addon from "../../core/addon";
import { Component, NativeElement } from "../../core/Component";

export class QPixmap extends Component {
  native: NativeElement;
  constructor(imageUrl?: string) {
    super();
    if (imageUrl) {
      this.native = new addon.QPixmap(imageUrl);
    } else {
      this.native = new addon.QPixmap();
    }
  }
  load = (imageUrl: string) => {
    return this.native.load(imageUrl);
  };
  scaled = (width: number, height: number) => {
    return this.native.scaled(width, height);
  };
}
