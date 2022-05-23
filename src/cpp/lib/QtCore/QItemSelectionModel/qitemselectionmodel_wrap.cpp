#include "QtCore/QItemSelectionModel/qitemselectionmodel_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QModelIndex/qmodelindex_wrap.h"

Napi::FunctionReference QItemSelectionModelWrap::constructor;

Napi::Object QItemSelectionModelWrap::init(Napi::Env env,
                                           Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QItemSelectionModel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("columnIntersectsSelection",
                      &QItemSelectionModelWrap::columnIntersectsSelection),
       InstanceMethod("currentIndex", &QItemSelectionModelWrap::currentIndex),
       InstanceMethod("hasSelection", &QItemSelectionModelWrap::hasSelection),
       InstanceMethod("isColumnSelected",
                      &QItemSelectionModelWrap::isColumnSelected),
       InstanceMethod("isRowSelected", &QItemSelectionModelWrap::isRowSelected),
       InstanceMethod("isSelected", &QItemSelectionModelWrap::isSelected),
       InstanceMethod("rowIntersectsSelection",
                      &QItemSelectionModelWrap::rowIntersectsSelection),
       InstanceMethod("clear", &QItemSelectionModelWrap::clear),
       InstanceMethod("clearCurrentIndex",
                      &QItemSelectionModelWrap::clearCurrentIndex),
       InstanceMethod("clearSelection",
                      &QItemSelectionModelWrap::clearSelection),
       InstanceMethod("reset", &QItemSelectionModelWrap::reset),
       InstanceMethod("select", &QItemSelectionModelWrap::select),
       InstanceMethod("setCurrentIndex",
                      &QItemSelectionModelWrap::setCurrentIndex),
       InstanceMethod("selectedColumns",
                      &QItemSelectionModelWrap::selectedColumns),
       InstanceMethod("selectedIndexes",
                      &QItemSelectionModelWrap::selectedIndexes),
       InstanceMethod("selectedRows", &QItemSelectionModelWrap::selectedRows),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QItemSelectionModelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QItemSelectionModel, QItemSelectionModelWrap);
  return exports;
}

QItemSelectionModel* QItemSelectionModelWrap::getInternalInstance() {
  return this->instance;
}

QItemSelectionModelWrap::~QItemSelectionModelWrap() {
  extrautils::safeDelete(this->instance);
}

QItemSelectionModelWrap::QItemSelectionModelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QItemSelectionModelWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NItemSelectionModel();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QItemSelectionModel>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      // Napi::Object parentObject = info[0].As<Napi::Object>();
      // QObjectWrap* parentObjectWrap =
      //     Napi::ObjectWrap<QObjectWrap>::Unwrap(parentObject);
      // this->instance = new
      // NItemSelectionModel(parentObjectWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(env,
                         "NodeGui: QItemSelectionModelWrap: Wrong number of "
                         "arguments to constructor")
        .ThrowAsJavaScriptException();
  }
}
Napi::Value QItemSelectionModelWrap::columnIntersectsSelection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[1].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  bool result = this->instance->columnIntersectsSelection(column, *parent);
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::currentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndex result = this->instance->currentIndex();
  auto resultInstance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(result))});
  return resultInstance;
}

Napi::Value QItemSelectionModelWrap::hasSelection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->hasSelection();
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::isColumnSelected(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[1].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  bool result = this->instance->isColumnSelected(column, *parent);
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::isRowSelected(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[1].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  bool result = this->instance->isRowSelected(row, *parent);
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::isSelected(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* indexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = indexWrap->getInternalInstance();
  bool result = this->instance->isSelected(*index);
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::rowIntersectsSelection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  QModelIndexWrap* parentWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[1].As<Napi::Object>());
  QModelIndex* parent = parentWrap->getInternalInstance();
  bool result = this->instance->rowIntersectsSelection(row, *parent);
  return Napi::Boolean::New(env, result);
}

Napi::Value QItemSelectionModelWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QItemSelectionModelWrap::clearCurrentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clearCurrentIndex();
  return env.Null();
}

Napi::Value QItemSelectionModelWrap::clearSelection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clearSelection();
  return env.Null();
}

Napi::Value QItemSelectionModelWrap::reset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->reset();
  return env.Null();
}

Napi::Value QItemSelectionModelWrap::select(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* indexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = indexWrap->getInternalInstance();
  QItemSelectionModel::SelectionFlags command =
      static_cast<QItemSelectionModel::SelectionFlags>(
          info[1].As<Napi::Number>().Int32Value());
  this->instance->select(*index, command);
  return env.Null();
}

Napi::Value QItemSelectionModelWrap::setCurrentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexWrap* indexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = indexWrap->getInternalInstance();
  QItemSelectionModel::SelectionFlags command =
      static_cast<QItemSelectionModel::SelectionFlags>(
          info[1].As<Napi::Number>().Int32Value());
  this->instance->setCurrentIndex(*index, command);
  return env.Null();
}
Napi::Value QItemSelectionModelWrap::selectedColumns(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  QModelIndexList result = this->instance->selectedColumns(row);
  Napi::Array resultArrayNapi = Napi::Array::New(env, result.size());
  for (int i = 0; i < result.size(); i++) {
    resultArrayNapi[i] = QModelIndexWrap::constructor.New(
        {Napi::External<QModelIndex>::New(env, new QModelIndex(result[i]))});
  }
  return resultArrayNapi;
}

Napi::Value QItemSelectionModelWrap::selectedIndexes(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndexList result = this->instance->selectedIndexes();
  Napi::Array resultArrayNapi = Napi::Array::New(env, result.size());
  for (int i = 0; i < result.size(); i++) {
    resultArrayNapi[i] = QModelIndexWrap::constructor.New(
        {Napi::External<QModelIndex>::New(env, new QModelIndex(result[i]))});
  }
  return resultArrayNapi;
}

Napi::Value QItemSelectionModelWrap::selectedRows(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  QModelIndexList result = this->instance->selectedRows(column);
  Napi::Array resultArrayNapi = Napi::Array::New(env, result.size());
  for (int i = 0; i < result.size(); i++) {
    resultArrayNapi[i] = QModelIndexWrap::constructor.New(
        {Napi::External<QModelIndex>::New(env, new QModelIndex(result[i]))});
  }
  return resultArrayNapi;
}
