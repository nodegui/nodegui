import { NativeElement } from '../core/Component';
import addon from './addon';

export function checkIfNativeElement(arg: any): boolean {
    const nativeArg = arg as NativeElement;
    return typeof nativeArg === 'object' && nativeArg.type === 'native';
}

export function checkIfNapiExternal(arg: any): boolean {
    return addon.NUtils.isNapiExternal(arg);
}

// function noop(): void {
//     return;
// }

export const wrapWithActivateUvLoop = (func: Function) => {
    return (...args: any[]): any => {
        // Temporarily removing activateUvLoop
        // const activateUvLoop = (process as any).activateUvLoop || noop;
        // activateUvLoop();
        return func(...args);
    };
};
