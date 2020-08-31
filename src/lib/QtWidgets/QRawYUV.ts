import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

export type QRawYUVSignals = QObjectSignals;

export class QRawYUV extends NodeObject<any> {
    native: NativeElement;
    constructor(parent: NodeWidget<any>, width: Number, height: Number) {
        const native = new addon.QRawYUV(parent.native, width, height);
        super(native);
        this.native = native;
        parent.nodeChildren.add(this);
    }
    render(pixels: Buffer): void {
        this.native.render(pixels);
    }
}
