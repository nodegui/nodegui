#pragma once

#include <napi.h>

#include <QUrl>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QUrlWrap : public Napi::ObjectWrap<QUrlWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QUrl> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QUrlWrap(const Napi::CallbackInfo& info);
  ~QUrlWrap();
  QUrl* getInternalInstance();
  // Wrapped methods
  Napi::Value setUrl(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);

  Napi::Value adjusted(const Napi::CallbackInfo& info);
  Napi::Value authority(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value errorString(const Napi::CallbackInfo& info);
  Napi::Value fileName(const Napi::CallbackInfo& info);
  Napi::Value fragment(const Napi::CallbackInfo& info);
  Napi::Value hasFragment(const Napi::CallbackInfo& info);
  Napi::Value hasQuery(const Napi::CallbackInfo& info);
  Napi::Value host(const Napi::CallbackInfo& info);
  Napi::Value isEmpty(const Napi::CallbackInfo& info);
  Napi::Value isLocalFile(const Napi::CallbackInfo& info);
  Napi::Value isParentOf(const Napi::CallbackInfo& info);
  Napi::Value isRelative(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value matches(const Napi::CallbackInfo& info);
  Napi::Value password(const Napi::CallbackInfo& info);
  Napi::Value path(const Napi::CallbackInfo& info);
  Napi::Value port(const Napi::CallbackInfo& info);
  Napi::Value query(const Napi::CallbackInfo& info);
  Napi::Value resolved(const Napi::CallbackInfo& info);
  Napi::Value scheme(const Napi::CallbackInfo& info);
  Napi::Value setAuthority(const Napi::CallbackInfo& info);
  Napi::Value setFragment(const Napi::CallbackInfo& info);
  Napi::Value setHost(const Napi::CallbackInfo& info);
  Napi::Value setPassword(const Napi::CallbackInfo& info);
  Napi::Value setPath(const Napi::CallbackInfo& info);
  Napi::Value setPort(const Napi::CallbackInfo& info);
  Napi::Value setQuery(const Napi::CallbackInfo& info);
  Napi::Value setScheme(const Napi::CallbackInfo& info);
  Napi::Value setUserInfo(const Napi::CallbackInfo& info);
  Napi::Value setUserName(const Napi::CallbackInfo& info);
  Napi::Value swap(const Napi::CallbackInfo& info);
  Napi::Value toDisplayString(const Napi::CallbackInfo& info);
  Napi::Value toLocalFile(const Napi::CallbackInfo& info);
  Napi::Value toString_withOpts(const Napi::CallbackInfo& info);
  Napi::Value url(const Napi::CallbackInfo& info);
  Napi::Value userInfo(const Napi::CallbackInfo& info);
  Napi::Value userName(const Napi::CallbackInfo& info);
};

namespace StaticQUrlWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromLocalFile(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromUserInput(const Napi::CallbackInfo& info);
}  // namespace StaticQUrlWrapMethods