import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { QDialog, QDialogSignals } from './QDialog';
import { QFont } from '../QtGui/QFont';

/**

> Create and control font dialogs.

* **This class is a JS wrapper around Qt's [QFontDialog class](https://doc.qt.io/qt-5/qfontdialog.html)**

The `QFontDialog` class provides a dialog widget for selecting a font.

### Example

```javascript
const { QFontDialog } = require("@nodegui/nodegui");

const fontDialog = new QFontDialog();
fontDialog.exec();
const font = fontDialog.currentFont();
console.log(font);

```
 */
export class QFontDialog extends QDialog<QFontDialogSignals> {
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QFontDialog(parent.native);
        } else {
            native = new addon.QFontDialog();
        }
        super(native);
    }
    setCurrentFont(font: QFont): void {
        this.setProperty('currentFont', font.native);
    }
    currentFont(): QFont {
        return QFont.fromQVariant(this.property('currentFont'));
    }
    setOptions(options: FontDialogOption): void {
        this.setProperty('options', options);
    }
    options(): FontDialogOption {
        return this.property('options').toInt();
    }
    selectedFont(): QFont {
        return new QFont(this.native.selectedFont());
    }
    setOption(option: FontDialogOption, on = true): void {
        this.native.setOption(option, on);
    }
    testOption(option: FontDialogOption): boolean {
        return this.native.testOption(option);
    }
}

export enum FontDialogOption {
    NoButtons = 0x00000001,
    DontUseNativeDialog = 0x00000002,
    ScalableFonts = 0x00000004,
    NonScalableFonts = 0x00000008,
    MonospacedFonts = 0x00000010,
    ProportionalFonts = 0x00000020,
}

export interface QFontDialogSignals extends QDialogSignals {
    fontSelected: (font: QFont) => void;
    currentFontChanged: (font: QFont) => void;
}
