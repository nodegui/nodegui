import { QMovie, MovieState } from '../QMovie';
import path from 'path';
import { QPixmap } from '../QPixmap';
import { QSize } from '../../QtCore/QSize';
import fs from 'fs';

const testImagePath = path.resolve(__dirname, 'assets', 'fine.gif');
describe('QMovie', () => {
    it('initialize empty', () => {
        const movie = new QMovie();
        expect(movie).toBeTruthy();
    });
    it('setFileName', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        expect(movie.fileName()).toBe(testImagePath);
    });
    it('setFormat', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        // movie.setFormat('GIF');
        expect(movie.format()).toBe('gif');
    });
    it('start', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        expect(movie.state()).toBe(MovieState.Running);
    });
    it('setPaused', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        movie.setPaused(true);
        expect(movie.state()).toBe(MovieState.Paused);
        movie.setPaused(false);
        expect(movie.state()).toBe(MovieState.Running);
    });
    it('stop', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        movie.stop();
        expect(movie.state()).toBe(MovieState.NotRunning);
    });
    it('jumpToFrame and jumpToNextFrame', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        movie.stop();
        movie.jumpToFrame(2);
        expect(movie.currentFrameNumber()).toBe(2);
        movie.jumpToNextFrame();
        expect(movie.currentFrameNumber()).toBe(3);
    });
    it('currentPixmap', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        movie.stop();
        movie.jumpToFrame(2);
        const pixmap = movie.currentPixmap();
        expect(pixmap).toBeInstanceOf(QPixmap);
        expect(pixmap.height()).toBe(270);
    });

    it('setScaledSize', () => {
        const movie = new QMovie();
        movie.setFileName(testImagePath);
        movie.start();
        movie.stop();
        movie.jumpToFrame(2);
        movie.setScaledSize(new QSize(200, 200));
        movie.jumpToNextFrame();
        const pixmap = movie.currentPixmap();
        expect(pixmap.height()).toBe(200);
    });
    it('custom: loadFromData', () => {
        const movie = new QMovie();
        const arrayBuffer = fs.readFileSync(testImagePath, null).buffer;
        const isLoaded = movie.loadFromData(Buffer.from(arrayBuffer));
        expect(isLoaded).toBe(true);
        movie.start();
        movie.stop();
        movie.jumpToFrame(2);
        const pixmap = movie.currentPixmap();
        expect(pixmap).toBeInstanceOf(QPixmap);
        expect(pixmap.height()).toBe(270);
    });
});
