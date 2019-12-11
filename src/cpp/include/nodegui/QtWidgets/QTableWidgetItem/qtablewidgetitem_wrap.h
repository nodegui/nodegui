#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QTableWidgetItem>

#include "Extras/Utils/nutils.h"

#include "core/Component/component_wrap.h"


class QTableWidgetItemWrap : public Napi::ObjectWrap<QTableWidgetItemWrap> {
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
  //Napi::Value flags(const Napi::CallbackInfo& info);
  //Napi::Value setFlags(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value setToolTip(const Napi::CallbackInfo& info);
  Napi::Value setTextAlignment(const Napi::CallbackInfo& info);
  Napi::Value textAlignment(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value toolTip(const Napi::CallbackInfo& info);

  COMPONENT_WRAPPED_METHODS_DECLARATION
};
