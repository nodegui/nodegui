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
      {InstanceMethod("setMenu", &QToolButtonWrap::setMenu),
       InstanceMethod("setDefaultAction", &QToolButtonWrap::setDefaultAction),
       InstanceMethod("showMenu", &QToolButtonWrap::showMenu),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QToolButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NToolButton* QToolButtonWrap::getInternalInstance() { return this->instance; }

QToolButtonWrap::~QToolButtonWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QToolButtonWrap::QToolButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QToolButtonWrap>(info) {
  Napi::Env env = info.Env();
  this->disableDeletion = false;
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NToolButton>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
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

Napi::Value QToolButtonWrap::setMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap* menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QToolButtonWrap::setDefaultAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object actionObject = info[0].As<Napi::Object>();
  QActionWrap* actionWrap = Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
  this->instance->setDefaultAction(actionWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QToolButtonWrap::showMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMenu();
  return env.Null();
}
