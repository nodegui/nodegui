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
  return exports;
}

NPushButton* QPushButtonWrap::getInternalInstance() { return this->instance; }

QPushButtonWrap::~QPushButtonWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NPushButton>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NPushButton(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NPushButton();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QPushButtonWrap::setMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap* menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QPushButtonWrap::showMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->showMenu();
  return env.Null();
}
