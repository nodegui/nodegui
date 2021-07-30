import { Component, NativeElement } from '../core/Component';
import { QColor } from './QColor';

export enum ColorGroup {
    Disabled = 1,
    Active = 0,
    Inactive = 2,
    Normal = 0,
}

export enum ColorRole {
    WindowText = 0,
    Button = 1,
    Light = 2,
    Midlight = 3,
    Dark = 4,
    Mid = 5,
    Text = 6,
    BrightText = 7,
    ButtonText = 8,
    Base = 9,
    Window = 10,
    Shadow = 11,
    Highlight = 12,
    HighlightedText = 13,
    Link = 14,
    LinkVisited = 15,
    AlternateBase = 16,
    NoRole = 17,
    ToolTipBase = 18,
    ToolTipText = 19,
    PlaceholderText = 20,
}

export class QPalette extends Component {
    native: NativeElement;
    constructor(native: NativeElement) {
        super();
        this.native = native;
    }

    color(group: ColorGroup, role: ColorRole): QColor {
        return new QColor(this.native.color(group, role));
    }
}
