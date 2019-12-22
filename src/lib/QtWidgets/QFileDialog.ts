import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';
import { AcceptMode, DialogLabel, FileMode, Option, ViewMode } from '../QtEnums';

export interface QFileDialogSignals extends QWidgetSignals {
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

export class QFileDialog extends NodeWidget<QFileDialogSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>, caption?: string, directory?: string, filter?: string);
    constructor(parent?: NodeWidget<any>, caption = 'Select File', directory = '', filter = '') {
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
