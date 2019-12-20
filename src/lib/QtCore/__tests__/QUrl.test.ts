import { QUrl } from '../QUrl';
import { QVariant } from '../QVariant';

describe('QUrl', () => {
    it('initialize empty', () => {
        const url = new QUrl();
        expect(url).toBeTruthy();
    });
    it('initialize with url', () => {
        const url = new QUrl('https://google.com');
        expect(url).toBeTruthy();
    });
    it('setUrl', () => {
        const url = new QUrl();
        url.setUrl('https://yahoo.com');
        expect(url.toString()).toEqual('https://yahoo.com');
    });
    it('initialize from QVariant', () => {
        const url = new QUrl('https://google.com');
        const variant = new QVariant(url.native);
        expect(variant).toBeTruthy();
        expect(QUrl.fromQVariant(variant).toString()).toBe('https://google.com');
    });
});
