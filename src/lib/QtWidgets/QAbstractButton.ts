import { NodeWidget } from './QWidget';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';

export abstract class QAbstractButton<Signals> extends NodeWidget<Signals> {
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
