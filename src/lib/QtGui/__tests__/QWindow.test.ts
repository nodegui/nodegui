import { QWidget } from '../../..';
import { QWindow } from '../QWindow';

describe('QWindow', () => {
    it('initialize', () => {
        const widget = new QWidget();
        const window = new QWindow(widget.native);
        expect(window).toBeTruthy();
    });
    it('setTitle', () => {
        const widget = new QWidget();
        const window = new QWindow(widget.native);
        const expectedTitle = 'Test window';
        window.setTitle(expectedTitle);
        expect(window.title()).toEqual(expectedTitle);
    });
    it('check if windowTitleChanged signal is working for window', () => {
        const widget = new QWidget();
        const window = new QWindow(widget.native);
        const mock = jest.fn();
        window.addEventListener('windowTitleChanged', mock);
        const expectedTitle = 'Test window';
        window.setTitle(expectedTitle);
        expect(mock).toBeCalledTimes(1);
        expect(mock.mock.calls[0][0]).toEqual(expectedTitle);
    });
});
