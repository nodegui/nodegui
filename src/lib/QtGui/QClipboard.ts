import { NativeElement } from '../core/Component';
import { checkIfNativeElement, registerNativeWrapFunction } from '../utils/helpers';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { QPixmap } from './QPixmap';
import { wrapperCache } from '../core/WrapperCache';

/**

> The QClipboard class provides access to the window system clipboard.

* **This class is a JS wrapper around Qt's [QClipboard class](https://doc.qt.io/qt-5/QClipboard.html)**

### Example

```javascript
const {
  QClipboard,
  QClipboardMode,
  QApplication
} = require("@nodegui/nodegui");

const clipboard = QApplication.clipboard();
const text = clipboard.text(QClipboardMode.Clipboard);
```
 */
export class QClipboard extends QObject<QClipboardSignals> {
    constructor(native: NativeElement) {
        if (!checkIfNativeElement(native)) {
            throw new Error('QClipboard cannot be initialised this way. Use QApplication::clipboard()');
        }
        super(native);
    }
    clear(mode = QClipboardMode.Clipboard): void {
        this.native.clear(mode);
    }
    setText(text: string, mode = QClipboardMode.Clipboard): void {
        this.native.setText(text, mode);
    }
    text(mode = QClipboardMode.Clipboard): string {
        return this.native.text(mode);
    }
    setPixmap(pixmap: QPixmap, mode = QClipboardMode.Clipboard): void {
        this.native.setPixmap(pixmap.native, mode);
    }
    pixmap(mode: QClipboardMode): QPixmap {
        return new QPixmap(this.native.pixmap(mode));
    }
}

export enum QClipboardMode {
    Clipboard = 0,
    Selection = 1,
    FindBuffer = 2,
}

export interface QClipboardSignals extends QObjectSignals {
    changed: (mode: QClipboardMode) => void;
    dataChanged: () => void;
    findBufferChanged: () => void;
    selectionChanged: () => void;
}

registerNativeWrapFunction('QClipboardWrap', (native: any) => {
    return wrapperCache.get<QClipboard>(QClipboard, native);
});
