import { EventWidget } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import addon from '../utils/addon';
import { QVariant, QVariantType } from './QVariant';
import { TimerType } from '../QtEnums/TimerType';
import { wrapperCache } from '../core/WrapperCache';

export class QObject<Signals extends QObjectSignals = QObjectSignals> extends EventWidget<Signals> {
    constructor(nativeElementOrParent?: NativeElement | QObject) {
        let native;
        let parent;
        if (checkIfNativeElement(nativeElementOrParent)) {
            native = nativeElementOrParent as NativeElement;
        } else if (nativeElementOrParent) {
            parent = nativeElementOrParent as QObject<any>;
            native = new addon.QObject(parent.native);
        } else {
            native = new addon.QObject();
        }
        super(native);

        wrapperCache.store(this);
    }

    inherits(className: string): boolean {
        return this.native.inherits(className);
    }
    setProperty(name: string, value: QVariantType): boolean {
        return this.native.setProperty(name, value);
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
    dumpObjectTree(): void {
        this.native.dumpObjectTree();
    }
    dumpObjectInfo(): void {
        this.native.dumpObjectInfo();
    }
    setParent(parent: QObject): void {
        if (parent != null) {
            const extern = parent.native.__external_qobject__();
            this.native.setParent(extern);
        } else {
            this.native.setParent(null);
        }
    }
    parent(): QObject {
        return wrapperCache.getWrapper(this.native.parent());
    }
    startTimer(intervalMS: number, timerType = TimerType.CoarseTimer): number {
        return this.native.startTimer(intervalMS, timerType);
    }
    killTimer(timerId: number): void {
        this.native.killTimer(timerId);
    }
    delete(): void {
        this.native.delete();
    }
    deleteLater(): void {
        this.native.deleteLater();
    }
    children(): QObject[] {
        return this.native.children().map((kid: any) => wrapperCache.getWrapper(kid));
    }
}

export interface QObjectSignals {
    objectNameChanged: (objectName: string) => void;
}
