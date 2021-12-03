
#include "QtCore/QAbstractItemModel/qabstractitemmodel_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QAbstractItemModelWrap::constructor;

Napi::Object QAbstractItemModelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QAbstractItemModel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("initNodeDispatcher",
                      &QAbstractItemModelWrap::initNodeDispatcher),
       InstanceMethod("hasIndex", &QAbstractItemModelWrap::hasIndex),
       InstanceMethod("createIndex", &QAbstractItemModelWrap::createIndex),
       InstanceMethod("_super_flags", &QAbstractItemModelWrap::_super_flags),
       InstanceMethod("emitDataChanged",
                      &QAbstractItemModelWrap::emitDataChanged),
       InstanceMethod("checkIndex", &QAbstractItemModelWrap::checkIndex),
       InstanceMethod("_super_buddy", &QAbstractItemModelWrap::_super_buddy),
       InstanceMethod("beginInsertColumns",
                      &QAbstractItemModelWrap::beginInsertColumns),
       InstanceMethod("beginInsertRows",
                      &QAbstractItemModelWrap::beginInsertRows),
       InstanceMethod("beginMoveColumns",
                      &QAbstractItemModelWrap::beginMoveColumns),
       InstanceMethod("beginMoveRows", &QAbstractItemModelWrap::beginMoveRows),
       InstanceMethod("beginRemoveColumns",
                      &QAbstractItemModelWrap::beginRemoveColumns),
       InstanceMethod("beginRemoveRows",
                      &QAbstractItemModelWrap::beginRemoveRows),
       InstanceMethod("beginResetModel",
                      &QAbstractItemModelWrap::beginResetModel),
       InstanceMethod("endResetModel", &QAbstractItemModelWrap::endResetModel),
       InstanceMethod("endInsertColumns",
                      &QAbstractItemModelWrap::endInsertColumns),
       InstanceMethod("endInsertRows", &QAbstractItemModelWrap::endInsertRows),
       InstanceMethod("endMoveColumns",
                      &QAbstractItemModelWrap::endMoveColumns),
       InstanceMethod("endMoveRows", &QAbstractItemModelWrap::endMoveRows),
       InstanceMethod("endRemoveColumns",
                      &QAbstractItemModelWrap::endRemoveColumns),
       InstanceMethod("endRemoveRows", &QAbstractItemModelWrap::endRemoveRows),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QAbstractItemModelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NAbstractItemModel* QAbstractItemModelWrap::getInternalInstance() {
  return this->instance;
}
QAbstractItemModelWrap::~QAbstractItemModelWrap() {
  extrautils::safeDelete(this->instance);
}

QAbstractItemModelWrap::QAbstractItemModelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QAbstractItemModelWrap>(info) {
  Napi::Env env = info.Env();
  this->instance = new NAbstractItemModel();
}

Napi::Value QAbstractItemModelWrap::initNodeDispatcher(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->dispatchOnNode =
      Napi::Persistent(info[0].As<Napi::Function>());
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::hasIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  QModelIndexWrap* modelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[2].As<Napi::Object>());
  QModelIndex* parentIndex = modelIndexWrap->getInternalInstance();

  auto result = Napi::Value::From(
      env, this->instance->hasIndex(row, column, *parentIndex));
  return result;
}

Napi::Value QAbstractItemModelWrap::createIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();

  QModelIndex resultIndex = this->instance->_protected_createIndex(row, column);

  auto resultModelIndexWrap = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(resultIndex))});
  return resultModelIndexWrap;
}

Napi::Value QAbstractItemModelWrap::_super_flags(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* modelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = modelIndexWrap->getInternalInstance();

  auto result = Napi::Value::From(
      env,
      static_cast<uint>(this->instance->QAbstractItemModel::flags(*index)));
  return result;
}

