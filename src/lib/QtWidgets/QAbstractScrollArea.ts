import { QWidget } from './QWidget';
import { QFrame, QFrameSignals } from './QFrame';
import { ScrollBarPolicy } from '../QtEnums/ScrollBarPolicy';
import { QSize } from '../QtCore/QSize';
import { QScrollBar } from './QScrollBar';
import { wrapperCache } from '../core/WrapperCache';

/**

> Abstract class to add functionalities common to all scrollarea based widgets.

**This class implements all methods, properties of Qt's [QAbstractScrollArea class](https://doc.qt.io/qt-5/qabstractscrollarea.html) so that it can be inherited by all scroll based widgets**

`QAbstractScrollArea` is an abstract class and hence no instances of the same should be created. It exists so that we can add similar functionalities to all scrollable widget's easily. If you wish to create a scrollarea use [QScrollArea](QScrollArea.md) instead.

**QAbstractScrollArea is the base class for all widgets.**

QAbstractScrollArea will list all methods and properties that are common to all scrollable widgets in the NodeGui world.

 */
export abstract class QAbstractScrollArea<Signals extends QAbstractScrollAreaSignals> extends QFrame<Signals> {
    setViewport(widget: QWidget): void {
        this.native.setViewport(widget.native);
    }
    viewport(): QWidget {
        return wrapperCache.getWrapper(this.native.viewport()) as QWidget;
    }
    maximumViewportSize(): QSize {
        return this.native.maximumViewportSize();
    }
    setHorizontalScrollBar(scrollBar: QScrollBar): void {
        this.native.setHorizontalScrollBar(scrollBar.native);
    }
    setHorizontalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('horizontalScrollBarPolicy', policy);
    }
    setVerticalScrollBar(scrollBar: QScrollBar): void {
        this.native.setVerticalScrollBar(scrollBar.native);
    }
    setVerticalScrollBarPolicy(policy: ScrollBarPolicy): void {
        this.native.setProperty('verticalScrollBarPolicy', policy);
    }
}

export type QAbstractScrollAreaSignals = QFrameSignals;
