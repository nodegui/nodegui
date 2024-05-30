#pragma once

#include <napi.h>

#include <QStackedLayout>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QStackedLayout/nstackedlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

class DLL_EXPORT QStackedLayoutWrap : public Napi::ObjectWrap<QStackedLayoutWrap> {
  QLAYOUT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QStackedLayout> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QStackedLayoutWrap(const Napi::CallbackInfo& info);
  ~QStackedLayoutWrap();
  QStackedLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo& info);
  Napi::Value insertWidget(const Napi::CallbackInfo& info);
  Napi::Value setCurrentWidget(const Napi::CallbackInfo& info);
  Napi::Value currentIndex(const Napi::CallbackInfo& info);
  Napi::Value currentWidget(const Napi::CallbackInfo& info);
  Napi::Value widget(const Napi::CallbackInfo& info);
  Napi::Value count(const Napi::CallbackInfo& info);
  Napi::Value indexOf(const Napi::CallbackInfo& info);
  Napi::Value setStackingMode(const Napi::CallbackInfo& info);
  Napi::Value stackingMode(const Napi::CallbackInfo& info);
};
