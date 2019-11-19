import { QRadioButton } from '../QRadioButton';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';

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
});
