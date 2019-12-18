import addon from '../utils/addon';
import { NativeElement, Component } from '../core/Component';
import { AlignmentFlag } from '../QtEnums';
import {QWidget} from "./QWidget";

export class QPainter extends Component {
    native: NativeElement;
    constructor(device?: QWidget) {
        let native;
        if (device) {
            native = new addon.QPainter(device.native);
        } else {
            native = new addon.QPainter();
        }
        super();
        this.native = native;
    }
    drawText(x: Number, y: Number, text: String): void {
        return this.native.drawText(x, y, text);
    }
    begin(device: QWidget): boolean{
        return this.native.begin(device.native);
    }
    end(): void{
        this.native.end();
    }
}
