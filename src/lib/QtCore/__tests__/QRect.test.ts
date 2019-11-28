import { QRect } from '../QRect';
import { QVariant } from '../QVariant';

describe('QRect', () => {
    it('initialize empty', () => {
        const rect = new QRect();
        expect(rect).toBeTruthy();
    });
    it('initialize with x, y, width, height', () => {
        const rect = new QRect(10, 11, 20, 30);
        expect(rect).toBeTruthy();
    });
    it('width', () => {
        const rect = new QRect();
        rect.setWidth(300);
        expect(rect.width()).toBe(300);
    });
    it('height', () => {
        const rect = new QRect();
        rect.setHeight(200);
        expect(rect.height()).toBe(200);
    });
    it('left', () => {
        const rect = new QRect();
        rect.setHeight(200);
        expect(rect.height()).toBe(200);
    });
    it('top', () => {
        const rect = new QRect();
        rect.setHeight(200);
        expect(rect.height()).toBe(200);
    });
    it('initialize from QVariant', () => {
        const rect = new QRect(10, 10, 300, 200);
        const variant = new QVariant(rect);
        expect(variant).toBeTruthy();
        expect(QRect.fromQVariant(variant).left()).toBe(rect.left());
    });
});
