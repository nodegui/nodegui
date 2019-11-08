import postcss from 'postcss';
import cuid from 'cuid';
import nodeguiAutoPrefixer from 'postcss-nodegui-autoprefixer';
import { NodeWidget } from '../../QtWidgets/QWidget';
export class StyleSheet {
    static create = async (cssString: string): Promise<string> => {
        const { css } = await postcss([nodeguiAutoPrefixer()])
            .process(cssString, { from: undefined })
            .catch(err => {
                console.warn(`Error autoprefixing`, err);
                return { css: cssString };
            });
        return css;
    };
}

export const prepareInlineStyleSheet = async (widget: NodeWidget, rawStyle: string) => {
    const inlineStyle = await StyleSheet.create(rawStyle);
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
};

export const applyStyleSheet = async (widget: NodeWidget, styleSheet: string) => {
    widget.native.setStyleSheet(styleSheet);
    widget.layout ? widget.layout.update() : widget.update();
};
