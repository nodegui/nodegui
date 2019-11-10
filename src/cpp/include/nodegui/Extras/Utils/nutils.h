#pragma once

#include <napi.h>

#include <QPointer>
#include <QVariant>

#include "core/FlexLayout/flexlayout.h"

namespace extrautils {
YGSize measureQtWidget(YGNodeRef node, float width, YGMeasureMode widthMode,
                       float height, YGMeasureMode heightMode);
QVariant* convertToQVariant(Napi::Env& env, Napi::Value& value);
bool isNapiValueInt(Napi::Env& env, Napi::Value& num);

template <typename T>
void safeDelete(QPointer<T> component) {
  if (component.isNull()) {
    delete component;
  }
}
}  // namespace extrautils
