#include "QtWidgets/QMenu/qmenu_wrap.h"

#include <nodegui/Extras/Utils/nutils.h>
#include <nodegui/QtWidgets/QWidget/qwidget_wrap.h>

#include <QWidget>

#include "QtWidgets/QAction/qaction_wrap.h"

Napi::FunctionReference QMenuWrap::constructor;

Napi::Object QMenuWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMenu";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setTitle", &QMenuWrap::setTitle),
                   InstanceMethod("addAction", &QMenuWrap::addAction),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMenuWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMenu* QMenuWrap::getInternalInstance() { return this->instance; }

QMenuWrap::QMenuWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMenuWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NMenu(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NMenu();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QMenuWrap::~QMenuWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QMenuWrap::setTitle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String message = info[0].As<Napi::String>();
  this->instance->setTitle(QString::fromStdString(message.Utf8Value()));

  return env.Null();
}

Napi::Value QMenuWrap::addAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object actionObject = info[0].As<Napi::Object>();
  QActionWrap* actionWrap = Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
  this->instance->addAction(actionWrap->getInternalInstance());
  // TODO: see if we need to return from here an pointer to qaction or not.
  return env.Null();
}
