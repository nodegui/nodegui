#include "utils.h"
#include <string>
#include <QWidget>
#include "deps/spdlog/spdlog.h"

void extrautils::noop(){}

void extrautils::throwTypeError(Napi::Env env, std::string errorMessage){
    Napi::TypeError::New(env, errorMessage.c_str()).ThrowAsJavaScriptException();
}

YGSize extrautils::measureQtWidget (YGNodeRef node, float width, YGMeasureMode widthMode, float height, YGMeasureMode heightMode){
    FlexLayout::NodeContext *ctx = FlexLayout::getNodeContext(node);
    if(ctx){
        QLayoutItem* childLayoutItem = ctx->item;
        QWidget* widget = childLayoutItem->widget();
        if(widget){
            QSize size = widget->sizeHint();
            return YGSize{
                .width = static_cast<float>(size.width()),
                .height = static_cast<float>(size.height()),
            };
        }
    }
    return YGSize{ .width = 0, .height = 0};
}