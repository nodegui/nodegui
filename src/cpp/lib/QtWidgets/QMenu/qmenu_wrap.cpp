#include "QtWidgets/QMenu/qmenu_wrap.h"

#include <nodegui/Extras/Utils/nutils.h>
#include <nodegui/QtWidgets/QWidget/qwidget_wrap.h>

#include <QWidget>

#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtWidgets/QAction/qaction_wrap.h"

Napi::FunctionReference QMenuWrap::constructor;

Napi::Object QMenuWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMenu";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setTitle", &QMenuWrap::setTitle),
                   InstanceMethod("addSeparator", &QMenuWrap::addSeparator),
                   InstanceMethod("exec", &QMenuWrap::exec),
                   InstanceMethod("popup", &QMenuWrap::popup),
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
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NMenu(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NMenu();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QMenuWrap::~QMenuWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QMenuWrap::setTitle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String message = info[0].As<Napi::String>();
  this->instance->setTitle(QString::fromStdString(message.Utf8Value()));

  return env.Null();
}

Napi::Value QMenuWrap::addSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  auto value =
      Napi::External<QAction>::New(env, this->instance->addSeparator());
  return Napi::Value::From(env, value);
}

Napi::Value QMenuWrap::exec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    Napi::Object pointObject = info[0].As<Napi::Object>();
    QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);
    QPoint* qpoint = pointWrap->getInternalInstance();

    Napi::Object actionObject = info[1].As<Napi::Object>();
    QActionWrap* actionWrap =
        Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
    this->instance->exec(*qpoint, actionWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance->exec();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  return env.Null();
}

Napi::Value QMenuWrap::popup(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object pointObject = info[0].As<Napi::Object>();
  QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);
  QPoint* qpoint = pointWrap->getInternalInstance();

  Napi::Object actionObject = info[1].As<Napi::Object>();
  QAction* action = nullptr;
  if (!actionObject.IsUndefined() && !actionObject.IsNull()) {
    QActionWrap* actionWrap =
        Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
    action = actionWrap->getInternalInstance();
  }

  this->instance->popup(*qpoint, action);

  return env.Null();
}
