#include "QtCore/QModelIndex/qmodelindex_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QModelIndexWrap::constructor;

Napi::Object QModelIndexWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QModelIndex";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("column", &QModelIndexWrap::column),
       InstanceMethod("data", &QModelIndexWrap::data),
       InstanceMethod("flags", &QModelIndexWrap::flags),
       InstanceMethod("isValid", &QModelIndexWrap::isValid),
       InstanceMethod("parent", &QModelIndexWrap::parent),
       InstanceMethod("row", &QModelIndexWrap::row),
       InstanceMethod("sibling", &QModelIndexWrap::sibling),
       InstanceMethod("siblingAtColumn", &QModelIndexWrap::siblingAtColumn),
       InstanceMethod("siblingAtRow", &QModelIndexWrap::siblingAtRow),
       StaticMethod("fromQVariant",
                    &StaticQModelIndexWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QModelIndexWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QModelIndexWrap::QModelIndexWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QModelIndexWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = std::unique_ptr<QModelIndex>(
        info[0].As<Napi::External<QModelIndex>>().Data());
  } else {
    if (info.Length() == 0) {
      this->instance = std::make_unique<QModelIndex>();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QModelIndexWrap::~QModelIndexWrap() { this->instance.reset(); }

QModelIndex* QModelIndexWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QModelIndexWrap::column(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->column());
}

Napi::Value QModelIndexWrap::data(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int role = info[0].As<Napi::Number>().Int32Value();
  QVariant data = this->instance->data(role);
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(data))});
  return instance;
}

Napi::Value QModelIndexWrap::flags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::ItemFlags flags = this->instance->flags();
  return Napi::Value::From(env, static_cast<int>(flags));
}

Napi::Value QModelIndexWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->isValid());
}

Napi::Value QModelIndexWrap::parent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QModelIndex parent = this->instance->parent();
  auto instance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(parent))});
  return instance;
}

Napi::Value QModelIndexWrap::row(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->row());
}

Napi::Value QModelIndexWrap::sibling(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();
  QModelIndex sibling = this->instance->sibling(row, column);
  auto instance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(sibling))});
  return instance;
}

Napi::Value QModelIndexWrap::siblingAtColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int column = info[0].As<Napi::Number>().Int32Value();
  QModelIndex index = this->instance->siblingAtColumn(column);
  auto instance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});
  return instance;
}

Napi::Value QModelIndexWrap::siblingAtRow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  QModelIndex index = this->instance->siblingAtRow(row);
  auto instance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});
  return instance;
}

Napi::Value StaticQModelIndexWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QModelIndex index = variant->value<QModelIndex>();
  auto instance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});
  return instance;
}
