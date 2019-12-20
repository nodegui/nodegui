import { QPoint } from '../QPoint';
import { QVariant } from '../QVariant';

describe('QPoint', () => {
    it('initialize empty', () => {
        const point = new QPoint();
        expect(point).toBeTruthy();
    });
    it('initialize with x, y', () => {
        const point = new QPoint(10, 11);
        expect(point).toBeTruthy();
        expect(point.x()).toBe(10);
        expect(point.y()).toBe(11);
        const point2 = new QPoint(10);
        expect(point2.x()).toBe(10);
        expect(point2.y()).toBe(0);
    });
    it('setY', () => {
        const point = new QPoint();
        point.setY(300);
        expect(point.y()).toBe(300);
    });
    it('setX', () => {
        const point = new QPoint();
        point.setX(200);
        expect(point.x()).toBe(200);
    });
    it('initialize from QVariant', () => {
        const point = new QPoint(10, 10);
        const variant = new QVariant(point.native);
        expect(variant).toBeTruthy();
        expect(QPoint.fromQVariant(variant).x()).toBe(point.x());
    });
});
