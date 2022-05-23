import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject } from '../QtCore/QObject';
import { QGraphicsEffect, QGraphicsEffectSignals } from './QGraphicsEffect';
import { QColor } from '../QtGui/QColor';
import { wrapperCache } from '../core/WrapperCache';

/**

> The QGraphicsDropShadowEffect class provides a drop shadow effect.

* **This class is a JS wrapper around Qt's [QGraphicsDropShadowEffect class](https://doc.qt.io/qt-5/qgraphicsdropshadoweffect.html)**

A drop shadow effect renders the source with a drop shadow.

### Example

```javascript
const { QGraphicsDropShadowEffect } = require("@nodegui/nodegui");

const shadow = new QGraphicsDropShadowEffect();
shadow.setBlurRadius(8);
```
 */
export class QGraphicsDropShadowEffect extends QGraphicsEffect<QGraphicsDropShadowEffectSignals> {
    constructor(arg?: QObject | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QObject;
            native = new addon.QGraphicsDropShadowEffect(parent.native);
        } else {
            native = new addon.QGraphicsDropShadowEffect();
        }
        super(native);
    }
    setBlurRadius(blurRadius: number): void {
        this.setProperty('blurRadius', blurRadius);
    }
    blurRadius(): number {
        return this.property('blurRadius').toDouble();
    }
    setColor(color: QColor): void {
        this.setProperty('color', color.native);
    }
    color(): QColor {
        return QColor.fromQVariant(this.property('color'));
    }
    setXOffset(dx: number): void {
        this.setProperty('xOffset', dx);
    }
    xOffset(): number {
        return this.property('xOffset').toDouble();
    }
    setYOffset(dy: number): void {
        this.setProperty('yOffset', dy);
    }
    yOffset(): number {
        return this.property('yOffset').toDouble();
    }
}
wrapperCache.registerWrapper('QGraphicsDropShadowEffectWrap', QGraphicsDropShadowEffect);

export interface QGraphicsDropShadowEffectSignals extends QGraphicsEffectSignals {
    blurRadiusChanged: (blurRadius: number) => void;
}
