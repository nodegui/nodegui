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
    setPitch(pitch: number): void {
        this.native.setPitch(pitch);
    }
    pitch(): number {
        return this.native.pitch();
    }
    setRate(rate: number): void {
        this.native.setRate(rate);
    }
    rate(): number {
        return this.native.rate();
    }
    setVolume(volume: number): void {
        this.native.setVolume(volume);
    }
    volume(): number {
        return this.native.volume();
    }
}

export type QTextToSpeechSignals = QWidgetSignals;
