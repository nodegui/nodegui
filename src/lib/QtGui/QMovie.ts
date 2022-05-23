import addon from '../utils/addon';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { QObject, QObjectSignals } from '../QtCore/QObject';
import { QSize } from '../QtCore/QSize';
import { QPixmap } from './QPixmap';
import { wrapperCache } from '../core/WrapperCache';

export class QMovie extends QObject<QMovieSignals> {
    constructor(arg?: QObject | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QObject;
            native = new addon.QMovie(parent.native);
        } else {
            native = new addon.QMovie();
        }
        super(native);
    }
    //Methods
    setFileName(fileName: string): void {
        this.native.setFileName(fileName);
        this.jumpToFrame(0);
    }
    loadFromData(buffer: Buffer): void {
        this.native.loadFromData(buffer);
    }
    fileName(): string {
        return this.native.fileName();
    }
    setFormat(formatName: SupportedFormats): void {
        this.native.setFormat(formatName);
    }
    format(): string {
        return this.native.format();
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
    currentFrameNumber(): number {
        return this.native.currentFrameNumber();
    }
    currentPixmap(): QPixmap {
        return new QPixmap(this.native.currentPixmap());
    }
    frameCount(): number {
        return this.native.frameCount();
    }
}
wrapperCache.registerWrapper('QMovieWrap', QMovie);

export enum CacheMode {
    CacheNone,
    CacheAll,
}

export enum MovieState {
    NotRunning,
    Paused,
    Running,
}

export enum ImageReaderError {
    FileNotFoundError = 1,
    DeviceError = 2,
    UnsupportedFormatError = 3,
    InvalidDataError = 4,
    UnknownError = 0,
}

type SupportedFormats = 'gif' | 'webp';

export interface QMovieSignals extends QObjectSignals {
    error: (error: ImageReaderError) => void;
    finished: () => void;
    frameChanged: (frameNumber?: number) => void;
    resized: (qSizeNative?: NativeElement) => void;
    started: () => void;
    stateChanged: (state: MovieState) => void;
    updated: (qRectNative: NativeElement) => void;
}
