import { Component, NativeElement } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from '../QtCore/QVariant';
import { GlobalColor, BrushStyle } from '../QtEnums';
import { QColor } from './QColor';
import { QPixmap } from './QPixmap';

/**

> The QBrush class defines the fill pattern of shapes drawn by QPainter.

* **This class is a JS wrapper around Qt's [QBrush class](https://doc.qt.io/qt-5/qbrush.html)**

### Example

```javascript
const { QBrush } = require("@nodegui/nodegui");

const brush = new QBrush();
```
 */
export class QBrush extends Component {
    constructor(nativeOrGlobalColor?: NativeElement | GlobalColor | QColor, style = BrushStyle.SolidPattern) {
        let native: NativeElement;
        if (checkIfNativeElement(nativeOrGlobalColor)) {
            native = nativeOrGlobalColor as NativeElement;
        } else if (typeof nativeOrGlobalColor === 'number') {
            native = new addon.QBrush(nativeOrGlobalColor, style);
        } else if (nativeOrGlobalColor == null) {
            native = new addon.QBrush();
        } else {
            native = new addon.QBrush(nativeOrGlobalColor?.native, style);
        }
        super(native);
    }
    isOpaque(): boolean {
        return this.native.isOpaque();
    }
    setColor(color: QColor | GlobalColor): void {
        if (typeof color === 'number') {
            this.native.setColor(color);
        } else {
            this.native.setColor(color.native);
        }
    }
    color(): QColor {
        return new QColor(this.native.color());
    }
    setStyle(style: BrushStyle): void {
        this.native.setStyle(style);
    }
    style(): BrushStyle {
        return this.native.style();
    }
    setTexture(pixmap: QPixmap): void {
        this.native.setTexture(pixmap.native);
    }
    texture(): QPixmap {
        return new QPixmap(this.native.texture());
    }
    static fromQVariant(variant: QVariant): QBrush {
        return new QBrush(addon.QBrush.fromQVariant(variant.native));
    }
}
