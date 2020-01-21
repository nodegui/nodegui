#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlabel.hpp"

class WIN_EXPORT QLabelWrap : public Napi::ObjectWrap<QLabelWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
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
  Napi::Value setAlignment(const Napi::CallbackInfo& info);
  Napi::Value alignment(const Napi::CallbackInfo& info);
  Napi::Value setIndent(const Napi::CallbackInfo& info);
  Napi::Value indent(const Napi::CallbackInfo& info);
  Napi::Value setMargin(const Napi::CallbackInfo& info);
  Napi::Value margin(const Napi::CallbackInfo& info);
  Napi::Value setTextFormat(const Napi::CallbackInfo& info);
  Napi::Value textFormat(const Napi::CallbackInfo& info);
  Napi::Value setWordWrap(const Napi::CallbackInfo& info);
  Napi::Value wordWrap(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setPixmap(const Napi::CallbackInfo& info);
  Napi::Value setMovie(const Napi::CallbackInfo& info);
  Napi::Value setOpenExternalLinks(const Napi::CallbackInfo& info);
  Napi::Value openExternalLinks(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
};
