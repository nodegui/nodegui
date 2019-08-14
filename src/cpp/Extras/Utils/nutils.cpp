#include "nutils.h"
#include <string>
#include <QWidget>
#include "deps/spdlog/spdlog.h"

void extrautils::noop(){}

YGSize extrautils::measureQtWidget (YGNodeRef node, float width, YGMeasureMode widthMode, float height, YGMeasureMode heightMode){
    FlexLayout::NodeContext *ctx = FlexLayout::getNodeContext(node);
    if(ctx){
        QLayoutItem* childLayoutItem = ctx->item;
        QWidget* widget = childLayoutItem->widget();
        float width = 0.0;
        float height = 0.0;
        if(widget){
            QSize size = widget->sizeHint();
            width = static_cast<float>(size.width());
            height = static_cast<float>(size.height());
            return YGSize{
                width,
                height,
            };
        }
    }
    return YGSize{width, height};
}