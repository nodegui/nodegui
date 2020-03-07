#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QComboBox/ncombobox.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QComboBoxWrap : public Napi::ObjectWrap<QComboBoxWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NComboBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QComboBoxWrap(const Napi::CallbackInfo& info);
  ~QComboBoxWrap();
  NComboBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addItem(const Napi::CallbackInfo& info);
  Napi::Value insertItem(const Napi::CallbackInfo& info);
  Napi::Value addItems(const Napi::CallbackInfo& info);
  Napi::Value insertItems(const Napi::CallbackInfo& info);
  Napi::Value currentIndex(const Napi::CallbackInfo& info);
  Napi::Value currentText(const Napi::CallbackInfo& info);
  Napi::Value insertSeparator(const Napi::CallbackInfo& info);
  Napi::Value itemText(const Napi::CallbackInfo& info);
  Napi::Value itemData(const Napi::CallbackInfo& info);
  Napi::Value removeItem(const Napi::CallbackInfo& info);
  Napi::Value sizeAdjustPolicy(const Napi::CallbackInfo& info);
  Napi::Value setSizeAdjustPolicy(const Napi::CallbackInfo& info);
  Napi::Value maxVisibleItems(const Napi::CallbackInfo& info);
  Napi::Value setMaxVisibleItems(const Napi::CallbackInfo& info);
  Napi::Value isEditable(const Napi::CallbackInfo& info);
  Napi::Value setEditable(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
};
