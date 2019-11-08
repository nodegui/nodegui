#include "QtGui/QKeySequence/qkeysequence_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QKeySequenceWrap::constructor;

Napi::Object QKeySequenceWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QKeySequence";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("count", &QKeySequenceWrap::count),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QKeySequenceWrap::QKeySequenceWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QKeySequenceWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::String sequenceString = info[0].As<Napi::String>();
    QString keySequence = QString::fromStdString(sequenceString.Utf8Value());
    this->instance = std::make_unique<QKeySequence>(keySequence);
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QKeySequence>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QKeySequenceWrap::~QKeySequenceWrap() { this->instance.reset(); }

QKeySequence *QKeySequenceWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QKeySequenceWrap::count(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int count = this->instance->count();
  return Napi::Value::From(env, count);
}
