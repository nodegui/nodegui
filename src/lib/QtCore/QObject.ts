import { EventWidget } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { QVariant } from './QVariant';

export abstract class NodeObject extends EventWidget {
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

export class QObject extends NodeObject {
    native: NativeElement;
    constructor(arg?: NodeObject | NativeElement) {
        let native;
        let parent;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg as NodeObject) {
            parent = arg as NodeObject;
            native = new addon.QObject(parent.native);
        } else {
            native = new addon.QObject();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }
}
