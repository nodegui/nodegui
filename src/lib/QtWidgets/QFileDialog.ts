import addon from '../utils/addon';
import { QWidget } from './QWidget';
import { NativeElement } from '../core/Component';
import { AcceptMode, DialogLabel, FileMode, Option, ViewMode } from '../QtEnums';
import { QDialog, QDialogSignals } from './QDialog';

/**

> Create and control file dialogs.

* **This class is a JS wrapper around Qt's [QFileDialog class](https://doc.qt.io/qt-5/qfiledialog.html)**

A `QFileDialog` class provides a dialog that allow users to select files or directories.

### Example

```javascript
const { QFileDialog } = require("@nodegui/nodegui");

const fileDialog = new QFileDialog();
fileDialog.setFileMode(FileMode.AnyFile);
fileDialog.setNameFilter('Images (*.png *.xpm *.jpg)');
fileDialog.exec();

const selectedFiles = fileDialog.selectedFiles();
console.log(selectedFiles);

```
 */
export class QFileDialog extends QDialog<QFileDialogSignals> {
    constructor();
    constructor(parent: QWidget, caption?: string, directory?: string, filter?: string);
    constructor(parent?: QWidget, caption = 'Select File', directory = '', filter = '') {
        let native: NativeElement;
        if (parent) {
            native = new addon.QFileDialog(parent.native, caption, directory, filter);
        } else {
            native = new addon.QFileDialog();
        }
        super(native);
    }
    supportedSchemes(): string[] {
        return this.native.supportedSchemes();
    }
    setSupportedSchemes(schemes: string[]): void {
        this.native.setSupportedSchemes(schemes);
    }
    setNameFilter(filter: string): void {
        this.native.setNameFilter(filter);
    }
    selectedFiles(): string[] {
        return this.native.selectedFiles();
    }
    labelText(label: DialogLabel): string {
        return this.native.labelText(label);
    }
    setLabelText(label: DialogLabel, text: string): void {
        this.native.setLabelText(label, text);
    }
    setOption(option: Option, on = true): void {
        this.native.setOption(option, on);
    }
    acceptMode(): AcceptMode {
        return this.property('acceptMode').toInt();
    }
    defaultSuffix(): string {
        return this.property('defaultSuffix').toString();
    }
    fileMode(): FileMode {
        return this.property('fileMode').toInt();
    }
    options(): Option {
        return this.property('options').toInt();
    }
    viewMode(): ViewMode {
        return this.property('viewMode').toInt();
    }
    setAcceptMode(acceptMode: AcceptMode): void {
        this.setProperty('acceptMode', acceptMode);
    }
    setDefaultSuffix(defaultSuffix: string): void {
        this.setProperty('defaultSuffix', defaultSuffix);
    }
    setFileMode(fileMode: FileMode): void {
        this.setProperty('fileMode', fileMode);
    }
    setOptions(options: Option): void {
        this.setProperty('options', options);
    }
}

export interface QFileDialogSignals extends QDialogSignals {
    currentChanged: (path: string) => void;
    currentUrlChanged: (url: string) => void;
    directoryEntered: (directory: string) => void;
    directoryUrlEntered: (url: string) => void;
    fileSelected: (file: string) => void;
    filesSelected: (selected: string[]) => void;
    filterSelected: (filter: string) => void;
    urlSelected: (url: string) => void;
    urlsSelected: (urls: string[]) => void;
}
