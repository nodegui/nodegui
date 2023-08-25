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
       InstanceMethod("addTab2", &QTabWidgetWrap::addTab2),
       InstanceMethod("insertTab", &QTabWidgetWrap::insertTab),
       InstanceMethod("insertTab2", &QTabWidgetWrap::insertTab2),
       InstanceMethod("setTabPosition", &QTabWidgetWrap::setTabPosition),
       InstanceMethod("indexOf", &QTabWidgetWrap::indexOf),
       InstanceMethod("setTabText", &QTabWidgetWrap::setTabText),
       InstanceMethod("setTabIcon", &QTabWidgetWrap::setTabIcon),
       InstanceMethod("setCurrentIndex", &QTabWidgetWrap::setCurrentIndex),
       InstanceMethod("currentIndex", &QTabWidgetWrap::currentIndex),
       InstanceMethod("removeTab", &QTabWidgetWrap::removeTab),
       InstanceMethod("setTabsClosable", &QTabWidgetWrap::setTabsClosable),
       InstanceMethod("widget", &QTabWidgetWrap::widget),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTabWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QTabWidget, QTabWidgetWrap);
  return exports;
}

QTabWidget* QTabWidgetWrap::getInternalInstance() { return this->instance; }

QTabWidgetWrap::~QTabWidgetWrap() { extrautils::safeDelete(this->instance); }

QTabWidgetWrap::QTabWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTabWidgetWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NTabWidget();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QTabWidget>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTabWidget(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QTabWidgetWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QTabWidgetWrap::addTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pageObject = info[0].As<Napi::Object>();
  Napi::Object iconObject = info[1].As<Napi::Object>();
  Napi::String napiLabel = info[2].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();

  NodeWidgetWrap* pageObjectWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(pageObject);
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);

  int index =
      this->instance->addTab(pageObjectWrap->getInternalInstance(),
                             *iconWrap->getInternalInstance(), label.c_str());
  return Napi::Number::New(env, index);
}

Napi::Value QTabWidgetWrap::addTab2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pageObject = info[0].As<Napi::Object>();
  Napi::String napiLabel = info[1].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();

  NodeWidgetWrap* pageObjectWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(pageObject);

  int index =
      this->instance->addTab(pageObjectWrap->getInternalInstance(), label.c_str());
  return Napi::Number::New(env, index);
}

Napi::Value QTabWidgetWrap::insertTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int tabPosition = info[0].As<Napi::Number>().Int32Value();
  Napi::Object pageObject = info[1].As<Napi::Object>();
  Napi::Object iconObject = info[2].As<Napi::Object>();
  Napi::String napiLabel = info[3].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();

  NodeWidgetWrap* pageObjectWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(pageObject);
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);

  int index = this->instance->insertTab(
      tabPosition, pageObjectWrap->getInternalInstance(),
      *iconWrap->getInternalInstance(), label.c_str());
  return Napi::Number::New(env, index);
}

Napi::Value QTabWidgetWrap::insertTab2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int tabPosition = info[0].As<Napi::Number>().Int32Value();
  Napi::Object pageObject = info[1].As<Napi::Object>();
  Napi::String napiLabel = info[2].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();

  NodeWidgetWrap* pageObjectWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(pageObject);

  int index = this->instance->insertTab(tabPosition, pageObjectWrap->getInternalInstance(), label.c_str());
  return Napi::Number::New(env, index);
}

Napi::Value QTabWidgetWrap::indexOf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object widgetObject = info[0].As<Napi::Object>();

  NodeWidgetWrap* widgetObjectWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);

  int index = this->instance->indexOf(widgetObjectWrap->getInternalInstance());
  return Napi::Number::New(env, index);
}

Napi::Value QTabWidgetWrap::setTabPosition(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int tabPosition = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTabPosition(
      static_cast<QTabWidget::TabPosition>(tabPosition));
  return env.Null();
}

Napi::Value QTabWidgetWrap::setTabText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int tabIndex = info[0].As<Napi::Number>().Int32Value();
  Napi::String napiLabel = info[1].As<Napi::String>();
  std::string label = napiLabel.Utf8Value();
  this->instance->setTabText(tabIndex, label.c_str());
  return env.Null();
}

Napi::Value QTabWidgetWrap::setTabIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int tabIndex = info[0].As<Napi::Number>().Int32Value();
  Napi::Object iconObject = info[1].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setTabIcon(tabIndex, *iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTabWidgetWrap::setCurrentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->setCurrentIndex(index.Int32Value());
  return env.Null();
}

Napi::Value QTabWidgetWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int value = this->instance->currentIndex();
  return Napi::Number::New(env, value);
}

Napi::Value QTabWidgetWrap::removeTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->removeTab(index.Int32Value());
  return env.Null();
}

Napi::Value QTabWidgetWrap::setTabsClosable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Boolean closable = info[0].As<Napi::Boolean>();
  this->instance->setTabsClosable(closable.Value());
  return env.Null();
}

Napi::Value QTabWidgetWrap::widget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number index = info[0].As<Napi::Number>();
  QWidget* widget = this->instance->widget(index.Int32Value());
  if (widget) {
    return WrapperCache::instance.getWrapper(env, widget);
  } else {
    return env.Null();
  }
}
