#include "QtWidgets/QMainWindow/qmainwindow_wrap.h"

#include <QApplication>
#include <QDesktopWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QMenuBar/qmenubar_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QMainWindowWrap::constructor;

Napi::Object QMainWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMainWindow";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {
          QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMainWindowWrap) InstanceMethod(
              "setCentralWidget", &QMainWindowWrap::setCentralWidget),
          InstanceMethod("setMenuBar", &QMainWindowWrap::setMenuBar),
          InstanceMethod("setMenuWidget", &QMainWindowWrap::setMenuWidget),
          InstanceMethod("center", &QMainWindowWrap::center),
      });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMainWindow* QMainWindowWrap::getInternalInstance() { return this->instance; }

QMainWindowWrap::~QMainWindowWrap() { extrautils::safeDelete(this->instance); }

QMainWindowWrap::QMainWindowWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMainWindowWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NMainWindow(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NMainWindow();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

Napi::Value QMainWindowWrap::setCentralWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object widgetObject = info[0].As<Napi::Object>();
  QWidgetWrap* centralWidget =
      Napi::ObjectWrap<QWidgetWrap>::Unwrap(widgetObject);

  Napi::External<YGNode> flexNodeObject = info[1].As<Napi::External<YGNode>>();
  YGNodeRef flexNodeRef = flexNodeObject.Data();

  YGNodeRef node = this->instance->getFlexNode();
  YGNodeInsertChild(node, flexNodeRef, 0);
  this->instance->setCentralWidget(centralWidget->getInternalInstance());

  return env.Null();
}

Napi::Value QMainWindowWrap::setMenuBar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QMenuBarWrap* menuBar = Napi::ObjectWrap<QMenuBarWrap>::Unwrap(menuObject);

  this->instance->layout()->setMenuBar(menuBar->getInternalInstance());

  return env.Null();
}

Napi::Value QMainWindowWrap::setMenuWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object menuObject = info[0].As<Napi::Object>();
  QWidgetWrap* menuWidget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(menuObject);

  this->instance->setMenuWidget(menuWidget->getInternalInstance());

  return env.Null();
}

Napi::Value QMainWindowWrap::center(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  auto window = this->getInternalInstance();
  // https://wiki.qt.io/How_to_Center_a_Window_on_the_Screen
  window->setGeometry(
      QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window->size(),
                          QApplication::desktop()->availableGeometry(window)));

  return env.Null();
}
