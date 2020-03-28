#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QFontDialog/nfontdialog.hpp"

class DLL_EXPORT QFontDialogWrap : public Napi::ObjectWrap<QFontDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NFontDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontDialogWrap(const Napi::CallbackInfo& info);
  ~QFontDialogWrap();
  NFontDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value selectedFont(const Napi::CallbackInfo& info);
  Napi::Value setOption(const Napi::CallbackInfo& info);
  Napi::Value testOption(const Napi::CallbackInfo& info);
};
