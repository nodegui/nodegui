import postcss from 'postcss';
import cuid from 'cuid';
import nodeguiAutoPrefixer from 'postcss-nodegui-autoprefixer';
import { QWidget, QWidgetSignals } from '../../QtWidgets/QWidget';
export class StyleSheet {
    static create(cssString: string): string {
        try {
            return postcss([nodeguiAutoPrefixer()]).process(cssString).css;
        } catch (err) {
            console.error(err);
            return '';
        }
    }
}

export function prepareInlineStyleSheet<Signals extends QWidgetSignals>(
    widget: QWidget<Signals>,
    rawStyle: string,
): string {
    const inlineStyle = StyleSheet.create(rawStyle);
    // Make sure to not calculate ObjectName in the same pass of event loop as other props (incase of react) since the order will matter in that case
    // So doing it in multiple passes of event loop allows objectName to be set before using it. The above await solves it.
    let cssId = widget.objectName();
    if (!cssId) {
        cssId = cuid();
        widget.setObjectName(cssId);
    }
    return `
      #${cssId} {
        ${inlineStyle}
      }
  `;
}
