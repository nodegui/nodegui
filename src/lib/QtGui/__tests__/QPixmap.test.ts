import { QPixmap } from '../QPixmap';
import path from 'path';
import { QVariant } from '../../QtCore/QVariant';
import { AspectRatioMode } from '../../QtEnums';
import fs from 'fs';

const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
describe('QPixmap', () => {
    it('initialize empty', () => {
        const pixmap = new QPixmap();
        expect(pixmap).toBeTruthy();
    });
    it('initialize with string', () => {
        const pixmap = new QPixmap(testImagePath);
        expect(pixmap).toBeTruthy();
    });
    it('width', () => {
        const pixmap = new QPixmap(testImagePath);
        expect(pixmap.width()).toBe(1000);
    });
    it('height', () => {
        const pixmap = new QPixmap(testImagePath);
        expect(pixmap.height()).toBe(1083);
    });
    it('initialize from QVariant', () => {
        const pixmap = new QPixmap(testImagePath);
        const variant = new QVariant(pixmap);
        expect(variant).toBeTruthy();
        expect(QPixmap.fromQVariant(variant).height()).toBe(pixmap.height());
    });
    it('scaled without aspect ratio', () => {
        const pixmap = new QPixmap(testImagePath);
        const newPixmap = pixmap.scaled(300, 340, AspectRatioMode.IgnoreAspectRatio);
        expect(newPixmap.width()).toBe(300);
        expect(newPixmap.height()).toBe(340);
    });
    it('scaled with aspect ratio', () => {
        const pixmap = new QPixmap(testImagePath);
        const newPixmap = pixmap.scaled(100, 100, AspectRatioMode.KeepAspectRatio);
        expect(newPixmap.width()).toBe(92);
        expect(newPixmap.height()).toBe(100);
    });
    it('load from file', () => {
        const pixmap = new QPixmap();
        expect(pixmap.height()).toBe(0);
        const isLoaded = pixmap.load(testImagePath);
        expect(isLoaded).toBe(true);
        expect(pixmap.height()).toBe(1083);
    });
    it('load from data', () => {
        const pixmap = new QPixmap();
        expect(pixmap.height()).toBe(0);
        const arrayBuffer = fs.readFileSync(testImagePath, null).buffer;
        const isLoaded = pixmap.loadFromData(Buffer.from(arrayBuffer));
        expect(isLoaded).toBe(true);
        expect(pixmap.height()).toBe(1083);
    });
    it('save to a file', async () => {
        const outputFilePath = path.resolve(__dirname, 'assets', 'nodegui_save.png');
        await new Promise(resolve => fs.unlink(outputFilePath, resolve));
        const pixmap = new QPixmap(testImagePath);
        pixmap.save(outputFilePath);
        const exists = await new Promise(resolve => fs.exists(outputFilePath, resolve));
        expect(exists).toBe(true);
    });
    it('save to a file of different format', async () => {
        const outputFilePath = path.resolve(__dirname, 'assets', 'nodegui_save.jpg');
        await new Promise(resolve => fs.unlink(outputFilePath, resolve));
        const pixmap = new QPixmap(testImagePath);
        pixmap.save(outputFilePath, 'JPG');
        const exists = await new Promise(resolve => fs.exists(outputFilePath, resolve));
        expect(exists).toBe(true);
    });
});
