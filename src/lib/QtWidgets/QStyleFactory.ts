import addon from '../utils/addon';
import { QStyle } from '../QtGui/QStyle';

export class QStyleFactory {
    static create(key: string): QStyle | null {
        const qstyle = addon.QStyleFactory_create(key);
        if (qstyle == null) {
            return null;
        }
        return new QStyle(qstyle);
    }
    static keys(): string[] {
        return addon.QStyleFactory_keys();
    }
}
