import { QVariant } from '../../../index';
import { QPixmap } from '../../QtGui/QPixmap';
import path from 'path';

describe('QVariant', () => {
    it('inherits from QVariant', () => {
        const variant = new QVariant();
        expect(variant.constructor.name).toEqual('QVariant');
    });
    it('initialize empty', () => {
        const variant = new QVariant();
        expect(variant.constructor.name).toEqual('QVariant');
    });
    it('initialize with string', () => {
        const variant = new QVariant('hello');
        expect(variant.constructor.name).toBe('QVariant');
        expect(variant.toString()).toEqual('hello');
    });
    it('initialize with int', () => {
        const variant = new QVariant(123);
        expect(variant.constructor.name).toBe('QVariant');
        expect(variant.toInt()).toEqual(123);
    });
    it('initialize with double', () => {
        const variant = new QVariant(12.33);
        expect(variant.constructor.name).toBe('QVariant');
        expect(variant.toDouble()).toEqual(12.33);
    });
    it('initialize with boolean', () => {
        const variant = new QVariant(true);
        expect(variant.constructor.name).toBe('QVariant');
        expect(variant.toBool()).toEqual(true);
    });
    it('initialize with complex objects', () => {
        const pixmap = new QPixmap(path.resolve(__dirname, 'nodegui.png'));
        const variant = new QVariant(pixmap);
        expect(variant.constructor.name).toBe('QVariant');
        expect(QPixmap.fromQVariant(variant).height()).toBe(pixmap.height());
    });
});
