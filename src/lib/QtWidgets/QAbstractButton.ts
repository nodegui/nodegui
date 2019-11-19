import { NodeWidget } from './QWidget';
import { QIcon } from '../QtGui/QIcon';

export abstract class QAbstractButton extends NodeWidget {
    setText(text: string): void {
        this.native.setText(text);
    }
    setIcon(icon: QIcon): void {
        this.native.setIcon(icon.native);
    }
}
