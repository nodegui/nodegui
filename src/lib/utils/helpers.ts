import { NativeElement } from '../core/Component';

export function checkIfNativeElement(arg: any): boolean {
    const nativeArg = arg as NativeElement;
    return typeof nativeArg === 'object' && nativeArg.type === 'native';
}
