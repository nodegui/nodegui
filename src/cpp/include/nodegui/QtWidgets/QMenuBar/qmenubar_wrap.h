#pragma once
#include <napi.h>
#include <nodegui/QtWidgets/QWidget/qwidget_macro.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "nmenubar.hpp"

class DLL_EXPORT QMenuBarWrap : public Napi::ObjectWrap<QMenuBarWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QMenuBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMenuBarWrap(const Napi::CallbackInfo& info);
  ~QMenuBarWrap();
  QMenuBar* getInternalInstance();
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addMenu(const Napi::CallbackInfo& info);
  Napi::Value addSeparator(const Napi::CallbackInfo& info);
  Napi::Value actionAt(const Napi::CallbackInfo& info);
  Napi::Value actionGeometry(const Napi::CallbackInfo& info);
  Napi::Value activeAction(const Napi::CallbackInfo& info);
  Napi::Value addMenu_1(const Napi::CallbackInfo& info);
  Napi::Value addMenu_2(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value cornerWidget(const Napi::CallbackInfo& info);
  Napi::Value insertMenu(const Napi::CallbackInfo& info);
  Napi::Value insertSeparator(const Napi::CallbackInfo& info);
  Napi::Value setActiveAction(const Napi::CallbackInfo& info);
  Napi::Value setCornerWidget(const Napi::CallbackInfo& info);
};
