import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject } from '../QtCore/QObject';
import { QGraphicsEffect, QGraphicsEffectSignals } from './QGraphicsEffect';
import { wrapperCache } from '../core/WrapperCache';

/**

> The QGraphicsBlurEffect class provides a blur effect.

* **This class is a JS wrapper around Qt's [QGraphicsBlurEffect class](https://doc.qt.io/qt-5/qgraphicsblureffect.html)**

A blur effect blurs the source. This effect is useful for reducing details, such as when the source loses focus and you want to draw attention to other elements.

### Example

```javascript
const { QGraphicsBlurEffect } = require("@nodegui/nodegui");

const blur = new QGraphicsBlurEffect();
blur.setBlurRadius(8);
```
 */
export class QGraphicsBlurEffect extends QGraphicsEffect<QGraphicsBlurEffectSignals> {
    constructor(arg?: QObject | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QObject;
            native = new addon.QGraphicsBlurEffect(parent.native);
        } else {
            native = new addon.QGraphicsBlurEffect();
        }
        super(native);
    }
    setBlurHints(hints: BlurHint): void {
        this.setProperty('blurHints', hints);
    }
    blurHints(): BlurHint {
        return this.property('blurHints').toInt();
    }
    setBlurRadius(blurRadius: number): void {
        this.setProperty('blurRadius', blurRadius);
    }
    blurRadius(): number {
        return this.property('blurRadius').toDouble();
    }
}
wrapperCache.registerWrapper('QGraphicsBlurEffectWrap', QGraphicsBlurEffect);

export enum BlurHint {
    PerformanceHint = 0x00,
    QualityHint = 0x01,
    AnimationHint = 0x02,
}

export interface QGraphicsBlurEffectSignals extends QGraphicsEffectSignals {
    blurHintsChanged: (hints: BlurHint) => void;
    blurRadiusChanged: (radius: number) => void;
}
