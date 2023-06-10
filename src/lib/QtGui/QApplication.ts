import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QClipboard } from './QClipboard';
import { QStyle } from './QStyle';
import { QObjectSignals, QObject } from '../QtCore/QObject';
import { QPalette } from './QPalette';
import { StyleSheet } from '../core/Style/StyleSheet';
import memoizeOne from 'memoize-one';
import { QScreen } from './QScreen';
import { wrapperCache } from '../core/WrapperCache';
import { QIcon } from './QIcon';

/**

> QApplication is the root object for the entire application. It manages app level settings.

* **This class is a JS wrapper around Qt's [QApplication class](https://doc.qt.io/qt-5/qapplication.html)**

The QApplication class manages the GUI application's control flow and main settings. In NodeGui you will never create an instance of it manually. NodeGui's internal runtime `Qode` does it for you on app start. You can access the initialised QApplication though if needed.

### Example

```js
const { QApplication } = require("@nodegui/nodegui");

const qApp = QApplication.instance();
qApp.quit();
```
 */
export class QApplication extends QObject<QApplicationSignals> {
    constructor(arg?: QObject | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QObject;
            native = new addon.QApplication(parent.native);
        } else {
            native = new addon.QApplication();
        }
        super(native);
        this.setStyleSheet = memoizeOne(this.setStyleSheet);
    }

    devicePixelRatio(): number {
        return this.native.devicePixelRatio();
    }
    exec(): number {
        return this.native.exec();
    }
    exit(exitCode: number): number {
        return this.native.exit(exitCode);
    }
    palette(): QPalette {
        return new QPalette(this.native.palette());
    }
    processEvents(): void {
        this.native.processEvents();
    }
    quit(): number {
        return this.native.quit();
    }
    quitOnLastWindowClosed(): boolean {
        return this.native.quitOnLastWindowClosed();
    }
    setQuitOnLastWindowClosed(quit: boolean): void {
        this.native.setQuitOnLastWindowClosed(quit);
    }
    setStyleSheet(styleSheet: string, postprocess = true): void {
        if (postprocess) {
            const preparedSheet = StyleSheet.create(styleSheet);
            this.native.setStyleSheet(preparedSheet);
        } else {
            this.native.setStyleSheet(styleSheet);
        }
    }

    static instance(): QApplication {
        const nativeQApp = addon.QApplication.instance();
        return new QApplication(nativeQApp);
    }

    // CLASS: QApplication
    // TODO: QWindowList 	allWindows()
    static applicationDisplayName(): string {
        return addon.QApplication.applicationDisplayName();
    }
    // TODO: Qt::ApplicationState 	applicationState()
    // TODO: void 	changeOverrideCursor(const QCursor &cursor)
    static clipboard(): QClipboard | null {
        const clipboardNative = addon.QApplication.clipboard();
        if (clipboardNative == null) {
            return null;
        }
        return wrapperCache.get<QClipboard>(QClipboard, clipboardNative);
    }
    static desktopFileName(): string {
        return addon.QApplication.desktopFileName();
    }
    static desktopSettingsAware(): boolean {
        return addon.QApplication.desktopSettingsAware();
    }
    // TODO: int 	exec()
    // TODO: QObject *	focusObject()
    // TODO: QWindow *	focusWindow()
    // TODO: QFont 	font()
    // TODO: Qt::HighDpiScaleFactorRoundingPolicy 	highDpiScaleFactorRoundingPolicy()
    // TODO: QInputMethod *	inputMethod()
    // TODO: bool 	isLeftToRight()
    // TODO: bool 	isRightToLeft()
    // TODO: Qt::KeyboardModifiers 	keyboardModifiers()
    // TODO: Qt::LayoutDirection 	layoutDirection()
    // TODO: QWindow *	modalWindow()
    // TODO: Qt::MouseButtons 	mouseButtons()
    // TODO: QCursor *	overrideCursor()
    // TODO: QPalette 	palette()
    static platformName(): string {
        return addon.QApplication.platformName();
    }
    static primaryScreen(): QScreen | null {
        const screenNative = addon.QApplication.primaryScreen();
        if (screenNative == null) {
            return null;
        }
        return wrapperCache.get<QScreen>(QScreen, screenNative);
    }
    // TODO: Qt::KeyboardModifiers 	queryKeyboardModifiers()
    // TODO: bool 	quitOnLastWindowClosed()
    // TODO: void 	restoreOverrideCursor()
    // TODO: QScreen *	screenAt(const QPoint &point)
    static screens(): QScreen[] {
        const screenNativeList = addon.QApplication.screens();
        return screenNativeList.map((screenNative: any) => wrapperCache.get<QScreen>(QScreen, screenNative));
    }
    static setApplicationDisplayName(name: string): void {
        addon.QApplication.setApplicationDisplayName(name);
    }
    static setDesktopFileName(name: string): void {
        addon.QApplication.setDesktopFileName(name);
    }
    static setDesktopSettingsAware(on: boolean): void {
        addon.QApplication.setDesktopSettingsAware(on);
    }

    // CLASS: QApplication
    // TODO: void 	setFont(const QFont &font)
    // TODO: void 	setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy policy)
    // TODO: void 	setLayoutDirection(Qt::LayoutDirection direction)
    // TODO: void 	setOverrideCursor(const QCursor &cursor)
    // TODO: void 	setPalette(const QPalette &pal)
    // TODO: void 	setQuitOnLastWindowClosed(bool quit)

    static setWindowIcon(icon: QIcon): void {
        addon.QApplication.setWindowIcon(icon.native);
    }
    // TODO: QStyleHints *	styleHints()
    // TODO: void 	sync()
    // TODO: QWindow *	topLevelAt(const QPoint &pos)
    // TODO: QWindowList 	topLevelWindows()
    static windowIcon(): QIcon {
        return addon.QApplication.windowIcon();
    }
    static setStyle(style: QStyle): void {
        addon.QApplication.setStyle(style.native);
    }
    static style(): QStyle {
        return new QStyle(addon.QApplication.style());
    }
}
wrapperCache.registerWrapper('QApplicationWrap', QApplication);

export interface QApplicationSignals extends QObjectSignals {
    applicationDisplayNameChanged: () => void;
    focusWindowChanged: () => void;
    lastWindowClosed: () => void;
    primaryScreenChanged: (screen: QScreen) => void;
    screenAdded: (screen: QScreen) => void;
    screenRemoved: (screen: QScreen) => void;
}
