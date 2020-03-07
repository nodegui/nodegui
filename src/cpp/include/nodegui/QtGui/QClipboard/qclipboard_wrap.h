#pragma once

#include <napi.h>

#include <QClipboard>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QClipboardWrap : public Napi::ObjectWrap<QClipboardWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QClipboard* instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QClipboardWrap(const Napi::CallbackInfo& info);
  QClipboard* getInternalInstance();
  // Wrapped methods
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
};
