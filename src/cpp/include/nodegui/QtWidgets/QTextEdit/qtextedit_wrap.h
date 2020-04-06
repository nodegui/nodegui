#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QTextEdit/qtextedit_macro.h"
#include "ntextedit.hpp"

class DLL_EXPORT QTextEditWrap : public Napi::ObjectWrap<QTextEditWrap> {
  QTEXTEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NTextEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTextEditWrap(const Napi::CallbackInfo& info);
  ~QTextEditWrap();
  NTextEdit* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
