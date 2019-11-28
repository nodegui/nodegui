import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject } from '../QtCore/QObject';
import { QSize } from '../QtCore/QSize';
import { BaseWidgetEvents } from '../core/EventWidget';

export const QMovieEvents = Object.freeze({
    ...BaseWidgetEvents,
    error: 'error',
    finished: 'finished',
    frameChanged: 'frameChanged',
    resized: 'resized',
    started: 'started',
    stateChanged: 'stateChanged',
    updated: 'updated',
});

type supportedFormats = 'GIF' | 'WEBP';
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
        this.jumpToFrame(0);
    }
    setFormat(formatName: supportedFormats): void {
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
    setPaused(paused: boolean): void {
        this.native.setPaused(paused);
    }
    jumpToNextFrame(): boolean {
        return this.native.jumpToNextFrame();
    }
    jumpToFrame(frame: number): boolean {
        return this.native.jumpToFrame(frame);
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