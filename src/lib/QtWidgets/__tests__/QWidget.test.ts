import { QWidget } from '../QWidget';

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
    it('setStyleSheet', async () => {
        await view.setStyleSheet(`
    #test {
      color: blue;
    }`);
        expect(view.styleSheet()).toEqual(`
    #test {
      color: blue;
    }`);
    });
    it('setInlineStyle', async () => {
        view.setObjectName('test');
        await view.setInlineStyle('color: black;');
        expect(view.styleSheet()).toEqual(`
      #test {
        color: black;
      }
  `);
    });
    it('setGeometry', () => {
        view.setGeometry(10, 11, 12, 13);
        const rect = view.geometry();
        expect(rect.x).toEqual(10);
        expect(rect.y).toEqual(11);
        expect(rect.width).toEqual(12);
        expect(rect.height).toEqual(13);
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
});
