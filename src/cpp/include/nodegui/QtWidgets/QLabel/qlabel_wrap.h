#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlabel.hpp"

class QLabelWrap : public Napi::ObjectWrap<QLabelWrap> {
 private:
  QPointer<NLabel> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLabelWrap(const Napi::CallbackInfo& info);
  ~QLabelWrap();
  NLabel* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setWordWrap(const Napi::CallbackInfo& info);
  Napi::Value wordWrap(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setPixmap(const Napi::CallbackInfo& info);
  Napi::Value setOpenExternalLinks(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
