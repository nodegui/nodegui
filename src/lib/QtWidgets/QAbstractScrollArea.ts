import { NodeWidget, QWidget, QWidgetSignals } from './QWidget';
import { ScrollBarPolicy } from '../QtEnums/ScrollBarPolicy';

/**
 
> Abstract class to add functionalities common to all scrollarea based widgets.

**This class implements all methods, properties of Qt's [QAbstractScrollArea class](https://doc.qt.io/qt-5/qabstractscrollarea.html) so that it can be inherited by all scroll based widgets**

`QAbstractScrollArea` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all scrollable widget's easily. If you wish to create a scrollarea use [QScrollArea](api/QScrollArea.md) instead.

**QAbstractScrollArea is the base class for all widgets.**

QAbstractScrollArea will list all methods and properties that are common to all scrollable widgets in the NodeGui world.

 */

export abstract class QAbstractScrollArea<Signals extends QAbstractScrollAreaSignals> extends NodeWidget<Signals> {
    viewportWidget?: NodeWidget<any>;
    setViewport(widget: NodeWidget<any>): void {
        this.viewportWidget = widget;
        this.native.setViewport(widget.native);
    }
    viewport(): QWidget {
        if (!this.viewportWidget) {
            this.viewportWidget = new QWidget(this.native.viewport());
        }
        return this.viewportWidget;
    }
    setHorizontalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('horizontalScrollBarPolicy', policy);
    }
    setVerticalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('verticalScrollBarPolicy', policy);
    }
}

export type QAbstractScrollAreaSignals = QWidgetSignals;
