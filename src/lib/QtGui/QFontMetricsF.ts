import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { QFont } from './QFont';
import { checkIfNativeElement } from '../utils/helpers';
import { QSize } from '../QtCore/QSize';
import { TextElideMode, TextFlag } from '../QtEnums';
import { QRect } from '../..';

export class QFontMetricsF extends Component {
    native: NativeElement;
    constructor(native: NativeElement);
    constructor(qfont: QFont);
    constructor(qfontmetricsf: QFontMetricsF);
    constructor(arg: QFont | QFontMetricsF | NativeElement) {
        super();
        if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else if (arg instanceof QFontMetricsF) {
            this.native = arg.native;
        } else {
            this.native = new addon.QFontMetricsF(arg.native);
        }
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
    swap(other: QFontMetricsF): void {
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
    // TODO: qreal 	ascent() const
    // TODO: qreal 	averageCharWidth() const
    // TODO: QRectF 	boundingRect(const QString &text) const
    // TODO: QRectF 	boundingRect(QChar ch) const
    // TODO: QRectF 	boundingRect(const QRectF &rect, int flags, const QString &text, int tabStops = 0, int *tabArray = nullptr) const
    // TODO: qreal 	capHeight() const
    // TODO: qreal 	descent() const
    // TODO: QString 	elidedText(const QString &text, Qt::TextElideMode mode, qreal width, int flags = 0) const
    // TODO: qreal 	fontDpi() const
    // TODO: qreal 	height() const
    // TODO: qreal 	horizontalAdvance(const QString &text, int length = -1) const
    // TODO: qreal 	horizontalAdvance(QChar ch) const
    // TODO: bool 	inFont(QChar ch) const
    // TODO: bool 	inFontUcs4(uint ch) const
    // TODO: qreal 	leading() const
    // TODO: qreal 	leftBearing(QChar ch) const
    // TODO: qreal 	lineSpacing() const
    // TODO: qreal 	lineWidth() const
    // TODO: qreal 	maxWidth() const
    // TODO: qreal 	minLeftBearing() const
    // TODO: qreal 	minRightBearing() const
    // TODO: qreal 	overlinePos() const
    // TODO: qreal 	rightBearing(QChar ch) const
    // TODO: QSizeF 	size(int flags, const QString &text, int tabStops = 0, int *tabArray = nullptr) const
    // TODO: qreal 	strikeOutPos() const
    // TODO: void 	swap(QFontMetricsF &other)
    // TODO: QRectF 	tightBoundingRect(const QString &text) const
    // TODO: qreal 	underlinePos() const
    // TODO: qreal 	xHeight() const
    // TODO: bool 	operator!=(const QFontMetricsF &other) const
    // TODO: bool 	operator==(const QFontMetricsF &other) const
}
