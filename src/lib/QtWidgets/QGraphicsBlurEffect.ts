import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { NodeObject } from '../QtCore/QObject';
import { QGraphicsEffect, QGraphicsEffectSignals } from './QGraphicsEffect';

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
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(parent: NodeObject<any>);
    constructor(arg?: NodeObject<any> | NativeElement) {
        let native: NativeElement;
        if (arg) {
            if (checkIfNativeElement(arg)) {
                native = arg as NativeElement;
            } else {
                native = new addon.QGraphicsBlurEffect(arg.native);
            }
        } else {
            native = new addon.QGraphicsBlurEffect();
        }
        super(native);
        this.native = native;
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

export enum BlurHint {
    PerformanceHint = 0x00,
    QualityHint = 0x01,
    AnimationHint = 0x02,
}

export interface QGraphicsBlurEffectSignals extends QGraphicsEffectSignals {
    blurHintsChanged: (hints: BlurHint) => void;
    blurRadiusChanged: (radius: number) => void;
}
