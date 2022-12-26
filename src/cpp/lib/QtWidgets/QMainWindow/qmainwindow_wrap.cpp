#include "QtWidgets/QMainWindow/qmainwindow_wrap.h"

#include <QApplication>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QMenuBar/qmenubar_wrap.h"
#include "QtWidgets/QStatusBar/qstatusbar_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QMainWindowWrap::constructor;

Napi::Object QMainWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMainWindow";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setCentralWidget", &QMainWindowWrap::setCentralWidget),
       InstanceMethod("centralWidget", &QMainWindowWrap::centralWidget),
       InstanceMethod("takeCentralWidget", &QMainWindowWrap::takeCentralWidget),
       InstanceMethod("setMenuBar", &QMainWindowWrap::setMenuBar),
       InstanceMethod("menuBar", &QMainWindowWrap::menuBar),
       InstanceMethod("setMenuWidget", &QMainWindowWrap::setMenuWidget),
       InstanceMethod("setStatusBar", &QMainWindowWrap::setStatusBar),
       InstanceMethod("statusBar", &QMainWindowWrap::statusBar),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMainWindowWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QMainWindow, QMainWindowWrap);
  return exports;
}

QMainWindow* QMainWindowWrap::getInternalInstance() { return this->instance; }

QMainWindowWrap::~QMainWindowWrap() { extrautils::safeDelete(this->instance); }

QMainWindowWrap::QMainWindowWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMainWindowWrap>(info) {
  Napi::Env env = info.Env();

  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NMainWindow();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QMainWindow>>().Data();
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMainWindow(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QMainWindowWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(this->getInternalInstance());
}

Napi::Value QMainWindowWrap::setCentralWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object widgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* centralWidget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);
  if (centralWidget != nullptr) {
    this->instance->setCentralWidget(centralWidget->getInternalInstance());
  } else {
    this->instance->setCentralWidget(nullptr);
  }
  return env.Null();
}

Napi::Value QMainWindowWrap::centralWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QWidget* widget = this->instance->centralWidget();
  if (widget) {
    return WrapperCache::instance.getWrapper(env, widget);
  } else {
    return env.Null();
  }
}

Napi::Value QMainWindowWrap::takeCentralWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QWidget* widget = this->instance->takeCentralWidget();
  if (widget) {
    return WrapperCache::instance.getWrapper(env, widget);
  } else {
    return env.Null();
  }
}

Napi::Value QMainWindowWrap::setMenuBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuBarWrap* menuBar = Napi::ObjectWrap<QMenuBarWrap>::Unwrap(menuObject);

  this->instance->layout()->setMenuBar(menuBar->getInternalInstance());

  return env.Null();
}

Napi::Value QMainWindowWrap::setMenuWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object menuObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* menuWidget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(menuObject);

  this->instance->setMenuWidget(menuWidget->getInternalInstance());

  return env.Null();
}

Napi::Value QMainWindowWrap::setStatusBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object statusBarArg = info[0].As<Napi::Object>();

  QStatusBar* statusBar = nullptr;
  if (!statusBarArg.IsUndefined() && !statusBarArg.IsNull()) {
    QStatusBarWrap* statusBarWrap =
        Napi::ObjectWrap<QStatusBarWrap>::Unwrap(statusBarArg);
    statusBar = statusBarWrap->getInternalInstance();
  }

  this->instance->setStatusBar(statusBar);

  return env.Null();
}

Napi::Value QMainWindowWrap::statusBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QStatusBar* statusBar = this->instance->statusBar();
  if (statusBar) {
    return WrapperCache::instance.getWrapper(env, statusBar);
  } else {
    return env.Null();
  }
}

Napi::Value QMainWindowWrap::menuBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QMenuBar* menuBar = this->instance->menuBar();
  if (menuBar) {
    return WrapperCache::instance.getWrapper(env, menuBar);
  } else {
    return env.Null();
  }
}
