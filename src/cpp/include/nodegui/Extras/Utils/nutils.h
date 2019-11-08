#pragma once

#include <QPointer>

#include "core/FlexLayout/flexlayout.h"

namespace extrautils {
YGSize measureQtWidget(YGNodeRef node, float width, YGMeasureMode widthMode,
                       float height, YGMeasureMode heightMode);
template <typename T>
void safeDelete(QPointer<T> component) {
  if (component.isNull()) {
    delete component;
  }
}
}  // namespace extrautils
