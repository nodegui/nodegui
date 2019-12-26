#include "QtWidgets/QSystemTrayIcon/qsystemtrayicon_wrap.h"

#include <QDebug>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSystemTrayIconWrap::constructor;

Napi::Object QSystemTrayIconWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSystemTrayIcon";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("show", &QSystemTrayIconWrap::show),
       InstanceMethod("hide", &QSystemTrayIconWrap::hide),
       InstanceMethod("setIcon", &QSystemTrayIconWrap::setIcon),
       InstanceMethod("isVisible", &QSystemTrayIconWrap::isVisible),
       InstanceMethod("setToolTip", &QSystemTrayIconWrap::setToolTip),
       InstanceMethod("setContextMenu", &QSystemTrayIconWrap::setContextMenu),
       InstanceMethod("showMessage", &QSystemTrayIconWrap::showMessage),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QSystemTrayIconWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NSystemTrayIcon* QSystemTrayIconWrap::getInternalInstance() {
  return this->instance;
}

QSystemTrayIconWrap::QSystemTrayIconWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSystemTrayIconWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NSystemTrayIcon(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NSystemTrayIcon();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QSystemTrayIconWrap::~QSystemTrayIconWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QSystemTrayIconWrap::show(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->show();
  return env.Null();
}

Napi::Value QSystemTrayIconWrap::hide(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->hide();
  return env.Null();
}

Napi::Value QSystemTrayIconWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object iconObject = info[0].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setIcon(*iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QSystemTrayIconWrap::isVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool visibility = this->instance->isVisible();
  return Napi::Boolean::New(env, visibility);
}

Napi::Value QSystemTrayIconWrap::setToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String toolTip = info[0].As<Napi::String>();
  this->instance->setToolTip(QString::fromStdString(toolTip.Utf8Value()));
  return env.Null();
}

Napi::Value QSystemTrayIconWrap::setContextMenu(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuWrap* menuWrap = Napi::ObjectWrap<QMenuWrap>::Unwrap(menuObject);
  this->instance->setContextMenu(menuWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QSystemTrayIconWrap::showMessage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String title = info[0].As<Napi::String>();
  Napi::String message = info[1].As<Napi::String>();
  Napi::Object iconObject = info[2].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  Napi::Number millis = info[3].As<Napi::Number>();
  QString msgTitle = QString::fromUtf8(title.Utf8Value().c_str());
  QString msgMessage = QString::fromUtf8(message.Utf8Value().c_str());
  this->instance->showMessage(msgTitle, msgMessage,
                              *iconWrap->getInternalInstance(),
                              millis.Int32Value());
  return env.Null();
}