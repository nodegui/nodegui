import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { Component, NativeElement } from '../core/Component';
import { QRect } from '../QtCore/QRect';

/**
 
> The QPicture class is a paint device that records and replays QPainter commands.

* **This class is a JS wrapper around Qt's [QPicture class](https://doc.qt.io/qt-5/qpicture.html)**

### Example

```javascript
const { QPicture } = require("@nodegui/nodegui");

const picture = new QPicture();
```
 */
export class QPicture extends Component {
    constructor();
    constructor(native: NativeElement);
    constructor(formatVersion: number);
    constructor(arg?: number | NativeElement) {
        let native: NativeElement;
        if (typeof arg === 'number') {
            const formatVersion = arg;
            native = new addon.QPicture(formatVersion);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QPicture();
        }
        super(native);
    }
    setBoundingRect(r: QRect): void {
        this.native.setBoundingRect(r.native);
    }
    boundingRect(): QRect {
        return new QRect(this.native.boundingRect());
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    load(fileName: string): boolean {
        return this.native.load(fileName);
    }
    save(fileName: string): boolean {
        return this.native.save(fileName);
    }
    size(): number {
        return this.native.size();
    }
}
