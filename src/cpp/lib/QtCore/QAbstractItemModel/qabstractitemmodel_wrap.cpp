
#include "QtCore/QAbstractItemModel/qabstractitemmodel_wrap.h"

#include "Extras/Utils/nutils.h"


Napi::FunctionReference QAbstractItemModelWrap::constructor;

Napi::Object QAbstractItemModelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QAbstractItemModel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("initNodeDispatcher", &QAbstractItemModelWrap::initNodeDispatcher),
      InstanceMethod("hasIndex", &QAbstractItemModelWrap::hasIndex),
      InstanceMethod("createIndex", &QAbstractItemModelWrap::createIndex),
      InstanceMethod("_super_flags", &QAbstractItemModelWrap::_super_flags),
      QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QAbstractItemModelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NAbstractItemModel* QAbstractItemModelWrap::getInternalInstance() { return this->instance; }
QAbstractItemModelWrap::~QAbstractItemModelWrap() { extrautils::safeDelete(this->instance); }

QAbstractItemModelWrap::QAbstractItemModelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QAbstractItemModelWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance = new NAbstractItemModel();
}

Napi::Value QAbstractItemModelWrap::initNodeDispatcher(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->dispatchOnNode = Napi::Persistent(info[0].As<Napi::Function>());
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::hasIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  QModelIndexWrap* modelIndexWrap = Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[2].As<Napi::Object>());
  QModelIndex* parentIndex = modelIndexWrap->getInternalInstance();

  auto result = Napi::Value::From(env, this->instance->hasIndex(row, column, *parentIndex));
  return result;
}

Napi::Value QAbstractItemModelWrap::createIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();

  QModelIndex resultIndex = this->instance->_protected_createIndex(row, column);

  auto resultModelIndexWrap = QModelIndexWrap::constructor.New({Napi::External<QModelIndex>::New(env, new QModelIndex(resultIndex))});
  return resultModelIndexWrap;
}

Napi::Value QAbstractItemModelWrap::_super_flags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QModelIndexWrap* modelIndexWrap = Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = modelIndexWrap->getInternalInstance();

  auto result = Napi::Value::From(env, static_cast<uint>(this->instance->QAbstractItemModel::flags(*index)));
  return result;
}
