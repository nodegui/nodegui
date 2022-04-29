import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QUrl } from '../QtCore/QUrl';
import { NodeTextEdit, QTextEditSignals } from './QTextEdit';

/**

> Create and control text browser.

* **This class is a JS wrapper around Qt's [QTextBrowser class](https://doc.qt.io/qt-5/qtextbrowser.html)**

A `QTextBrowser` provides ability to add and manipulate native text browser widgets.

### Example

```javascript
const { QTextBrowser } = require("@nodegui/nodegui");

const textBrowser = new QTextBrowser();
```

 */
export class QTextBrowser extends NodeTextEdit<QTextBrowserSignals> {
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QTextBrowser(parent.native);
        } else {
            native = new addon.QTextBrowser();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    setOpenExternalLinks(open: boolean): void {
        this.setProperty('openExternalLinks', open);
    }
    openExternalLinks(): boolean {
        return this.property('openExternalLinks').toBool();
    }
    setOpenLinks(open: boolean): void {
        this.setProperty('openLinks', open);
    }
    openLinks(): boolean {
        return this.property('openLinks').toBool();
    }
    setSource(name: QUrl): void {
        this.setProperty('source', name.native);
    }
    source(): QUrl {
        const name = this.property('source');
        return QUrl.fromQVariant(name);
    }
    backwardHistoryCount(): number {
        return this.native.backwardHistoryCount();
    }
    clearHistory(): void {
        this.native.clearHistory();
    }
    forwardHistoryCount(): number {
        return this.native.forwardHistoryCount();
    }
    historyTitle(i: number): string {
        return this.native.historyTitle(i);
    }
    historyUrl(): QUrl {
        return new QUrl(this.native.historyUrl());
    }
    isBackwardAvailable(): boolean {
        return this.native.isBackwardAvailable();
    }
    isForwardAvailable(): boolean {
        return this.native.isForwardAvailable();
    }
    backward(): void {
        this.native.backward();
    }
    forward(): void {
        this.native.forward();
    }
    home(): void {
        this.native.home();
    }
    reload(): void {
        this.native.reload();
    }
}

export interface QTextBrowserSignals extends QTextEditSignals {
    anchorClicked: (link: QUrl) => void;
    backwardAvailable: (available: boolean) => void;
    forwardAvailable: (available: boolean) => void;
    highlighted: (link: string) => void;
    historyChanged: () => void;
    sourceChanged: (src: QUrl) => void;
}
