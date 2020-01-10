import { NodeWidget, QWidgetSignals } from './QWidget';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';

/**
 
> This is the abstract base class of button widgets, providing their functionality.

* **This class is a JS wrapper around Qt's [QAbstractButton class](https://doc.qt.io/qt-5/qabstractbutton.html)**

The QAbstractButton class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QCheckBox, QPushButton, QRadioButton, and QToolButton.

 */
export abstract class QAbstractButton<Signals extends QAbstractButtonSignals> extends NodeWidget<Signals> {
    setText(text: string): void {
        this.native.setText(text);
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon.native);
    }
    setIconSize(iconSize: QSize): void {
        this.setProperty('iconSize', iconSize.native);
    }
    iconSize(): QSize {
        const iconSize = this.property('iconSize');
        return QSize.fromQVariant(iconSize);
    }
}
export interface QAbstractButtonSignals extends QWidgetSignals {
    clicked: (checked: boolean) => void;
    pressed: () => void;
    released: () => void;
    toggled: (checked: boolean) => void;
}
