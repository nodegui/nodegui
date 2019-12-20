import { QVariant } from '../../../index';
import { QPixmap } from '../../QtGui/QPixmap';
import path from 'path';

describe('QVariant', () => {
    it('initialize empty', () => {
        const variant = new QVariant();
        expect(variant).toBeTruthy();
    });
    it('initialize with string', () => {
        const variant = new QVariant('hello');
        expect(variant).toBeTruthy();
        expect(variant.toString()).toEqual('hello');
    });
    it('initialize with int', () => {
        const variant = new QVariant(123);
        expect(variant).toBeTruthy();
        expect(variant.toInt()).toEqual(123);
    });
    it('initialize with double', () => {
        const variant = new QVariant(12.33);
        expect(variant).toBeTruthy();
        expect(variant.toDouble()).toEqual(12.33);
    });
    it('initialize with boolean', () => {
        const variant = new QVariant(true);
        expect(variant).toBeTruthy();
        expect(variant.toBool()).toEqual(true);
    });
    it('initialize with complex objects', () => {
        const pixmap = new QPixmap(path.resolve(__dirname, 'nodegui.png'));
        const variant = new QVariant(pixmap.native);
        expect(variant).toBeTruthy();
        expect(QPixmap.fromQVariant(variant).height()).toBe(pixmap.height());
    });
});
