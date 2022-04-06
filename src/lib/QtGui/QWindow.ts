import { NativeElement } from '../core/Component';
import { checkIfNativeElement, registerNativeWrapFunction } from '../utils/helpers';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QScreen } from './QScreen';
import { wrapperCache } from '../core/WrapperCache';
import { Edge, Visibility, WindowState } from '../QtEnums';

export class QWindow extends NodeObject<QWindowSignals> {
    native: NativeElement;
    constructor(native: NativeElement) {
        super(native);

        if (checkIfNativeElement(native)) {
            this.native = native;
        } else {
            throw new Error('QWindow cannot be initialised this way.');
        }
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
    // TODO:    void 	setTitle(const QString &)
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
}

export interface QWindowSignals extends QObjectSignals {
    screenChanged: (screen: QScreen) => void;
    visibilityChanged: (visibility: Visibility) => void;
}

registerNativeWrapFunction('QWindowWrap', (native: any) => {
    return wrapperCache.get<QWindow>(QWindow, native);
});
