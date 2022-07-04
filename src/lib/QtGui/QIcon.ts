import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QPixmap } from './QPixmap';
import { QVariant } from '../QtCore/QVariant';
import { checkIfNativeElement } from '../utils/helpers';
import { QSize } from '../QtCore/QSize';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';
import { QPainter } from '../QtWidgets/QPainter';

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
    constructor();
    constructor(native: NativeElement);
    constructor(filePath: string);
    constructor(pixmap: QPixmap);
    constructor(arg?: string | NativeElement | QPixmap) {
        let native: NativeElement;
        if (typeof arg === 'string') {
            const imagePath = arg;
            native = new addon.QIcon(imagePath);
        } else if (arg instanceof QPixmap) {
            native = new addon.QIcon(arg.native);
        } else if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QIcon();
        }
        super(native);
    }

    // *** Public Functions ***
    actualSize(size: QSize = null, mode = QIconMode.Normal, state = QIconState.Off): QSize {
        return new QSize(this.native.actualSize(size ?? new QSize(), mode, state));
    }
    // TODO: QSize 	actualSize(QWindow *window, const QSize &size, QIcon::Mode mode = Normal, QIcon::State state = Off) const
    addFile(fileName: string, size: QSize = null, mode = QIconMode.Normal, state = QIconState.Off): void {
        this.native.addFile(fileName, (size ?? new QSize()).native, mode, state);
    }
    addPixmap(pixmap: QPixmap, mode = QIconMode.Normal, state = QIconState.Off): void {
        this.native.addPixmap(pixmap.native, mode, state);
    }
    availableSizes(mode = QIconMode.Normal, state = QIconState.Off): QSize[] {
        const methodResult = this.native.availableSizes(mode, state);
        return methodResult.map((item: any) => new QSize(item));
    }
    cacheKey(): number {
        return this.native.cacheKey();
    }
    isMask(): boolean {
        return this.native.isMask();
    }
    isNull(): boolean {
        return this.native.isNull();
    }
    name(): string {
        return this.native.name();
    }
    // TODO: void 	paint(QPainter *painter, const QRect &rect, Qt::Alignment alignment = Qt::AlignCenter, QIcon::Mode mode = Normal, QIcon::State state = Off) const
    paint(
        painter: QPainter,
        x: number,
        y: number,
        w: number,
        h: number,
        alignment = AlignmentFlag.AlignCenter,
        mode = QIconMode.Normal,
        state = QIconState.Off,
    ): void {
        this.native.paint(painter.native, x, y, w, h, alignment, mode, state);
    }
    // TODO: QPixmap 	pixmap(const QSize &size, QIcon::Mode mode = Normal, QIcon::State state = Off) const
    pixmap(width: number, height: number, mode = QIconMode.Normal, state = QIconState.Off): QPixmap {
        const nativePixmap = this.native.pixmap(width, height, mode, state);
        return new QPixmap(nativePixmap);
    }
    // TODO: QPixmap 	pixmap(int extent, QIcon::Mode mode = Normal, QIcon::State state = Off) const
    // TODO: QPixmap 	pixmap(QWindow *window, const QSize &size, QIcon::Mode mode = Normal, QIcon::State state = Off) const
    setIsMask(isMask: boolean): void {
        this.native.setIsMask(isMask);
    }
    swap(other: QIcon): void {
        this.native.swap(other.native);
    }
    // TODO: QVariant 	operator QVariant() const
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
