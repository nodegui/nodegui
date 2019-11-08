#include "QtWidgets/QShortcut/qshortcut_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QKeySequence/qkeysequence_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QShortcutWrap::constructor;

Napi::Object QShortcutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QShortcut";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setEnabled", &QShortcutWrap::setEnabled),
       InstanceMethod("setAutoRepeat", &QShortcutWrap::setAutoRepeat),
       InstanceMethod("setKey", &QShortcutWrap::setKey),
       InstanceMethod("setContext", &QShortcutWrap::setContext),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
           EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QShortcutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NShortcut* QShortcutWrap::getInternalInstance() { return this->instance; }

QShortcutWrap::QShortcutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QShortcutWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NShortcut(parentWidgetWrap->getInternalInstance());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QShortcutWrap::~QShortcutWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QShortcutWrap::setEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean enabled = info[0].As<Napi::Boolean>();
  this->instance->setEnabled(enabled.Value());
  return env.Null();
}

Napi::Value QShortcutWrap::setAutoRepeat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean enabled = info[0].As<Napi::Boolean>();
  this->instance->setAutoRepeat(enabled.Value());
  return env.Null();
}

Napi::Value QShortcutWrap::setKey(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object shortcutSequence = info[0].As<Napi::Object>();
  QKeySequenceWrap* keysequence =
      Napi::ObjectWrap<QKeySequenceWrap>::Unwrap(shortcutSequence);
  this->instance->setKey(*keysequence->getInternalInstance());
  return env.Null();
}

Napi::Value QShortcutWrap::setContext(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number shortcutContextEnum = info[0].As<Napi::Number>();
  int shortCutContext = shortcutContextEnum.Int32Value();
  this->instance->setContext(static_cast<Qt::ShortcutContext>(shortCutContext));
  return env.Null();
}
