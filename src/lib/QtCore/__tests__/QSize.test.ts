import { QSize } from '../QSize';
import { QVariant } from '../QVariant';

describe('QSize', () => {
    it('initialize empty', () => {
        const size = new QSize();
        expect(size).toBeTruthy();
    });
    it('initialize with width and height', () => {
        const size = new QSize(300, 200);
        expect(size).toBeTruthy();
    });
    it('width', () => {
        const size = new QSize();
        size.setWidth(300);
        expect(size.width()).toBe(300);
    });
    it('height', () => {
        const size = new QSize();
        size.setHeight(200);
        expect(size.height()).toBe(200);
    });
    it('initialize from QVariant', () => {
        const size = new QSize(300, 200);
        const variant = new QVariant(size.native);
        expect(variant).toBeTruthy();
        expect(QSize.fromQVariant(variant).height()).toBe(size.height());
    });
});
