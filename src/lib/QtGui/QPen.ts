import { Component, NativeElement } from '../core/Component';
import addon from '../utils/addon';
import { GlobalColor, PenStyle, PenCapStyle } from '../QtEnums';
import { QColor } from './QColor';

/**
 
> The QPen class defines the outline of shapes drawn by QPainter.

* **This class is a JS wrapper around Qt's [QPen class](https://doc.qt.io/qt-5/qpen.html)**

### Example

```javascript
const { QPen } = require("@nodegui/nodegui");

const pen = new QPen();
```
 */
export class QPen extends Component {
    native: NativeElement;
    constructor() {
        super();
        this.native = new addon.QPen();
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
    setStyle(style: PenStyle): void {
        this.native.setStyle(style);
    }
    style(): PenStyle {
        return this.native.style();
    }
    setCapStyle(style: PenCapStyle): void {
        this.native.setCapStyle(style);
    }
    setWidth(width: number): void {
        this.native.setWidth(width);
    }
}
