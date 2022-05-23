import { QObject } from '../QtCore/QObject';
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
    // Cache for wrapper where we always hold onto the wrapper until the C++
    // object is destroyed by Qt. We don't let the V8 GC destroy the wrapper
    // first. These wrapper often have signal handlers which are kept alive
    // by the wrapper themselves, and not because they are part of a
    // `NFooBar` subclass. For example, the `QScreen` attaches signal
    // handlers to the C++ `QScreen`. If the wrapper is GC'ed, then the
    // signals handlers also stop working.
    private _strongCache = new Map<number, QObject>();

    // WeakCache is for normal wrappers around `QObject` based `NFooBar`
    // subclasses.
    private _weakCache = new Map<number, WeakRef<QObject>>();

    private _wrapperRegistry = new Map<string, { new (native: any): QObject }>();

    constructor() {
        addon.WrapperCache_injectCallback(this._objectDestroyedCallback.bind(this));
    }

    logCreateQObject = false;
    logDestoryQObject = false;

    // This is only need for testing purposes
    _flush(): void {
        this._strongCache = new Map<number, QObject>();
        this._weakCache = new Map<number, WeakRef<QObject>>();
    }

    private _objectDestroyedCallback(objectId: number): void {
        if (this._strongCache.has(objectId)) {
            const wrapper = this._strongCache.get(objectId);
            wrapper.native = null;
            this._strongCache.delete(objectId);

            if (this.logDestoryQObject) {
                console.log(`NodeGui: Destroyed C++ object with ID: ${objectId}.`);
            }
            return;
        }

        const wrapperRef = this._weakCache.get(objectId);
        if (wrapperRef != null) {
            const wrapper = wrapperRef.deref();
            if (wrapper != null) {
                wrapper.native = null;
                this._weakCache.delete(objectId);
                if (this.logDestoryQObject) {
                    console.log(`NodeGui: Destroyed C++ object with ID: ${objectId}.`);
                }
            }
        }
    }

    get<T extends QObject>(wrapperConstructor: { new (native: any): T }, native: NativeElement): T {
        const objectId = native.__id__();
        if (this._strongCache.has(objectId)) {
            return this._strongCache.get(objectId) as T;
        }
        const wrapper = new wrapperConstructor(native);
        this._strongCache.set(objectId, wrapper);
        return wrapper;
    }

    // eslint-disable-next-line @typescript-eslint/explicit-module-boundary-types
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

        if (this._wrapperRegistry.has(native.wrapperType)) {
            const wrapper = new (this._wrapperRegistry.get(native.wrapperType))(native);
            this.store(wrapper);
            return wrapper;
        } else {
            console.log(`NodeGui: Unable to find JS wrapper for type '${native.wrapperType}'.`);
        }

        return null;
    }

    registerWrapper(qobjectClassName: string, wrapperConstructor: { new (native: any): QObject }): void {
        this._wrapperRegistry.set(qobjectClassName, wrapperConstructor);
    }

    store(wrapper: QObject): void {
        if (wrapper.native != null) {
            const objectId = wrapper.native.__id__();
            this._weakCache.set(objectId, new WeakRef<QObject>(wrapper));

            addon.WrapperCache_store(wrapper.native, wrapper.native.__external_qobject__());
            if (this.logCreateQObject) {
                console.log(`NodeGui: Created C++ object with ID: ${objectId}.`);
            }
        }
    }
}
export const wrapperCache = new WrapperCache();

/**
 * Turn on/off logging when QObjects are created.
 *
 * @param on When true, logging is written to console when QObjects are
 *           created by NodeGui.
 */
export function setLogCreateQObject(on: boolean): void {
    wrapperCache.logCreateQObject = on;
}

/**
 * Turn on/off logging when QObjects are destoryed.
 *
 * @param on When true, logging is written to console when QObjects are
 *           destroyed.
 */
export function setLogDestroyQObject(on: boolean): void {
    wrapperCache.logDestoryQObject = on;
}
