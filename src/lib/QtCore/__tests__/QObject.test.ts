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
    it('setProperty', () => {
        component.setProperty('objectName', 'testObjName');
        const variant = component.property('objectName');
        expect(variant.toString()).toEqual('testObjName');
    });
    it('blockSignals', () => {
        expect(component.signalsBlocked()).toBe(false);
        expect(component.blockSignals(true)).toBe(false);
        expect(component.signalsBlocked()).toBe(true);
        expect(component.blockSignals(true)).toBe(true);
        expect(component.signalsBlocked()).toBe(true);
        expect(component.blockSignals(false)).toBe(true);
        expect(component.signalsBlocked()).toBe(false);
        expect(component.blockSignals(false)).toBe(false);
        expect(component.signalsBlocked()).toBe(false);
    });
});
