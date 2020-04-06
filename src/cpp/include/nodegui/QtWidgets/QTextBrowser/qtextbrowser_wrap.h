#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QTextEdit/qtextedit_macro.h"
#include "ntextbrowser.hpp"

class DLL_EXPORT QTextBrowserWrap : public Napi::ObjectWrap<QTextBrowserWrap> {
  QTEXTEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NTextBrowser> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTextBrowserWrap(const Napi::CallbackInfo& info);
  ~QTextBrowserWrap();
  NTextBrowser* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value backwardHistoryCount(const Napi::CallbackInfo& info);
  Napi::Value clearHistory(const Napi::CallbackInfo& info);
  Napi::Value forwardHistoryCount(const Napi::CallbackInfo& info);
  Napi::Value historyTitle(const Napi::CallbackInfo& info);
  Napi::Value historyUrl(const Napi::CallbackInfo& info);
  Napi::Value isBackwardAvailable(const Napi::CallbackInfo& info);
  Napi::Value isForwardAvailable(const Napi::CallbackInfo& info);
  Napi::Value backward(const Napi::CallbackInfo& info);
  Napi::Value forward(const Napi::CallbackInfo& info);
  Napi::Value home(const Napi::CallbackInfo& info);
  Napi::Value reload(const Napi::CallbackInfo& info);
};
