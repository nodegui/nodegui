import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QClipboard } from './QClipboard';
import { QStyle } from './QStyle';

type arg = NativeElement;
export class QApplication extends Component {
    native: NativeElement;
    constructor(arg?: arg) {
        super();
        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QApplication();
        }
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
    static style(): QStyle {
        return new QStyle(addon.QApplication.style());
    }
}
