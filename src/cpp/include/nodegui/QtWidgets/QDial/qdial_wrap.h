#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ndial.hpp"

class DLL_EXPORT QDialWrap : public Napi::ObjectWrap<QDialWrap> {
  QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QDial> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDialWrap(const Napi::CallbackInfo& info);
  ~QDialWrap();
  QDial* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
