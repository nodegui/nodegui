#include "QtGui/QClipboard/qclipboard_wrap.h"

#include "Extras/Utils/nutils.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QClipboardWrap::constructor;

Napi::Object QClipboardWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QClipboard";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("clear", &QClipboardWrap::clear),
                   InstanceMethod("setText", &QClipboardWrap::setText),
                   InstanceMethod("text", &QClipboardWrap::text),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QClipboardWrap::QClipboardWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QClipboardWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QClipboard>>().Data();
  } else {
    Napi::TypeError::New(env, "Incorrect initialization of QClipboardWrap")
        .ThrowAsJavaScriptException();
  }
}

QClipboard* QClipboardWrap::getInternalInstance() { return this->instance; }

Napi::Value QClipboardWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number mode = info[0].As<Napi::Number>();
  this->instance->clear(static_cast<QClipboard::Mode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QClipboardWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String text = info[0].As<Napi::String>();
  Napi::Number mode = info[1].As<Napi::Number>();
  QString clipboardText = text.Utf8Value().c_str();
  this->instance->setText(clipboardText,
                          static_cast<QClipboard::Mode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QClipboardWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number mode = info[0].As<Napi::Number>();
  QString text =
      this->instance->text(static_cast<QClipboard::Mode>(mode.Int32Value()));
  return Napi::Value::From(env, text.toStdString());
}