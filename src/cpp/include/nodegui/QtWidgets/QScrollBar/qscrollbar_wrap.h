#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nscrollbar.hpp"

class DLL_EXPORT QScrollBarWrap : public Napi::ObjectWrap<QScrollBarWrap> {
  QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QScrollBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QScrollBarWrap(const Napi::CallbackInfo& info);
  ~QScrollBarWrap();
  QScrollBar* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
