#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nradiobutton.hpp"

class WIN_EXPORT QRadioButtonWrap : public Napi::ObjectWrap<QRadioButtonWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NRadioButton> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRadioButtonWrap(const Napi::CallbackInfo& info);
  ~QRadioButtonWrap();
  NRadioButton* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
