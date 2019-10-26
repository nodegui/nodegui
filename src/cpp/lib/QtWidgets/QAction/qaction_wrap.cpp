#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "QtGui/QKeySequence/qkeysequence_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "Extras/Utils/nutils.h"
#include <QWidget>
#include <QDebug>


Napi::FunctionReference QActionWrap::constructor;

Napi::Object QActionWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QAction";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setText", &QActionWrap::setText),
    InstanceMethod("setEnabled", &QActionWrap::setEnabled),
    InstanceMethod("setIcon", &QActionWrap::setIcon),
    InstanceMethod("setMenu", &QActionWrap::setMenu),
    InstanceMethod("setShortcut", &QActionWrap::setShortcut),
    InstanceMethod("setShortcutContext", &QActionWrap::setShortcutContext),
    COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
    EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QActionWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NAction* QActionWrap::getInternalInstance() {
  return this->instance;
}

QActionWrap::QActionWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QActionWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NAction(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NAction();
  }else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
}

QActionWrap::~QActionWrap() {
  // delete this->instance; This will be destroyed by the qmenu (since it takes the ownership)
}

Napi::Value QActionWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String text = info[0].As<Napi::String>();
  this->instance->setText(QString::fromStdString(text.Utf8Value()));
  return env.Null();
}

Napi::Value QActionWrap::setEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean enabled = info[0].As<Napi::Boolean>();
  this->instance->setEnabled(enabled.Value());
  return env.Null();
}

Napi::Value QActionWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object iconObject = info[0].As<Napi::Object>();
  QIconWrap *iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setIcon(*iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QActionWrap::setMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap *menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QActionWrap::setShortcut(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object shortcutSequence = info[0].As<Napi::Object>();
  QKeySequenceWrap *keysequence = Napi::ObjectWrap<QKeySequenceWrap>::Unwrap(shortcutSequence);
  this->instance->setShortcut(*keysequence->getInternalInstance());
  return env.Null();
}


Napi::Value QActionWrap::setShortcutContext(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number shortcutContextEnum = info[0].As<Napi::Number>();
  int shortCutContext = shortcutContextEnum.Int32Value();
  this->instance->setShortcutContext(static_cast<Qt::ShortcutContext>(shortCutContext));
  qDebug()<<"shortCutContext: "<<shortCutContext;
  return env.Null();
}
