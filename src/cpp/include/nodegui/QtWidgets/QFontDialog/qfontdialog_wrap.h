#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QFontDialog/nfontdialog.hpp"

class DLL_EXPORT QFontDialogWrap : public Napi::ObjectWrap<QFontDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION_NO_ACCEPT_OR_DONE
 private:
  QPointer<QFontDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontDialogWrap(const Napi::CallbackInfo& info);
  ~QFontDialogWrap();
  QFontDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value selectedFont(const Napi::CallbackInfo& info);
  Napi::Value setOption(const Napi::CallbackInfo& info);
  Napi::Value testOption(const Napi::CallbackInfo& info);
  Napi::Value accept(const Napi::CallbackInfo& info);
  Napi::Value done(const Napi::CallbackInfo& info);
};
