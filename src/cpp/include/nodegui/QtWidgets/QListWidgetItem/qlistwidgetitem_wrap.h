#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QListWidgetItem>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

class QListWidgetItemWrap : public Napi::ObjectWrap<QListWidgetItemWrap> {
 private:
  QListWidgetItem* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QListWidgetItemWrap(const Napi::CallbackInfo& info);
  ~QListWidgetItemWrap();
  QListWidgetItem* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setCheckState(const Napi::CallbackInfo& info);
  Napi::Value checkState(const Napi::CallbackInfo& info);
  Napi::Value data(const Napi::CallbackInfo& info);
  Napi::Value setFlags(const Napi::CallbackInfo& info);
  Napi::Value flags(const Napi::CallbackInfo& info);
  Napi::Value setIcon(const Napi::CallbackInfo& info);
  Napi::Value icon(const Napi::CallbackInfo& info);
  Napi::Value setHidden(const Napi::CallbackInfo& info);
  Napi::Value isHidden(const Napi::CallbackInfo& info);
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

  COMPONENT_WRAPPED_METHODS_DECLARATION
};
