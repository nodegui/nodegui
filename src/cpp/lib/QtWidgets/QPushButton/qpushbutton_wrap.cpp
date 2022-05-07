#include "QtWidgets/QPushButton/qpushbutton_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QPushButtonWrap::constructor;

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setMenu", &QPushButtonWrap::setMenu),
       InstanceMethod("showMenu", &QPushButtonWrap::showMenu),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QPushButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QPushButton, QPushButtonWrap);
  return exports;
}

QPushButton* QPushButtonWrap::getInternalInstance() { return this->instance; }

QPushButtonWrap::~QPushButtonWrap() { extrautils::safeDelete(this->instance); }

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NPushButton();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QPushButton>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NPushButton(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QPushButtonWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QPushButtonWrap::setMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap* menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QPushButtonWrap::showMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMenu();
  return env.Null();
}
