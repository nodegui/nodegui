#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QScrollArea/qscrollarea_macro.h"
#include "nscrollarea.hpp"

class DLL_EXPORT QScrollAreaWrap : public Napi::ObjectWrap<QScrollAreaWrap> {
  QSCROLLAREA_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QScrollArea> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QScrollAreaWrap(const Napi::CallbackInfo& info);
  ~QScrollAreaWrap();
  QScrollArea* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
};
