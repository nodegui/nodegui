import addon from '../../utils/addon';
import { NativeElement } from '../../core/Component';
import { NativeEvent } from '../../core/EventWidget';

export class QMouseEvent {
    native: NativeElement;
    constructor(event: NativeEvent) {
        this.native = new addon.QMouseEvent(event);
    }
    button = (): string => {
        return this.native.button();
    };
    x = (): number => {
        return this.native.x();
    };
    y = (): number => {
        return this.native.y();
    };
    globalX = (): number => {
        return this.native.globalX();
    };
    globalY = (): number => {
        return this.native.globalY();
    };
}
