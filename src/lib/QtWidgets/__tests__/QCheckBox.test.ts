import { QCheckBox } from '../QCheckBox';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';
import { QSize } from '../../QtCore/QSize';

describe('QCheckBox', () => {
    it('instantiate a button instance', () => {
        const button = new QCheckBox();
        expect(button.inherits('QCheckBox')).toBe(true);
    });
    it('setText', () => {
        const button = new QCheckBox();
        button.setText('hello');
        expect(button.property('text').toString()).toEqual('hello');
    });
    it('setIcon', () => {
        const button = new QCheckBox();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        expect(QIcon.fromQVariant(button.property('icon')).cacheKey()).toEqual(icon.cacheKey());
    });
    it('setChecked', () => {
        const button = new QCheckBox();
        button.setChecked(true);
        expect(button.isChecked()).toEqual(true);
        button.setChecked(false);
        expect(button.isChecked()).toEqual(false);
    });
    it('setIconSize', () => {
        const button = new QCheckBox();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        button.setIconSize(new QSize(111, 111));
        const returnedSize = button.iconSize();
        expect(returnedSize.width()).toBe(111);
        expect(returnedSize.height()).toBe(111);
    });
    it('check if signals are working from QObject', () => {
        const widget = new QCheckBox();
        const mock = jest.fn();
        widget.addEventListener('objectNameChanged', mock);
        widget.setObjectName('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
    it('check if signals are working from QWidget', () => {
        const widget = new QCheckBox();
        const mock = jest.fn();
        widget.addEventListener('windowTitleChanged', mock);
        widget.setWindowTitle('testName');
        expect(mock).toBeCalledWith('testName');
        expect(mock).toBeCalledTimes(1);
    });
});
