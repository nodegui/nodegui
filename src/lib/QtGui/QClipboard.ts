import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QPixmap } from './QPixmap';

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
export class QClipboard extends Component {
    native: NativeElement;
    constructor(native: NativeElement) {
        super();
        if (checkIfNativeElement(native)) {
            this.native = native;
        } else {
            throw new Error('QClipboard cannot be initialised this way. Use QApplication::clipboard()');
        }
    }
    clear(mode: QClipboardMode): void {
        this.native.clear(mode);
    }
    setText(text: string, mode: QClipboardMode): void {
        this.native.setText(text, mode);
    }
    text(mode: QClipboardMode): string {
        return this.native.text(mode);
    }
    setPixmap(pixmap: QPixmap, mode: QClipboardMode): void {
        this.native.setPixmap(pixmap.native, mode);
    }
    pixmap(mode: QClipboardMode): QPixmap {
        return new QPixmap(this.native.pixmap(mode));
    }
}

export enum QClipboardMode {
    Clipboard,
    Selection,
    FindBuffer,
}
