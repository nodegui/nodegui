import { QObject } from '../QObject';

describe('QObject', () => {
    const component = new QObject();
    it('inherits from QObject', () => {
        expect(component.inherits('QObject')).toBe(true);
    });
    it('setObjectName', () => {
        component.setObjectName('hello');
        expect(component.objectName()).toEqual('hello');
    });
});
