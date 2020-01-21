#pragma once

#include <napi.h>

#include <QFont>
#include "deps/yoga/YGMacros.h"

#include "core/Component/component_macro.h"

class WIN_EXPORT QFontWrap : public Napi::ObjectWrap<QFontWrap> {
 private:
  std::unique_ptr<QFont> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontWrap(const Napi::CallbackInfo& info);
  ~QFontWrap();
  QFont* getInternalInstance();
  // Wrapped methods
  Napi::Value setCapitalization(const Napi::CallbackInfo& info);
  Napi::Value capitalization(const Napi::CallbackInfo& info);
  Napi::Value setFamily(const Napi::CallbackInfo& info);
  Napi::Value family(const Napi::CallbackInfo& info);
  Napi::Value setPointSize(const Napi::CallbackInfo& info);
  Napi::Value pointSize(const Napi::CallbackInfo& info);
  Napi::Value setStretch(const Napi::CallbackInfo& info);
  Napi::Value stretch(const Napi::CallbackInfo& info);
  Napi::Value setWeight(const Napi::CallbackInfo& info);
  Napi::Value weight(const Napi::CallbackInfo& info);
  Napi::Value setItalic(const Napi::CallbackInfo& info);
  Napi::Value italic(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);
  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQFontWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQFontWrapMethods
