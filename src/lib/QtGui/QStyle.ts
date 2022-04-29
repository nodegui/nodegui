import { QWidget } from '../..';
import { Component, NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';

export class QStyle extends Component {
    constructor(native: NativeElement) {
        if (!checkIfNativeElement(native)) {
            throw new Error('QStyle cannot be initialised this way. Use QApplication::style()');
        }
        super(native);
    }

    pixelMetric(metric: QStylePixelMetric): number {
        return this.native.pixelMetric(metric);
    }
    polish(widget: QWidget): void {
        this.native.polish(widget.native);
    }
    unpolish(widget: QWidget): void {
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
    PM_TabBarTabOverlap = 19,
    PM_TabBarTabHSpace = 20,
    PM_TabBarTabVSpace = 21,
    PM_TabBarBaseHeight = 22,
    PM_TabBarBaseOverlap = 23,
    PM_ProgressBarChunkWidth = 24,
    PM_SplitterWidth = 25,
    PM_TitleBarHeight = 26,
    PM_MenuScrollerHeight = 27,
    PM_MenuHMargin = 28,
    PM_MenuVMargin = 29,
    PM_MenuPanelWidth = 30,
    PM_MenuTearoffHeight = 31,
    PM_MenuDesktopFrameWidth = 32,
    PM_MenuBarPanelWidth = 33,
    PM_MenuBarItemSpacing = 34,
    PM_MenuBarVMargin = 35,
    PM_MenuBarHMargin = 36,
    PM_IndicatorWidth = 37,
    PM_IndicatorHeight = 38,
    PM_ExclusiveIndicatorWidth = 39,
    PM_ExclusiveIndicatorHeight = 40,
    PM_DialogButtonsSeparator,
    PM_DialogButtonsButtonWidth,
    PM_DialogButtonsButtonHeight,
    PM_MdiSubWindowFrameWidth = 44,
    PM_MdiSubWindowMinimizedWidth = 45,
    PM_HeaderMargin = 46,
    PM_HeaderMarkSize = 47,
    PM_HeaderGripMargin = 48,
    PM_TabBarTabShiftHorizontal = 49,
    PM_TabBarTabShiftVertical = 50,
    PM_TabBarScrollButtonWidth = 51,
    PM_ToolBarFrameWidth = 52,
    PM_ToolBarHandleExtent = 53,
    PM_ToolBarItemSpacing = 54,
    PM_ToolBarItemMargin = 55,
    PM_ToolBarSeparatorExtent = 56,
    PM_ToolBarExtensionExtent = 57,
    PM_SpinBoxSliderHeight = 58,
    PM_DefaultTopLevelMargin = 59,
    PM_DefaultChildMargin = 60,
    PM_DefaultLayoutSpacing = 61,
    PM_ToolBarIconSize = 62,
    PM_ListViewIconSize = 63,
    PM_IconViewIconSize = 64,
    PM_SmallIconSize = 65,
    PM_LargeIconSize = 66,
    PM_FocusFrameVMargin = 67,
    PM_FocusFrameHMargin = 68,
    PM_ToolTipLabelFrameWidth = 69,
    PM_CheckBoxLabelSpacing = 70,
    PM_TabBarIconSize = 71,
    PM_SizeGripSize = 72,
    PM_DockWidgetTitleMargin = 73,
    PM_MessageBoxIconSize = 74,
    PM_ButtonIconSize = 75,
    PM_DockWidgetTitleBarButtonMargin = 76,
    PM_RadioButtonLabelSpacing = 77,
    PM_LayoutLeftMargin = 78,
    PM_LayoutTopMargin = 79,
    PM_LayoutRightMargin = 80,
    PM_LayoutBottomMargin = 81,
    PM_LayoutHorizontalSpacing = 82,
    PM_LayoutVerticalSpacing = 83,
    PM_TabBar_ScrollButtonOverlap = 84,
    PM_TextCursorWidth = 85,
    PM_TabCloseIndicatorWidth = 86,
    PM_TabCloseIndicatorHeight = 87,
    PM_ScrollView_ScrollBarSpacing = 88,
    PM_ScrollView_ScrollBarOverlap = 89,
    PM_SubMenuOverlap = 90,
    PM_TreeViewIndentation = 91,
    PM_HeaderDefaultSectionSizeHorizontal = 92,
    PM_HeaderDefaultSectionSizeVertical = 93,
    PM_TitleBarButtonIconSize = 94,
    PM_TitleBarButtonSize = 95,
    PM_CustomBase = 0xf0000000,
}
