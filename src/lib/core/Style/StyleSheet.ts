import postcss from "postcss";
import autoprefixer from "postcss-nodegui-autoprefixer";

export class StyleSheet {
  static create = async (cssString: string): Promise<string> => {
    const { css } = await postcss([autoprefixer()])
      .process(cssString, {
        from: undefined
      })
      .catch(err => {
        console.warn(`Error autoprefixing`, err);
        return { css: cssString };
      });
    return css;
  };
}
