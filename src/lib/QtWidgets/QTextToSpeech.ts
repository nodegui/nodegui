import { NativeElement } from '../core/Component';
import { NodeWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';

export class QTextToSpeech extends NodeWidget<QTextToSpeechSignals> {
    native: NativeElement;
    constructor() {
        const native = new addon.QTextToSpeech();
        super(native);
        this.native = native;
    }
    say(textTarget: string): void {
        this.native.say(textTarget);
    }
}

export type QTextToSpeechSignals = QWidgetSignals;
