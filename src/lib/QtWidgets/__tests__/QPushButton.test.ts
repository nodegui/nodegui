import { QPushButton } from '../QPushButton';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';
import { QSize } from '../../QtCore/QSize';

describe('QPushButton', () => {
    it('instantiate a button instance', () => {
        const button = new QPushButton();
        expect(button.inherits('QPushButton')).toBe(true);
    });
    it('setText', () => {
        const button = new QPushButton();
        button.setText('hello');
        expect(button.property('text').toString()).toEqual('hello');
    });
    it('setIcon', () => {
        const button = new QPushButton();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        expect(QIcon.fromQVariant(button.property('icon')).cacheKey()).toEqual(icon.cacheKey());
    });
    it('setFlat', () => {
        const button = new QPushButton();
        button.setFlat(true);
        expect(button.property('flat').toBool()).toEqual(true);
    });
    it('setIconSize', () => {
        const button = new QPushButton();
        const testImagePath = path.resolve(__dirname, 'assets', 'nodegui.png');
        const icon = new QIcon(testImagePath);
        button.setIcon(icon);
        button.setIconSize(new QSize(111, 111));
        const returnedSize = button.iconSize();
        expect(returnedSize.width()).toBe(111);
        expect(returnedSize.height()).toBe(111);
    });
});
