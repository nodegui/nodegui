import addon from '../utils/addon';
import { QWidget, QWidgetSignals } from './QWidget';
import { QFrame, QFrameSignals } from './QFrame';
import { QPixmap } from '../QtGui/QPixmap';
import { QMovie } from '../QtGui/QMovie';
import { AlignmentFlag } from '../QtEnums/AlignmentFlag';
import { TextFormat } from '../QtEnums/TextFormat';
import { TextInteractionFlag } from '../QtEnums';
import { QPicture } from '../QtGui/QPicture';
import { wrapperCache } from '../core/WrapperCache';
import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

/**

> Create and control text.

* **This class is a JS wrapper around Qt's [QLabel class](https://doc.qt.io/qt-5/qlabel.html)**

A `QLabel` provides ability to add and manipulate text.

### Example

```javascript
const { QLabel } = require("@nodegui/nodegui");

const label = new QLabel();
label.setText("Hello");
```

 */
export class QLabel extends QFrame<QLabelSignals> {
    private _picture?: QPicture;
    private _pixmap?: QPixmap;
    private _movie?: QMovie;

    // TODO
    constructor(arg?: QWidget<QWidgetSignals> | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg != null) {
            const parent = arg as QWidget;
            native = new addon.QLabel(parent.native);
        } else {
            native = new addon.QLabel();
        }
        super(native);
    }
    setAlignment(alignment: AlignmentFlag): void {
        this.setProperty('alignment', alignment);
    }
    alignment(): AlignmentFlag {
        return this.property('alignment').toInt();
    }
    hasSelectedText(): boolean {
        return this.property('hasSelectedText').toBool();
    }
    setIndent(indent: number): void {
        this.setProperty('indent', indent);
    }
    indent(): number {
        return this.property('indent').toInt();
    }
    setMargin(margin: number): void {
        this.setProperty('margin', margin);
    }
    margin(): number {
        return this.property('margin').toInt();
    }
    setOpenExternalLinks(open: boolean): void {
        this.setProperty('openExternalLinks', open);
    }
    openExternalLinks(): boolean {
        return this.property('openExternalLinks').toBool();
    }
    setScaledContents(scaled: boolean): void {
        this.setProperty('scaledContents', scaled);
    }
    hasScaledContents(): boolean {
        return this.property('scaledContents').toBool();
    }
    selectedText(): string {
        return this.property('selectedText').toString();
    }
    setText(text: string | number): void {
        this.setProperty('text', `${text}`);
    }
    text(): string {
        return this.property('text').toString();
    }
    setTextFormat(format: TextFormat): void {
        this.setProperty('textFormat', format);
    }
    textFormat(): TextFormat {
        return this.property('textFormat').toInt();
    }
    setTextInteractionFlags(flags: TextInteractionFlag): void {
        this.setProperty('textInteractionFlags', flags);
    }
    textInteractionFlags(): TextInteractionFlag {
        return this.property('textInteractionFlags').toInt();
    }
    setWordWrap(on: boolean): void {
        this.setProperty('wordWrap', on);
    }
    wordWrap(): boolean {
        return this.property('wordWrap').toBool();
    }
    setSelection(start: number, length: number): void {
        this.native.setSelection(start, length);
    }
    selectionStart(): number {
        return this.native.selectionStart();
    }
    setBuddy(buddy: QWidget): void {
        this.native.setBuddy(buddy.native);
    }
    buddy(): QWidget | null {
        return wrapperCache.getWrapper(this.native.budd()) as QWidget;
    }
    setMovie(movie: QMovie): void {
        this.native.setMovie(movie.native);
        this._movie = movie;
    }
    movie(): QMovie | undefined {
        return this._movie;
    }
    setPicture(picture: QPicture): void {
        this.native.setPicture(picture.native);
        this._picture = picture;
    }
    picture(): QPicture | undefined {
        return this._picture;
    }
    setPixmap(pixMap: QPixmap): void {
        this.native.setPixmap(pixMap.native);
        this._pixmap = pixMap;
    }
    pixmap(): QPixmap | undefined {
        return this._pixmap;
    }
    setNumDouble(num: number): void {
        this.native.setNumDouble(num);
    }
    setNumInt(num: number): void {
        this.native.setNumInt(num);
    }
    clear(): void {
        this.native.clear();
    }
}
wrapperCache.registerWrapper('QLabelWrap', QLabel);

export interface QLabelSignals extends QFrameSignals {
    linkActivated: (link: string) => void;
    linkHovered: (link: string) => void;
}
