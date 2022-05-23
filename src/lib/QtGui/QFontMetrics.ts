import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QFont } from './QFont';
import { checkIfNativeElement } from '../utils/helpers';
import { QSize } from '../QtCore/QSize';
import { TextElideMode, TextFlag } from '../QtEnums';
import { QRect } from '../..';

export class QFontMetrics extends Component {
    constructor(native: NativeElement);
    constructor(qfont: QFont);
    constructor(qfontmetrics: QFontMetrics);
    constructor(arg: QFont | QFontMetrics | NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else if (arg instanceof QFontMetrics) {
            native = arg.native;
        } else {
            native = new addon.QFontMetrics(arg.native);
        }
        super(native);
    }
    // *** Public Functions ***

    /** Returns the ascent of the font */
    ascent(): number {
        return this.native.ascent();
    }

    /** Returns the average width of glyphs in the font */
    averageCharWidth(): number {
        return this.native.averageCharWidth();
    }

    boundingRect(text: string): QRect {
        return new QRect(this.native.boundingRect(text));
    }

    /** Returns the cap height of the font */
    capHeight(): number {
        return this.native.capHeight();
    }

    /** Returns the descent of the font */
    descent(): number {
        return this.native.descent();
    }

    elidedText(text: string, mode: TextElideMode, width: number, flags = 0): string {
        return this.native.elidedText(text, mode, width, flags);
    }

    /** Returns the font DPI */
    fontDpi(): number {
        return this.native.fontDpi();
    }

    /** Returns the height of the font */
    height(): number {
        return this.native.height();
    }

    /** Returns the horizontal advance in pixels of the first len characters of text. If len is negative (the default), the entire string is used */
    horizontalAdvance(text: string, len = -1): number {
        return this.native.horizontalAdvance(text, len);
    }

    /** Returns true if character ch is a valid character in the font; otherwise returns false */
    inFont(text: string): number {
        return this.native.inFont(text);
    }

    inFontUcs4(ucs4: number): boolean {
        return this.native.inFontUcs4(ucs4);
    }

    /** Returns the leading of the font */
    leading(): number {
        return this.native.leading();
    }

    /** Returns the left bearing of character ch in the font */
    leftBearing(text: string): number {
        return this.native.leftBearing(text);
    }

    /** Returns the distance from one base line to the next */
    lineSpacing(): number {
        return this.native.lineSpacing();
    }

    /** Returns the width of the underline and strikeout lines, adjusted for the point size of the font */
    lineWidth(): number {
        return this.native.lineWidth();
    }
    maxWidth(): number {
        return this.native.maxWidth();
    }
    minLeftBearing(): number {
        return this.native.minLeftBearing();
    }
    minRightBearing(): number {
        return this.native.minRightBearing();
    }

    /** Returns the distance from the base line to where an overline should be drawn */
    overlinePos(): number {
        return this.native.overlinePos();
    }

    /** Returns the right bearing of character ch in the font */
    rightBearing(text: string): number {
        return this.native.rightBearing(text);
    }

    /**
     * Returns the size in pixels of text
     *
     * See QtEnums::TextFlag for flags
     */
    size(flags: TextFlag, text: string, tabStops = 0): QSize {
        const native = this.native.size(flags, text, tabStops);
        return new QSize(native);
    }

    /** Returns the distance from the base line to where the strikeout line should be drawn */
    strikeOutPos(): number {
        return this.native.strikeOutPos();
    }

    /** Swaps metrics other with this metrics. This operation is very fast and never fails */
    swap(other: QFontMetrics): void {
        return this.native.swap(other.native);
    }

    tightBoundingRect(text: string): QRect {
        return new QRect(this.native.tightBoundingRect(text));
    }

    /** Returns the distance from the base line to where an underscore should be drawn */
    underlinePos(): number {
        return this.native.underlinePos();
    }

    /** Returns the 'x' height of the font. This is often but not always the same as the height of the character 'x'. */
    xHeight(): number {
        return this.native.xHeight();
    }
}
