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
       InstanceMethod("defaultAction", &QToolButtonWrap::defaultAction),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QToolButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QToolButton, QToolButtonWrap);
  return exports;
}

QToolButton* QToolButtonWrap::getInternalInstance() { return this->instance; }

QToolButtonWrap::~QToolButtonWrap() { extrautils::safeDelete(this->instance); }

QToolButtonWrap::QToolButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QToolButtonWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NToolButton();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QToolButton>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NToolButton(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QToolButtonWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
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

Napi::Value QToolButtonWrap::defaultAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* action = this->instance->defaultAction();
  if (action) {
    return WrapperCache::instance.getWrapper(env, action);
  } else {
    return env.Null();
  }
}
