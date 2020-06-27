#pragma once

#include <napi.h>

#include <QMimeData>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QMimeDataWrap : public Napi::ObjectWrap<QMimeDataWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QMimeData> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMimeDataWrap(const Napi::CallbackInfo& info);
  ~QMimeDataWrap();
  QMimeData* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;

  static void cloneFromMimeDataToData(QMimeData* fromData, QMimeData* toData);
  void cloneFromMimeData(QMimeData* data);

  // wrapped methods
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value hasColor(const Napi::CallbackInfo& info);
  Napi::Value hasHtml(const Napi::CallbackInfo& info);
  Napi::Value hasImage(const Napi::CallbackInfo& info);
  Napi::Value hasText(const Napi::CallbackInfo& info);
  Napi::Value hasUrls(const Napi::CallbackInfo& info);
  Napi::Value html(const Napi::CallbackInfo& info);
  Napi::Value removeFormat(const Napi::CallbackInfo& info);
  // Will need implementation with Buffer or UInt8Array
  // Napi::Value setData(const Napi::CallbackInfo& info);
  Napi::Value setHtml(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value setUrls(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value urls(const Napi::CallbackInfo& info);
};
