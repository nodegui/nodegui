import { EventWidget } from '../../core/EventWidget';

export abstract class QObject extends EventWidget {
    inherits(className: string) {
        return this.native.inherits(className);
    }
}
