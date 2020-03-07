#pragma once

#include <napi.h>

#include <QTableWidgetItem>

#include "Extras/Export/export.h"
#include "core/Component/component_wrap.h"

class DLL_EXPORT QTableWidgetItemWrap
    : public Napi::ObjectWrap<QTableWidgetItemWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  QTableWidgetItem* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTableWidgetItemWrap(const Napi::CallbackInfo& info);
  ~QTableWidgetItemWrap();
  QTableWidgetItem* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value setToolTip(const Napi::CallbackInfo& info);
  Napi::Value setTextAlignment(const Napi::CallbackInfo& info);
  Napi::Value textAlignment(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value toolTip(const Napi::CallbackInfo& info);
};
