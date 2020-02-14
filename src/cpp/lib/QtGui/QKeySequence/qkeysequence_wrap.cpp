#include "QtGui/QKeySequence/qkeysequence_wrap.h"
#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QKeySequenceWrap::constructor;

Napi::Object QKeySequenceWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QKeySequence";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("count", &QKeySequenceWrap::count),
                   InstanceMethod("isEmpty", &QKeySequenceWrap::isEmpty),
                   InstanceMethod("matches", &QKeySequenceWrap::matches),
                   InstanceMethod("toString$", &QKeySequenceWrap::toString),
                   StaticMethod("fromQVariant",
                                &StaticQKeySequenceWrapMethods::fromQVariant),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QKeySequenceWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QKeySequenceWrap::QKeySequenceWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QKeySequenceWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = std::unique_ptr<QKeySequence>(
          info[0].As<Napi::External<QKeySequence>>().Data());
    } else {
      Napi::String sequenceString = info[0].As<Napi::String>();
      QString keySequence = QString::fromStdString(sequenceString.Utf8Value());
      this->instance = std::make_unique<QKeySequence>(keySequence);
    }
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QKeySequence>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QKeySequenceWrap::~QKeySequenceWrap() { this->instance.reset(); }

QKeySequence* QKeySequenceWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QKeySequenceWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int count = this->instance->count();
  return Napi::Value::From(env, count);
}

Napi::Value QKeySequenceWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isEmpty());
}

Napi::Value QKeySequenceWrap::matches(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object keyObject = info[0].As<Napi::Object>();
  QKeySequenceWrap* keyWrap =
      Napi::ObjectWrap<QKeySequenceWrap>::Unwrap(keyObject);
  QKeySequence::SequenceMatch match =
      this->instance->matches(*keyWrap->getInternalInstance());
  return Napi::Value::From(env, static_cast<int>(match));
}

Napi::Value QKeySequenceWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int format = info[0].As<Napi::Number>().Int32Value();
  QString result = this->instance->toString(
      static_cast<QKeySequence::SequenceFormat>(format));
  return Napi::Value::From(env, result.toStdString());
}

Napi::Value StaticQKeySequenceWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QKeySequence key = variant->value<QKeySequence>();
  auto instance = QKeySequenceWrap::constructor.New(
      {Napi::External<QKeySequence>::New(env, new QKeySequence(key))});
  return instance;
}
