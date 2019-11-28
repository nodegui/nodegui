import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject } from '../QtCore/QObject';
import { QSize } from '../QtCore/QSize';

export class QMovie extends QObject {
    native: NativeElement;
    constructor(arg?: QObject | NativeElement) {
        super();
        if (arg) {
            if (checkIfNativeElement(arg)) {
                this.native = arg as NativeElement;
            } else {
                this.native = new addon.QMovie(arg);
            }
        } else {
            this.native = new addon.QMovie();
        }
    }
    setFileName(fileName: string): void {
        this.native.setFileName(fileName);
    }
    setFormat(formatName: string): void {
        this.native.setFormat(formatName);
    }
    setScaledSize(size: QSize): void {
        this.native.setScaledSize(size.native);
    }
    setSpeed(percentSpeed: number): void {
        this.setProperty('speed', percentSpeed);
    }
    start(): void {
        this.native.start();
    }
    stop(): void {
        this.native.stop();
    }
    setPaused(): void {
        this.native.setPaused();
    }
    jumpToNextFrame(): boolean {
        return this.native.jumpToNextFrame();
    }
    setCacheMode(cacheMode: CacheMode): void {
        this.setProperty('cacheMode', cacheMode);
    }
    state(): MovieState {
        return this.native.state();
    }
}

export enum CacheMode {
    CacheNone,
    CacheAll,
}

export enum MovieState {
    NotRunning,
    Paused,
    Running,
}
