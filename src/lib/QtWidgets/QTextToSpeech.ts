import { NativeElement } from '../core/Component';
import { NodeWidget } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

export class QTextToSpeech extends NodeObject<QTextToSpeechSignals> {
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
    pause(): void {
        this.native.pause();
    }
    resume(): void {
        this.native.resume();
    }
    stop(): void {
        this.native.stop();
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
    state(): State {
        return this.native.state();
    }
}

export enum State {
    Ready,
    Speaking,
    Paused,
    BackendError,
}
export interface QTextToSpeechSignals extends QObjectSignals {
    // localeChanged: (checked: QLocale) => void;
    pitchChanged: (pitch: number) => void;
    rateChanged: (rate: number) => void;
    // volumeChanged: (volume: number) => void; // erro to bind
    stateChanged: (state: State) => void;
    // voiceChanged: (voice: QVoice) => void;
}
