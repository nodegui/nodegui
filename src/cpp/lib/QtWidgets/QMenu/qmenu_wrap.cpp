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
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setTitle", &QMenuWrap::setTitle),
       InstanceMethod("addAction", &QMenuWrap::addAction),
       InstanceMethod("addActionWithName", &QMenuWrap::addActionWithName),
       InstanceMethod("addSeparator", &QMenuWrap::addSeparator),
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
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
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

Napi::Value QMenuWrap::addAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object actionObject = info[0].As<Napi::Object>();
  QActionWrap* actionWrap = Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
  this->instance->addAction(actionWrap->getInternalInstance());
  // TODO: see if we need to return from here an pointer to qaction or not.
  return env.Null();
}

Napi::Value QMenuWrap::addActionWithName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string actionName = info[0].As<Napi::String>().Utf8Value();
  auto value = QActionWrap::constructor.New({Napi::External<QAction>::New(
      env, this->instance->addAction(actionName.c_str()))});
  // TODO: see if we need to return from here an pointer to qaction or not.
  return value;
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
  QActionWrap* actionWrap = Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
  this->instance->popup(*qpoint, actionWrap->getInternalInstance());

  return env.Null();
}
