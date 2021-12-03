#include "QtWidgets/QMenuBar/qmenubar_wrap.h"

#include <nodegui/Extras/Utils/nutils.h>
#include <nodegui/QtWidgets/QWidget/qwidget_wrap.h>

#include <QWidget>

#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"

Napi::FunctionReference QMenuBarWrap::constructor;

Napi::Object QMenuBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMenuBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addMenu", &QMenuBarWrap::addMenu),
       InstanceMethod("addSeparator", &QMenuBarWrap::addSeparator),
       InstanceMethod("setNativeMenuBar", &QMenuBarWrap::setNativeMenuBar),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMenuBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMenuBar* QMenuBarWrap::getInternalInstance() { return this->instance; }

QMenuBarWrap::QMenuBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMenuBarWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          new NMenuBar(info[0].As<Napi::External<NMenuBar>>().Data());
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMenuBar(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NMenuBar();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode());
}

QMenuBarWrap::~QMenuBarWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QMenuBarWrap::addMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap* menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);

  this->instance->addMenu(menuWrap->getInternalInstance());

  return env.Null();
}

Napi::Value QMenuBarWrap::addSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  auto value =
      Napi::External<QAction>::New(env, this->instance->addSeparator());
  return Napi::Value::From(env, value);
}

Napi::Value QMenuBarWrap::setNativeMenuBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean nativeMenuBar = info[0].As<Napi::Boolean>();
  this->instance->setNativeMenuBar(nativeMenuBar.Value());
  return env.Null();
}