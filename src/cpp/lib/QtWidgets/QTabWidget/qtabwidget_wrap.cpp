#include "QtWidgets/QTabWidget/qtabwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTabWidgetWrap::constructor;

Napi::Object QTabWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTabWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addTab", &QTabWidgetWrap::addTab),
       InstanceMethod("setTabPosition", &QTabWidgetWrap::setTabPosition),
       InstanceMethod("setCurrentIndex", &QTabWidgetWrap::setCurrentIndex),
       InstanceMethod("currentIndex", &QTabWidgetWrap::currentIndex),
       InstanceMethod("removeTab", &QTabWidgetWrap::removeTab),
       InstanceMethod("setTabsClosable", &QTabWidgetWrap::setTabsClosable),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTabWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTabWidget* QTabWidgetWrap::getInternalInstance() { return this->instance; }

QTabWidgetWrap::~QTabWidgetWrap() { extrautils::safeDelete(this->instance); }

QTabWidgetWrap::QTabWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTabWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTabWidget(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NTabWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

Napi::Value QTabWidgetWrap::addTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object pageObject = info[0].As<Napi::Object>();
  Napi::Object iconObject = info[1].As<Napi::Object>();
  Napi::String napiLabel = info[2].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();

  QWidgetWrap* pageObjectWrap =
      Napi::ObjectWrap<QWidgetWrap>::Unwrap(pageObject);
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);

  this->instance->addTab(pageObjectWrap->getInternalInstance(),
                         *iconWrap->getInternalInstance(), label.c_str());
  return env.Null();
}

Napi::Value QTabWidgetWrap::setTabPosition(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int tabPosition = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTabPosition(
      static_cast<QTabWidget::TabPosition>(tabPosition));
  return env.Null();
}

Napi::Value QTabWidgetWrap::setCurrentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->setCurrentIndex(index.Int32Value());
  return env.Null();
}

Napi::Value QTabWidgetWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->currentIndex();
  return Napi::Number::New(env, value);
}

Napi::Value QTabWidgetWrap::removeTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->removeTab(index.Int32Value());
  return env.Null();
}

Napi::Value QTabWidgetWrap::setTabsClosable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean closable = info[0].As<Napi::Boolean>();
  this->instance->setTabsClosable(closable.Value());
  return env.Null();
}