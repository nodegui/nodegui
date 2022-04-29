import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { NodeDialog, QDialogSignals } from './QDialog';
import { QColor } from '../QtGui/QColor';

/**

> Create and control color dialogs.

* **This class is a JS wrapper around Qt's [QColorDialog class](https://doc.qt.io/qt-5/qcolordialog.html)**

The `QColorDialog` class provides a dialog widget for specifying colors.

### Example

```javascript
const { QColorDialog, QColor } = require("@nodegui/nodegui");

const colorDialog = new QColorDialog();
colorDialog.setCurrentColor(new QColor('black'));
colorDialog.exec();

const color = dialog.currentColor();
console.log(color.red(), color.green(), color.blue());

```
 */
export class QColorDialog extends NodeDialog<QColorDialogSignals> {
    constructor(parent?: QWidget) {
        let native: NativeElement;
        if (parent) {
            native = new addon.QColorDialog(parent.native);
        } else {
            native = new addon.QColorDialog();
        }
        super(native);
        parent && this.setNodeParent(parent);
    }
    setCurrentColor(color: QColor): void {
        this.setProperty('currentColor', color.native);
    }
    currentColor(): QColor {
        return QColor.fromQVariant(this.property('currentColor'));
    }
    setOptions(options: ColorDialogOption): void {
        this.setProperty('options', options);
    }
    options(): ColorDialogOption {
        return this.property('options').toInt();
    }
    selectedColor(): QColor {
        return new QColor(this.native.selectedColor());
    }
    setOption(option: ColorDialogOption, on = true): void {
        this.native.setOption(option, on);
    }
    testOption(option: ColorDialogOption): boolean {
        return this.native.testOption(option);
    }
    static customColor(index: number): QColor {
        return new QColor(addon.QColorDialog.customColor(index));
    }
    static customCount(): number {
        return addon.QColorDialog.customCount();
    }
    static setCustomColor(index: number, color: QColor): void {
        addon.QColorDialog.setCustomColor(index, color.native);
    }
    static setStandardColor(index: number, color: QColor): void {
        addon.QColorDialog.setStandardColor(index, color.native);
    }
    static standardColor(index: number): QColor {
        return new QColor(addon.QColorDialog.standardColor(index));
    }
}

export enum ColorDialogOption {
    ShowAlphaChannel = 0x00000001,
    NoButtons = 0x00000002,
    DontUseNativeDialog = 0x00000004,
}

export interface QColorDialogSignals extends QDialogSignals {
    colorSelected: (color: QColor) => void;
    currentColorChanged: (color: QColor) => void;
}
