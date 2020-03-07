#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nslider.hpp"

class DLL_EXPORT QSliderWrap : public Napi::ObjectWrap<QSliderWrap> {
  QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NSlider> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSliderWrap(const Napi::CallbackInfo& info);
  ~QSliderWrap();
  NSlider* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
