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
  QOBJECT_REGISTER_WRAPPER(QMenuBar, QMenuBarWrap);
  return exports;
}

QMenuBar* QMenuBarWrap::getInternalInstance() { return this->instance; }

QMenuBarWrap::QMenuBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMenuBarWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NMenuBar();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QMenuBar>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMenuBar(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QMenuBarWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(this->getInternalInstance());
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