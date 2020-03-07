#pragma once
#include <napi.h>
#include <nodegui/QtWidgets/QWidget/qwidget_macro.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "nmenu.hpp"

class DLL_EXPORT QMenuWrap : public Napi::ObjectWrap<QMenuWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NMenu> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMenuWrap(const Napi::CallbackInfo& info);
  ~QMenuWrap();
  NMenu* getInternalInstance();
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setTitle(const Napi::CallbackInfo& info);
  Napi::Value addSeparator(const Napi::CallbackInfo& info);
  Napi::Value exec(const Napi::CallbackInfo& info);
  Napi::Value popup(const Napi::CallbackInfo& info);
};
