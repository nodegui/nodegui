#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QGraphicsEffect/qgraphicseffect_macro.h"
#include "ngraphicsdropshadoweffect.hpp"

class DLL_EXPORT QGraphicsDropShadowEffectWrap
    : public Napi::ObjectWrap<QGraphicsDropShadowEffectWrap> {
  QGRAPHICSEFFECT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QGraphicsDropShadowEffect> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGraphicsDropShadowEffectWrap(const Napi::CallbackInfo& info);
  ~QGraphicsDropShadowEffectWrap();
  QGraphicsDropShadowEffect* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
