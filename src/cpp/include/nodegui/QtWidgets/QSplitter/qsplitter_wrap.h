#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QSplitter/nsplitter.hpp"
#include "QtWidgets/QSplitter/qsplitter_macro.h"

class DLL_EXPORT QSplitterWrap : public Napi::ObjectWrap<QSplitterWrap> {
  QSPLITTER_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QSplitter> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSplitterWrap(const Napi::CallbackInfo& info);
  ~QSplitterWrap();
  QSplitter* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
