import { NativeElement } from '../core/Component';
import { checkIfNativeElement, registerNativeWrapFunction } from '../utils/helpers';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { QScreen } from './QScreen';
import { wrapperCache } from '../core/WrapperCache';
import { Edge, Visibility, WindowState } from '../QtEnums';

export class QWindow extends QObject<QWindowSignals> {
    constructor(native: NativeElement) {
        if (!checkIfNativeElement(native)) {
            throw new Error('QWindow cannot be initialised this way.');
        }
        super(native);
    }

    screen(): QScreen {
        return wrapperCache.get<QScreen>(QScreen, this.native.screen());
    }
    // *** Public Slots ***
    // CLASS: QWindow
    // TODO:    void 	alert(int msec)
    // TODO:    bool 	close()
    // TODO:    void 	hide()
    // TODO:    void 	lower()
    // TODO:    void 	raise()
    // TODO:    void 	requestActivate()
    // TODO:    void 	requestUpdate()
    // TODO:    void 	setGeometry(const QRect &rect)
    // TODO:    void 	setGeometry(int posx, int posy, int w, int h)
    // TODO:    void 	setHeight(int arg)
    // TODO:    void 	setMaximumHeight(int h)
    // TODO:    void 	setMaximumWidth(int w)
    // TODO:    void 	setMinimumHeight(int h)
    // TODO:    void 	setMinimumWidth(int w)
    // TODO:    void 	setVisible(bool visible)
    // TODO:    void 	setWidth(int arg)
    // TODO:    void 	setX(int arg)
    // TODO:    void 	setY(int arg)
    // TODO:    void 	show()
    setWindowState(state: WindowState): void {
        return this.native.setWindowState(state);
    }
    showFullScreen(): void {
        this.native.showFullScreen();
    }
    showMaximized(): void {
        this.native.showMaximized();
    }
    showMinimized(): void {
        this.native.showMinimized();
    }
    showNormal(): void {
        this.native.showNormal();
    }
    startSystemMove(): boolean {
        return this.native.startSystemMove();
    }
    startSystemResize(edges: Edge): boolean {
        return this.native.startSystemResize(edges);
    }
    windowState(): WindowState {
        return this.native.windowState();
    }
    visibility(): Visibility {
        return this.native.visibility();
    }
    setVisibility(visibility: Visibility): void {
        return this.native.setVisibility(visibility);
    }
    title(): string {
        return this.native.windowTitle();
    }
    setTitle(title: string): void {
        return this.native.setWindowTitle(title);
    }
}
wrapperCache.registerWrapper('QWindowWrap', QWindow);

export interface QWindowSignals extends QObjectSignals {
    screenChanged: (screen: QScreen) => void;
    visibilityChanged: (visibility: Visibility) => void;
    windowStateChanged: (windowState: WindowState) => void;
    windowTitleChanged: (title: string) => void;
}

registerNativeWrapFunction('QWindowWrap', (native: any) => {
    return wrapperCache.get<QWindow>(QWindow, native);
});
