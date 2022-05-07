#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QFrame/nframe.hpp"
#include "QtWidgets/QFrame/qframe_macro.h"

class DLL_EXPORT QFrameWrap : public Napi::ObjectWrap<QFrameWrap> {
  QFRAME_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QFrame> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFrameWrap(const Napi::CallbackInfo& info);
  ~QFrameWrap();
  QFrame* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
