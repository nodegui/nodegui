import { QFontDatabase, WritingSystem } from '../QFontDatabase';

describe('QFont', () => {
    it('initialize empty', () => {
        const fontDatabase = new QFontDatabase();
        expect(fontDatabase).toBeTruthy();
    });
    it('families', () => {
        const fontDatabase = new QFontDatabase();
        expect(fontDatabase.native).toBeTruthy();
        expect(fontDatabase.families).toBeTruthy();
        expect(fontDatabase.families().length).toBeTruthy();
        expect(fontDatabase.families(WritingSystem.Runic).length < fontDatabase.families().length).toBeTruthy();
    });
});
