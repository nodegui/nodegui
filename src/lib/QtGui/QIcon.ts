import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QPixmap } from './QPixmap';
import { QVariant } from '../QtCore/QVariant';
import { checkIfNativeElement } from '../utils/helpers';

/**
 
> The QIcon class provides scalable icons in different modes and states.

* **This class is a JS wrapper around Qt's [QIcon class](https://doc.qt.io/qt-5/qicon.html)**

### Example

```javascript
const { QIcon } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const icon = new QIcon(imageUrl);
```
 */
export class QIcon extends Component {
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(filePath: string);
    constructor(arg?: string | NativeElement) {
        super();
        if (typeof arg === 'string') {
            const imagePath = arg;
            this.native = new addon.QIcon(imagePath);
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QIcon();
        }
    }
    pixmap(width: number, height: number, mode?: QIconMode, state?: QIconState): QPixmap {
        let nativePixmap;
        if (mode && state) {
            nativePixmap = this.native.pixmap(width, height, mode, state);
        } else if (mode) {
            nativePixmap = this.native.pixmap(width, height, mode);
        } else {
            nativePixmap = this.native.pixmap(width, height);
        }
        return new QPixmap(nativePixmap);
    }
    isMask(): boolean {
        return this.native.isMask();
    }
    setIsMask(isMask: boolean): void {
        this.native.setIsMask(isMask);
    }
    cacheKey(): number {
        return this.native.cacheKey();
    }
    static fromQVariant(variant: QVariant): QIcon {
        return new QIcon(addon.QIcon.fromQVariant(variant.native));
    }
}

export enum QIconMode {
    Normal,
    Disabled,
    Active,
    Selected,
}
export enum QIconState {
    Off,
    On,
}
