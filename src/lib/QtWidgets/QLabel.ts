import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { QPixmap } from '../QtGui/QPixmap';

export const QLabelEvents = Object.freeze({
    ...BaseWidgetEvents,
});
export class QLabel extends NodeWidget {
    native: NativeElement;
    private _pixmap?: QPixmap;
    constructor(parent?: NodeWidget) {
        let native;
        if (parent) {
            native = new addon.QLabel(parent.native);
        } else {
            native = new addon.QLabel();
        }
        super(native);
        this.native = native;
        this.nodeParent = parent;
    }
    setWordWrap(on: boolean): void {
        this.native.setWordWrap(on);
    }
    wordWrap(): boolean {
        return this.native.wordWrap();
    }
    setText(text: string | number): void {
        this.native.setText(`${text}`);
    }
    text(): string {
        return this.native.text();
    }
    setPixmap(pixMap: QPixmap): void {
        this.native.setPixmap(pixMap.native);
        this._pixmap = pixMap;
    }
    pixmap(): QPixmap | undefined {
        return this._pixmap;
    }
    setOpenExternalLinks(open: boolean): void {
        this.native.setOpenExternalLinks(open);
    }
}
