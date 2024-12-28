import { NativeElement } from '../core/Component';
import addon from './addon';

// eslint-disable-next-line @typescript-eslint/explicit-module-boundary-types
export function checkIfNativeElement(arg: any): arg is NativeElement {
    const nativeArg = arg as NativeElement;
    return nativeArg != null && typeof nativeArg === 'object' && nativeArg.type === 'native';
}

// eslint-disable-next-line @typescript-eslint/explicit-module-boundary-types
export function checkIfNapiExternal(arg: any): boolean {
    return addon.NUtils.isNapiExternal(arg);
}

function noop(): void {
    return;
}

// eslint-disable-next-line @typescript-eslint/ban-types
export function wrapWithActivateUvLoop<T extends Function>(func: T): T {
    const fn = (...args: any[]): any => {
        const activateUvLoop = (process as any).activateUvLoop || noop;
        activateUvLoop();
        return func(...args);
    };
    return fn as any;
}

export type JsWrapFunction = (element: any) => any;

/**
 * Registry of functions to wrap native Node API wrapper objects with JS objects.
 * @private
 */
const nativeWrapperRegistry = new Map<string, JsWrapFunction>();

/**
 * Register a function to wrap a specific Node API wrapper objects with a JS object.
 *
 * @param wrapperTypeName the C++ wrapper type name the wrap function applies to.
 * @param jsWrapFunction function to wrap a native wrapper to a JS wrapper object.
 */
export function registerNativeWrapFunction(wrapperTypeName: string, jsWrapFunction: JsWrapFunction): void {
    nativeWrapperRegistry.set(wrapperTypeName, jsWrapFunction);
}

/**
 * Try to wrap a native Node object with its JS wrapper.
 *
 * @param native the native object to wrap
 * @return the JS object wrapping the native object or the native object if
 *         it couldn't be wrapped or doesn't need to be wrapped.
 */
// eslint-disable-next-line @typescript-eslint/explicit-module-boundary-types
export function wrapNative(native: any): any {
    if (!checkIfNativeElement(native)) {
        return native;
    }

    const func: JsWrapFunction | undefined = nativeWrapperRegistry.get(native.wrapperType);
    if (func == null) {
        return native;
    }

    return func(native);
}
