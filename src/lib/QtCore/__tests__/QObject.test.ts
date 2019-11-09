import { QObject } from '../QObject';

describe('QObject', () => {
    const component = new QObject();
    it('instantiate a view instance', () => {
        expect(component.inherits('QObject')).toBe(true);
    });
});
