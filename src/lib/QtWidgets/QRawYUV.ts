import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { NativeElement, NativeRawPointer } from '../core/Component';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

export interface QRawYUVSignals extends QObjectSignals {}

export class QRawYUV extends NodeObject<any> {
    native: NativeElement;
    constructor(parent: NodeWidget<any>) {
        const native = new addon.QRawYUV(parent.native);
        super(native);
        this.native = native;
        parent.nodeChildren.add(this);
    }
    setSize(width: Number, height: Number): void {
        this.native.setSize(width, height);
    }
    render(width: Number, height: Number, pixels: ArrayBuffer): void {
        this.native.render(width, height, pixels);
    }
}
