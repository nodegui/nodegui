import addon from '../utils/addon';

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
    private _cache = new Map<number, any>();

    constructor() {
        addon.WrapperCache_injectCallback(this._objectDestroyedCallback.bind(this));
    }

    private _objectDestroyedCallback(objectId: number): void {
        console.log(`_objectDestroyedCallback() id: ${objectId}`);
        if (!this._cache.has(objectId)) {
            return;
        }
        const wrapper = this._cache.get(objectId);
        wrapper.native = null;
        this._cache.delete(objectId);
    }

    get<T>(wrapperConstructor: { new (native: any): T }, native: any): T {
        const id = native.__id__();

        console.log(`WrapperCache.get() id: ${id}`);

        if (this._cache.has(id)) {
            return this._cache.get(id) as T;
        }
        const wrapper = new wrapperConstructor(native);
        this._cache.set(id, wrapper);
        return wrapper;
    }
}
export const wrapperCache = new WrapperCache();
