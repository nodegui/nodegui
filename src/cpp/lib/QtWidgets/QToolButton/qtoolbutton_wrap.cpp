#include "QtWidgets/QToolButton/qtoolbutton_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QToolButtonWrap::constructor;

Napi::Object QToolButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QToolButton";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setArrowType", &QToolButtonWrap::setArrowType),
       InstanceMethod("arrowType", &QToolButtonWrap::arrowType),
       InstanceMethod("setAutoRaise", &QToolButtonWrap::setAutoRaise),
       InstanceMethod("autoRaise", &QToolButtonWrap::autoRaise),
       InstanceMethod("setPopupMode", &QToolButtonWrap::setPopupMode),
       InstanceMethod("popupMode", &QToolButtonWrap::popupMode),
       InstanceMethod("setToolButtonStyle",
                      &QToolButtonWrap::setToolButtonStyle),
       InstanceMethod("toolButtonStyle", &QToolButtonWrap::toolButtonStyle),
       InstanceMethod("setMenu", &QToolButtonWrap::setMenu),
       InstanceMethod("setDefaultAction", &QToolButtonWrap::setDefaultAction),
       InstanceMethod("showMenu", &QToolButtonWrap::showMenu),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QToolButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NToolButton *QToolButtonWrap::getInternalInstance() { return this->instance; }

QToolButtonWrap::QToolButtonWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QToolButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NToolButton>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap *parentWidgetWrap =
          Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NToolButton(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NToolButton();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QToolButtonWrap::~QToolButtonWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

Napi::Value QToolButtonWrap::setArrowType(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int type = info[0].As<Napi::Number>().Int32Value();
  this->instance->setArrowType(static_cast<Qt::ArrowType>(type));
  return env.Null();
}

Napi::Value QToolButtonWrap::arrowType(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int type = static_cast<int>(this->instance->arrowType());
  return Napi::Value::From(env, type);
}

Napi::Value QToolButtonWrap::setAutoRaise(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool enable = info[0].As<Napi::Boolean>().Value();
  this->instance->setAutoRaise(enable);
  return env.Null();
}

Napi::Value QToolButtonWrap::autoRaise(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool enable = this->instance->autoRaise();
  return Napi::Value::From(env, enable);
}

Napi::Value QToolButtonWrap::setPopupMode(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int mode = info[0].As<Napi::Number>().Int32Value();
  this->instance->setPopupMode(
      static_cast<QToolButton::ToolButtonPopupMode>(mode));
  return env.Null();
}

Napi::Value QToolButtonWrap::popupMode(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int mode = static_cast<int>(this->instance->popupMode());
  return Napi::Value::From(env, mode);
}

Napi::Value QToolButtonWrap::setToolButtonStyle(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int style = info[0].As<Napi::Number>().Int32Value();
  this->instance->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
  return env.Null();
}

Napi::Value QToolButtonWrap::toolButtonStyle(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int style = static_cast<int>(this->instance->toolButtonStyle());
  return Napi::Value::From(env, style);
}

Napi::Value QToolButtonWrap::setMenu(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap *menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QToolButtonWrap::setDefaultAction(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object actionObject = info[0].As<Napi::Object>();
  QActionWrap *actionWrap = Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
  this->instance->setDefaultAction(actionWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QToolButtonWrap::showMenu(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->showMenu();
  return env.Null();
}
