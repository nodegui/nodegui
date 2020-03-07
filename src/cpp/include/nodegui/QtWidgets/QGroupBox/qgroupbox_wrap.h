#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ngroupbox.hpp"

class DLL_EXPORT QGroupBoxWrap : public Napi::ObjectWrap<QGroupBoxWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NGroupBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGroupBoxWrap(const Napi::CallbackInfo& info);
  ~QGroupBoxWrap();
  NGroupBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
