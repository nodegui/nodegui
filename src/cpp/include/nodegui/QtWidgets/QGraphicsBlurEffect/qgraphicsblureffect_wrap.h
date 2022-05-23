#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "Extras/Utils/nutils.h"
#include "QtWidgets/QGraphicsEffect/qgraphicseffect_macro.h"
#include "ngraphicsblureffect.hpp"

class DLL_EXPORT QGraphicsBlurEffectWrap
    : public Napi::ObjectWrap<QGraphicsBlurEffectWrap> {
  QGRAPHICSEFFECT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QGraphicsBlurEffect> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGraphicsBlurEffectWrap(const Napi::CallbackInfo& info);
  ~QGraphicsBlurEffectWrap();
  QGraphicsBlurEffect* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