Napi::Value QAbstractItemModelWrap::emitDataChanged(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* topLeftModelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* topLeftIndex = topLeftModelIndexWrap->getInternalInstance();

  QModelIndexWrap* bottomRightModelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[1].As<Napi::Object>());
  QModelIndex* bottomRightIndex =
      bottomRightModelIndexWrap->getInternalInstance();

  Napi::Array rolesNapi = info[2].As<Napi::Array>();
  QVector<int> roles(rolesNapi.Length());
  for (int i = 0; i < rolesNapi.Length(); i++) {
    Napi::Value numberNapi = rolesNapi[i];
    roles.append(numberNapi.As<Napi::Number>().Int32Value());
  }

  emit this->instance->dataChanged(*topLeftIndex, *bottomRightIndex, roles);

  return env.Null();
}

Napi::Value QAbstractItemModelWrap::checkIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* modelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = modelIndexWrap->getInternalInstance();

  auto result = Napi::Value::From(
      env, static_cast<uint>(this->instance->checkIndex(*index)));
  return result;
}

Napi::Value QAbstractItemModelWrap::_super_buddy(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* modelIndexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = modelIndexWrap->getInternalInstance();

  auto resultIndex = this->instance->QAbstractItemModel::buddy(*index);

  auto resultModelIndexWrap = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(resultIndex))});
  return resultModelIndexWrap;
}

Napi::Value QAbstractItemModelWrap::beginInsertColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  int first = info[1].As<Napi::Number>().Int32Value();
  int last = info[2].As<Napi::Number>().Int32Value();
  this->instance->_protected_beginInsertColumns(*parent, first, last);
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::beginInsertRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  int first = info[1].As<Napi::Number>().Int32Value();
  int last = info[2].As<Napi::Number>().Int32Value();
  this->instance->_protected_beginInsertRows(*parent, first, last);
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::beginMoveColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* sourceParentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* sourceParent = sourceParentWrap->getInternalInstance();
  int sourceFirst = info[1].As<Napi::Number>().Int32Value();
  int sourceLast = info[2].As<Napi::Number>().Int32Value();
  QModelIndexWrap* destinationParentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[3].As<Napi::Object>());
  QModelIndex* destinationParent = destinationParentWrap->getInternalInstance();
  int destinationChild = info[4].As<Napi::Number>().Int32Value();
  bool result = this->instance->_protected_beginMoveColumns(
      *sourceParent, sourceFirst, sourceLast, *destinationParent,
      destinationChild);
  return Napi::Boolean::New(env, result);
}

Napi::Value QAbstractItemModelWrap::beginMoveRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* sourceParentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* sourceParent = sourceParentWrap->getInternalInstance();
  int sourceFirst = info[1].As<Napi::Number>().Int32Value();
  int sourceLast = info[2].As<Napi::Number>().Int32Value();
  QModelIndexWrap* destinationParentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[3].As<Napi::Object>());
  QModelIndex* destinationParent = destinationParentWrap->getInternalInstance();
  int destinationChild = info[4].As<Napi::Number>().Int32Value();
  bool result = this->instance->_protected_beginMoveRows(
      *sourceParent, sourceFirst, sourceLast, *destinationParent,
      destinationChild);
  return Napi::Boolean::New(env, result);
}

Napi::Value QAbstractItemModelWrap::beginRemoveColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  int first = info[1].As<Napi::Number>().Int32Value();
  int last = info[2].As<Napi::Number>().Int32Value();
  this->instance->_protected_beginRemoveColumns(*parent, first, last);
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::beginRemoveRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  int first = info[1].As<Napi::Number>().Int32Value();
  int last = info[2].As<Napi::Number>().Int32Value();
  this->instance->_protected_beginRemoveRows(*parent, first, last);
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::beginResetModel(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_beginResetModel();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endInsertColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endInsertColumns();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endInsertRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endInsertRows();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endMoveColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endMoveColumns();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endMoveRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endMoveRows();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endRemoveColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endRemoveColumns();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endRemoveRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endRemoveRows();
  return env.Null();
}

Napi::Value QAbstractItemModelWrap::endResetModel(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->_protected_endResetModel();
  return env.Null();
}
