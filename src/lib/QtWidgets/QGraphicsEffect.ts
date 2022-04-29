import { QObject, QObjectSignals } from '../QtCore/QObject';

/**

> This is the abstract base class of graphicseffect, providing their functionality.

* **This class is a JS wrapper around Qt's [QGraphicsEffect class](https://doc.qt.io/qt-5/qgraphicseffect.html)**

The QGraphicsEffect class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QGraphicsBlurEffect, QGraphicsColorizeEffect, QGraphicsDropShadowEffect, and QGraphicsOpacityEffect.

 */
export abstract class QGraphicsEffect<Signals extends QGraphicsEffectSignals> extends QObject<Signals> {
    setEnabled(enable: boolean): void {
        this.setProperty('enabled', enable);
    }
    isEnabled(): boolean {
        return this.property('enabled').toBool();
    }
}

export interface QGraphicsEffectSignals extends QObjectSignals {
    enabledChanged: (enabled: boolean) => void;
}
