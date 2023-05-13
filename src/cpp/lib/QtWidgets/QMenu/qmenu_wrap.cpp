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
      {InstanceMethod("clear", &QMenuWrap::clear),
       InstanceMethod("addSeparator", &QMenuWrap::addSeparator),
       InstanceMethod("exec", &QMenuWrap::exec),
       InstanceMethod("popup", &QMenuWrap::popup),
       InstanceMethod("actionAt", &QMenuWrap::actionAt),
       InstanceMethod("actionGeometry", &QMenuWrap::actionGeometry),
       InstanceMethod("activeAction", &QMenuWrap::activeAction),
       InstanceMethod("addMenu_1", &QMenuWrap::addMenu_1),
       InstanceMethod("addMenu_2", &QMenuWrap::addMenu_2),
       InstanceMethod("addSection_1", &QMenuWrap::addSection_1),
       InstanceMethod("addSection_2", &QMenuWrap::addSection_2),
       InstanceMethod("defaultAction", &QMenuWrap::defaultAction),
       InstanceMethod("hideTearOffMenu", &QMenuWrap::hideTearOffMenu),
       InstanceMethod("insertMenu", &QMenuWrap::insertMenu),
       InstanceMethod("insertSection_2", &QMenuWrap::insertSection_2),
       InstanceMethod("insertSection_3", &QMenuWrap::insertSection_3),
       InstanceMethod("insertSeparator", &QMenuWrap::insertSeparator),
       InstanceMethod("isEmpty", &QMenuWrap::isEmpty),
       InstanceMethod("isTearOffMenuVisible", &QMenuWrap::isTearOffMenuVisible),
       InstanceMethod("menuAction", &QMenuWrap::menuAction),
       InstanceMethod("setActiveAction", &QMenuWrap::setActiveAction),
       InstanceMethod("setAsDockMenu", &QMenuWrap::setAsDockMenu),
       InstanceMethod("setDefaultAction", &QMenuWrap::setDefaultAction),
       InstanceMethod("showTearOffMenu_0", &QMenuWrap::showTearOffMenu_0),
       InstanceMethod("showTearOffMenu_1", &QMenuWrap::showTearOffMenu_1),
       InstanceMethod("icon", &QMenuWrap::icon),
       InstanceMethod("setIcon", &QMenuWrap::setIcon),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMenuWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QMenu, QMenuWrap);
  return exports;
}

QMenu* QMenuWrap::getInternalInstance() { return this->instance; }

QMenuWrap::QMenuWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMenuWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NMenu();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QMenu>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMenu(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QMenuWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QMenuWrap::~QMenuWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QMenuWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QMenuWrap::addSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  auto value =
      Napi::External<QAction>::New(env, this->instance->addSeparator());
  return Napi::Value::From(env, value);
}

Napi::Value QMenuWrap::exec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() > 0) {
    Napi::Object pointObject = info[0].As<Napi::Object>();
    QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);

    QAction* action = nullptr;
    if (info.Length() == 2) {
      Napi::Object actionObject = info[1].As<Napi::Object>();
      QActionWrap* actionWrap =
          Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);
      action = actionWrap->getInternalInstance();
    }
    this->instance->exec(*pointWrap->getInternalInstance(), action);
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

Napi::Value QMenuWrap::actionAt(const Napi::CallbackInfo& info) {
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

Napi::Value QMenuWrap::actionGeometry(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* actWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* act = actWrap->getInternalInstance();
  QRect result = this->instance->actionGeometry(act);
  auto resultInstance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(result))});
  return resultInstance;
}

Napi::Value QMenuWrap::activeAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* result = this->instance->activeAction();
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::addMenu_1(const Napi::CallbackInfo& info) {
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

Napi::Value QMenuWrap::addMenu_2(const Napi::CallbackInfo& info) {
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

Napi::Value QMenuWrap::addSection_1(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QAction* result = this->instance->addSection(text);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::addSection_2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIconWrap* iconWrap =
      Napi::ObjectWrap<QIconWrap>::Unwrap(info[0].As<Napi::Object>());
  QIcon* icon = iconWrap->getInternalInstance();
  std::string textNapiText = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QAction* result = this->instance->addSection(*icon, text);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::defaultAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* result = this->instance->defaultAction();
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::hideTearOffMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->hideTearOffMenu();
  return env.Null();
}

Napi::Value QMenuWrap::insertMenu(const Napi::CallbackInfo& info) {
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

Napi::Value QMenuWrap::insertSection_2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* beforeWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* before = beforeWrap->getInternalInstance();
  std::string textNapiText = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QAction* result = this->instance->insertSection(before, text);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::insertSection_3(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* beforeWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* before = beforeWrap->getInternalInstance();
  QIconWrap* iconWrap =
      Napi::ObjectWrap<QIconWrap>::Unwrap(info[1].As<Napi::Object>());
  QIcon* icon = iconWrap->getInternalInstance();
  std::string textNapiText = info[2].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QAction* result = this->instance->insertSection(before, *icon, text);
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::insertSeparator(const Napi::CallbackInfo& info) {
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

Napi::Value QMenuWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isEmpty();
  return Napi::Boolean::New(env, result);
}

Napi::Value QMenuWrap::isTearOffMenuVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isTearOffMenuVisible();
  return Napi::Boolean::New(env, result);
}

Napi::Value QMenuWrap::menuAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QAction* result = this->instance->menuAction();
  if (result) {
    return WrapperCache::instance.getWrapper(env, result);
  } else {
    return env.Null();
  }
}

Napi::Value QMenuWrap::setActiveAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* actWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* act = actWrap->getInternalInstance();
  this->instance->setActiveAction(act);
  return env.Null();
}

Napi::Value QMenuWrap::setAsDockMenu(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
#ifdef Q_OS_DARWIN
  this->instance->setAsDockMenu();
#endif
  return env.Null();
}

Napi::Value QMenuWrap::setDefaultAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QActionWrap* actWrap =
      Napi::ObjectWrap<QActionWrap>::Unwrap(info[0].As<Napi::Object>());
  QAction* act = actWrap->getInternalInstance();
  this->instance->setDefaultAction(act);
  return env.Null();
}

Napi::Value QMenuWrap::showTearOffMenu_1(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointWrap* posWrap =
      Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
  QPoint* pos = posWrap->getInternalInstance();
  this->instance->showTearOffMenu(*pos);
  return env.Null();
}

Napi::Value QMenuWrap::showTearOffMenu_0(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showTearOffMenu();
  return env.Null();
}

Napi::Value QMenuWrap::icon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIcon result = this->instance->icon();
  auto resultInstance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(result))});
  return resultInstance;
}

Napi::Value QMenuWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIconWrap* iconWrap =
      Napi::ObjectWrap<QIconWrap>::Unwrap(info[0].As<Napi::Object>());
  QIcon* icon = iconWrap->getInternalInstance();
  this->instance->setIcon(*icon);
  return env.Null();
}
