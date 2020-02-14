#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QListView/qlistview_macro.h"
#include "QtWidgets/QListWidget/nlistwidget.hpp"

class DLL_EXPORT QListWidgetWrap : public Napi::ObjectWrap<QListWidgetWrap> {
 private:
  QPointer<NListWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QListWidgetWrap(const Napi::CallbackInfo& info);
  ~QListWidgetWrap();
  NListWidget* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addItem(const Napi::CallbackInfo& info);
  Napi::Value addItems(const Napi::CallbackInfo& info);
  Napi::Value closePersistentEditor(const Napi::CallbackInfo& info);
  Napi::Value currentItem(const Napi::CallbackInfo& info);
  Napi::Value editItem(const Napi::CallbackInfo& info);
  Napi::Value insertItem(const Napi::CallbackInfo& info);
  Napi::Value insertItems(const Napi::CallbackInfo& info);
  Napi::Value isPersistentEditorOpen(const Napi::CallbackInfo& info);
  Napi::Value item(const Napi::CallbackInfo& info);
  Napi::Value itemAt(const Napi::CallbackInfo& info);
  Napi::Value itemWidget(const Napi::CallbackInfo& info);
  Napi::Value openPersistentEditor(const Napi::CallbackInfo& info);
  Napi::Value removeItemWidget(const Napi::CallbackInfo& info);
  Napi::Value row(const Napi::CallbackInfo& info);
  Napi::Value setCurrentItem(const Napi::CallbackInfo& info);
  Napi::Value setItemWidget(const Napi::CallbackInfo& info);
  Napi::Value sortItems(const Napi::CallbackInfo& info);
  Napi::Value takeItem(const Napi::CallbackInfo& info);
  Napi::Value visualItemRect(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value scrollToItem(const Napi::CallbackInfo& info);

  QListView_WRAPPED_METHODS_DECLARATION
};
