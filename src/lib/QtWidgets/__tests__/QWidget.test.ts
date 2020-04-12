import { QWidget } from '../QWidget';
import { CursorShape } from '../../QtEnums/CursorShape';
import { QCursor } from '../../..';

describe('QWidget', () => {
    const view = new QWidget();
    afterAll(() => {
        if (view) {
            view.close();
            (view as any) = null;
        }
    });
    it('instantiate a view instance', () => {
        expect(view.inherits('QWidget')).toBe(true);
    });
    it('show', () => {
        view.show();
        expect(view.isVisible()).toEqual(true);
    });
    it('hide', () => {
        view.hide();
        expect(view.isVisible()).toEqual(false);
    });
    it('setStyleSheet', () => {
        view.setStyleSheet(`
    #test {
      color: blue;
    }`);
        expect(view.styleSheet()).toEqual(`
    #test {
      color: blue;
    }`);
    });
    it('setInlineStyle', () => {
        view.setObjectName('test');
        view.setInlineStyle('color: black;');
        expect(view.styleSheet()).toEqual(`
      #test {
        color: black;
      }
  `);
    });
    it('correct inline stylesheet after objectName has been set', () => {
        view.setObjectName('someobjectName');
        view.setInlineStyle('color: black;');
        view.setObjectName('test');
        expect(view.styleSheet()).toEqual(`
      #test {
        color: black;
      }
  `);
    });
    it('setGeometry', () => {
        view.setGeometry(10, 11, 12, 13);
        const rect = view.geometry();
        expect(rect.left()).toEqual(10);
        expect(rect.top()).toEqual(11);
        expect(rect.width()).toEqual(12);
        expect(rect.height()).toEqual(13);
    });
    it('setObjectName', () => {
        view.setObjectName('abcd');
        expect(view.objectName()).toBe('abcd');
    });
    it('setMouseTracking', () => {
        view.setMouseTracking(true);
        expect(view.hasMouseTracking()).toBe(true);
        view.setMouseTracking(false);
        expect(view.hasMouseTracking()).toBe(false);
    });
    it('setEnabled', () => {
        view.setEnabled(true);
        expect(view.isEnabled()).toBe(true);
        view.setEnabled(false);
        expect(view.isEnabled()).toBe(false);
    });
    it('setFixedSize', () => {
        view.setFixedSize(10, 12);
        const size = view.size();
        expect(size.width()).toBe(10);
        expect(size.height()).toBe(12);
    });
    it('setWindowOpacity', () => {
        view.setWindowOpacity(0.6);
        expect(view.windowOpacity().toFixed(1)).toBe(`0.6`);
    });
    it('check if signals are working', () => {
        const widget = new QWidget();
        const mock = jest.fn();
        widget.addEventListener('objectNameChanged', mock);
        widget.setObjectName('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
    it('check if signals are working from QWidget', () => {
        const widget = new QWidget();
        const mock = jest.fn();
        widget.addEventListener('windowTitleChanged', mock);
        widget.setWindowTitle('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
    it('should accept QCursor as setCursor argument', () => {
        const widget = new QWidget();
        const cursor = new QCursor(CursorShape.BusyCursor);
        expect(() => widget.setCursor(cursor)).not.toThrow();
    });
});
