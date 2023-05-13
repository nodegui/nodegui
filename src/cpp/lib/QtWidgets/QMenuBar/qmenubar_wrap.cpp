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
       InstanceMethod("actionAt", &QMenuBarWrap::actionAt),
       InstanceMethod("actionGeometry", &QMenuBarWrap::actionGeometry),
       InstanceMethod("activeAction", &QMenuBarWrap::activeAction),
       InstanceMethod("addMenu_1", &QMenuBarWrap::addMenu_1),
       InstanceMethod("addMenu_2", &QMenuBarWrap::addMenu_2),
       InstanceMethod("clear", &QMenuBarWrap::clear),
       InstanceMethod("cornerWidget", &QMenuBarWrap::cornerWidget),
       InstanceMethod("insertMenu", &QMenuBarWrap::insertMenu),
       InstanceMethod("insertSeparator", &QMenuBarWrap::insertSeparator),
       InstanceMethod("setActiveAction", &QMenuBarWrap::setActiveAction),
       InstanceMethod("setCornerWidget", &QMenuBarWrap::setCornerWidget),
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

Napi::Value QMenuBarWrap::actionAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointWrap* ptWrap =
      Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
  QPoint* pt = ptWrap->getInternalInstance();
  QAction* result = this->instance->actionAt(*pt);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::actionGeometry(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* actWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* act = actWrap->getInternalInstance();
  QRect result = this->instance->actionGeometry(act);
  auto resultInstance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(result))});
  return resultInstance;
}

Napi::Value QMenuBarWrap::activeAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* result = this->instance->activeAction();
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::addMenu_1(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string titleNapiText = info[0].As<Napi::String>().Utf8Value();
  QString title = QString::fromUtf8(titleNapiText.c_str());
  QMenu* result = this->instance->addMenu(title);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::addMenu_2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIconWrap* iconWrap =
      Napi::ObjectWrap<QIconWrap>::Unwrap(info[0].As<Napi::Object>());
  QIcon* icon = iconWrap->getInternalInstance();
  std::string titleNapiText = info[1].As<Napi::String>().Utf8Value();
  QString title = QString::fromUtf8(titleNapiText.c_str());
  QMenu* result = this->instance->addMenu(*icon, title);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::addSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* result = this->instance->addSeparator();
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QMenuBarWrap::cornerWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::Corner corner =
      static_cast<Qt::Corner>(info[0].As<Napi::Number>().Int32Value());
  QWidget* result = this->instance->cornerWidget(corner);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::insertMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* beforeWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* before = beforeWrap->getInternalInstance();
  QMenuWrap* menuWrap =
      Napi::ObjectWrap<QMenuWrap>::Unwrap(info[1].As<Napi::Object>());
  QMenu* menu = menuWrap->getInternalInstance();
  QAction* result = this->instance->insertMenu(before, menu);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::insertSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* beforeWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* before = beforeWrap->getInternalInstance();
  QAction* result = this->instance->insertSeparator(before);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuBarWrap::setActiveAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* actWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* act = actWrap->getInternalInstance();
  this->instance->setActiveAction(act);
  return env.Null();
}

Napi::Value QMenuBarWrap::setCornerWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object widgetWidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widgetWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetWidgetObject);
  QWidget* widget = widgetWidgetWrap->getInternalInstance();
  Qt::Corner corner =
      static_cast<Qt::Corner>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setCornerWidget(widget, corner);
  return env.Null();
}
