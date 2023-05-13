#pragma once
#include <napi.h>
#include <nodegui/QtWidgets/QWidget/qwidget_macro.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "nmenu.hpp"

class DLL_EXPORT QMenuWrap : public Napi::ObjectWrap<QMenuWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QMenu> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMenuWrap(const Napi::CallbackInfo& info);
  ~QMenuWrap();
  QMenu* getInternalInstance();
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value addSeparator(const Napi::CallbackInfo& info);
  Napi::Value exec(const Napi::CallbackInfo& info);
  Napi::Value popup(const Napi::CallbackInfo& info);
  Napi::Value actionAt(const Napi::CallbackInfo& info);
  Napi::Value actionGeometry(const Napi::CallbackInfo& info);
  Napi::Value activeAction(const Napi::CallbackInfo& info);
  Napi::Value addMenu_1(const Napi::CallbackInfo& info);
  Napi::Value addMenu_2(const Napi::CallbackInfo& info);
  Napi::Value addSection_1(const Napi::CallbackInfo& info);
  Napi::Value addSection_2(const Napi::CallbackInfo& info);
  Napi::Value defaultAction(const Napi::CallbackInfo& info);
  Napi::Value hideTearOffMenu(const Napi::CallbackInfo& info);
  Napi::Value insertMenu(const Napi::CallbackInfo& info);
  Napi::Value insertSection_2(const Napi::CallbackInfo& info);
  Napi::Value insertSection_3(const Napi::CallbackInfo& info);
  Napi::Value insertSeparator(const Napi::CallbackInfo& info);
  Napi::Value isEmpty(const Napi::CallbackInfo& info);
  Napi::Value isTearOffMenuVisible(const Napi::CallbackInfo& info);
  Napi::Value menuAction(const Napi::CallbackInfo& info);
  Napi::Value setActiveAction(const Napi::CallbackInfo& info);
  Napi::Value setAsDockMenu(const Napi::CallbackInfo& info);
  Napi::Value setDefaultAction(const Napi::CallbackInfo& info);
  Napi::Value showTearOffMenu_0(const Napi::CallbackInfo& info);
  Napi::Value showTearOffMenu_1(const Napi::CallbackInfo& info);
  Napi::Value icon(const Napi::CallbackInfo& info);
  Napi::Value setIcon(const Napi::CallbackInfo& info);
};
