#pragma once

#include <napi.h>

#include <QGridLayout>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QGridLayout/ngridlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

class DLL_EXPORT QGridLayoutWrap : public Napi::ObjectWrap<QGridLayoutWrap> {
  QLAYOUT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QGridLayout> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGridLayoutWrap(const Napi::CallbackInfo& info);
  ~QGridLayoutWrap();
  QGridLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addLayout(const Napi::CallbackInfo& info);
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value columnStretch(const Napi::CallbackInfo& info);
  Napi::Value rowStretch(const Napi::CallbackInfo& info);
  Napi::Value setColumnStretch(const Napi::CallbackInfo& info);
  Napi::Value setRowStretch(const Napi::CallbackInfo& info);
  Napi::Value columnMinimumWidth(const Napi::CallbackInfo& info);
  Napi::Value rowMinimumHeight(const Napi::CallbackInfo& info);
  Napi::Value setColumnMinimumWidth(const Napi::CallbackInfo& info);
  Napi::Value setRowMinimumHeight(const Napi::CallbackInfo& info);
  Napi::Value horizontalSpacing(const Napi::CallbackInfo& info);
  Napi::Value verticalSpacing(const Napi::CallbackInfo& info);
  Napi::Value setHorizontalSpacing(const Napi::CallbackInfo& info);
  Napi::Value setVerticalSpacing(const Napi::CallbackInfo& info);
  Napi::Value columnCount(const Napi::CallbackInfo& info);
  Napi::Value rowCount(const Napi::CallbackInfo& info);
};
