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
  Napi::Value row(const Napi::CallbackInfo& info);
  Napi::Value column(const Napi::CallbackInfo& info);
  Napi::Value setBackground(const Napi::CallbackInfo& info);
  Napi::Value background(const Napi::CallbackInfo& info);
  Napi::Value setCheckState(const Napi::CallbackInfo& info);
  Napi::Value checkState(const Napi::CallbackInfo& info);
  Napi::Value setData(const Napi::CallbackInfo& info);
  Napi::Value data(const Napi::CallbackInfo& info);
  Napi::Value setFlags(const Napi::CallbackInfo& info);
  Napi::Value flags(const Napi::CallbackInfo& info);
  Napi::Value setFont(const Napi::CallbackInfo& info);
  Napi::Value font(const Napi::CallbackInfo& info);
  Napi::Value setForeground(const Napi::CallbackInfo& info);
  Napi::Value foreground(const Napi::CallbackInfo& info);
  Napi::Value setIcon(const Napi::CallbackInfo& info);
  Napi::Value icon(const Napi::CallbackInfo& info);
  Napi::Value setSelected(const Napi::CallbackInfo& info);
  Napi::Value isSelected(const Napi::CallbackInfo& info);
  Napi::Value setSizeHint(const Napi::CallbackInfo& info);
  Napi::Value sizeHint(const Napi::CallbackInfo& info);
  Napi::Value setStatusTip(const Napi::CallbackInfo& info);
  Napi::Value statusTip(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setTextAlignment(const Napi::CallbackInfo& info);
  Napi::Value textAlignment(const Napi::CallbackInfo& info);
  Napi::Value setToolTip(const Napi::CallbackInfo& info);
  Napi::Value toolTip(const Napi::CallbackInfo& info);
  Napi::Value setWhatsThis(const Napi::CallbackInfo& info);
  Napi::Value whatsThis(const Napi::CallbackInfo& info);
  Napi::Value type(const Napi::CallbackInfo& info);
};
