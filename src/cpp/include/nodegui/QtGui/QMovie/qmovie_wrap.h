#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "QtCore/QObject/qobject_macro.h"
#include "nmovie.hpp"

class WIN_EXPORT QMovieWrap : public Napi::ObjectWrap<QMovieWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NMovie> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMovieWrap(const Napi::CallbackInfo& info);
  ~QMovieWrap();
  NMovie* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setFileName(const Napi::CallbackInfo& info);
  Napi::Value fileName(const Napi::CallbackInfo& info);
  Napi::Value setFormat(const Napi::CallbackInfo& info);
  Napi::Value format(const Napi::CallbackInfo& info);
  Napi::Value setScaledSize(const Napi::CallbackInfo& info);
  Napi::Value start(const Napi::CallbackInfo& info);
  Napi::Value stop(const Napi::CallbackInfo& info);
  Napi::Value setPaused(const Napi::CallbackInfo& info);
  Napi::Value jumpToNextFrame(const Napi::CallbackInfo& info);
  Napi::Value jumpToFrame(const Napi::CallbackInfo& info);
  Napi::Value state(const Napi::CallbackInfo& info);
  Napi::Value currentFrameNumber(const Napi::CallbackInfo& info);
  Napi::Value currentPixmap(const Napi::CallbackInfo& info);
  Napi::Value loadFromData(const Napi::CallbackInfo& info);
};
