import { QCheckBox } from '../QCheckBox';
import { QIcon } from '../../QtGui/QIcon';
import path from 'path';

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
});
