import addon from "../../core/addon";
import { Component, NativeElement } from "../../core/Component";
import { AspectRatioMode } from "../../QtEnums";
type arg = string | NativeElement;

const checkIfNativeElement = (arg: any) => {
  const nativeArg = arg as NativeElement;
  return typeof nativeArg === "object" && nativeArg.type === "native";
};
export class QPixmap extends Component {
  native: NativeElement;
  constructor(arg?: arg) {
    super();
    if (typeof arg === "string") {
      const imageUrl = arg;
      this.native = new addon.QPixmap(imageUrl);
    } else if (checkIfNativeElement(arg)) {
      this.native = arg as NativeElement;
    } else {
      this.native = new addon.QPixmap();
    }
  }
  load = (imageUrl: string) => {
    return this.native.load(imageUrl);
  };
  scaled = (
    width: number,
    height: number,
    aspectRatioMode?: AspectRatioMode
  ): QPixmap => {
    const nativePixmap = this.native.scaled(width, height, aspectRatioMode);
    return new QPixmap(nativePixmap);
  };
}
