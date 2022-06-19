#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QColorDialog/ncolordialog.hpp"
#include "QtWidgets/QDialog/qdialog_macro.h"

class DLL_EXPORT QColorDialogWrap : public Napi::ObjectWrap<QColorDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION_NO_ACCEPT_OR_DONE
 private:
  QPointer<QColorDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QColorDialogWrap(const Napi::CallbackInfo& info);
  ~QColorDialogWrap();
  QColorDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value selectedColor(const Napi::CallbackInfo& info);
  Napi::Value setOption(const Napi::CallbackInfo& info);
  Napi::Value testOption(const Napi::CallbackInfo& info);
  Napi::Value accept(const Napi::CallbackInfo& info);
  Napi::Value done(const Napi::CallbackInfo& info);
};

namespace StaticQColorDialogWrapMethods {
DLL_EXPORT Napi::Value customColor(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value customCount(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value setCustomColor(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value setStandardColor(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value standardColor(const Napi::CallbackInfo& info);
}  // namespace StaticQColorDialogWrapMethods
