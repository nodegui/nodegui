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
    static clipboard(): QClipboard | null {
        const clipboardNative = addon.QApplication.clipboard();
        if (clipboardNative == null) {
            return null;
        }
        return wrapperCache.get<QClipboard>(QClipboard, clipboardNative);
    }
    static instance(): QApplication {
        const nativeQApp = addon.QApplication.instance();
        return new QApplication(nativeQApp);
    }
    static primaryScreen(): QScreen | null {
        const screenNative = addon.QApplication.primaryScreen();
        if (screenNative == null) {
            return null;
        }
        return wrapperCache.get<QScreen>(QScreen, screenNative);
    }
    static screens(): QScreen[] {
        const screenNativeList = addon.QApplication.screens();
        return screenNativeList.map((screenNative: any) => wrapperCache.get<QScreen>(QScreen, screenNative));
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
