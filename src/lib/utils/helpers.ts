import { NativeElement } from '../core/Component';
import addon from './addon';

// eslint-disable-next-line @typescript-eslint/explicit-module-boundary-types
export function checkIfNativeElement(arg: any): boolean {
    const nativeArg = arg as NativeElement;
    return typeof nativeArg === 'object' && nativeArg.type === 'native';
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
