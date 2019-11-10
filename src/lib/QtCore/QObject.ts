import { EventWidget } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';

export abstract class NodeObject extends EventWidget {
    inherits(className: string): boolean {
        return this.native.inherits(className);
    }
    setProperty(name: string, value: any): boolean {
        return this.native.setProperty(name, value);
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
        this.nodeParent = parent;
        this.native = native;
    }
}
