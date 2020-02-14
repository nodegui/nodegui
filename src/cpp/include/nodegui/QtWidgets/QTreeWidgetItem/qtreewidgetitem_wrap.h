#pragma once

#include <napi.h>

#include <QTreeWidgetItem>

#include "Extras/Export/export.h"
#include "core/Component/component_wrap.h"

class DLL_EXPORT QTreeWidgetItemWrap
    : public Napi::ObjectWrap<QTreeWidgetItemWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  QTreeWidgetItem *instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  static Napi::Value fromQTreeWidgetItem(Napi::Env env, QTreeWidgetItem *item);

  QTreeWidgetItemWrap(const Napi::CallbackInfo &info);

  ~QTreeWidgetItemWrap();

  QTreeWidgetItem *getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo &info);
  Napi::Value parent(const Napi::CallbackInfo &info);
  Napi::Value childCount(const Napi::CallbackInfo &info);
  Napi::Value child(const Napi::CallbackInfo &info);
  Napi::Value text(const Napi::CallbackInfo &info);
  Napi::Value setSelected(const Napi::CallbackInfo &info);
  Napi::Value setExpanded(const Napi::CallbackInfo &info);
  Napi::Value addChild(const Napi::CallbackInfo &info);
  Napi::Value setFlags(const Napi::CallbackInfo &info);
  Napi::Value setCheckState(const Napi::CallbackInfo &info);
  Napi::Value flags(const Napi::CallbackInfo &info);
  Napi::Value setData(const Napi::CallbackInfo &info);
  Napi::Value data(const Napi::CallbackInfo &info);
};