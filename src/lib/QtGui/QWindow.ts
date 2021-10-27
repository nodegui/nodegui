import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QScreen } from './QScreen';
import { wrapperCache } from '../core/WrapperCache';

export class QWindow extends NodeObject<QWindowSignals> {
    native: NativeElement;
    constructor(native: NativeElement) {
        super(native);

        if (checkIfNativeElement(native)) {
            this.native = native;
        } else {
            throw new Error('QWindow cannot be initialised this way.');
        }
    }

    screen(): QScreen {
        return wrapperCache.get<QScreen>(QScreen, this.native.screen());
    }
}

export interface QWindowSignals extends QObjectSignals {
    screenChanged: () => void;
}
