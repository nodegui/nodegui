import { NativeElement } from '../core/Component';
import { NodeWidget, QWidgetSignals } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';

export class QTextToSpeech extends NodeWidget<QTextToSpeechSignals> {
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NativeElement | NodeWidget<any>) {
        let native;
        if (checkIfNativeElement(parent)) {
            native = parent as NativeElement;
        } else if (parent) {
            native = new addon.QTextToSpeech(parent.native);
        } else {
            native = new addon.QTextToSpeech();
        }
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
