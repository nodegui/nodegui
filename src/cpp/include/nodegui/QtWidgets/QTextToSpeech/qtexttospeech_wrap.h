#pragma once

#include <napi.h>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "nqtexttospeech.hpp"

class DLL_EXPORT QTextToSpeechtWrap : public Napi::ObjectWrap<QTextToSpeechtWrap> {
  QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<Nqtexttospeech> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTextToSpeechtWrap(const Napi::CallbackInfo &info);
  ~QTextToSpeechtWrap();
  Nqtexttospeech *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value say(const Napi::CallbackInfo &info);
  Napi::Value setVoice(const Napi::CallbackInfo &info);
  Napi::Value setLocale(const Napi::CallbackInfo &info);
  Napi::Value availableLocales(const Napi::CallbackInfo &info);
  Napi::Value locale(const Napi::CallbackInfo &info);
};
