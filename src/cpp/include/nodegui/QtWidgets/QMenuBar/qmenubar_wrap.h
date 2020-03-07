#pragma once
#include <napi.h>
#include <nodegui/QtWidgets/QWidget/qwidget_macro.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "nmenubar.hpp"

class DLL_EXPORT QMenuBarWrap : public Napi::ObjectWrap<QMenuBarWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NMenuBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMenuBarWrap(const Napi::CallbackInfo& info);
  ~QMenuBarWrap();
  NMenuBar* getInternalInstance();
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addMenu(const Napi::CallbackInfo& info);
  Napi::Value addSeparator(const Napi::CallbackInfo& info);
  Napi::Value setNativeMenuBar(const Napi::CallbackInfo& info);
};
