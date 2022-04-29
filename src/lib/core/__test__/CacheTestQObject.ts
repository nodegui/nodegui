import addon from '../../utils/addon';
import { NativeElement } from '../Component';
import { QObject, QObjectSignals } from '../../QtCore/QObject';
import { wrapperCache } from '../../core/WrapperCache';

export class CacheTestQObject extends QObject<QObjectSignals> {
    constructor(arg?: NativeElement) {
        let native;
        if (native == null) {
            native = new addon.CacheTestQObject();
        } else {
            native = arg;
        }
        super(native);
        this.native = native;
    }

    foo(): CacheTestQObject {
        return wrapperCache.get<CacheTestQObject>(CacheTestQObject, this.native.foo());
    }

    clearFoo(): void {
        this.native.clearFoo();
    }

    bar(): CacheTestQObject {
        return wrapperCache.get<CacheTestQObject>(CacheTestQObject, this.native.bar());
    }
}
