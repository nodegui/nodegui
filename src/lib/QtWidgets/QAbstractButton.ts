import { QWidget, QWidgetSignals } from './QWidget';
import { QIcon } from '../QtGui/QIcon';
import { QSize } from '../QtCore/QSize';
import { QKeySequence } from '../QtGui/QKeySequence';

/**

> This is the abstract base class of button widgets, providing their functionality.

* **This class is a JS wrapper around Qt's [QAbstractButton class](https://doc.qt.io/qt-5/qabstractbutton.html)**

The QAbstractButton class is an abstract class and therefore, technically, no further instances actually have to be created.
It is inherited by QCheckBox, QPushButton, QRadioButton, and QToolButton.

 */
export abstract class QAbstractButton<Signals extends QAbstractButtonSignals> extends QWidget<Signals> {
    animateClick(msec: number): void {
        this.native.animateClick(msec);
    }
    click(): void {
        this.native.click();
    }
    toggle(): void {
        this.native.toggle();
    }
    setAutoExclusive(enable: boolean): void {
        this.setProperty('autoExclusive', enable);
    }
    autoExclusive(): boolean {
        return this.property('autoExclusive').toBool();
    }
    setAutoRepeat(enable: boolean): void {
        this.setProperty('autoRepeat', enable);
    }
    autoRepeat(): boolean {
        return this.property('autoRepeat').toBool();
    }
    setAutoRepeatDelay(delay: number): void {
        this.setProperty('autoRepeatDelay', delay);
    }
    autoRepeatDelay(): number {
        return this.property('autoRepeatDelay').toInt();
    }
    setAutoRepeatInterval(interval: number): void {
        this.setProperty('autoRepeatInterval', interval);
    }
    autoRepeatInterval(): number {
        return this.property('autoRepeatInterval').toInt();
    }
    setCheckable(checkable: boolean): void {
        this.setProperty('checkable', checkable);
    }
    isCheckable(): boolean {
        return this.property('checkable').toBool();
    }
    setChecked(checked: boolean): void {
        this.setProperty('checked', checked);
    }
    isChecked(): boolean {
        return this.property('checked').toBool();
    }
    setDown(down: boolean): void {
        this.setProperty('down', down);
    }
    isDown(): boolean {
        return this.property('down').toBool();
    }
    setIcon(icon: QIcon): void {
        this.setProperty('icon', icon.native);
    }
    icon(): QIcon {
        const icon = this.property('icon');
        return QIcon.fromQVariant(icon);
    }
    setIconSize(iconSize: QSize): void {
        this.setProperty('iconSize', iconSize.native);
    }
    iconSize(): QSize {
        const iconSize = this.property('iconSize');
        return QSize.fromQVariant(iconSize);
    }
    setShortcut(key: QKeySequence): void {
        this.setProperty('shortcut', key.native);
    }
    shortcut(): QKeySequence {
        const key = this.property('shortcut');
        return QKeySequence.fromQVariant(key);
    }
    setText(text: string): void {
        this.setProperty('text', text);
    }
    text(): string {
        return this.property('text').toString();
    }
}
export interface QAbstractButtonSignals extends QWidgetSignals {
    clicked: (checked: boolean) => void;
    pressed: () => void;
    released: () => void;
    toggled: (checked: boolean) => void;
}
