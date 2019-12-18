import addon from '../utils/addon';
import { NodeWidget } from './QWidget';
import { BaseWidgetEvents } from '../core/EventWidget';
import { NativeElement } from '../core/Component';
import { AcceptMode, DialogLabel, FileMode, Option, ViewMode } from '../QtEnums';
export const QFileDialogEvents = Object.freeze({
    currentChanged: 'currentChanged',
    currentUrlChanged: 'currentUrlChanged',
    directoryEntered: 'directoryEntered',
    directoryUrlEntered: 'directoryUrlEntered',
    fileSelected: 'fileSelected',
    filesSelected: 'filesSelected',
    filterSelected: 'filterSelected',
    urlSelected: 'urlSelected',
    urlsSelected: 'urlsSelected',
    ...BaseWidgetEvents,
});

export class QFileDialog extends NodeWidget {
    native: NativeElement;
    constructor(parent: NodeWidget | undefined = undefined, caption = 'Select File', directory = '', filter = '') {
        let native;
        if (parent) {
            native = new addon.QFileDialog(parent.native, caption, directory, filter);
        } else {
            native = new addon.QFileDialog();
        }
        super(native);
        this.native = native;
        this.setNodeParent(parent);
    }
    open(): void {
        this.native.open();
    }
    supportedSchemes(): string[] {
        return this.native.supportedSchemes();
    }
    setSupportedSchemes(schemes: string[]): void {
        this.native.setSupportedSchemes(schemes);
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
