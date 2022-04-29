import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { Component, NativeElement } from '../core/Component';
import { QVariant } from '../QtCore/QVariant';

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
    constructor();
    constructor(native: NativeElement);
    constructor(keySequence: string);
    constructor(arg?: string | NativeElement) {
        let native: NativeElement;
        if (typeof arg === 'string') {
            const keySequence = arg;
            native = new addon.QKeySequence(keySequence);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QKeySequence();
        }
        super(native);
    }
    count(): number {
        return this.native.count();
    }
    isEmpty(): boolean {
        return this.native.isEmpty();
    }
    matches(seq: QKeySequence): SequenceMatch {
        return this.native.matches(seq.native);
    }
    toString(format: SequenceFormat): string {
        return this.native.toString$(format);
    }
    static fromQVariant(variant: QVariant): QKeySequence {
        return new QKeySequence(addon.QKeySequence.fromQVariant(variant.native));
    }
}

export enum SequenceMatch {
    NoMatch,
    PartialMatch,
    ExactMatch,
}

export enum SequenceFormat {
    NativeText,
    PortableText,
}
