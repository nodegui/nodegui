import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';

/**
 
> The QKeySequence class encapsulates a key sequence as used by shortcuts. .

* **This class is a JS wrapper around Qt's [QKeySequence class](https://doc.qt.io/qt-5/qkeysequence.html)**

### Example

```javascript
const { QKeySequence } = require("@nodegui/nodegui");

const keySequence = new QKeySequence(`Ctrl+L`);
```
 */
export class QKeySequence extends Component {
    native: NativeElement;
    constructor();
    constructor(keySequence: string);
    constructor(keySequence?: string) {
        super();
        if (typeof keySequence === 'string') {
            this.native = new addon.QKeySequence(keySequence);
        } else {
            this.native = new addon.QKeySequence();
        }
    }
    count(): number {
        return this.native.count();
    }
}
