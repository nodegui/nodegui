#include "QtWidgets/QTextToSpeech/qtexttospeech_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTextToSpeechtWrap::constructor;

Napi::Object QTextToSpeechtWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTextToSpeech";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("say", &QTextToSpeechtWrap::say),
                   InstanceMethod("setPitch", &QTextToSpeechtWrap::setPitch),
                   InstanceMethod("pitch", &QTextToSpeechtWrap::pitch),
                   InstanceMethod("setRate", &QTextToSpeechtWrap::setRate),
                   InstanceMethod("rate", &QTextToSpeechtWrap::rate),
                   InstanceMethod("setVolume", &QTextToSpeechtWrap::setVolume),
                   InstanceMethod("volume", &QTextToSpeechtWrap::volume),
                   QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QTextToSpeechtWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NQtexttospeech *QTextToSpeechtWrap::getInternalInstance() {
  return this->instance;
}

QTextToSpeechtWrap::QTextToSpeechtWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QTextToSpeechtWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NQtexttospeech(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NQtexttospeech();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QTextToSpeechtWrap::~QTextToSpeechtWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QTextToSpeechtWrap::say(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String textToSay = info[0].As<Napi::String>();
  this->instance->say(QString::fromStdString(textToSay));
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::setVoice(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number voiceIndex = info[0].As<Napi::Number>();
  double shortVoiceIndex = voiceIndex.DoubleValue();
  // this->instance->setVoice(shortVoiceIndex);
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::setPitch(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number inputPitch = info[0].As<Napi::Number>();
  double pitch = inputPitch.DoubleValue();
  this->instance->setPitch(pitch);
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::pitch(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  double currentPitch = this->instance->pitch();
  return Napi::Number::New(env, currentPitch);
}

Napi::Value QTextToSpeechtWrap::setRate(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number inputrate = info[0].As<Napi::Number>();
  double rate = inputrate.DoubleValue();
  this->instance->setRate(rate);
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::rate(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  double currentRate = this->instance->rate();
  return Napi::Number::New(env, currentRate);
}

Napi::Value QTextToSpeechtWrap::setVolume(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number inputVolume = info[0].As<Napi::Number>();
  double volume = inputVolume.DoubleValue();
  this->instance->setVolume(volume);
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::volume(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  double currentVolume = this->instance->volume();
  return Napi::Number::New(env, currentVolume);
}
