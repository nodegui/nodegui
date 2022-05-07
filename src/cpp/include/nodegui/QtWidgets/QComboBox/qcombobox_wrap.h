#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QComboBox/ncombobox.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QComboBoxWrap : public Napi::ObjectWrap<QComboBoxWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QComboBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QComboBoxWrap(const Napi::CallbackInfo& info);
  ~QComboBoxWrap();
  QComboBox* getInternalInstance();
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
  Napi::Value setModel(const Napi::CallbackInfo& info);
  Napi::Value setEditText(const Napi::CallbackInfo& info);
  Napi::Value count(const Napi::CallbackInfo& info);
  Napi::Value duplicatesEnabled(const Napi::CallbackInfo& info);
  Napi::Value hasFrame(const Napi::CallbackInfo& info);
  Napi::Value hidePopup(const Napi::CallbackInfo& info);
  Napi::Value iconSize(const Napi::CallbackInfo& info);
  Napi::Value maxCount(const Napi::CallbackInfo& info);
  Napi::Value minimumContentsLength(const Napi::CallbackInfo& info);
  Napi::Value modelColumn(const Napi::CallbackInfo& info);
  Napi::Value rootModelIndex(const Napi::CallbackInfo& info);
  Napi::Value setDuplicatesEnabled(const Napi::CallbackInfo& info);
  Napi::Value setMinimumContentsLength(const Napi::CallbackInfo& info);
  Napi::Value setModelColumn(const Napi::CallbackInfo& info);
  Napi::Value setRootModelIndex(const Napi::CallbackInfo& info);
  Napi::Value clearEditText(const Napi::CallbackInfo& info);
  Napi::Value setFrame(const Napi::CallbackInfo& info);
  Napi::Value setItemText(const Napi::CallbackInfo& info);
  Napi::Value setMaxCount(const Napi::CallbackInfo& info);
  Napi::Value showPopup(const Napi::CallbackInfo& info);
  Napi::Value insertPolicy(const Napi::CallbackInfo& info);
  Napi::Value setInsertPolicy(const Napi::CallbackInfo& info);
  Napi::Value setIconSize(const Napi::CallbackInfo& info);
};
