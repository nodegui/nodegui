import { NodeWidget } from '../..';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

export class QStyle extends Component {
    native: NativeElement;
    constructor(native: NativeElement) {
        super();
        if (checkIfNativeElement(native)) {
            this.native = native;
        } else {
            throw new Error('QStyle cannot be initialised this way. Use QApplication::style()');
        }
    }

    pixelMetric(metric: QStylePixelMetric): number {
        return this.native.pixelMetric(metric);
    }
    polish(widget: NodeWidget<any>): void {
        this.native.polish(widget.native);
    }
    unpolish(widget: NodeWidget<any>): void {
        this.native.unpolish(widget.native);
    }
}

export enum QStylePixelMetric {
    PM_ButtonMargin = 0,
    PM_ButtonDefaultIndicator = 1,
    PM_MenuButtonIndicator = 2,
    PM_ButtonShiftHorizontal = 3,
    PM_ButtonShiftVertical = 4,
    PM_DefaultFrameWidth = 5,
    PM_SpinBoxFrameWidth = 6,
    PM_ComboBoxFrameWidth = 7,
    PM_MaximumDragDistance = 8,
    PM_ScrollBarExtent = 9,
    PM_ScrollBarSliderMin = 10,
    PM_SliderThickness = 11,
    PM_SliderControlThickness = 12,
    PM_SliderLength = 13,
    PM_SliderTickmarkOffset = 14,
    PM_SliderSpaceAvailable = 15,
    PM_DockWidgetSeparatorExtent = 16,
    PM_DockWidgetHandleExtent = 17,
    PM_DockWidgetFrameWidth = 18,
    PM_MenuBarPanelWidth = 33,
    PM_MenuBarItemSpacing = 34,
    PM_MenuBarHMargin = 36,
    PM_MenuBarVMargin = 35,
    PM_TabBarTabOverlap = 19,
    PM_TabBarTabHSpace = 20,
    PM_TabBarTabVSpace = 21,
    PM_TabBarBaseHeight = 22,
    PM_TabBarBaseOverlap = 23,
    PM_ProgressBarChunkWidth = 24,
    PM_SplitterWidth = 25,
    PM_TitleBarHeight = 26,
    PM_IndicatorWidth = 37,
    PM_IndicatorHeight = 38,
    PM_ExclusiveIndicatorWidth = 39,
    PM_ExclusiveIndicatorHeight = 40,
    PM_MenuPanelWidth = 30,
    PM_MenuHMargin = 28,
    PM_MenuVMargin = 29,
    PM_MenuScrollerHeight = 27,
    PM_MenuTearoffHeight = 31,
    PM_MenuDesktopFrameWidth = 32,
    PM_CheckListButtonSize = 41,
    PM_CheckListControllerSize = 42,
    PM_MdiSubWindowFrameWidth = 46,
}
