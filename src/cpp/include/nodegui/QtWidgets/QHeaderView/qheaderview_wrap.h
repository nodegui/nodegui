#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"
#include "QtWidgets/QHeaderView/nheaderview.hpp"

class DLL_EXPORT QHeaderViewWrap : public Napi::ObjectWrap<QHeaderViewWrap> {
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION_NO_QHEADERVIEW_PROTECTED

  Napi::Value indexAt(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    QPointWrap* pointWrap =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
    QPoint* point = pointWrap->getInternalInstance();
    QModelIndex result = this->instance->QAbstractItemView::indexAt(*point);
    auto resultInstance = QModelIndexWrap::constructor.New(
        {Napi::External<QModelIndex>::New(env, new QModelIndex(result))});
    return resultInstance;
  }

  Napi::Value scrollTo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    QModelIndexWrap* indexWrap =
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
    QModelIndex* index = indexWrap->getInternalInstance();
    QAbstractItemView::ScrollHint hint =
        static_cast<QAbstractItemView::ScrollHint>(
            info[1].As<Napi::Number>().Int32Value());
    this->instance->QAbstractItemView::scrollTo(*index, hint);
    return env.Null();
  }

 private:
  QPointer<QHeaderView> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QHeaderViewWrap(const Napi::CallbackInfo& info);
  ~QHeaderViewWrap();
  QHeaderView* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
