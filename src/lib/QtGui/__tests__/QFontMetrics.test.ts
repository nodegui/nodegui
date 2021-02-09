import { TextFlag } from '../../QtEnums';
import { QFont } from '../QFont';
import { QFontMetrics } from '../QFontMetrics';

describe('QFontMetrics', () => {
    // Helvetica is Qt's default sans-serif font
    const qfont = new QFont('Helvetica');
    it('initialize with QFont', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics).toBeTruthy();
        expect(metrics.native).toBeTruthy();
    });
    it('averageCharWidth', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.averageCharWidth).toBeTruthy();
        expect(metrics.averageCharWidth()).not.toBeNaN();
    });
    it('capHeight', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.capHeight).toBeTruthy();
        expect(metrics.capHeight()).not.toBeNaN();
    });
    it('descent', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.descent).toBeTruthy();
        expect(metrics.descent()).not.toBeNaN();
    });
    it('fontDpi', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.fontDpi).toBeTruthy();
        expect(metrics.fontDpi()).not.toBeNaN();
    });
    it('height', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.height).toBeTruthy();
        expect(metrics.height()).not.toBeNaN();
    });
    it('horizontalAdvance', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.horizontalAdvance).toBeTruthy();
        expect(metrics.horizontalAdvance('a')).not.toBeNaN();
        expect(metrics.horizontalAdvance('aaa')).not.toBeNaN();
    });
    it('inFont', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.inFont).toBeTruthy();
        expect(metrics.inFont('a')).toBe(true);
    });
    it('leading', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.leading).toBeTruthy();
        expect(metrics.leading()).not.toBeNaN();
    });
    it('leftBearing', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.leftBearing).toBeTruthy();
        expect(metrics.leftBearing('a')).not.toBeNaN();
    });
    it('lineSpacing', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.lineSpacing).toBeTruthy();
        expect(metrics.lineSpacing()).not.toBeNaN();
    });
    it('lineWidth', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.lineWidth).toBeTruthy();
        expect(metrics.lineWidth()).not.toBeNaN();
    });
    it('overlinePos', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.overlinePos).toBeTruthy();
        expect(metrics.overlinePos()).not.toBeNaN();
    });
    it('rightBearing', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.rightBearing).toBeTruthy();
        expect(metrics.rightBearing('a')).not.toBeNaN();
    });
    it('size', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.size).toBeTruthy();
        const sizeDefault = metrics.size(TextFlag.None, 'abc');
        expect(sizeDefault.height()).toBeGreaterThan(0);
        expect(sizeDefault.width()).toBeGreaterThan(0);
        const sizeFlag1 = metrics.size(TextFlag.TextExpandTabs, '\tabc', 1);
        const sizeFlag10 = metrics.size(TextFlag.TextExpandTabs, '\tabc', 10);
        expect(sizeFlag1.width()).toBeGreaterThan(sizeDefault.width());
        expect(sizeFlag10.width()).toBeGreaterThan(sizeFlag1.width());
    });
    it('strikeOutPos', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.strikeOutPos).toBeTruthy();
        expect(metrics.strikeOutPos()).not.toBeNaN();
    });
    it('swap', () => {
        const metrics = new QFontMetrics(qfont);
        const metrics2 = new QFontMetrics(qfont);
        expect(metrics.swap).toBeTruthy();
        expect(() => metrics.swap(metrics2)).not.toThrow();
    });
    it('underlinePos', () => {
        const metrics = new QFontMetrics(qfont);
        expect(metrics.underlinePos).toBeTruthy();
        expect(metrics.underlinePos()).not.toBeNaN();
    });
});
