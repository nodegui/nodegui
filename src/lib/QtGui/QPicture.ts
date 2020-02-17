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
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(formatVersion: number);
    constructor(arg?: number | NativeElement) {
        super();
        if (typeof arg === 'number') {
            const formatVersion = arg;
            this.native = new addon.QPicture(formatVersion);
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QPicture();
        }
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
