#pragma once

#include <napi.h>
#include "src/cpp/core/FlexLayout/flexlayout.h"

namespace extrautils {
    void noop();
    void throwTypeError(Napi::Env env, std::string errorMessage);
    YGSize measureQtWidget (YGNodeRef node, float width, YGMeasureMode widthMode, float height, YGMeasureMode heightMode);
}

