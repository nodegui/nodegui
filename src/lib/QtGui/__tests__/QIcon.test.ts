import { QIcon } from '../QIcon';
import path from 'path';
import { QVariant } from '../../QtCore/QVariant';

const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
describe('QIcon', () => {
    it('initialize empty', () => {
        const icon = new QIcon();
        expect(icon).toBeTruthy();
    });
    it('initialize with string', () => {
        const icon = new QIcon(testImagePath);
        expect(icon).toBeTruthy();
    });
    it('returns the cache Key', () => {
        const icon = new QIcon(testImagePath);
        const cacheKey = icon.cacheKey();
        expect(Number.isInteger(cacheKey)).toBe(true);
    });
    it('initialize from QVariant', () => {
        const icon = new QIcon(testImagePath);
        const variant = new QVariant(icon.native);
        expect(variant).toBeTruthy();
        expect(QIcon.fromQVariant(variant).cacheKey()).toBe(icon.cacheKey());
    });
});
