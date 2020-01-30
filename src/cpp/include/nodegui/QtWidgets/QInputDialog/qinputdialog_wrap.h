#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QInputDialog/ninputdialog.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QInputDialogWrap : public Napi::ObjectWrap<QInputDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NInputDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QInputDialogWrap(const Napi::CallbackInfo& info);
  ~QInputDialogWrap();
  NInputDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
};
