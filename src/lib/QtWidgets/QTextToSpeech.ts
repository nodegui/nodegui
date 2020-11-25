import { NativeElement } from '../core/Component';
import { NodeWidget } from './QWidget';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';

/**
 
> QTextToSpeech is a class that provides a convenient access to text-to-speech engines..

* **This class is a JS wrapper around Qt's [QDesktopWidget Class](https://doc.qt.io/qt-5/qtexttospeech.html)**

Use say() to start synthesizing text. To select between the available voices use setVoice(). The languages and voices depend on the available synthesizers on each platform. On Linux, speech-dispatcher is used by default.

### Example

```js
const tts = new QTextToSpeech();

console.log('Engines', QTextToSpeech.availableEngines());

console.log(tts.availableVoices());

tts.addEventListener('pitchChanged', (n) => {
    console.log('(EVENT) Pitch After ' + n);
});

tts.addEventListener('rateChanged', (n) => {
    console.log('(EVENT) Rate After ' + n);
});

tts.addEventListener('stateChanged', (n: State) => {
    const stringState = n === State.Speaking ? 'Speaking' : n === State.Paused ? 'Paused' : 'Read';
    console.log('(EVENT) TTS state is ' + stringState);
});

console.log('Pitch Before setting ', tts.pitch());
tts.setPitch(5);
console.log('Pitch After setting ', tts.pitch());

console.log('Rate Before setting ', tts.rate());
tts.setRate(2);
console.log('Rate After setting ', tts.rate());

console.log('Volume Before setting ', tts.volume());
tts.setVolume(0.9);
console.log('Volume After setting ', tts.volume());

console.log(tts.state());

setTimeout(() => {
    setTimeout(() => {
        tts.pause();
        setTimeout(() => {
            tts.resume();
            setTimeout(() => {
                tts.stop();
            }, 4000);
        }, 2000);
    }, 1000);
    tts.say(
        "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum",
    );
}, 5000);
```
 */
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
    setVoice(index: number): void {
        return this.native.setVoice(index);
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
    availableVoices(): Array<string> {
        return this.native.availableVoices();
    }
    static availableEngines(): Array<string> {
        return addon.QTextToSpeech.availableEngines();
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
