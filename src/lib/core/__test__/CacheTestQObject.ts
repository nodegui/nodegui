import addon from '../../utils/addon';
import { NativeElement } from '../Component';
import { QObject, QObjectSignals } from '../../QtCore/QObject';
import { wrapperCache } from '../../core/WrapperCache';

export class CacheTestQObject extends QObject<QObjectSignals> {
    constructor(arg?: NativeElement) {
        let native;
        if (arg == null) {
            native = new addon.CacheTestQObject();
        } else {
            native = arg;
        }
        super(native);
    }

    foo(): CacheTestQObject {
        return wrapperCache.getWrapper(this.native.foo()) as CacheTestQObject;
    }

    clearFoo(): void {
        this.native.clearFoo();
    }

    bar(): CacheTestQObject {
        return wrapperCache.getWrapper(this.native.bar()) as CacheTestQObject;
    }
}
wrapperCache.registerWrapper('CacheTestQObjectWrap', CacheTestQObject);
