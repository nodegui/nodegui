import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QClipboard } from './QClipboard';
import { QStyle } from './QStyle';
import { QObjectSignals, NodeObject } from '../QtCore/QObject';
import { QDesktopWidget } from '../QtWidgets/QDesktopWidget';
import { QPalette } from './QPalette';
import { StyleSheet } from '../core/Style/StyleSheet';
import memoizeOne from 'memoize-one';

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
export class QApplication extends NodeObject<QApplicationSignals> {
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(arg?: NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QApplication();
        }
        super(native);
        this.native = native;

        this.setStyleSheet = memoizeOne(this.setStyleSheet);
    }
    static clipboard(): QClipboard {
        return new QClipboard(addon.QApplication.clipboard());
    }
    processEvents(): void {
        this.native.processEvents();
    }
    exec(): number {
        return this.native.exec();
    }
    static instance(): QApplication {
        const nativeQApp = addon.QApplication.instance();
        return new QApplication(nativeQApp);
    }
    quit(): number {
        return this.native.quit();
    }
    exit(exitCode: number): number {
        return this.native.exit(exitCode);
    }
    setQuitOnLastWindowClosed(quit: boolean): void {
        this.native.setQuitOnLastWindowClosed(quit);
    }
    quitOnLastWindowClosed(): boolean {
        return this.native.quitOnLastWindowClosed();
    }
    palette(): QPalette {
        return new QPalette(this.native.palette());
    }
    setStyleSheet(styleSheet: string): void {
        const preparedSheet = StyleSheet.create(styleSheet);
        this.native.setStyleSheet(preparedSheet);
    }
    static setStyle(style: QStyle): void {
        addon.QApplication.setStyle(style.native);
    }
    static style(): QStyle {
        return new QStyle(addon.QApplication.style());
    }
    static desktop(): QDesktopWidget {
        return new QDesktopWidget();
    }
}

export interface QApplicationSignals extends QObjectSignals {
    focusWindowChanged: () => void;
}
