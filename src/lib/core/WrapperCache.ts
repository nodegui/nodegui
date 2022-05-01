import addon from '../utils/addon';
import { NativeElement } from './Component';

/**
 * JS side cache for wrapper objects.
 *
 * This is mainly used for caching wrappers of Qt objects which are not
 * directly created by our Nodejs application. The purpose of the cache
 * is to keep "alive" wrapper objects and their underlying C++ wrappers
 * which may be connected to Qt signals from the real Qt object.
 * This makes it easier for application to grab one of these objects,
 * set up event handlers, and then let the object go and *not* have the
 * wrapper automatically and unexpectedly garbage collected.
 */
export class WrapperCache {
    private _strongCache = new Map<number, QObject>();
    private _weakCache = new Map<number, WeakRef<QObject>>();

    constructor() {
        addon.WrapperCache_injectCallback(this._objectDestroyedCallback.bind(this));
    }

    private _objectDestroyedCallback(objectId: number): void {
        if (this._strongCache.has(objectId)) {
            const wrapper = this._strongCache.get(objectId);
            wrapper.native = null;
            this._strongCache.delete(objectId);
        }

        const wrapperRef = this._weakCache.get(objectId);
        if (wrapperRef != null) {
            const wrapper = wrapperRef.deref();
            if (wrapper != null) {
                wrapper.native = null;
                this._weakCache.delete(objectId);
            }
        }
    }

    get<T extends QObject>(wrapperConstructor: { new (native: any): T }, native: NativeElement): T {
        const id = native.__id__();
        if (this._strongCache.has(id)) {
            return this._strongCache.get(id) as T;
        }
        const wrapper = new wrapperConstructor(native);
        this._strongCache.set(id, wrapper);
        return wrapper;
    }

    getWrapper(native: any): QObject | null {
        if (native == null) {
            return null;
        }
        const id = native.__id__();

        if (this._strongCache.has(id)) {
            return this._strongCache.get(id);
        }

        const ref = this._weakCache.get(id);
        if (ref != null) {
            const wrapper = ref.deref();
            if (wrapper != null) {
                return wrapper;
            }
        }

        return null;    // FIXME: Create new wrapper on demand.
    }

    store(wrapper: QObject): void {
        if (wrapper.native != null) {
            const id = wrapper.native.__id__();
            this._weakCache.set(id, new WeakRef<QObject>(wrapper));

            addon.WrapperCache_store(wrapper.native, wrapper.native.__external_qobject__());
        }
    }
}
export const wrapperCache = new WrapperCache();
