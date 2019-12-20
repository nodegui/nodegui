import { EventWidget } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { QVariant } from './QVariant';

export abstract class NodeObject<Signals> extends EventWidget<Signals> {
    inherits(className: string): boolean {
        return this.native.inherits(className);
    }
    setProperty(name: string, value: any): boolean {
        const finalValue = value.native || value;
        return this.native.setProperty(name, finalValue);
    }
    property(name: string): QVariant {
        const nativeVariant = this.native.property(name);
        return new QVariant(nativeVariant);
    }
    setObjectName(objectName: string): void {
        this.native.setObjectName(objectName);
    }
    objectName(): string {
        return this.native.objectName();
    }
}

export class QObject<Signals> extends NodeObject<Signals> {
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(parent: NodeObject<Signals>);
    constructor(arg?: NodeObject<Signals> | NativeElement) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as NodeObject<Signals>) {
            parent = arg as NodeObject<Signals>;
            native = new addon.QObject(parent.native);
        } else {
            native = new addon.QObject();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
}
