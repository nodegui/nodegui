#include "QtWidgets/QTextToSpeech/qtexttospeech_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"

#include <QWidget>

Napi::FunctionReference QTextToSpeechtWrap::constructor;

Napi::Object QTextToSpeechtWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTextToSpeech";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("say", &QTextToSpeechtWrap::say),
                   InstanceMethod("setVoice", &QTextToSpeechtWrap::availableGeometry),
                //    InstanceMethod("setLocale", &QTextToSpeechtWrap::screenNumber),
                //    InstanceMethod("availableLocales", &QTextToSpeechtWrap::screenNumber),
                //    InstanceMethod("locale", &QTextToSpeechtWrap::screenNumber),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTextToSpeechtWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

Nqtexttospeech *QTextToSpeechtWrap::getInternalInstance() { return this->instance; }

QTextToSpeechtWrap::QTextToSpeechtWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QTextToSpeechtWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = new Nqtexttospeech();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QTextToSpeechtWrap::~QTextToSpeechtWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QTextToSpeechtWrap::say(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String textToSay = info[0].As<Napi::String>();
  this->instance->say(textToSay);
  return env.Null();
}

Napi::Value QTextToSpeechtWrap::setVoice(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number voiceIndex = info[0].As<Napi::Number>();
  this->instance->setVoice(voiceIndex);
  return env.Null();
}