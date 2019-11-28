#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtCore/QObject/qobject_macro.h"
#include "nmovie.hpp"

class QMovieWrap : public Napi::ObjectWrap<QMovieWrap> {
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
  QOBJECT_WRAPPED_METHODS_DECLARATION
};
