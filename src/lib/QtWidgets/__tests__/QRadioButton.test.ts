import { QRadioButton } from '../QRadioButton';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';
import { QSize } from '../../QtCore/QSize';

describe('QRadioButton', () => {
    it('instantiate a button instance', () => {
        const button = new QRadioButton();
        expect(button.inherits('QRadioButton')).toBe(true);
    });
    it('setText', () => {
        const button = new QRadioButton();
        button.setText('hello');
        expect(button.property('text').toString()).toEqual('hello');
    });
    it('setIcon', () => {
        const button = new QRadioButton();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        expect(QIcon.fromQVariant(button.property('icon')).cacheKey()).toEqual(icon.cacheKey());
    });
    it('setIconSize', () => {
        const button = new QRadioButton();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        button.setIconSize(new QSize(111, 111));
        const returnedSize = button.iconSize();
        expect(returnedSize.width()).toBe(111);
        expect(returnedSize.height()).toBe(111);
    });
    it('check if signals are working', () => {
        const widget = new QRadioButton();
        const mock = jest.fn();
        widget.addEventListener('objectNameChanged', mock);
        widget.setObjectName('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
    it('check if signals are working from QWidget', () => {
        const widget = new QRadioButton();
        const mock = jest.fn();
        widget.addEventListener('windowTitleChanged', mock);
        widget.setWindowTitle('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
});
