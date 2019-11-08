#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QKeyEvent>

class QKeyEventWrap : public Napi::ObjectWrap<QKeyEventWrap> {
 private:
  QKeyEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QKeyEventWrap(const Napi::CallbackInfo& info);
  ~QKeyEventWrap();
  QKeyEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value text(const Napi::CallbackInfo& info);
  // Napi::Value setFlexNode(const Napi::CallbackInfo& info);
};