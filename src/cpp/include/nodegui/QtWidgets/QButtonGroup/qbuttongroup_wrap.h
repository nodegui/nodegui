#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nbuttongroup.hpp"
class DLL_EXPORT QButtonGroupWrap : public Napi::ObjectWrap<QButtonGroupWrap> {
 private:
  QPointer<NButtonGroup> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QButtonGroupWrap(const Napi::CallbackInfo& info);
  ~QButtonGroupWrap();
  NButtonGroup* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addButton(const Napi::CallbackInfo& info);
  Napi::Value checkedId(const Napi::CallbackInfo& info);
  Napi::Value id(const Napi::CallbackInfo& info);
  Napi::Value button(const Napi::CallbackInfo& info);
  Napi::Value removeButton(const Napi::CallbackInfo& info);
  Napi::Value buttons(const Napi::CallbackInfo& info);
  Napi::Value setId(const Napi::CallbackInfo& info);
  Napi::Value checkedButton(const Napi::CallbackInfo& info);
  QOBJECT_WRAPPED_METHODS_DECLARATION
};
